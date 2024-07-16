#include <Arduino.h>
#include <esp32_smartdisplay.h>
#include <ui.h>

// https://www.youtube.com/nishad2m8
// https://buymeacoffee.com/nishad2m8

// Function to gradually increase the bar value
void increase_bar_value(void *bar, int32_t value) {
    lv_bar_set_value((lv_obj_t *)bar, value, LV_ANIM_ON);
}

// Event handler for the button
void btn_event_handler(lv_event_t *e) {
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *btn = lv_event_get_target(e);

    if (code == LV_EVENT_VALUE_CHANGED) {
        if (lv_obj_has_state(btn, LV_STATE_CHECKED)) {
            // Create an animation to increase the bar value gradually
            lv_anim_t a;
            lv_anim_init(&a);
            lv_anim_set_var(&a, ui_Bar2);
            lv_anim_set_exec_cb(&a, (lv_anim_exec_xcb_t)increase_bar_value);
            lv_anim_set_time(&a, 1000); // Animation duration in ms
            lv_anim_set_values(&a, 0, 100); // Change 0 to the max value you want
            lv_anim_start(&a);
        } else {
            // Create an animation to decrease the bar value gradually
            lv_anim_t a;
            lv_anim_init(&a);
            lv_anim_set_var(&a, ui_Bar2);
            lv_anim_set_exec_cb(&a, (lv_anim_exec_xcb_t)increase_bar_value);
            lv_anim_set_time(&a, 1000); // Animation duration in ms
            lv_anim_set_values(&a, 100, 0); // Change 100 to 0
            lv_anim_start(&a);
        }
    }
}

// Mock function to update the time
void update_time(lv_timer_t *timer) {
    static int seconds = 5 * 3600 + 45 * 60; // Initial time set to 5 hours and 45 minutes
    seconds++;
    
    int hours = (seconds / 3600) % 24;
    int minutes = (seconds / 60) % 60;
    int sec = seconds % 60;
    
    char buffer[9];
    snprintf(buffer, sizeof(buffer), "%02d:%02d:%02d", hours, minutes, sec);
    lv_label_set_text((lv_obj_t *)timer->user_data, buffer);
}

// Mock function to update temperature
void update_temp(lv_timer_t *timer) {
    static float temp = 25.0;
    
    temp += (random(0, 200) - 100) / 100.0; // Random fluctuation
    
    lv_obj_t *temp_label = (lv_obj_t *)timer->user_data;

    char temp_buffer[16];
    snprintf(temp_buffer, sizeof(temp_buffer), "T: %d C", (int)round(temp));
    lv_label_set_text(temp_label, temp_buffer);
}

// Mock function to update humidity
void update_hum(lv_timer_t *timer) {
    static float hum = 50.0;
    
    hum += (random(0, 200) - 100) / 100.0; // Random fluctuation
    
    lv_obj_t *hum_label = (lv_obj_t *)timer->user_data;

    char hum_buffer[16];
    snprintf(hum_buffer, sizeof(hum_buffer), "H: %d %%", (int)round(hum));
    lv_label_set_text(hum_label, hum_buffer);
}

void setup()
{
#ifdef ARDUINO_USB_CDC_ON_BOOT
    delay(5000);
#endif

    Serial.begin(115200);
    Serial.setDebugOutput(true);

    smartdisplay_init();

    smartdisplay_lcd_set_backlight(1); // 0 is off, 0.5 is half and 1 is full brightness.

    __attribute__((unused)) auto disp = lv_disp_get_default();
    // lv_disp_set_rotation(disp, LV_DISP_ROT_90);
    // lv_disp_set_rotation(disp, LV_DISP_ROT_180);
    // lv_disp_set_rotation(disp, LV_DISP_ROT_270);

    ui_init();

    spear_Animation(ui_Image20, 0);
    ellipse1_Animation(ui_ellipse_1, 0);
    ellipse2_Animation(ui_ellipse_2, 0);
    ellipse3_Animation(ui_ellipse_3, 0);

    // Add the event handler to the button
    lv_obj_add_event_cb(ui_btn_03, btn_event_handler, LV_EVENT_VALUE_CHANGED, NULL);

    // Create timers to update the time, temperature, and humidity
    lv_timer_create(update_time, 1000, ui_Label_Time); // Update every second
    lv_timer_create(update_temp, 5000, ui_Label_temp); // Update temperature every 5 seconds
    lv_timer_create(update_hum, 5000, ui_Label_hum); // Update humidity every 5 seconds

    while (1) {
        // Your code to handle LVGL tasks
        lv_task_handler();
        usleep(5000); // Sleep for 5 milliseconds
    }
}

void loop()
{
    lv_timer_handler();
    delay(5);
}
