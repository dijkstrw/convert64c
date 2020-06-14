#ifndef _FONT_ACTION_WAVE
#define _FONT_ACTION_WAVE

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
 * action_wave
 * a c64 converted font
 *
 * Codepoints in this file: 0 - 60
 */
const uint8_t font_action_wave_bitmap[] = {
    /* Character 0x20 : " " (3,2)-(4,7)
     * .
     */
     0x00,

    /* Character 0x21 : "!" (3,2)-(4,7)
     * xx.
     * xx.
     * xxx
     * xxx
     * ...
     * xxx
     * xxx
     */
     0xdb, 0xf1, 0xf8,

    /* Character 0x22 : """ (3,2)-(4,7)
     * xx.xx
     * xx.xx
     * .x..x
     */
     0xde, 0xd2,

    /* Character 0x23 : "#" (3,2)-(4,7)
     * .x..x.
     * .x..x.
     * xxxxxx
     * .xx.x.
     * xxxxxx
     * .xx.x.
     * .xx.x.
     */
     0x49, 0x2f, 0xda, 0xfd, 0xa6, 0x80,

    /* Character 0x24 : "$" (3,2)-(4,7)
     * ..x..
     * xxxxx
     * x.x..
     * xxxxx
     * .xx.x
     * xxxxx
     * .xx..
     */
     0x27, 0xe9, 0xf6, 0xfd, 0x80,

    /* Character 0x25 : "%" (3,2)-(4,7)
     * xxx..x
     * x.x.x.
     * xxxx..
     * ..xx..
     * ..xxxx
     * .x.x.x
     * x..xxx
     */
     0xe6, 0xaf, 0x0c, 0x3d, 0x59, 0xc0,

    /* Character 0x26 : "&" (3,2)-(4,7)
     * xxxx..
     * x..x..
     * x..x..
     * .xx...
     * xxxx.x
     * xx..x.
     * xxxx.x
     */
     0xf2, 0x49, 0x18, 0xf7, 0x2f, 0x40,

    /* Character 0x27 : "'" (3,2)-(4,7)
     * xx
     * xx
     * .x
     */
     0xf4,

    /* Character 0x28 : "(" (3,2)-(4,7)
     * .xx
     * x..
     * x..
     * xx.
     * xx.
     * xx.
     * .xx
     */
     0x72, 0x6d, 0x98,

    /* Character 0x29 : ")" (3,2)-(4,7)
     * xx.
     * ..x
     * ..x
     * .xx
     * .xx
     * .xx
     * xx.
     */
     0xc4, 0xb6, 0xf0,

    /* Character 0x2a : "*" (3,2)-(4,7)
     * xxxxx..x
     * xxxxx.x.
     * xxxxx..x
     * xxxxx.x.
     * xxxxx.xx
     * xx...xxx
     * xx...xxx
     * xx...xxx
     */
     0xf9, 0xfa, 0xf9, 0xfa, 0xfb, 0xc7, 0xc7, 0xc7,

    /* Character 0x2b : "+" (3,2)-(4,7)
     * ...x..
     * ...x..
     * xxxxxx
     * ..xx..
     * ..xx..
     */
     0x10, 0x4f, 0xcc, 0x30,

    /* Character 0x2c : "," (3,2)-(4,7)
     * xx
     * xx
     * x.
     */
     0xf8,

    /* Character 0x2d : "-" (3,2)-(4,7)
     * xxxxxx
     * xxxxxx
     */
     0xff, 0xf0,

    /* Character 0x2e : "." (3,2)-(4,7)
     * xx
     * xx
     */
     0xf0,

    /* Character 0x2f : "/" (3,2)-(4,7)
     * .....x
     * ....x.
     * ...x..
     * ..x...
     * .x....
     * x.....
     */
     0x04, 0x21, 0x08, 0x42, 0x00,

    /* Character 0x30 : "0" (3,2)-(4,7)
     * xxxxxx
     * x...xx
     * x..xxx
     * x.xx.x
     * xxx..x
     * xx...x
     * xxxxxx
     */
     0xfe, 0x39, 0xed, 0xe7, 0x1f, 0xc0,

    /* Character 0x31 : "1" (3,2)-(4,7)
     * .x
     * .x
     * .x
     * xx
     * xx
     * xx
     * xx
     */
     0x57, 0xfc,

    /* Character 0x32 : "2" (3,2)-(4,7)
     * .xxxx.
     * .x..x.
     * ....x.
     * xxxxx.
     * xx....
     * xx...x
     * xxxxxx
     */
     0x79, 0x20, 0xbe, 0xc3, 0x1f, 0xc0,

    /* Character 0x33 : "3" (3,2)-(4,7)
     * .xxxx.
     * .x..x.
     * ...x..
     * ..xxxx
     * .....x
     * x....x
     * xxxxxx
     */
     0x79, 0x21, 0x0f, 0x06, 0x1f, 0xc0,

    /* Character 0x34 : "4" (3,2)-(4,7)
     * x..x.
     * x..x.
     * x..x.
     * xxxxx
     * ..xx.
     * ..xx.
     * ..xx.
     */
     0x94, 0xa5, 0xf3, 0x18, 0xc0,

    /* Character 0x35 : "5" (3,2)-(4,7)
     * .xxxx.
     * .x..x.
     * .x....
     * .xxxxx
     * ....xx
     * x...xx
     * xxxxxx
     */
     0x79, 0x24, 0x1f, 0x0e, 0x3f, 0xc0,

    /* Character 0x36 : "6" (3,2)-(4,7)
     * .xxxx.
     * .x..x.
     * .x....
     * xxxxxx
     * xx...x
     * xx...x
     * xxxxxx
     */
     0x79, 0x24, 0x3f, 0xc7, 0x1f, 0xc0,

    /* Character 0x37 : "7" (3,2)-(4,7)
     * xxxxx
     * x...x
     * ...x.
     * ..xx.
     * ..xx.
     * ..xx.
     * ..xx.
     */
     0xfc, 0x44, 0x63, 0x18, 0xc0,

    /* Character 0x38 : "8" (3,2)-(4,7)
     * .xxxx.
     * .x..x.
     * .x..x.
     * xxxxxx
     * xx...x
     * xx...x
     * xxxxxx
     */
     0x79, 0x24, 0xbf, 0xc7, 0x1f, 0xc0,

    /* Character 0x39 : "9" (3,2)-(4,7)
     * .xxxxx.
     * .x...x.
     * .x...x.
     * .xxxxxx
     * .....xx
     * x....xx
     * xxxxxxx
     */
     0x7c, 0x89, 0x13, 0xf0, 0x70, 0xff, 0x80,

    /* Character 0x3a : ":" (3,2)-(4,7)
     * xx
     * ..
     * xx
     * xx
     */
     0xcf,

    /* Character 0x3b : ";" (3,2)-(4,7)
     * xx
     * ..
     * ..
     * xx
     * xx
     * x.
     */
     0xc3, 0xe0,

    /* Character 0x00 : "@" (3,2)-(4,7)
     * xxxxxx
     * x....x
     * x..xxx
     * xx.xxx
     * xx....
     * xx...x
     * xxxxxx
     */
     0xfe, 0x19, 0xf7, 0xc3, 0x1f, 0xc0,

    /* Character 0x1b : "[" (3,2)-(4,7)
     * xxxx
     * x...
     * x...
     * xx..
     * xx..
     * xx..
     * xxxx
     */
     0xf8, 0x8c, 0xcc, 0xf0,

    /* Character 0x1d : "]" (3,2)-(4,7)
     * xxxx
     * ...x
     * ...x
     * ..xx
     * ..xx
     * ..xx
     * xxxx
     */
     0xf1, 0x13, 0x33, 0xf0,

    /* Character 0x01 : "a" (3,2)-(4,7)
     * .xxxx.
     * .x..x.
     * .x..x.
     * xxxxxx
     * xx...x
     * xx...x
     * xx...x
     */
     0x79, 0x24, 0xbf, 0xc7, 0x1c, 0x40,

    /* Character 0x02 : "b" (3,2)-(4,7)
     * xxxxx.
     * .x..x.
     * .x..x.
     * .xxxxx
     * .xx..x
     * .xx..x
     * xxxxxx
     */
     0xf9, 0x24, 0x9f, 0x65, 0x9f, 0xc0,

    /* Character 0x03 : "c" (3,2)-(4,7)
     * .xxxxx
     * .x...x
     * .x....
     * xx....
     * xx....
     * xx...x
     * xxxxxx
     */
     0x7d, 0x14, 0x30, 0xc3, 0x1f, 0xc0,

    /* Character 0x04 : "d" (3,2)-(4,7)
     * xxxxxx
     * .x...x
     * .x...x
     * .xx..x
     * .xx..x
     * .xx..x
     * xxxxxx
     */
     0xfd, 0x14, 0x59, 0x65, 0x9f, 0xc0,

    /* Character 0x05 : "e" (3,2)-(4,7)
     * .xxxxx
     * .x....
     * .x....
     * xxxx..
     * xx....
     * xx....
     * xxxxxx
     */
     0x7d, 0x04, 0x3c, 0xc3, 0x0f, 0xc0,

    /* Character 0x06 : "f" (3,2)-(4,7)
     * .xxxxx
     * .x....
     * .x....
     * xxxx..
     * xx....
     * xx....
     * xx....
     */
     0x7d, 0x04, 0x3c, 0xc3, 0x0c, 0x00,

    /* Character 0x07 : "g" (3,2)-(4,7)
     * .xxxxx
     * .x...x
     * .x....
     * xx.xxx
     * xx...x
     * xx...x
     * xxxxxx
     */
     0x7d, 0x14, 0x37, 0xc7, 0x1f, 0xc0,

    /* Character 0x08 : "h" (3,2)-(4,7)
     * .x..x.
     * .x..x.
     * .x..x.
     * xxxxxx
     * xx...x
     * xx...x
     * xx...x
     */
     0x49, 0x24, 0xbf, 0xc7, 0x1c, 0x40,

    /* Character 0x09 : "i" (3,2)-(4,7)
     * xxxxx
     * ..x..
     * ..x..
     * .xx..
     * .xx..
     * .xx..
     * xxxxx
     */
     0xf9, 0x08, 0xc6, 0x33, 0xe0,

    /* Character 0x0a : "j" (3,2)-(4,7)
     * ..xxx
     * ...x.
     * ...x.
     * ...xx
     * ...xx
     * x..xx
     * xxxxx
     */
     0x38, 0x84, 0x31, 0xcf, 0xe0,

    /* Character 0x0b : "k" (3,2)-(4,7)
     * .x..x.
     * .x..x.
     * .x.x..
     * xxx...
     * xx.x..
     * xx.x..
     * xx..xx
     */
     0x49, 0x25, 0x38, 0xd3, 0x4c, 0xc0,

    /* Character 0x0c : "l" (3,2)-(4,7)
     * .x....
     * .x....
     * .x....
     * xx....
     * xx....
     * xx...x
     * xxxxxx
     */
     0x41, 0x04, 0x30, 0xc3, 0x1f, 0xc0,

    /* Character 0x0d : "m" (3,2)-(4,7)
     * .xx.xx
     * .xxxxx
     * .x.x.x
     * xx...x
     * xx...x
     * xx...x
     * xx...x
     */
     0x6d, 0xf5, 0x71, 0xc7, 0x1c, 0x40,

    /* Character 0x0e : "n" (3,2)-(4,7)
     * .xx..x
     * .x.x.x
     * .x.x.x
     * xx.x.x
     * xx.x.x
     * xx..xx
     * xx...x
     */
     0x65, 0x55, 0x75, 0xd7, 0x3c, 0x40,

    /* Character 0x0f : "o" (3,2)-(4,7)
     * .xxxxx
     * .x...x
     * .x...x
     * xx...x
     * xx...x
     * xx...x
     * xxxxxx
     */
     0x7d, 0x14, 0x71, 0xc7, 0x1f, 0xc0,

    /* Character 0x10 : "p" (3,2)-(4,7)
     * .xxxxx
     * .x...x
     * .x...x
     * xxxxxx
     * xx....
     * xx....
     * xx....
     */
     0x7d, 0x14, 0x7f, 0xc3, 0x0c, 0x00,

    /* Character 0x11 : "q" (3,2)-(4,7)
     * .xxxxx
     * .x...x
     * .x...x
     * xx...x
     * xx.x.x
     * xx..x.
     * xxxx.x
     */
     0x7d, 0x14, 0x71, 0xd7, 0x2f, 0x40,

    /* Character 0x12 : "r" (3,2)-(4,7)
     * .xxxxx
     * .x...x
     * .x...x
     * xxxxxx
     * xx.x..
     * xx.x..
     * xx..xx
     */
     0x7d, 0x14, 0x7f, 0xd3, 0x4c, 0xc0,

    /* Character 0x13 : "s" (3,2)-(4,7)
     * .xxxx.
     * .x..x.
     * .x....
     * .xxxxx
     * ...xxx
     * xx.xxx
     * xxxxxx
     */
     0x79, 0x24, 0x1f, 0x1f, 0x7f, 0xc0,

    /* Character 0x14 : "t" (3,2)-(4,7)
     * xxxxx
     * ..x..
     * ..x..
     * .xx..
     * .xx..
     * .xx..
     * .xx..
     */
     0xf9, 0x08, 0xc6, 0x31, 0x80,

    /* Character 0x15 : "u" (3,2)-(4,7)
     * .x...x
     * .x...x
     * .x...x
     * xx...x
     * xx...x
     * xx...x
     * xxxxxx
     */
     0x45, 0x14, 0x71, 0xc7, 0x1f, 0xc0,

    /* Character 0x16 : "v" (3,2)-(4,7)
     * .x...x
     * .x...x
     * .x...x
     * xx..x.
     * xx.x..
     * xxx...
     * xx....
     */
     0x45, 0x14, 0x72, 0xd3, 0x8c, 0x00,

    /* Character 0x17 : "w" (3,2)-(4,7)
     * .x...x
     * .x...x
     * .x...x
     * xx.x.x
     * xx.x.x
     * xxxxxx
     * xxxxxx
     */
     0x45, 0x14, 0x75, 0xd7, 0xff, 0xc0,

    /* Character 0x18 : "x" (3,2)-(4,7)
     * .x..x.
     * .x..x.
     * .xxxx.
     * ..xx..
     * xxxxxx
     * xx...x
     * xx...x
     */
     0x49, 0x27, 0x8c, 0xff, 0x1c, 0x40,

    /* Character 0x19 : "y" (3,2)-(4,7)
     * x...x
     * x...x
     * x...x
     * xxxxx
     * .xx..
     * .xx..
     * .xx..
     */
     0x8c, 0x63, 0xf6, 0x31, 0x80,

    /* Character 0x1a : "z" (3,2)-(4,7)
     * xxxxxx
     * x....x
     * ..xxxx
     * xx....
     * xx....
     * xx...x
     * xxxxxx
     */
     0xfe, 0x13, 0xf0, 0xc3, 0x1f, 0xc0,

    /* Character 0x1c : "£" (3,2)-(4,7)
     * .xxxxx
     * .x...x
     * .x....
     * xxxx..
     * .xx...
     * xxx..x
     * xxxxxx
     */
     0x7d, 0x14, 0x3c, 0x63, 0x9f, 0xc0,

    /* Character 0x1f : "←" (3,2)-(4,7)
     * ...x....
     * ..xx....
     * .xx..xxx
     * xxxxxxxx
     * .xx.....
     * ..xx....
     * ...x....
     */
     0x10, 0x30, 0x67, 0xff, 0x60, 0x30, 0x10,

    /* Character 0x1e : "↑" (3,2)-(4,7)
     * ...x...
     * ..xxx..
     * .xxxxx.
     * xx.x.xx
     * ...x...
     * ..xx...
     * ..xx...
     * ..xx...
     */
     0x10, 0x71, 0xf6, 0xb1, 0x06, 0x0c, 0x18,

};

