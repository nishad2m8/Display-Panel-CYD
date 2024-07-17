#include <Arduino.h>
#include <esp32_smartdisplay.h>

// https://www.youtube.com/nishad2m8
// https://buymeacoffee.com/nishad2m8

void create_hello_world(lv_obj_t * parent)
{
    // Create a label
    lv_obj_t * label = lv_label_create(parent);
    
    // Set the text
    lv_label_set_text(label, "Hello, World!");
    
    // Increase the font size (multiplier for the default font size)
    lv_obj_set_style_text_font(label, &lv_font_montserrat_20, 0);
    
    // Set text color to white
    lv_obj_set_style_text_color(label, lv_color_white(), 0);
    
    // Center the label on the screen
    lv_obj_center(label);
}

void setup()
{
    Serial.begin(115200);
    
    // Initialize the display
    smartdisplay_init();
    
    // Set backlight to full brightness
    smartdisplay_lcd_set_backlight(1); // 0 is off, 0.5 is half and 1 is full brightness.

    __attribute__((unused)) auto disp = lv_disp_get_default();
    // lv_disp_set_rotation(disp, LV_DISP_ROT_90);
    // lv_disp_set_rotation(disp, LV_DISP_ROT_180);
    // lv_disp_set_rotation(disp, LV_DISP_ROT_270);
    
    // Get the active screen
    lv_obj_t * scr = lv_scr_act();
    
    // Set screen background color to dark blue
    lv_obj_set_style_bg_color(scr, lv_color_hex(0x0000A0), 0);
    
    // Create the Hello World label
    create_hello_world(scr);
}

void loop()
{
    // Handle LVGL tasks
    lv_timer_handler();
    delay(5);
}