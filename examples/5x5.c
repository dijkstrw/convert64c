#ifndef _FONT_5X5
#define _FONT_5X5

#include <stdint.h>

typedef struct {
    uint16_t offset;
    uint8_t width;
    uint8_t height;
    uint8_t x_advance;
    int8_t x_offset;
    int8_t y_offset;
} glyph_t;

typedef struct {
    uint8_t *bitmap;
    glyph_t *glyph;
    uint16_t first;
    uint16_t last;
    uint8_t y_advance;
} font_t;

/*
 * 5x5
 * a c64 converted font
 *
 * Codepoints in this file: 0 - 60
 */
const uint8_t font_5x5_bitmap[] = {
    /* Character 0x20 : " " (2,3)-(3,6)
     * .
     */
     0x00,

    /* Character 0x21 : "!" (2,3)-(3,6)
     * x
     * x
     * x
     * .
     * x
     */
     0xe8,

    /* Character 0x22 : """ (2,3)-(3,6)
     * x.x
     * x.x
     */
     0xb4,

    /* Character 0x23 : "#" (2,3)-(3,6)
     * .x.x.
     * xxxxx
     * .x.x.
     * xxxxx
     * .x.x.
     */
     0x57, 0xd5, 0xf5, 0x00,

    /* Character 0x24 : "$" (2,3)-(3,6)
     * .xxxx
     * x.x..
     * .xxx.
     * ..x.x
     * xxxx.
     */
     0x7d, 0x1c, 0x5f, 0x00,

    /* Character 0x25 : "%" (2,3)-(3,6)
     * xx..x
     * xx.x.
     * ..x..
     * .x.xx
     * x..xx
     */
     0xce, 0x88, 0xb9, 0x80,

    /* Character 0x26 : "&" (2,3)-(3,6)
     * .x...
     * x.x..
     * .xx.x
     * x..x.
     * .xx.x
     */
     0x45, 0x1b, 0x26, 0x80,

    /* Character 0x27 : "'" (2,3)-(3,6)
     * .x
     * x.
     */
     0x60,

    /* Character 0x28 : "(" (2,3)-(3,6)
     * .x
     * x.
     * x.
     * x.
     * .x
     */
     0x6a, 0x40,

    /* Character 0x29 : ")" (2,3)-(3,6)
     * x.
     * .x
     * .x
     * .x
     * x.
     */
     0x95, 0x80,

    /* Character 0x2a : "*" (2,3)-(3,6)
     * x.x.x
     * .xxx.
     * xxxxx
     * .xxx.
     * x.x.x
     */
     0xab, 0xbe, 0xea, 0x80,

    /* Character 0x2b : "+" (2,3)-(3,6)
     * ..x..
     * ..x..
     * xxxxx
     * ..x..
     * ..x..
     */
     0x21, 0x3e, 0x42, 0x00,

    /* Character 0x2c : "," (2,3)-(3,6)
     * .x
     * .x
     * x.
     */
     0x58,

    /* Character 0x2d : "-" (2,3)-(3,6)
     * xxxxx
     * .....
     */
     0xf8, 0x00,

    /* Character 0x2e : "." (2,3)-(3,6)
     * x
     * .
     */
     0x80,

    /* Character 0x2f : "/" (2,3)-(3,6)
     * ....x
     * ...x.
     * ..x..
     * .x...
     * x....
     */
     0x08, 0x88, 0x88, 0x00,

    /* Character 0x30 : "0" (2,3)-(3,6)
     * .xxx.
     * x..xx
     * x.x.x
     * xx..x
     * .xxx.
     */
     0x74, 0xeb, 0x97, 0x00,

    /* Character 0x31 : "1" (2,3)-(3,6)
     * .x.
     * xx.
     * .x.
     * .x.
     * xxx
     */
     0x59, 0x2e,

    /* Character 0x32 : "2" (2,3)-(3,6)
     * xxxx.
     * ....x
     * .xxx.
     * x....
     * xxxxx
     */
     0xf0, 0x5d, 0x0f, 0x80,

    /* Character 0x33 : "3" (2,3)-(3,6)
     * xxxx.
     * ....x
     * ..xx.
     * ....x
     * xxxx.
     */
     0xf0, 0x4c, 0x1f, 0x00,

    /* Character 0x34 : "4" (2,3)-(3,6)
     * ..xx.
     * .x.x.
     * x..x.
     * xxxxx
     * ...x.
     */
     0x32, 0xa5, 0xf1, 0x00,

    /* Character 0x35 : "5" (2,3)-(3,6)
     * xxxxx
     * x....
     * xxxx.
     * ....x
     * xxxx.
     */
     0xfc, 0x3c, 0x1f, 0x00,

    /* Character 0x36 : "6" (2,3)-(3,6)
     * .xxx.
     * x....
     * xxxx.
     * x...x
     * .xxx.
     */
     0x74, 0x3d, 0x17, 0x00,

    /* Character 0x37 : "7" (2,3)-(3,6)
     * xxxxx
     * ....x
     * ...x.
     * ..x..
     * ..x..
     */
     0xf8, 0x44, 0x42, 0x00,

    /* Character 0x38 : "8" (2,3)-(3,6)
     * .xxx.
     * x...x
     * .xxx.
     * x...x
     * .xxx.
     */
     0x74, 0x5d, 0x17, 0x00,

    /* Character 0x39 : "9" (2,3)-(3,6)
     * .xxx.
     * x...x
     * .xxxx
     * ....x
     * .xxx.
     */
     0x74, 0x5e, 0x17, 0x00,

    /* Character 0x3a : ":" (2,3)-(3,6)
     * x
     * .
     * x
     */
     0xa0,

    /* Character 0x3b : ";" (2,3)-(3,6)
     * .x
     * ..
     * .x
     * x.
     */
     0x46,

    /* Character 0x00 : "@" (2,3)-(3,6)
     * .xxxx
     * x.xxx
     * x.xxx
     * x....
     * .xxxx
     */
     0x7d, 0xef, 0x07, 0x80,

    /* Character 0x1b : "[" (2,3)-(3,6)
     * xxx
     * x..
     * x..
     * x..
     * xxx
     */
     0xf2, 0x4e,

    /* Character 0x1d : "]" (2,3)-(3,6)
     * xxx
     * ..x
     * ..x
     * ..x
     * xxx
     */
     0xe4, 0x9e,

    /* Character 0x01 : "a" (2,3)-(3,6)
     * ..x..
     * .x.x.
     * x...x
     * xxxxx
     * x...x
     */
     0x22, 0xa3, 0xf8, 0x80,

    /* Character 0x02 : "b" (2,3)-(3,6)
     * xxxx.
     * .x..x
     * .xxx.
     * .x..x
     * xxxx.
     */
     0xf2, 0x5c, 0x9f, 0x00,

    /* Character 0x03 : "c" (2,3)-(3,6)
     * .xxx.
     * x...x
     * x....
     * x...x
     * .xxx.
     */
     0x74, 0x61, 0x17, 0x00,

    /* Character 0x04 : "d" (2,3)-(3,6)
     * xxxx.
     * .x..x
     * .x..x
     * .x..x
     * xxxx.
     */
     0xf2, 0x52, 0x9f, 0x00,

    /* Character 0x05 : "e" (2,3)-(3,6)
     * xxxxx
     * x....
     * xxxx.
     * x....
     * xxxxx
     */
     0xfc, 0x3d, 0x0f, 0x80,

    /* Character 0x06 : "f" (2,3)-(3,6)
     * xxxxx
     * x....
     * xxxx.
     * x....
     * x....
     */
     0xfc, 0x3d, 0x08, 0x00,

    /* Character 0x07 : "g" (2,3)-(3,6)
     * .xxxx
     * x....
     * x..xx
     * x...x
     * .xxxx
     */
     0x7c, 0x27, 0x17, 0x80,

    /* Character 0x08 : "h" (2,3)-(3,6)
     * x...x
     * x...x
     * xxxxx
     * x...x
     * x...x
     */
     0x8c, 0x7f, 0x18, 0x80,

    /* Character 0x09 : "i" (2,3)-(3,6)
     * xxx
     * .x.
     * .x.
     * .x.
     * xxx
     */
     0xe9, 0x2e,

    /* Character 0x0a : "j" (2,3)-(3,6)
     * .xxxx
     * ...x.
     * ...x.
     * x..x.
     * .xx..
     */
     0x78, 0x85, 0x26, 0x00,

    /* Character 0x0b : "k" (2,3)-(3,6)
     * x..x
     * x.x.
     * xx..
     * x.x.
     * x..x
     */
     0x9a, 0xca, 0x90,

    /* Character 0x0c : "l" (2,3)-(3,6)
     * x....
     * x....
     * x....
     * x....
     * xxxxx
     */
     0x84, 0x21, 0x0f, 0x80,

    /* Character 0x0d : "m" (2,3)-(3,6)
     * x...x
     * xx.xx
     * x.x.x
     * x...x
     * x...x
     */
     0x8e, 0xeb, 0x18, 0x80,

    /* Character 0x0e : "n" (2,3)-(3,6)
     * x...x
     * xx..x
     * x.x.x
     * x..xx
     * x...x
     */
     0x8e, 0x6b, 0x38, 0x80,

    /* Character 0x0f : "o" (2,3)-(3,6)
     * .xxx.
     * x...x
     * x...x
     * x...x
     * .xxx.
     */
     0x74, 0x63, 0x17, 0x00,

    /* Character 0x10 : "p" (2,3)-(3,6)
     * xxxx.
     * x...x
     * xxxx.
     * x....
     * x....
     */
     0xf4, 0x7d, 0x08, 0x00,

    /* Character 0x11 : "q" (2,3)-(3,6)
     * .xxx.
     * x...x
     * x.x.x
     * x..xx
     * .xxxx
     */
     0x74, 0x6b, 0x37, 0x80,

    /* Character 0x12 : "r" (2,3)-(3,6)
     * xxxx.
     * x...x
     * xxxx.
     * x.x..
     * x..xx
     */
     0xf4, 0x7d, 0x49, 0x80,

    /* Character 0x13 : "s" (2,3)-(3,6)
     * .xxxx
     * x....
     * .xxx.
     * ....x
     * xxxx.
     */
     0x7c, 0x1c, 0x1f, 0x00,

    /* Character 0x14 : "t" (2,3)-(3,6)
     * xxxxx
     * ..x..
     * ..x..
     * ..x..
     * ..x..
     */
     0xf9, 0x08, 0x42, 0x00,

    /* Character 0x15 : "u" (2,3)-(3,6)
     * x...x
     * x...x
     * x...x
     * x...x
     * .xxx.
     */
     0x8c, 0x63, 0x17, 0x00,

    /* Character 0x16 : "v" (2,3)-(3,6)
     * x...x
     * x...x
     * .x.x.
     * .x.x.
     * ..x..
     */
     0x8c, 0x54, 0xa2, 0x00,

    /* Character 0x17 : "w" (2,3)-(3,6)
     * x...x
     * x...x
     * x.x.x
     * xx.xx
     * x...x
     */
     0x8c, 0x6b, 0xb8, 0x80,

    /* Character 0x18 : "x" (2,3)-(3,6)
     * x...x
     * .x.x.
     * ..x..
     * .x.x.
     * x...x
     */
     0x8a, 0x88, 0xa8, 0x80,

    /* Character 0x19 : "y" (2,3)-(3,6)
     * x...x
     * x...x
     * .xxx.
     * ..x..
     * ..x..
     */
     0x8c, 0x5c, 0x42, 0x00,

    /* Character 0x1a : "z" (2,3)-(3,6)
     * xxxxx
     * ...x.
     * ..x..
     * .x...
     * xxxxx
     */
     0xf8, 0x88, 0x8f, 0x80,

    /* Character 0x1c : "£" (2,3)-(3,6)
     * ..xx.
     * .x..x
     * xxx..
     * .x...
     * xxxxx
     */
     0x32, 0x78, 0x8f, 0x80,

    /* Character 0x1f : "←" (2,3)-(3,6)
     * ..x..
     * .x...
     * xxxxx
     * .x...
     * ..x..
     */
     0x22, 0x3e, 0x82, 0x00,

    /* Character 0x1e : "↑" (2,3)-(3,6)
     * ..x..
     * .xxx.
     * x.x.x
     * ..x..
     * ..x..
     */
     0x23, 0xaa, 0x42, 0x00,

};

