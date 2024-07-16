// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: lcars-ui

#include "../ui.h"

void ui_Screen2_screen_init(void)
{
ui_Screen2 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_ellipse_1 = lv_img_create(ui_Screen2);
lv_img_set_src(ui_ellipse_1, &ui_img_images_ellipse_1_png);
lv_obj_set_width( ui_ellipse_1, LV_SIZE_CONTENT);  /// 368
lv_obj_set_height( ui_ellipse_1, LV_SIZE_CONTENT);   /// 368
lv_obj_set_align( ui_ellipse_1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_ellipse_1, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_ellipse_1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_ellipse_2 = lv_img_create(ui_Screen2);
lv_img_set_src(ui_ellipse_2, &ui_img_images_ellipse_3_png);
lv_obj_set_width( ui_ellipse_2, LV_SIZE_CONTENT);  /// 266
lv_obj_set_height( ui_ellipse_2, LV_SIZE_CONTENT);   /// 266
lv_obj_set_align( ui_ellipse_2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_ellipse_2, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_ellipse_2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_ellipse_3 = lv_img_create(ui_Screen2);
lv_img_set_src(ui_ellipse_3, &ui_img_images_ellipse_2_png);
lv_obj_set_width( ui_ellipse_3, LV_SIZE_CONTENT);  /// 110
lv_obj_set_height( ui_ellipse_3, LV_SIZE_CONTENT);   /// 110
lv_obj_set_align( ui_ellipse_3, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_ellipse_3, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_ellipse_3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image1 = lv_img_create(ui_Screen2);
lv_img_set_src(ui_Image1, &ui_img_2110701303);
lv_obj_set_width( ui_Image1, LV_SIZE_CONTENT);  /// 100
lv_obj_set_height( ui_Image1, LV_SIZE_CONTENT);   /// 100
lv_obj_set_x( ui_Image1, 3 );
lv_obj_set_y( ui_Image1, -5 );
lv_obj_set_align( ui_Image1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_img_recolor(ui_Image1, lv_color_hex(0x485059), LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_img_recolor_opa(ui_Image1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_img_recolor(ui_Image1, lv_color_hex(0x2BF16D), LV_PART_MAIN| LV_STATE_PRESSED);
lv_obj_set_style_img_recolor_opa(ui_Image1, 255, LV_PART_MAIN| LV_STATE_PRESSED);

lv_obj_add_event_cb(ui_Image1, ui_event_Image1, LV_EVENT_ALL, NULL);

}
