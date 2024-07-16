// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: lcars-ui

#ifndef _LCARS_UI_UI_H
#define _LCARS_UI_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
  #if __has_include("lvgl.h")
    #include "lvgl.h"
  #elif __has_include("lvgl/lvgl.h")
    #include "lvgl/lvgl.h"
  #else
    #include "lvgl.h"
  #endif
#else
  #include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "ui_events.h"

void spear_Animation( lv_obj_t *TargetObject, int delay);
void ellipse1_Animation( lv_obj_t *TargetObject, int delay);
void ellipse2_Animation( lv_obj_t *TargetObject, int delay);
void ellipse3_Animation( lv_obj_t *TargetObject, int delay);
// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t *ui_Screen1;
extern lv_obj_t *ui_img_bg;
extern lv_obj_t *ui_btn_01;
extern lv_obj_t *ui_Label13;
extern lv_obj_t *ui_btn_02;
extern lv_obj_t *ui_Label14;
extern lv_obj_t *ui_btn_03;
extern lv_obj_t *ui_Label10;
extern lv_obj_t *ui_btn_04;
extern lv_obj_t *ui_Label11;
extern lv_obj_t *ui_btn_06;
extern lv_obj_t *ui_Label16;
extern lv_obj_t *ui_btn_05;
extern lv_obj_t *ui_Label15;
extern lv_obj_t *ui_indicator;
extern lv_obj_t *ui_grid;
void ui_event_Slider1( lv_event_t * e);
extern lv_obj_t *ui_Slider1;
extern lv_obj_t *ui_Label7;
extern lv_obj_t *ui_Label8;
extern lv_obj_t *ui_Label9;
extern lv_obj_t *ui_Label12;
extern lv_obj_t *ui_Bar2;
extern lv_obj_t *ui_Label17;
extern lv_obj_t *ui_Label_Time;
extern lv_obj_t *ui_Label_Date;
extern lv_obj_t *ui_Image20;
extern lv_obj_t *ui_btn_s2_8;
extern lv_obj_t *ui_Label24;
extern lv_obj_t *ui_Label_temp;
extern lv_obj_t *ui_Label_hum;
void ui_event_btn_s2_1( lv_event_t * e);
extern lv_obj_t *ui_btn_s2_1;
extern lv_obj_t *ui_Label1;
// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
extern lv_obj_t *ui_Screen2;
extern lv_obj_t *ui_ellipse_1;
extern lv_obj_t *ui_ellipse_2;
extern lv_obj_t *ui_ellipse_3;
void ui_event_Image1( lv_event_t * e);
extern lv_obj_t *ui_Image1;
extern lv_obj_t *ui____initial_actions0;

