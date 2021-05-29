/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef C64_FONT
#define C64_FONT 1
#endif

#if C64_FONT

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xcc,

    /* U+0022 "\"" */
    0xcf, 0x30,

    /* U+0023 "#" */
    0x66, 0x66, 0xff, 0x66, 0xff, 0x66, 0x66,

    /* U+0024 "$" */
    0x31, 0xfc, 0x1e, 0xf, 0xe3, 0x0,

    /* U+0025 "%" */
    0xc7, 0x31, 0x8c, 0x63, 0x38, 0xc0,

    /* U+0026 "&" */
    0x79, 0x99, 0xe3, 0x8c, 0xf9, 0x9f, 0x80,

    /* U+0027 "'" */
    0x36, 0xc0,

    /* U+0028 "(" */
    0x36, 0xcc, 0xc6, 0x30,

    /* U+0029 ")" */
    0xc6, 0x33, 0x36, 0xc0,

    /* U+002A "*" */
    0x66, 0x3c, 0xff, 0x3c, 0x66,

    /* U+002B "+" */
    0x30, 0xcf, 0xcc, 0x30,

    /* U+002C "," */
    0x6f, 0x0,

    /* U+002D "-" */
    0xfc,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x6, 0x18, 0x61, 0x86, 0x18, 0x0,

    /* U+0030 "0" */
    0x7b, 0x3d, 0xfb, 0xcf, 0x37, 0x80,

    /* U+0031 "1" */
    0x30, 0xc7, 0xc, 0x30, 0xcf, 0xc0,

    /* U+0032 "2" */
    0x7b, 0x30, 0xc6, 0x63, 0xf, 0xc0,

    /* U+0033 "3" */
    0x7b, 0x30, 0xce, 0xf, 0x37, 0x80,

    /* U+0034 "4" */
    0xc, 0x38, 0xf6, 0x6f, 0xe1, 0x83, 0x0,

    /* U+0035 "5" */
    0xff, 0xf, 0x83, 0xf, 0x37, 0x80,

    /* U+0036 "6" */
    0x7b, 0x3c, 0x3e, 0xcf, 0x37, 0x80,

    /* U+0037 "7" */
    0xff, 0x31, 0x8c, 0x30, 0xc3, 0x0,

    /* U+0038 "8" */
    0x7b, 0x3c, 0xde, 0xcf, 0x37, 0x80,

    /* U+0039 "9" */
    0x7b, 0x3c, 0xdf, 0xf, 0x37, 0x80,

    /* U+003A ":" */
    0xf0, 0x3c,

    /* U+003B ";" */
    0x6c, 0x0, 0xde,

    /* U+003C "<" */
    0x1c, 0xc6, 0x30, 0x60, 0xc1, 0xc0,

    /* U+003D "=" */
    0xfc, 0xf, 0xc0,

    /* U+003E ">" */
    0xe0, 0xc1, 0x83, 0x18, 0xce, 0x0,

    /* U+003F "?" */
    0x7b, 0x30, 0xc6, 0x30, 0x3, 0x0,

    /* U+0040 "@" */
    0x7b, 0x3d, 0xf7, 0xc3, 0x17, 0x80,

    /* U+0041 "A" */
    0x31, 0xec, 0xff, 0xcf, 0x3c, 0xc0,

    /* U+0042 "B" */
    0xfb, 0x3c, 0xfe, 0xcf, 0x3f, 0x80,

    /* U+0043 "C" */
    0x7b, 0x3c, 0x30, 0xc3, 0x37, 0x80,

    /* U+0044 "D" */
    0xf3, 0x6c, 0xf3, 0xcf, 0x6f, 0x0,

    /* U+0045 "E" */
    0xff, 0xc, 0x3c, 0xc3, 0xf, 0xc0,

    /* U+0046 "F" */
    0xff, 0xc, 0x3c, 0xc3, 0xc, 0x0,

    /* U+0047 "G" */
    0x7b, 0x3c, 0x37, 0xcf, 0x37, 0x80,

    /* U+0048 "H" */
    0xcf, 0x3c, 0xff, 0xcf, 0x3c, 0xc0,

    /* U+0049 "I" */
    0xf6, 0x66, 0x66, 0xf0,

    /* U+004A "J" */
    0x3c, 0x61, 0x86, 0x1b, 0x67, 0x0,

    /* U+004B "K" */
    0xcf, 0x6f, 0x38, 0xf3, 0x6c, 0xc0,

    /* U+004C "L" */
    0xc3, 0xc, 0x30, 0xc3, 0xf, 0xc0,

    /* U+004D "M" */
    0xc7, 0xdf, 0xfe, 0xbc, 0x78, 0xf1, 0x80,

    /* U+004E "N" */
    0xcf, 0xbf, 0xff, 0xdf, 0x3c, 0xc0,

    /* U+004F "O" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x37, 0x80,

    /* U+0050 "P" */
    0xfb, 0x3c, 0xfe, 0xc3, 0xc, 0x0,

    /* U+0051 "Q" */
    0x7b, 0x3c, 0xf3, 0xcd, 0xe1, 0xc0,

    /* U+0052 "R" */
    0xfb, 0x3c, 0xfe, 0xf3, 0x6c, 0xc0,

    /* U+0053 "S" */
    0x7b, 0x3c, 0x1e, 0xf, 0x37, 0x80,

    /* U+0054 "T" */
    0xfc, 0xc3, 0xc, 0x30, 0xc3, 0x0,

    /* U+0055 "U" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x37, 0x80,

    /* U+0056 "V" */
    0xcf, 0x3c, 0xf3, 0xcd, 0xe3, 0x0,

    /* U+0057 "W" */
    0xc7, 0x8f, 0x1e, 0xbf, 0xfd, 0xf1, 0x80,

    /* U+0058 "X" */
    0xcf, 0x37, 0x8c, 0x7b, 0x3c, 0xc0,

    /* U+0059 "Y" */
    0xcf, 0x3c, 0xde, 0x30, 0xc3, 0x0,

    /* U+005A "Z" */
    0xfc, 0x31, 0x8c, 0x63, 0xf, 0xc0,

    /* U+005B "[" */
    0xfc, 0xcc, 0xcc, 0xf0,

    /* U+005C "\\" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,

    /* U+005D "]" */
    0xf3, 0x33, 0x33, 0xf0,

    /* U+005E "^" */
    0x31, 0xef, 0xcc, 0x30, 0xc3, 0x0,

    /* U+005F "_" */
    0xff,

    /* U+0060 "`" */
    0xc6, 0x30,

    /* U+0061 "a" */
    0x78, 0x37, 0xf3, 0x7c,

    /* U+0062 "b" */
    0xc3, 0xf, 0xb3, 0xcf, 0xe0,

    /* U+0063 "c" */
    0x7e, 0x31, 0x87, 0x80,

    /* U+0064 "d" */
    0xc, 0x37, 0xf3, 0xcd, 0xf0,

    /* U+0065 "e" */
    0x7b, 0x3f, 0xf0, 0x78,

    /* U+0066 "f" */
    0x3b, 0x3e, 0xc6, 0x30,

    /* U+0067 "g" */
    0x7f, 0x3c, 0xdf, 0xf, 0xe0,

    /* U+0068 "h" */
    0xc3, 0xf, 0xb3, 0xcf, 0x3c, 0xc0,

    /* U+0069 "i" */
    0x60, 0xe6, 0x66, 0xf0,

    /* U+006A "j" */
    0x30, 0x33, 0x33, 0xe0,

    /* U+006B "k" */
    0xc3, 0xc, 0x36, 0xf3, 0x6c, 0xc0,

    /* U+006C "l" */
    0xe6, 0x66, 0x66, 0xf0,

    /* U+006D "m" */
    0xcd, 0xff, 0xfe, 0xbc, 0x60,

    /* U+006E "n" */
    0xfb, 0x3c, 0xf3, 0xcc,

    /* U+006F "o" */
    0x7b, 0x3c, 0xf3, 0x78,

    /* U+0070 "p" */
    0xfb, 0x3c, 0xfe, 0xc3, 0x0,

    /* U+0071 "q" */
    0x7f, 0x3c, 0xdf, 0xc, 0x30,

    /* U+0072 "r" */
    0xfb, 0x3c, 0x30, 0xc0,

    /* U+0073 "s" */
    0x7f, 0x7, 0x83, 0xf8,

    /* U+0074 "t" */
    0x33, 0xf3, 0xc, 0x30, 0x70,

    /* U+0075 "u" */
    0xcf, 0x3c, 0xf3, 0x7c,

    /* U+0076 "v" */
    0xcf, 0x3c, 0xde, 0x30,

    /* U+0077 "w" */
    0xc7, 0xaf, 0xfb, 0xe6, 0xc0,

    /* U+0078 "x" */
    0xcd, 0xe3, 0x1e, 0xcc,

    /* U+0079 "y" */
    0xcf, 0x3c, 0xdf, 0x1b, 0xc0,

    /* U+007A "z" */
    0xfc, 0x63, 0x18, 0xfc,

    /* U+007B "{" */
    0x1c, 0xc3, 0x38, 0x30, 0xc1, 0xc0,

    /* U+007C "|" */
    0xff, 0xfc,

    /* U+007D "}" */
    0xe0, 0xc3, 0x7, 0x30, 0xce, 0x0,

    /* U+007E "~" */
    0xe7, 0xfb, 0x80
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 125, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 125, .box_w = 2, .box_h = 7, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 125, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5, .adv_w = 125, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 18, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 24, .adv_w = 125, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 31, .adv_w = 125, .box_w = 4, .box_h = 3, .ofs_x = 3, .ofs_y = 4},
    {.bitmap_index = 33, .adv_w = 125, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 37, .adv_w = 125, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 125, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 46, .adv_w = 125, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 50, .adv_w = 125, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 52, .adv_w = 125, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 53, .adv_w = 125, .box_w = 2, .box_h = 2, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 54, .adv_w = 125, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 125, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 125, .box_w = 2, .box_h = 7, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 123, .adv_w = 125, .box_w = 3, .box_h = 8, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 126, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 125, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 135, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 141, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 153, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 177, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 183, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 189, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 125, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 211, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 125, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 242, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 248, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 254, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 260, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 266, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 272, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 284, .adv_w = 125, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 291, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 297, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 303, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 309, .adv_w = 125, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 125, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 319, .adv_w = 125, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 323, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 125, .box_w = 8, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 125, .box_w = 4, .box_h = 3, .ofs_x = 3, .ofs_y = 4},
    {.bitmap_index = 332, .adv_w = 125, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 336, .adv_w = 125, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 341, .adv_w = 125, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 345, .adv_w = 125, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 350, .adv_w = 125, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 125, .box_w = 5, .box_h = 6, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 125, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 363, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 369, .adv_w = 125, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 125, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 377, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 125, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 387, .adv_w = 125, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 392, .adv_w = 125, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 396, .adv_w = 125, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 400, .adv_w = 125, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 405, .adv_w = 125, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 410, .adv_w = 125, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 125, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 418, .adv_w = 125, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 423, .adv_w = 125, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 427, .adv_w = 125, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 431, .adv_w = 125, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 436, .adv_w = 125, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 125, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 445, .adv_w = 125, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 449, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 125, .box_w = 2, .box_h = 7, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 457, .adv_w = 125, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 125, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t c64_font = {
#else
lv_font_t c64_font = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 8,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if C64_FONT*/
