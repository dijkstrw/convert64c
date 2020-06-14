#!/usr/bin/python
#
# Convert 8x8 .c64 font files into adafruit gfx font format
#

import argparse
import os


def glyph_lines(chars, offset, number):
    start = (number * 8) + offset

    if len(chars) < start + 8:
        return [0 for i in range(8)]

    return [chars[(number * 8) + offset + i] for i in range(8)]


def glyph_bitmap(number, lines, boundingbox, compacted=False, name=""):
    (start_x, start_y, end_x, end_y) = boundingbox
    print(
        f'{indent}/* Character 0x{number:02x} : "{name}" ({sx},{sy})-({ex},{ey})'
    )
    if compacted:
        bits = list(
            "".join(
                [
                    f"{line:08b}".replace("1", "x").replace("0", ".")
                    for line in lines
                ]
            )
        )
        for _y in range(start_y, end_y + 1):
            print(f"{indent} * ", end="")
            for _x in range(start_x, end_x + 1):
                print(bits.pop(0), end="")
            print()
    else:
        for line in lines:
            print(f"{indent} * {line:08b}".replace("1", "x").replace("0", "."))
    print(f"{indent} */")
    print(f"{indent}", " ".join([f"0x{line:02x}," for line in lines]))
    print()


def glyph_boundingbox(lines):
    """
    Determine bounding box for 8x8 glyph.

    Returns (startx, starty, endx, endy) where all are indexes, i.e.
    start from 0 and run up to count inclusive.
    """
    start_y = 0
    end_y = len(lines) - 1

    # trim start y
    for i in range(len(lines)):
        if lines[i] == 0:
            start_y += 1
        else:
            break

    if start_y == 8:
        # special case, empty char
        return (0, 0, 0, 0)

    # trim stop y, ending at start y
    for i in range(1, end_y - start_y):
        if lines[-i] == 0:
            end_y -= 1
        else:
            break

    start_x = 0
    end_x = 0
    for line in lines:
        start_x = max(start_x, len(f"{line:08b}".lstrip("0")))
        end_x = max(end_x, len(f"{line:08b}".rstrip("0")))

    # convert from length to indexes
    start_x = 8 - start_x
    end_x -= 1

    return (start_x, start_y, end_x, end_y)


def glyph_compact(lines):
    (start_x, start_y, end_x, end_y) = glyph_boundingbox(lines)

    max_y = len(lines)
    for i in range(start_y):
        if lines:
            lines.pop(0)
    for i in range(end_y + 1, max_y):
        if lines:
            lines.pop(-1)

    newlines = []
    bits = ""
    for line in lines:
        bits += f"{line:08b}"[start_x : end_x + 1]

    padlen = (int((len(bits) + 7) / 8) * 8) - len(bits)
    bits += "0" * padlen
    newlines = [int("0b" + bits[i : i + 8], 2) for i in range(0, len(bits), 8)]

    return ((0, 0, end_x - start_x, end_y - start_y), newlines)


parser = argparse.ArgumentParser(
    description="Convert 64c fonts to adafruit format"
)
parser.add_argument("-f", "--file", required=True, help="file to convert")
parser.add_argument(
    "-s", "--start", type=int, default=0, help="start from c64 char number"
)
parser.add_argument(
    "-e", "--end", type=int, default=False, help="end at c64 char number"
)
parser.add_argument(
    "-c",
    "--compact",
    action="store_true",
    help="trim characters to bounding boxes",
)
parser.add_argument(
    "-t",
    "--typedef",
    action="store_true",
    help="output font_t and glyph_t typedefs",
)
parser.add_argument("-i", "--indent", type=int, default=4, help="space indent")
parser.add_argument(
    "-o", "--offset", type=int, default=2, help="offset in source file"
)

args = parser.parse_args()
with open(args.file, "rb") as fp:
    chars = fp.read()

fontname = os.path.basename(args.file).split(".")[0]

if not args.end:
    args.end = int(len(chars) / 8)

indent = " " * args.indent

C64_GLYPH_ORDER = (
    "@abcdefghijklmnopqrstuvwxyz[£]↑←"
    " !\"#$%&'()*+,-./0123456789:;<=>?"
    "━ABCDEFGHIJKLMNOPQRSTUVWXYZⵜ▚|▒"
)

print(
    f"""#ifndef _FONT_{fontname.upper()}
#define _FONT_{fontname.upper()}

#include <stdint.h>"""
)

if args.typedef:
    print(
        """
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
} font_t;"""
    )

print(
    f"""
/*
 * {fontname}
 * a c64 converted font
 *
 * Codepoints in this file: {args.start} - {args.end}
 */
const uint8_t font_{fontname}_bitmap[] = {{"""
)

glyphs = {}
max_y = 0
for i in range(args.start, args.end):
    lines = glyph_lines(chars, args.offset, i)
    try:
        name = C64_GLYPH_ORDER[i]
    except Exception:
        i += len(C64_GLYPH_ORDER)
        name = chr(i)

    original_boundingbox = glyph_boundingbox(lines)
    (sx, sy, ex, ey) = original_boundingbox
    max_y = max(max_y, ey + 1)

    if args.compact:
        (boundingbox, lines) = glyph_compact(lines)
    else:
        boundingbox = original_boundingbox

    glyphs[name] = (i, lines, boundingbox, original_boundingbox, name)

glyph_ordered = sorted(glyphs.keys())

for g in glyph_ordered:
    (i, lines, boundingbox, original_boundingbox, name) = glyphs[g]

    glyph_bitmap(i, lines, boundingbox, args.compact, name)

print(
    f"""}};

const glyph_t font_{fontname}_glyph[] = {{"""
)

offset = 0
first_char = 0
num_char = 0
for g in glyph_ordered:
    (i, lines, boundingbox, original_boundingbox, name) = glyphs[g]
    (sx, sy, ex, ey) = boundingbox
    (osx, osy, oex, oey) = original_boundingbox
    if args.compact:
        width = (ex - sx) + 1
        height = (ey - sy) + 1
        x_advance = width + 1
        x_offset = 0
        y_offset = -max_y + osy
    else:
        width = 8
        height = 8
        x_advance = 8
        x_offset = 0
        y_offset = -8

    print(
        f"{indent}{{{offset}, {width}, {height}, {x_advance}, {x_offset}, {y_offset}}},"
        f"/* {i:02x} : {name} */"
    )

    offset += len(lines)

    if not first_char:
        first_char = ord(name)
    first_char = min(first_char, ord(name))
    num_char += 1

print(
    f"""}};

const font_t font_{fontname} = {{
{indent}(uint8_t *)font_{fontname}_bitmap,
{indent}(glyph_t *)font_{fontname}_glyph,
{indent}0x{first_char:04x},
{indent}0x{first_char+num_char:04x},
{indent}{max_y}
}};

#endif"""
)
