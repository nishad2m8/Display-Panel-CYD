// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: lcars-ui

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void spear_Animation( lv_obj_t *TargetObject, int delay);
void ellipse1_Animation( lv_obj_t *TargetObject, int delay);
void ellipse2_Animation( lv_obj_t *TargetObject, int delay);
void ellipse3_Animation( lv_obj_t *TargetObject, int delay);


// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
lv_obj_t *ui_Screen1;
lv_obj_t *ui_img_bg;
lv_obj_t *ui_btn_01;
lv_obj_t *ui_Label13;
lv_obj_t *ui_btn_02;
lv_obj_t *ui_Label14;
lv_obj_t *ui_btn_03;
lv_obj_t *ui_Label10;
lv_obj_t *ui_btn_04;
lv_obj_t *ui_Label11;
lv_obj_t *ui_btn_06;
lv_obj_t *ui_Label16;
lv_obj_t *ui_btn_05;
lv_obj_t *ui_Label15;
lv_obj_t *ui_indicator;
lv_obj_t *ui_grid;
void ui_event_Slider1( lv_event_t * e);
lv_obj_t *ui_Slider1;
lv_obj_t *ui_Label7;
lv_obj_t *ui_Label8;
lv_obj_t *ui_Label9;
lv_obj_t *ui_Label12;
lv_obj_t *ui_Bar2;
lv_obj_t *ui_Label17;
lv_obj_t *ui_Label_Time;
lv_obj_t *ui_Label_Date;
lv_obj_t *ui_Image20;
lv_obj_t *ui_btn_s2_8;
lv_obj_t *ui_Label24;
lv_obj_t *ui_Label_temp;
lv_obj_t *ui_Label_hum;
void ui_event_btn_s2_1( lv_event_t * e);
lv_obj_t *ui_btn_s2_1;
lv_obj_t *ui_Label1;


// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
lv_obj_t *ui_Screen2;
lv_obj_t *ui_ellipse_1;
lv_obj_t *ui_ellipse_2;
lv_obj_t *ui_ellipse_3;
void ui_event_Image1( lv_event_t * e);
lv_obj_t *ui_Image1;
lv_obj_t *ui____initial_actions0;
const lv_img_dsc_t *ui_imgset_sp[31] = {
    &ui_img_images_01_sp0_png, 
    &ui_img_images_01_sp1_png, 
    &ui_img_images_01_sp2_png, 
    &ui_img_images_01_sp3_png, 
    &ui_img_images_01_sp4_png, 
    &ui_img_images_01_sp5_png, 
    &ui_img_images_01_sp6_png, 
    &ui_img_images_01_sp7_png, 
    &ui_img_images_01_sp8_png, 
    &ui_img_images_01_sp9_png, 
    &ui_img_images_01_sp10_png, 
    &ui_img_images_01_sp11_png, 
    &ui_img_images_01_sp12_png, 
    &ui_img_images_01_sp13_png, 
    &ui_img_images_01_sp14_png, 
    &ui_img_images_01_sp15_png, 
    &ui_img_images_01_sp16_png, 
    &ui_img_images_01_sp17_png, 
    &ui_img_images_01_sp18_png, 
    &ui_img_images_01_sp19_png, 
    &ui_img_images_01_sp20_png, 
    &ui_img_images_01_sp21_png, 
    &ui_img_images_01_sp22_png, 
    &ui_img_images_01_sp23_png, 
    &ui_img_images_01_sp24_png, 
    &ui_img_images_01_sp25_png, 
    &ui_img_images_01_sp26_png, 
    &ui_img_images_01_sp27_png, 
    &ui_img_images_01_sp28_png, 
    &ui_img_images_01_sp29_png, 
    &ui_img_images_01_sp30_png
};const lv_img_dsc_t *ui_imgset_ellipse_[3] = {&ui_img_images_ellipse_1_png, &ui_img_images_ellipse_2_png, &ui_img_images_ellipse_3_png};
const lv_img_dsc_t *ui_imgset_rectangle_[1] = {&ui_img_images_rectangle_9_png};
const lv_img_dsc_t *ui_imgset_1858828820[1] = {&ui_img_1076175045};
const lv_img_dsc_t *ui_imgset_318702741[11] = {&ui_img_348234618, &ui_img_1179592870, &ui_img_348229245, &ui_img_2033645247, &ui_img_951916068, &ui_img_1711947617, &ui_img_630218438, &ui_img_451510741, &ui_img_1533239920, &ui_img_1289941709, &ui_img_208212530};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void spear_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->imgset = ui_imgset_sp;
PropertyAnimation_0_user_data->imgset_size = sizeof(ui_imgset_sp)/(sizeof(lv_img_dsc_t*));
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 2000);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_frame );
lv_anim_set_values(&PropertyAnimation_0, 1, 30 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE );
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
lv_anim_start(&PropertyAnimation_0);

}
void ellipse1_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 10000);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_angle );
lv_anim_set_values(&PropertyAnimation_0, 0, 3600 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE );
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_angle );
lv_anim_start(&PropertyAnimation_0);

}
void ellipse2_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 50000);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_angle );
lv_anim_set_values(&PropertyAnimation_0, 0, -3600 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_angle );
lv_anim_start(&PropertyAnimation_0);

}
void ellipse3_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 10000);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_angle );
lv_anim_set_values(&PropertyAnimation_0, 0, 3600 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE );
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_angle );
lv_anim_start(&PropertyAnimation_0);

}

///////////////////// FUNCTIONS ////////////////////
void ui_event_Slider1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_VALUE_CHANGED) {
      _ui_slider_set_text_value( ui_Label8, target, "", "");
}
}
void ui_event_btn_s2_1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_RELEASED) {
      _ui_screen_change( &ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0, &ui_Screen2_screen_init);
}
}
void ui_event_Image1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_RELEASED) {
      _ui_screen_change( &ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Screen1_screen_init);
}
}

///////////////////// SCREENS ////////////////////

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), true, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Screen1_screen_init();
ui_Screen2_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_Screen1);
}