// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: lcars-ui

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_img_bg = lv_img_create(ui_Screen1);
lv_img_set_src(ui_img_bg, &ui_img_images_bg_png);
lv_obj_set_width( ui_img_bg, LV_SIZE_CONTENT);  /// 470
lv_obj_set_height( ui_img_bg, LV_SIZE_CONTENT);   /// 308
lv_obj_set_x( ui_img_bg, 5 );
lv_obj_set_y( ui_img_bg, -10 );
lv_obj_set_align( ui_img_bg, LV_ALIGN_BOTTOM_MID );
lv_obj_add_flag( ui_img_bg, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_img_bg, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_btn_01 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_btn_01, &ui_img_1179592870);
lv_obj_set_width( ui_btn_01, LV_SIZE_CONTENT);  /// 145
lv_obj_set_height( ui_btn_01, LV_SIZE_CONTENT);   /// 145
lv_obj_set_x( ui_btn_01, 10 );
lv_obj_set_y( ui_btn_01, 9 );
lv_obj_add_flag( ui_btn_01, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_btn_01, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_img_recolor(ui_btn_01, lv_color_hex(0xFFF662), LV_PART_MAIN| LV_STATE_CHECKED);
lv_obj_set_style_img_recolor_opa(ui_btn_01, 255, LV_PART_MAIN| LV_STATE_CHECKED);

ui_Label13 = lv_label_create(ui_btn_01);
lv_obj_set_width( ui_Label13, 111);
lv_obj_set_height( ui_Label13, 41);
lv_obj_set_x( ui_Label13, 6 );
lv_obj_set_y( ui_Label13, -45 );
lv_obj_set_align( ui_Label13, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label13,"GOOD\nMORNING");
lv_obj_set_style_text_color(ui_Label13, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label13, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Label13, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label13, &ui_font_OB20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_btn_02 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_btn_02, &ui_img_2033645247);
lv_obj_set_width( ui_btn_02, LV_SIZE_CONTENT);  /// 106
lv_obj_set_height( ui_btn_02, LV_SIZE_CONTENT);   /// 82
lv_obj_set_x( ui_btn_02, 49 );
lv_obj_set_y( ui_btn_02, 72 );
lv_obj_add_flag( ui_btn_02, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_btn_02, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_img_recolor(ui_btn_02, lv_color_hex(0x73758B), LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_img_recolor_opa(ui_btn_02, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_img_recolor(ui_btn_02, lv_color_hex(0x4FA7FF), LV_PART_MAIN| LV_STATE_CHECKED);
lv_obj_set_style_img_recolor_opa(ui_btn_02, 255, LV_PART_MAIN| LV_STATE_CHECKED);

ui_Label14 = lv_label_create(ui_btn_02);
lv_obj_set_width( ui_Label14, 75);
lv_obj_set_height( ui_Label14, 41);
lv_obj_set_x( ui_Label14, 3 );
lv_obj_set_y( ui_Label14, 0 );
lv_obj_set_align( ui_Label14, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label14,"GOOD\nNIGHT");
lv_obj_set_style_text_color(ui_Label14, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label14, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Label14, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label14, &ui_font_OB20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_btn_03 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_btn_03, &ui_img_951916068);
lv_obj_set_width( ui_btn_03, LV_SIZE_CONTENT);  /// 145
lv_obj_set_height( ui_btn_03, LV_SIZE_CONTENT);   /// 145
lv_obj_set_x( ui_btn_03, 10 );
lv_obj_set_y( ui_btn_03, -10 );
lv_obj_set_align( ui_btn_03, LV_ALIGN_BOTTOM_LEFT );
lv_obj_add_flag( ui_btn_03, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_btn_03, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_img_recolor(ui_btn_03, lv_color_hex(0xFFFFFF), LV_PART_MAIN| LV_STATE_CHECKED);
lv_obj_set_style_img_recolor_opa(ui_btn_03, 255, LV_PART_MAIN| LV_STATE_CHECKED);

ui_Label10 = lv_label_create(ui_btn_03);
lv_obj_set_width( ui_Label10, 49);
lv_obj_set_height( ui_Label10, 75);
lv_obj_set_x( ui_Label10, -45 );
lv_obj_set_y( ui_Label10, -1 );
lv_obj_set_align( ui_Label10, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label10,"LIGHT\n01");
lv_obj_set_style_text_color(ui_Label10, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label10, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Label10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label10, &ui_font_OB20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_btn_04 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_btn_04, &ui_img_1711947617);
lv_obj_set_width( ui_btn_04, LV_SIZE_CONTENT);  /// 83
lv_obj_set_height( ui_btn_04, LV_SIZE_CONTENT);   /// 133
lv_obj_set_x( ui_btn_04, 72 );
lv_obj_set_y( ui_btn_04, -22 );
lv_obj_set_align( ui_btn_04, LV_ALIGN_BOTTOM_LEFT );
lv_obj_add_flag( ui_btn_04, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_btn_04, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_img_recolor(ui_btn_04, lv_color_hex(0x73758B), LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_img_recolor_opa(ui_btn_04, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_img_recolor(ui_btn_04, lv_color_hex(0xB3B7E2), LV_PART_MAIN| LV_STATE_CHECKED);
lv_obj_set_style_img_recolor_opa(ui_btn_04, 255, LV_PART_MAIN| LV_STATE_CHECKED);

ui_Label11 = lv_label_create(ui_btn_04);
lv_obj_set_width( ui_Label11, 59);
lv_obj_set_height( ui_Label11, 48);
lv_obj_set_x( ui_Label11, -1 );
lv_obj_set_y( ui_Label11, -9 );
lv_obj_set_align( ui_Label11, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label11,"LIGHT\n02");
lv_obj_set_style_text_color(ui_Label11, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label11, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Label11, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label11, &ui_font_OB20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_btn_06 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_btn_06, &ui_img_451510741);
lv_obj_set_width( ui_btn_06, LV_SIZE_CONTENT);  /// 167
lv_obj_set_height( ui_btn_06, LV_SIZE_CONTENT);   /// 98
lv_obj_set_x( ui_btn_06, -10 );
lv_obj_set_y( ui_btn_06, -82 );
lv_obj_set_align( ui_btn_06, LV_ALIGN_RIGHT_MID );
lv_obj_add_flag( ui_btn_06, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_btn_06, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_img_recolor(ui_btn_06, lv_color_hex(0xD058FF), LV_PART_MAIN| LV_STATE_CHECKED);
lv_obj_set_style_img_recolor_opa(ui_btn_06, 255, LV_PART_MAIN| LV_STATE_CHECKED);

ui_Label16 = lv_label_create(ui_btn_06);
lv_obj_set_width( ui_Label16, 111);
lv_obj_set_height( ui_Label16, 41);
lv_obj_set_x( ui_Label16, 26 );
lv_obj_set_y( ui_Label16, -21 );
lv_obj_set_align( ui_Label16, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label16,"PARTY\nMODE");
lv_obj_set_style_text_color(ui_Label16, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label16, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Label16, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label16, &ui_font_OB20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_btn_05 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_btn_05, &ui_img_630218438);
lv_obj_set_width( ui_btn_05, LV_SIZE_CONTENT);  /// 123
lv_obj_set_height( ui_btn_05, LV_SIZE_CONTENT);   /// 91
lv_obj_set_x( ui_btn_05, -10 );
lv_obj_set_y( ui_btn_05, 10 );
lv_obj_set_align( ui_btn_05, LV_ALIGN_TOP_RIGHT );
lv_obj_add_flag( ui_btn_05, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_btn_05, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_img_recolor(ui_btn_05, lv_color_hex(0x878787), LV_PART_MAIN| LV_STATE_CHECKED);
lv_obj_set_style_img_recolor_opa(ui_btn_05, 255, LV_PART_MAIN| LV_STATE_CHECKED);

ui_Label15 = lv_label_create(ui_btn_05);
lv_obj_set_width( ui_Label15, 111);
lv_obj_set_height( ui_Label15, 41);
lv_obj_set_x( ui_Label15, 2 );
lv_obj_set_y( ui_Label15, -14 );
lv_obj_set_align( ui_Label15, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label15,"MOVIE\nTIME");
lv_obj_set_style_text_color(ui_Label15, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label15, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Label15, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label15, &ui_font_OB20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_indicator = lv_img_create(ui_Screen1);
lv_img_set_src(ui_indicator, &ui_img_images_rectangle_9_png);
lv_obj_set_width( ui_indicator, LV_SIZE_CONTENT);  /// 25
lv_obj_set_height( ui_indicator, LV_SIZE_CONTENT);   /// 9
lv_obj_set_x( ui_indicator, 219 );
lv_obj_set_y( ui_indicator, 89 );
lv_obj_set_align( ui_indicator, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_indicator, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_indicator, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_grid = lv_img_create(ui_Screen1);
lv_img_set_src(ui_grid, &ui_img_images_grid_png);
lv_obj_set_width( ui_grid, LV_SIZE_CONTENT);  /// 300
lv_obj_set_height( ui_grid, LV_SIZE_CONTENT);   /// 103
lv_obj_set_x( ui_grid, 80 );
lv_obj_set_y( ui_grid, 166 );
lv_obj_set_align( ui_grid, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_grid, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_grid, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Slider1 = lv_slider_create(ui_Screen1);
lv_slider_set_value( ui_Slider1, 0, LV_ANIM_OFF);
if (lv_slider_get_mode(ui_Slider1)==LV_SLIDER_MODE_RANGE ) lv_slider_set_left_value( ui_Slider1, 0, LV_ANIM_OFF);
lv_obj_set_width( ui_Slider1, 342);
lv_obj_set_height( ui_Slider1, 7);
lv_obj_set_x( ui_Slider1, 42 );
lv_obj_set_y( ui_Slider1, -6 );
lv_obj_set_align( ui_Slider1, LV_ALIGN_CENTER );
lv_obj_set_style_radius(ui_Slider1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Slider1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Slider1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_radius(ui_Slider1, 0, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Slider1, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Slider1, 0, LV_PART_INDICATOR| LV_STATE_DEFAULT);

lv_obj_set_style_radius(ui_Slider1, 0, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Slider1, lv_color_hex(0xFF3C39), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Slider1, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_Slider1, lv_color_hex(0x000000), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Slider1, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Slider1, 2, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_Slider1, 10, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_Slider1, 10, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_Slider1, 5, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_Slider1, 5, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_Label7 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label7, 89);
lv_obj_set_height( ui_Label7, 18);
lv_obj_set_x( ui_Label7, -180 );
lv_obj_set_y( ui_Label7, 66 );
lv_obj_set_align( ui_Label7, LV_ALIGN_CENTER );
lv_label_set_long_mode(ui_Label7,LV_LABEL_LONG_SCROLL);
lv_label_set_text(ui_Label7,"THERMOSTAT");
lv_obj_set_style_text_color(ui_Label7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label7, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label7, &ui_font_OB15, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label8 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label8, 71);
lv_obj_set_height( ui_Label8, 30);
lv_obj_set_x( ui_Label8, -190 );
lv_obj_set_y( ui_Label8, 0 );
lv_obj_set_align( ui_Label8, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label8,"0");
lv_obj_set_style_text_color(ui_Label8, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label8, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label8, &ui_font_OB40, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label9 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label9, 69);
lv_obj_set_height( ui_Label9, 22);
lv_obj_set_x( ui_Label9, -191 );
lv_obj_set_y( ui_Label9, -28 );
lv_obj_set_align( ui_Label9, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label9,"COOL");
lv_obj_set_style_text_color(ui_Label9, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label9, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label9, &ui_font_OB20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label12 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label12, 88);
lv_obj_set_height( ui_Label12, 14);
lv_obj_set_x( ui_Label12, 17 );
lv_obj_set_y( ui_Label12, 166 );
lv_label_set_text(ui_Label12,"LIVIGN ROOM");
lv_obj_set_style_text_color(ui_Label12, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label12, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label12, &ui_font_OB15, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Bar2 = lv_bar_create(ui_Screen1);
lv_obj_set_width( ui_Bar2, 317);
lv_obj_set_height( ui_Bar2, 6);
lv_obj_set_x( ui_Bar2, 78 );
lv_obj_set_y( ui_Bar2, 227 );
lv_obj_set_align( ui_Bar2, LV_ALIGN_CENTER );
lv_obj_set_style_radius(ui_Bar2, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Bar2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Bar2, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_radius(ui_Bar2, 0, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Bar2, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Bar2, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);

ui_Label17 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label17, 167);
lv_obj_set_height( ui_Label17, 41);
lv_obj_set_x( ui_Label17, 10 );
lv_obj_set_y( ui_Label17, -204 );
lv_obj_set_align( ui_Label17, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label17,"2M8");
lv_obj_set_style_text_color(ui_Label17, lv_color_hex(0xD0D2E8), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label17, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Label17, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label17, &ui_font_OB40, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label_Time = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label_Time, 167);
lv_obj_set_height( ui_Label_Time, 41);
lv_obj_set_x( ui_Label_Time, 10 );
lv_obj_set_y( ui_Label_Time, -142 );
lv_obj_set_align( ui_Label_Time, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label_Time,"00:00:00");
lv_obj_set_style_text_color(ui_Label_Time, lv_color_hex(0xB6BAE0), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label_Time, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Label_Time, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label_Time, &ui_font_OB40, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label_Date = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label_Date, 167);
lv_obj_set_height( ui_Label_Date, 23);
lv_obj_set_x( ui_Label_Date, 10 );
lv_obj_set_y( ui_Label_Date, -103 );
lv_obj_set_align( ui_Label_Date, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label_Date,"13-Jul-2024");
lv_obj_set_style_text_color(ui_Label_Date, lv_color_hex(0xB6BAE0), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label_Date, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Label_Date, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label_Date, &ui_font_OB20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Image20 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image20, &ui_img_images_01_sp0_png);
lv_obj_set_width( ui_Image20, LV_SIZE_CONTENT);  /// 100
lv_obj_set_height( ui_Image20, LV_SIZE_CONTENT);   /// 100
lv_obj_set_x( ui_Image20, -22 );
lv_obj_set_y( ui_Image20, 167 );
lv_obj_set_align( ui_Image20, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image20, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image20, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_btn_s2_8 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_btn_s2_8, &ui_img_348234618);
lv_obj_set_width( ui_btn_s2_8, LV_SIZE_CONTENT);  /// 128
lv_obj_set_height( ui_btn_s2_8, LV_SIZE_CONTENT);   /// 41
lv_obj_set_x( ui_btn_s2_8, -11 );
lv_obj_set_y( ui_btn_s2_8, 40 );
lv_obj_set_align( ui_btn_s2_8, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_btn_s2_8, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_btn_s2_8, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_img_recolor(ui_btn_s2_8, lv_color_hex(0xF5F969), LV_PART_MAIN| LV_STATE_CHECKED);
lv_obj_set_style_img_recolor_opa(ui_btn_s2_8, 255, LV_PART_MAIN| LV_STATE_CHECKED);

ui_Label24 = lv_label_create(ui_btn_s2_8);
lv_obj_set_width( ui_Label24, 74);
lv_obj_set_height( ui_Label24, 25);
lv_obj_set_x( ui_Label24, 12 );
lv_obj_set_y( ui_Label24, -2 );
lv_obj_set_align( ui_Label24, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label24,"BTN");
lv_obj_set_style_text_align(ui_Label24, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label24, &ui_font_OB30, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_Label24, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_Label24, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_Label24, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_Label24, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label_temp = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label_temp, 82);
lv_obj_set_height( ui_Label_temp, 25);
lv_obj_set_x( ui_Label_temp, -36 );
lv_obj_set_y( ui_Label_temp, -67 );
lv_obj_set_align( ui_Label_temp, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label_temp,"T : 0");
lv_obj_set_style_text_color(ui_Label_temp, lv_color_hex(0xFF3C39), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label_temp, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label_temp, &ui_font_OB20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label_hum = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Label_hum, 93);
lv_obj_set_height( ui_Label_hum, 25);
lv_obj_set_x( ui_Label_hum, 49 );
lv_obj_set_y( ui_Label_hum, -67 );
lv_obj_set_align( ui_Label_hum, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label_hum,"H : 0");
lv_obj_set_style_text_color(ui_Label_hum, lv_color_hex(0xFF3C39), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label_hum, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_Label_hum, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label_hum, &ui_font_OB20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_btn_s2_1 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_btn_s2_1, &ui_img_348229245);
lv_obj_set_width( ui_btn_s2_1, LV_SIZE_CONTENT);  /// 128
lv_obj_set_height( ui_btn_s2_1, LV_SIZE_CONTENT);   /// 41
lv_obj_set_x( ui_btn_s2_1, 165 );
lv_obj_set_y( ui_btn_s2_1, 40 );
lv_obj_set_align( ui_btn_s2_1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_btn_s2_1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_btn_s2_1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_img_recolor(ui_btn_s2_1, lv_color_hex(0xB6BEFB), LV_PART_MAIN| LV_STATE_CHECKED);
lv_obj_set_style_img_recolor_opa(ui_btn_s2_1, 255, LV_PART_MAIN| LV_STATE_CHECKED);
lv_obj_set_style_img_recolor(ui_btn_s2_1, lv_color_hex(0xFF3C39), LV_PART_MAIN| LV_STATE_PRESSED);
lv_obj_set_style_img_recolor_opa(ui_btn_s2_1, 255, LV_PART_MAIN| LV_STATE_PRESSED);

ui_Label1 = lv_label_create(ui_btn_s2_1);
lv_obj_set_width( ui_Label1, 74);
lv_obj_set_height( ui_Label1, 28);
lv_obj_set_x( ui_Label1, -14 );
lv_obj_set_y( ui_Label1, -2 );
lv_obj_set_align( ui_Label1, LV_ALIGN_CENTER );
lv_label_set_long_mode(ui_Label1,LV_LABEL_LONG_DOT);
lv_label_set_text(ui_Label1,"SIGNOUT");
lv_obj_set_style_text_align(ui_Label1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label1, &ui_font_OB30, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_Label1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_Label1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_Label1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_Label1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_Slider1, ui_event_Slider1, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_btn_s2_1, ui_event_btn_s2_1, LV_EVENT_ALL, NULL);

}