const glyph_t font_5x5_glyph[] = {
    {0, 1, 1, 2, 0, -8},/* 20 :   */
    {1, 1, 5, 2, 0, -6},/* 21 : ! */
    {2, 3, 2, 4, 0, -6},/* 22 : " */
    {3, 5, 5, 6, 0, -6},/* 23 : # */
    {7, 5, 5, 6, 0, -6},/* 24 : $ */
    {11, 5, 5, 6, 0, -6},/* 25 : % */
    {15, 5, 5, 6, 0, -6},/* 26 : & */
    {19, 2, 2, 3, 0, -6},/* 27 : ' */
    {20, 2, 5, 3, 0, -6},/* 28 : ( */
    {22, 2, 5, 3, 0, -6},/* 29 : ) */
    {24, 5, 5, 6, 0, -6},/* 2a : * */
    {28, 5, 5, 6, 0, -6},/* 2b : + */
    {32, 2, 3, 3, 0, -4},/* 2c : , */
    {33, 5, 2, 6, 0, -4},/* 2d : - */
    {35, 1, 2, 2, 0, -2},/* 2e : . */
    {36, 5, 5, 6, 0, -6},/* 2f : / */
    {40, 5, 5, 6, 0, -6},/* 30 : 0 */
    {44, 3, 5, 4, 0, -6},/* 31 : 1 */
    {46, 5, 5, 6, 0, -6},/* 32 : 2 */
    {50, 5, 5, 6, 0, -6},/* 33 : 3 */
    {54, 5, 5, 6, 0, -6},/* 34 : 4 */
    {58, 5, 5, 6, 0, -6},/* 35 : 5 */
    {62, 5, 5, 6, 0, -6},/* 36 : 6 */
    {66, 5, 5, 6, 0, -6},/* 37 : 7 */
    {70, 5, 5, 6, 0, -6},/* 38 : 8 */
    {74, 5, 5, 6, 0, -6},/* 39 : 9 */
    {78, 1, 3, 2, 0, -5},/* 3a : : */
    {79, 2, 4, 3, 0, -5},/* 3b : ; */
    {80, 5, 5, 6, 0, -6},/* 00 : @ */
    {84, 3, 5, 4, 0, -6},/* 1b : [ */
    {86, 3, 5, 4, 0, -6},/* 1d : ] */
    {88, 5, 5, 6, 0, -6},/* 01 : a */
    {92, 5, 5, 6, 0, -6},/* 02 : b */
    {96, 5, 5, 6, 0, -6},/* 03 : c */
    {100, 5, 5, 6, 0, -6},/* 04 : d */
    {104, 5, 5, 6, 0, -6},/* 05 : e */
    {108, 5, 5, 6, 0, -6},/* 06 : f */
    {112, 5, 5, 6, 0, -6},/* 07 : g */
    {116, 5, 5, 6, 0, -6},/* 08 : h */
    {120, 3, 5, 4, 0, -6},/* 09 : i */
    {122, 5, 5, 6, 0, -6},/* 0a : j */
    {126, 4, 5, 5, 0, -6},/* 0b : k */
    {129, 5, 5, 6, 0, -6},/* 0c : l */
    {133, 5, 5, 6, 0, -6},/* 0d : m */
    {137, 5, 5, 6, 0, -6},/* 0e : n */
    {141, 5, 5, 6, 0, -6},/* 0f : o */
    {145, 5, 5, 6, 0, -6},/* 10 : p */
    {149, 5, 5, 6, 0, -6},/* 11 : q */
    {153, 5, 5, 6, 0, -6},/* 12 : r */
    {157, 5, 5, 6, 0, -6},/* 13 : s */
    {161, 5, 5, 6, 0, -6},/* 14 : t */
    {165, 5, 5, 6, 0, -6},/* 15 : u */
    {169, 5, 5, 6, 0, -6},/* 16 : v */
    {173, 5, 5, 6, 0, -6},/* 17 : w */
    {177, 5, 5, 6, 0, -6},/* 18 : x */
    {181, 5, 5, 6, 0, -6},/* 19 : y */
    {185, 5, 5, 6, 0, -6},/* 1a : z */
    {189, 5, 5, 6, 0, -6},/* 1c : £ */
    {193, 5, 5, 6, 0, -6},/* 1f : ← */
    {197, 5, 5, 6, 0, -6},/* 1e : ↑ */
};

const font_t font_5x5 = {
    (uint8_t *)font_5x5_bitmap,
    (glyph_t *)font_5x5_glyph,
    0x0020,
    0x005c,
    8
};

#endif