LV_IMG_DECLARE( ui_img_images_bg_png);   // assets/Images/bg.png
LV_IMG_DECLARE( ui_img_1179592870);   // assets/Images/btn-01.png
LV_IMG_DECLARE( ui_img_2033645247);   // assets/Images/btn-02.png
LV_IMG_DECLARE( ui_img_951916068);   // assets/Images/btn-03.png
LV_IMG_DECLARE( ui_img_1711947617);   // assets/Images/btn-04.png
LV_IMG_DECLARE( ui_img_451510741);   // assets/Images/btn-06.png
LV_IMG_DECLARE( ui_img_630218438);   // assets/Images/btn-05.png
LV_IMG_DECLARE( ui_img_images_rectangle_9_png);   // assets/Images/Rectangle 9.png
LV_IMG_DECLARE( ui_img_images_grid_png);   // assets/Images/grid.png
LV_IMG_DECLARE( ui_img_images_01_sp0_png);   // assets/Images/01/sp0.png
LV_IMG_DECLARE( ui_img_348234618);   // assets/Images/btn-001.png
LV_IMG_DECLARE( ui_img_348229245);   // assets/Images/btn-002.png
LV_IMG_DECLARE( ui_img_images_ellipse_1_png);   // assets/Images/Ellipse 1.png
LV_IMG_DECLARE( ui_img_images_ellipse_3_png);   // assets/Images/Ellipse 3.png
LV_IMG_DECLARE( ui_img_images_ellipse_2_png);   // assets/Images/Ellipse 2.png
LV_IMG_DECLARE( ui_img_2110701303);   // assets/Images/space-ship.png
LV_IMG_DECLARE( ui_img_images_01_sp1_png);   // assets/Images/01/sp1.png
LV_IMG_DECLARE( ui_img_images_01_sp10_png);   // assets/Images/01/sp10.png
LV_IMG_DECLARE( ui_img_images_01_sp11_png);   // assets/Images/01/sp11.png
LV_IMG_DECLARE( ui_img_images_01_sp12_png);   // assets/Images/01/sp12.png
LV_IMG_DECLARE( ui_img_images_01_sp13_png);   // assets/Images/01/sp13.png
LV_IMG_DECLARE( ui_img_images_01_sp14_png);   // assets/Images/01/sp14.png
LV_IMG_DECLARE( ui_img_images_01_sp15_png);   // assets/Images/01/sp15.png
LV_IMG_DECLARE( ui_img_images_01_sp16_png);   // assets/Images/01/sp16.png
LV_IMG_DECLARE( ui_img_images_01_sp17_png);   // assets/Images/01/sp17.png
LV_IMG_DECLARE( ui_img_images_01_sp18_png);   // assets/Images/01/sp18.png
LV_IMG_DECLARE( ui_img_images_01_sp19_png);   // assets/Images/01/sp19.png
LV_IMG_DECLARE( ui_img_images_01_sp2_png);   // assets/Images/01/sp2.png
LV_IMG_DECLARE( ui_img_images_01_sp20_png);   // assets/Images/01/sp20.png
LV_IMG_DECLARE( ui_img_images_01_sp21_png);   // assets/Images/01/sp21.png
LV_IMG_DECLARE( ui_img_images_01_sp22_png);   // assets/Images/01/sp22.png
LV_IMG_DECLARE( ui_img_images_01_sp23_png);   // assets/Images/01/sp23.png
LV_IMG_DECLARE( ui_img_images_01_sp24_png);   // assets/Images/01/sp24.png
LV_IMG_DECLARE( ui_img_images_01_sp25_png);   // assets/Images/01/sp25.png
LV_IMG_DECLARE( ui_img_images_01_sp26_png);   // assets/Images/01/sp26.png
LV_IMG_DECLARE( ui_img_images_01_sp27_png);   // assets/Images/01/sp27.png
LV_IMG_DECLARE( ui_img_images_01_sp28_png);   // assets/Images/01/sp28.png
LV_IMG_DECLARE( ui_img_images_01_sp29_png);   // assets/Images/01/sp29.png
LV_IMG_DECLARE( ui_img_images_01_sp3_png);   // assets/Images/01/sp3.png
LV_IMG_DECLARE( ui_img_images_01_sp30_png);   // assets/Images/01/sp30.png
LV_IMG_DECLARE( ui_img_images_01_sp4_png);   // assets/Images/01/sp4.png
LV_IMG_DECLARE( ui_img_images_01_sp5_png);   // assets/Images/01/sp5.png
LV_IMG_DECLARE( ui_img_images_01_sp6_png);   // assets/Images/01/sp6.png
LV_IMG_DECLARE( ui_img_images_01_sp7_png);   // assets/Images/01/sp7.png
LV_IMG_DECLARE( ui_img_images_01_sp8_png);   // assets/Images/01/sp8.png
LV_IMG_DECLARE( ui_img_images_01_sp9_png);   // assets/Images/01/sp9.png
LV_IMG_DECLARE( ui_img_1076175045);   // assets/Images/bg-01.png
LV_IMG_DECLARE( ui_img_1533239920);   // assets/Images/btn-07.png
LV_IMG_DECLARE( ui_img_1289941709);   // assets/Images/btn-08.png
LV_IMG_DECLARE( ui_img_208212530);   // assets/Images/btn-09.png


LV_FONT_DECLARE( ui_font_OB15);
LV_FONT_DECLARE( ui_font_OB20);
LV_FONT_DECLARE( ui_font_OB30);
LV_FONT_DECLARE( ui_font_OB40);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
