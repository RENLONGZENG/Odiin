#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 32 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef ICONS_32
#define ICONS_32 1
#endif

#if ICONS_32

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+30 "0" */
    0x7, 0xe0, 0x1f, 0xf8, 0x3c, 0x3c, 0x38, 0x1c,
    0x70, 0xe, 0x70, 0xe, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0x70, 0xe, 0x70, 0xe, 0x38, 0x1c, 0x3c, 0x3c,
    0x1f, 0xf8, 0x7, 0xe0,

    /* U+31 "1" */
    0x7, 0x0, 0x78, 0xf, 0xc0, 0xfe, 0xe, 0x70,
    0x43, 0x80, 0x1c, 0x0, 0xe0, 0x7, 0x0, 0x38,
    0x1, 0xc0, 0xe, 0x0, 0x70, 0x3, 0x80, 0x1c,
    0x0, 0xe0, 0x7, 0x0, 0x38, 0x1, 0xc0, 0xe,
    0xf, 0xff, 0xff, 0xfc,

    /* U+32 "2" */
    0xf, 0xe0, 0x3f, 0xf8, 0xf8, 0x3c, 0x60, 0x1e,
    0x0, 0xe, 0x0, 0xe, 0x0, 0xe, 0x0, 0xe,
    0x0, 0x1c, 0x0, 0x1c, 0x0, 0x38, 0x0, 0x78,
    0x0, 0xf0, 0x1, 0xe0, 0x3, 0xc0, 0x7, 0x80,
    0xf, 0x0, 0x1e, 0x0, 0x1c, 0x0, 0x38, 0x0,
    0x7f, 0xff, 0x7f, 0xff,

    /* U+33 "3" */
    0xf, 0xe0, 0x7f, 0xf3, 0xe0, 0xf2, 0x0, 0xf0,
    0x0, 0xe0, 0x1, 0xc0, 0x3, 0x80, 0xe, 0x0,
    0x3c, 0x1f, 0xe0, 0x3f, 0xc0, 0x1, 0xe0, 0x1,
    0xc0, 0x1, 0xc0, 0x3, 0x80, 0x7, 0x0, 0xe,
    0x0, 0x1f, 0x80, 0x77, 0xc1, 0xe7, 0xff, 0x81,
    0xfc, 0x0,

    /* U+34 "4" */
    0x0, 0x38, 0x0, 0x1c, 0x0, 0x1e, 0x0, 0x1f,
    0x0, 0x1f, 0x80, 0xd, 0xc0, 0xc, 0xe0, 0xe,
    0x70, 0x6, 0x38, 0x6, 0x1c, 0x7, 0xe, 0x3,
    0x7, 0x3, 0x3, 0x83, 0x81, 0xc3, 0x80, 0xe1,
    0xff, 0xff, 0xff, 0xff, 0x80, 0x1c, 0x0, 0xe,
    0x0, 0x7, 0x0, 0x3, 0x80, 0x1, 0xc0,

    /* U+35 "5" */
    0x7f, 0xfe, 0x7f, 0xfe, 0x70, 0x0, 0x70, 0x0,
    0x70, 0x0, 0x70, 0x0, 0x70, 0x0, 0x70, 0x0,
    0x73, 0xf0, 0x7f, 0xfc, 0x7c, 0x3e, 0x70, 0xe,
    0x60, 0xf, 0x0, 0x7, 0x0, 0x7, 0x0, 0x7,
    0x0, 0x7, 0x0, 0xf, 0x60, 0xe, 0xf8, 0x3c,
    0x3f, 0xf8, 0xf, 0xe0,

    /* U+36 "6" */
    0x3, 0xf0, 0xf, 0xfc, 0x1e, 0x1f, 0x38, 0x6,
    0x78, 0x0, 0x70, 0x0, 0x70, 0x0, 0xe0, 0x0,
    0xe3, 0xf0, 0xe7, 0xfc, 0xec, 0x1e, 0xf8, 0xe,
    0xf0, 0xf, 0xf0, 0x7, 0xf0, 0x7, 0xf0, 0x7,
    0x70, 0x7, 0x70, 0xf, 0x38, 0xe, 0x3c, 0x1c,
    0x1f, 0xf8, 0x7, 0xe0,

    /* U+37 "7" */
    0xff, 0xff, 0xff, 0xfc, 0x0, 0x38, 0x0, 0xe0,
    0x1, 0xc0, 0x7, 0x0, 0xe, 0x0, 0x38, 0x0,
    0x60, 0x1, 0xc0, 0x3, 0x0, 0xe, 0x0, 0x18,
    0x0, 0x70, 0x0, 0xc0, 0x3, 0x80, 0xe, 0x0,
    0x1c, 0x0, 0x70, 0x0, 0xe0, 0x3, 0x80, 0x7,
    0x0, 0x0,

    /* U+38 "8" */
    0xf, 0xf0, 0x1f, 0xfe, 0x1e, 0x7, 0x9e, 0x1,
    0xce, 0x0, 0x77, 0x0, 0x3b, 0x80, 0x1d, 0xc0,
    0xe, 0x70, 0xe, 0x1c, 0xe, 0x3, 0xfc, 0x3,
    0xc7, 0x87, 0x80, 0xe3, 0x80, 0x3b, 0x80, 0xf,
    0xc0, 0x7, 0xe0, 0x3, 0xf0, 0x1, 0xdc, 0x1,
    0xcf, 0x1, 0xe1, 0xff, 0xc0, 0x3f, 0x80,

    /* U+39 "9" */
    0xf, 0xe0, 0x1f, 0xf0, 0x78, 0x3c, 0x70, 0x1c,
    0xe0, 0xe, 0xe0, 0xe, 0xe0, 0xf, 0xe0, 0xf,
    0xe0, 0xf, 0x70, 0x1f, 0x78, 0x37, 0x3f, 0xe7,
    0xf, 0xc7, 0x0, 0x7, 0x0, 0x7, 0x0, 0xe,
    0x0, 0xe, 0x0, 0x1e, 0xe0, 0x1c, 0xf8, 0x78,
    0x3f, 0xf0, 0xf, 0xc0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 307, .box_w = 16, .box_h = 22, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 44, .adv_w = 335, .box_w = 13, .box_h = 22, .ofs_x = 4, .ofs_y = 4},
    {.bitmap_index = 80, .adv_w = 310, .box_w = 16, .box_h = 22, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 124, .adv_w = 297, .box_w = 15, .box_h = 22, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 166, .adv_w = 315, .box_w = 17, .box_h = 22, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 213, .adv_w = 322, .box_w = 16, .box_h = 22, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 257, .adv_w = 311, .box_w = 16, .box_h = 22, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 301, .adv_w = 307, .box_w = 15, .box_h = 22, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 343, .adv_w = 307, .box_w = 17, .box_h = 22, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 390, .adv_w = 305, .box_w = 16, .box_h = 22, .ofs_x = 2, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 48, .range_length = 10, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t icons_32 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 22,          /*The maximum line height required by the font*/
    .base_line = -4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if ICONS_32*/