const glyph_t font_action_wave_glyph[] = {
    {0, 1, 1, 2, 0, -8},/* 20 :   */
    {1, 3, 7, 4, 0, -8},/* 21 : ! */
    {4, 5, 3, 6, 0, -8},/* 22 : " */
    {6, 6, 7, 7, 0, -8},/* 23 : # */
    {12, 5, 7, 6, 0, -8},/* 24 : $ */
    {17, 6, 7, 7, 0, -8},/* 25 : % */
    {23, 6, 7, 7, 0, -8},/* 26 : & */
    {29, 2, 3, 3, 0, -8},/* 27 : ' */
    {30, 3, 7, 4, 0, -8},/* 28 : ( */
    {33, 3, 7, 4, 0, -8},/* 29 : ) */
    {36, 8, 8, 9, 0, -8},/* 2a : * */
    {44, 6, 5, 7, 0, -7},/* 2b : + */
    {48, 2, 3, 3, 0, -4},/* 2c : , */
    {49, 6, 2, 7, 0, -5},/* 2d : - */
    {51, 2, 2, 3, 0, -3},/* 2e : . */
    {52, 6, 6, 7, 0, -7},/* 2f : / */
    {57, 6, 7, 7, 0, -8},/* 30 : 0 */
    {63, 2, 7, 3, 0, -8},/* 31 : 1 */
    {65, 6, 7, 7, 0, -8},/* 32 : 2 */
    {71, 6, 7, 7, 0, -8},/* 33 : 3 */
    {77, 5, 7, 6, 0, -8},/* 34 : 4 */
    {82, 6, 7, 7, 0, -8},/* 35 : 5 */
    {88, 6, 7, 7, 0, -8},/* 36 : 6 */
    {94, 5, 7, 6, 0, -8},/* 37 : 7 */
    {99, 6, 7, 7, 0, -8},/* 38 : 8 */
    {105, 7, 7, 8, 0, -8},/* 39 : 9 */
    {112, 2, 4, 3, 0, -6},/* 3a : : */
    {113, 2, 6, 3, 0, -6},/* 3b : ; */
    {115, 6, 7, 7, 0, -8},/* 00 : @ */
    {121, 4, 7, 5, 0, -8},/* 1b : [ */
    {125, 4, 7, 5, 0, -8},/* 1d : ] */
    {129, 6, 7, 7, 0, -8},/* 01 : a */
    {135, 6, 7, 7, 0, -8},/* 02 : b */
    {141, 6, 7, 7, 0, -8},/* 03 : c */
    {147, 6, 7, 7, 0, -8},/* 04 : d */
    {153, 6, 7, 7, 0, -8},/* 05 : e */
    {159, 6, 7, 7, 0, -8},/* 06 : f */
    {165, 6, 7, 7, 0, -8},/* 07 : g */
    {171, 6, 7, 7, 0, -8},/* 08 : h */
    {177, 5, 7, 6, 0, -8},/* 09 : i */
    {182, 5, 7, 6, 0, -8},/* 0a : j */
    {187, 6, 7, 7, 0, -8},/* 0b : k */
    {193, 6, 7, 7, 0, -8},/* 0c : l */
    {199, 6, 7, 7, 0, -8},/* 0d : m */
    {205, 6, 7, 7, 0, -8},/* 0e : n */
    {211, 6, 7, 7, 0, -8},/* 0f : o */
    {217, 6, 7, 7, 0, -8},/* 10 : p */
    {223, 6, 7, 7, 0, -8},/* 11 : q */
    {229, 6, 7, 7, 0, -8},/* 12 : r */
    {235, 6, 7, 7, 0, -8},/* 13 : s */
    {241, 5, 7, 6, 0, -8},/* 14 : t */
    {246, 6, 7, 7, 0, -8},/* 15 : u */
    {252, 6, 7, 7, 0, -8},/* 16 : v */
    {258, 6, 7, 7, 0, -8},/* 17 : w */
    {264, 6, 7, 7, 0, -8},/* 18 : x */
    {270, 5, 7, 6, 0, -8},/* 19 : y */
    {275, 6, 7, 7, 0, -8},/* 1a : z */
    {281, 6, 7, 7, 0, -8},/* 1c : £ */
    {287, 8, 7, 9, 0, -7},/* 1f : ← */
    {294, 7, 8, 8, 0, -8},/* 1e : ↑ */
};

const font_t font_action_wave = {
    (uint8_t *)font_action_wave_bitmap,
    (glyph_t *)font_action_wave_glyph,
    0x0020,
    0x005c,
    8
};

#endif
