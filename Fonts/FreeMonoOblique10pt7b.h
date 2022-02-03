#ifndef FreeMonoOblique10pt7b_H
#define FreeMonoOblique10pt7b_H

#ifdef __AVR__
#include <avr/io.h>
#include <avr/pgmspace.h>
#elif defined(ESP8266)
#include <pgmspace.h>
#undef PROGMEM
#define PROGMEM STORE_ATTR
#elif defined(__IMXRT1052__) || defined(__IMXRT1062__)
// PROGMEM is defefind for T4 to place data in specific memory section
#undef PROGMEM
#define PROGMEM
#else
#define PROGMEM
#endif

const uint8_t FreeMonoOblique10pt7bBitmaps[] PROGMEM = {
  0x00, 0x11, 0x22, 0x22, 0x44, 0x00, 0xCC, 0xEF, 0x9B, 0x36, 0x68, 0x91,
  0x00, 0x09, 0x05, 0x04, 0x82, 0x47, 0xF8, 0xA0, 0x91, 0xFE, 0x28, 0x24,
  0x12, 0x09, 0x04, 0x00, 0x04, 0x0F, 0x48, 0x68, 0x14, 0x03, 0x00, 0x78,
  0x06, 0x01, 0x40, 0xB1, 0x8F, 0x02, 0x01, 0x00, 0x1C, 0x11, 0x10, 0x88,
  0x83, 0x80, 0x04, 0x1C, 0xF0, 0x8E, 0x08, 0x88, 0x44, 0x41, 0xC0, 0x1E,
  0x20, 0x81, 0x02, 0x06, 0x14, 0xCA, 0x8D, 0x11, 0xD0, 0xFB, 0x69, 0x00,
  0x12, 0x24, 0x44, 0x88, 0x88, 0x88, 0x84, 0x22, 0x11, 0x11, 0x11, 0x12,
  0x24, 0x48, 0x08, 0x08, 0xD1, 0x3E, 0x18, 0x28, 0x44, 0x04, 0x04, 0x02,
  0x01, 0x0F, 0xF8, 0x40, 0x40, 0x20, 0x10, 0x00, 0x39, 0x98, 0xCC, 0x40,
  0xFF, 0x80, 0x7F, 0x00, 0x00, 0x40, 0x08, 0x02, 0x00, 0x80, 0x20, 0x04,
  0x01, 0x00, 0x40, 0x08, 0x02, 0x00, 0x80, 0x10, 0x04, 0x01, 0x00, 0x20,
  0x00, 0x0F, 0x08, 0xC8, 0x28, 0x14, 0x0A, 0x06, 0x03, 0x02, 0x81, 0x40,
  0xA0, 0x98, 0xC7, 0x80, 0x06, 0x0A, 0x32, 0x04, 0x04, 0x04, 0x04, 0x04,
  0x08, 0x08, 0x08, 0xFF, 0x07, 0x82, 0x31, 0x04, 0x01, 0x00, 0x40, 0x60,
  0x30, 0x10, 0x08, 0x04, 0x06, 0x02, 0x04, 0xFF, 0x00, 0x07, 0x82, 0x10,
  0x04, 0x01, 0x00, 0x81, 0xC0, 0x10, 0x02, 0x00, 0x80, 0x20, 0x13, 0x08,
  0x3C, 0x00, 0x03, 0x05, 0x0A, 0x12, 0x12, 0x22, 0x42, 0x82, 0xFF, 0x04,
  0x04, 0x04, 0x1E, 0x1F, 0xC4, 0x01, 0x00, 0x40, 0x20, 0x0B, 0xC3, 0x18,
  0x02, 0x00, 0x80, 0x20, 0x13, 0x08, 0x7C, 0x00, 0x07, 0x8C, 0x0C, 0x0C,
  0x04, 0x02, 0xE2, 0x99, 0x84, 0x82, 0x41, 0x21, 0x09, 0x87, 0x80, 0x7F,
  0x81, 0x02, 0x02, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x40,
  0x0F, 0x18, 0xD8, 0x28, 0x14, 0x0B, 0x18, 0x70, 0xC4, 0x81, 0x40, 0xA0,
  0xD8, 0xC7, 0x80, 0x07, 0x06, 0x21, 0x04, 0x81, 0x20, 0x48, 0x33, 0x14,
  0x7A, 0x00, 0x80, 0x40, 0x20, 0x30, 0xF0, 0x00, 0x37, 0x60, 0x00, 0x6E,
  0xC0, 0x0C, 0x71, 0x80, 0x00, 0x03, 0x8C, 0x61, 0x0C, 0x20, 0x01, 0x81,
  0x81, 0x81, 0x80, 0x80, 0x18, 0x01, 0x80, 0x10, 0x03, 0x00, 0x7F, 0xC0,
  0x00, 0x00, 0x7F, 0xE0, 0x30, 0x02, 0x00, 0x60, 0x04, 0x00, 0xC0, 0xC0,
  0xC0, 0xC0, 0xC0, 0x00, 0x7D, 0x0E, 0x08, 0x10, 0xCE, 0x10, 0x00, 0x00,
  0x03, 0x87, 0x00, 0x0E, 0x11, 0x21, 0x41, 0x47, 0x49, 0x91, 0x92, 0x92,
  0x8E, 0x80, 0x80, 0xC0, 0x7C, 0x0F, 0x80, 0x18, 0x02, 0x80, 0x24, 0x04,
  0x40, 0x84, 0x08, 0x40, 0xFC, 0x10, 0x42, 0x04, 0x20, 0x2F, 0x0F, 0x3F,
  0xC2, 0x0C, 0x40, 0x88, 0x11, 0x04, 0x3F, 0x0C, 0x19, 0x01, 0x20, 0x24,
  0x04, 0x81, 0x7F, 0xC0, 0x07, 0xA3, 0x0C, 0x80, 0xB0, 0x04, 0x00, 0x80,
  0x20, 0x04, 0x00, 0x80, 0x10, 0x01, 0x04, 0x1F, 0x00, 0x3F, 0x82, 0x08,
  0x40, 0x88, 0x12, 0x02, 0x40, 0x48, 0x09, 0x02, 0x20, 0x44, 0x11, 0x04,
  0x7F, 0x00, 0x3F, 0xE2, 0x04, 0x40, 0x88, 0x01, 0x10, 0x3E, 0x0C, 0x81,
  0x00, 0x20, 0x04, 0x08, 0x81, 0x7F, 0xE0, 0x3F, 0xF1, 0x01, 0x10, 0x21,
  0x00, 0x11, 0x01, 0xF0, 0x32, 0x02, 0x00, 0x20, 0x02, 0x00, 0x20, 0x0F,
  0xC0, 0x0F, 0x44, 0x32, 0x05, 0x00, 0x40, 0x20, 0x08, 0x02, 0x1E, 0x80,
  0xA0, 0x24, 0x08, 0xFC, 0x1C, 0xF1, 0x02, 0x10, 0x61, 0x04, 0x10, 0x41,
  0xFC, 0x10, 0x42, 0x04, 0x20, 0x82, 0x08, 0x20, 0x8F, 0x3C, 0x3F, 0xC0,
  0x80, 0x40, 0x10, 0x04, 0x01, 0x00, 0x40, 0x20, 0x08, 0x02, 0x00, 0x83,
  0xFC, 0x07, 0xF0, 0x0C, 0x00, 0x80, 0x08, 0x00, 0x80, 0x08, 0x01, 0x04,
  0x10, 0xC1, 0x08, 0x10, 0xC6, 0x07, 0xC0, 0x3E, 0x71, 0x02, 0x10, 0xC1,
  0x10, 0x12, 0x01, 0xE0, 0x31, 0x02, 0x10, 0x20, 0x82, 0x08, 0x20, 0x8F,
  0x8E, 0x3F, 0x00, 0x80, 0x20, 0x04, 0x00, 0x80, 0x10, 0x02, 0x00, 0x40,
  0x10, 0x22, 0x08, 0x41, 0x7F, 0xE0, 0x1C, 0x1C, 0x50, 0xA1, 0x42, 0x85,
  0x14, 0x14, 0x50, 0x4A, 0x42, 0x31, 0x08, 0xC4, 0x22, 0x20, 0x80, 0x82,
  0x02, 0x3E, 0x3C, 0x38, 0xF8, 0xC1, 0x06, 0x08, 0x28, 0x42, 0x42, 0x13,
  0x20, 0x89, 0x04, 0x48, 0x21, 0x42, 0x0A, 0x10, 0x61, 0xE1, 0x00, 0x0F,
  0x04, 0x22, 0x0D, 0x01, 0x40, 0x60, 0x18, 0x06, 0x02, 0x80, 0xB0, 0x44,
  0x20, 0xF0, 0x3F, 0xC2, 0x0C, 0x40, 0x88, 0x11, 0x06, 0x21, 0x8F, 0xC1,
  0x00, 0x20, 0x04, 0x00, 0x80, 0x7E, 0x00, 0x0F, 0x04, 0x22, 0x0D, 0x01,
  0x40, 0x60, 0x18, 0x06, 0x02, 0x80, 0xB0, 0x44, 0x20, 0xF0, 0x20, 0x1E,
  0x44, 0x60, 0x3F, 0xC2, 0x0C, 0x40, 0x88, 0x11, 0x06, 0x21, 0x8F, 0xC1,
  0x08, 0x20, 0x84, 0x10, 0x81, 0x7C, 0x10, 0x0F, 0x46, 0x32, 0x04, 0x81,
  0x20, 0x04, 0x00, 0xF0, 0x02, 0x80, 0xA0, 0x2C, 0x32, 0xF0, 0xFF, 0xE1,
  0x18, 0x84, 0x20, 0x08, 0x02, 0x00, 0x80, 0x40, 0x10, 0x04, 0x01, 0x03,
  0xF0, 0xFB, 0xE4, 0x11, 0x02, 0x20, 0x44, 0x08, 0x82, 0x20, 0x44, 0x08,
  0x81, 0x10, 0x43, 0x18, 0x3C, 0x00, 0xF8, 0xF2, 0x02, 0x20, 0x42, 0x08,
  0x20, 0x82, 0x10, 0x21, 0x02, 0x20, 0x12, 0x01, 0x40, 0x18, 0x01, 0x80,
  0x78, 0xF4, 0x02, 0x40, 0x24, 0x64, 0x4A, 0x44, 0xA4, 0x52, 0x85, 0x28,
  0x62, 0x86, 0x30, 0x43, 0x0C, 0x30, 0x3C, 0x71, 0x02, 0x08, 0x40, 0x88,
  0x05, 0x00, 0x60, 0x06, 0x00, 0x90, 0x11, 0x02, 0x08, 0x40, 0x8F, 0x1C,
  0xF1, 0xD0, 0x22, 0x10, 0x88, 0x16, 0x05, 0x01, 0x80, 0x20, 0x10, 0x04,
  0x01, 0x03, 0xF0, 0x1F, 0xC8, 0x22, 0x08, 0x04, 0x02, 0x01, 0x00, 0x80,
  0x40, 0x20, 0x90, 0x48, 0x13, 0xFC, 0x1C, 0x42, 0x08, 0x20, 0x82, 0x10,
  0x41, 0x04, 0x10, 0x82, 0x0E, 0x00, 0x88, 0x44, 0x44, 0x22, 0x22, 0x11,
  0x11, 0x00, 0x1C, 0x10, 0x82, 0x08, 0x20, 0x84, 0x10, 0x41, 0x04, 0x20,
  0x8E, 0x00, 0x08, 0x28, 0x92, 0x18, 0x20, 0x7F, 0xF8, 0x88, 0x80, 0x1F,
  0x00, 0x20, 0x08, 0x7A, 0x61, 0xA0, 0x48, 0x12, 0x0C, 0x7D, 0xC0, 0x30,
  0x02, 0x00, 0x40, 0x08, 0x01, 0x78, 0x50, 0x8C, 0x09, 0x01, 0x20, 0x24,
  0x04, 0x81, 0x28, 0x4C, 0xF0, 0x0F, 0xA6, 0x1D, 0x01, 0x60, 0x08, 0x01,
  0x00, 0x20, 0x02, 0x06, 0x3F, 0x00, 0x00, 0xC0, 0x08, 0x01, 0x00, 0x21,
  0xE4, 0x42, 0x90, 0x24, 0x04, 0x80, 0x90, 0x12, 0x06, 0x21, 0x83, 0xDC,
  0x0F, 0x0C, 0x24, 0x06, 0x01, 0xFF, 0xE0, 0x08, 0x01, 0x06, 0x3E, 0x00,
  0x01, 0xE0, 0xC0, 0x10, 0x02, 0x03, 0xFC, 0x10, 0x02, 0x00, 0x40, 0x08,
  0x02, 0x00, 0x40, 0x08, 0x0F, 0xF0, 0x1E, 0xE4, 0x31, 0x02, 0x40, 0x48,
  0x11, 0x02, 0x20, 0x42, 0x38, 0x39, 0x00, 0x40, 0x08, 0x02, 0x07, 0x80,
  0x38, 0x01, 0x00, 0x40, 0x08, 0x01, 0x78, 0x31, 0x84, 0x11, 0x02, 0x20,
  0x44, 0x18, 0x82, 0x10, 0x4F, 0x1E, 0x06, 0x04, 0x00, 0x3C, 0x04, 0x04,
  0x04, 0x08, 0x08, 0x08, 0x08, 0xFF, 0x01, 0x00, 0x80, 0x07, 0xE0, 0x10,
  0x08, 0x04, 0x02, 0x02, 0x01, 0x00, 0x80, 0x40, 0x20, 0x20, 0x31, 0xE0,
  0x18, 0x01, 0x00, 0x20, 0x04, 0x01, 0x1E, 0x22, 0x04, 0x80, 0xE0, 0x14,
  0x04, 0xC0, 0x88, 0x10, 0x8E, 0x3C, 0x1E, 0x02, 0x06, 0x04, 0x04, 0x04,
  0x04, 0x04, 0x08, 0x08, 0x08, 0x08, 0xFF, 0x36, 0x71, 0x99, 0x11, 0x12,
  0x11, 0x22, 0x12, 0x22, 0x22, 0x22, 0x22, 0xF3, 0x30, 0x33, 0x87, 0x11,
  0x04, 0x41, 0x20, 0x48, 0x22, 0x08, 0x82, 0xF1, 0xC0, 0x0F, 0x0C, 0x24,
  0x06, 0x01, 0x80, 0x60, 0x18, 0x09, 0x0C, 0x3C, 0x00, 0x3B, 0xC1, 0x42,
  0x18, 0x11, 0x01, 0x10, 0x11, 0x01, 0x10, 0x22, 0x84, 0x27, 0x82, 0x00,
  0x20, 0x02, 0x00, 0xF8, 0x00, 0x1E, 0x64, 0x39, 0x02, 0x40, 0x48, 0x09,
  0x01, 0x20, 0x62, 0x18, 0x3D, 0x00, 0x20, 0x04, 0x00, 0x80, 0xF8, 0x39,
  0xC5, 0x81, 0x80, 0x40, 0x10, 0x04, 0x01, 0x00, 0x80, 0xFE, 0x00, 0x0F,
  0x98, 0x48, 0x26, 0x00, 0xF0, 0x06, 0x03, 0x82, 0xBE, 0x00, 0x10, 0x10,
  0x10, 0xFF, 0x20, 0x20, 0x20, 0x20, 0x40, 0x40, 0x40, 0x3E, 0xE3, 0x88,
  0x24, 0x09, 0x02, 0x40, 0x90, 0x44, 0x11, 0x0C, 0x3D, 0x80, 0xF1, 0xE4,
  0x10, 0x82, 0x10, 0x82, 0x20, 0x44, 0x05, 0x00, 0xA0, 0x18, 0x00, 0xE0,
  0xE8, 0x09, 0x01, 0x26, 0x44, 0xC8, 0xAA, 0x15, 0x43, 0x18, 0x42, 0x00,
  0x38, 0xE2, 0x08, 0x22, 0x03, 0x80, 0x60, 0x14, 0x04, 0x41, 0x04, 0xF3,
  0xC0, 0x38, 0xF1, 0x02, 0x10, 0x41, 0x08, 0x10, 0x80, 0x90, 0x0A, 0x00,
  0xA0, 0x04, 0x00, 0x80, 0x08, 0x01, 0x00, 0xF8, 0x00, 0x7F, 0x42, 0x04,
  0x08, 0x10, 0x20, 0x40, 0x82, 0xFE, 0x04, 0x21, 0x04, 0x10, 0x41, 0x08,
  0xC0, 0x82, 0x10, 0x41, 0x06, 0x00, 0x04, 0x92, 0x52, 0x49, 0x49, 0x00,
  0x0C, 0x08, 0x10, 0x20, 0x81, 0x02, 0x04, 0x06, 0x10, 0x40, 0x81, 0x04,
  0x38, 0x00, 0x70, 0x4C, 0x81, 0x80 };

const GFXglyph FreeMonoOblique10pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,  12,    0,    0 },   // 0x20 ' '
  {     1,   4,  12,  12,    5,  -11 },   // 0x21 '!'
  {     7,   7,   6,  12,    4,  -11 },   // 0x22 '"'
  {    13,   9,  13,  12,    3,  -11 },   // 0x23 '#'
  {    28,   9,  14,  12,    3,  -12 },   // 0x24 '$'
  {    44,   9,  13,  12,    3,  -12 },   // 0x25 '%'
  {    59,   7,  11,  12,    3,  -10 },   // 0x26 '&'
  {    69,   3,   6,  12,    7,  -11 },   // 0x27 '''
  {    72,   4,  14,  12,    7,  -11 },   // 0x28 '('
  {    79,   4,  14,  12,    3,  -11 },   // 0x29 ')'
  {    86,   8,   7,  12,    4,  -11 },   // 0x2A '*'
  {    93,   9,   9,  12,    3,   -9 },   // 0x2B '+'
  {   104,   5,   6,  12,    2,   -2 },   // 0x2C ','
  {   108,   9,   1,  12,    3,   -5 },   // 0x2D '-'
  {   110,   3,   3,  12,    5,   -2 },   // 0x2E '.'
  {   112,  11,  15,  12,    2,  -12 },   // 0x2F '/'
  {   133,   9,  13,  12,    3,  -12 },   // 0x30 '0'
  {   148,   8,  12,  12,    2,  -11 },   // 0x31 '1'
  {   160,  10,  13,  12,    2,  -12 },   // 0x32 '2'
  {   177,  10,  13,  12,    2,  -12 },   // 0x33 '3'
  {   194,   8,  13,  12,    3,  -12 },   // 0x34 '4'
  {   207,  10,  13,  12,    2,  -12 },   // 0x35 '5'
  {   224,   9,  13,  12,    4,  -12 },   // 0x36 '6'
  {   239,   8,  13,  12,    4,  -12 },   // 0x37 '7'
  {   252,   9,  13,  12,    3,  -12 },   // 0x38 '8'
  {   267,  10,  13,  12,    2,  -12 },   // 0x39 '9'
  {   284,   4,   9,  12,    5,   -8 },   // 0x3A ':'
  {   289,   6,  12,  12,    3,   -8 },   // 0x3B ';'
  {   298,  10,   9,  12,    3,   -9 },   // 0x3C '<'
  {   310,  11,   4,  12,    2,   -7 },   // 0x3D '='
  {   316,  10,   9,  12,    2,   -9 },   // 0x3E '>'
  {   328,   7,  12,  12,    5,  -11 },   // 0x3F '?'
  {   339,   8,  14,  12,    3,  -12 },   // 0x40 '@'
  {   353,  12,  12,  12,    0,  -11 },   // 0x41 'A'
  {   371,  11,  12,  12,    1,  -11 },   // 0x42 'B'
  {   388,  11,  12,  12,    2,  -11 },   // 0x43 'C'
  {   405,  11,  12,  12,    1,  -11 },   // 0x44 'D'
  {   422,  11,  12,  12,    1,  -11 },   // 0x45 'E'
  {   439,  12,  12,  12,    1,  -11 },   // 0x46 'F'
  {   457,  10,  12,  12,    2,  -11 },   // 0x47 'G'
  {   472,  12,  12,  12,    1,  -11 },   // 0x48 'H'
  {   490,  10,  12,  12,    2,  -11 },   // 0x49 'I'
  {   505,  12,  12,  12,    2,  -11 },   // 0x4A 'J'
  {   523,  12,  12,  12,    1,  -11 },   // 0x4B 'K'
  {   541,  11,  12,  12,    1,  -11 },   // 0x4C 'L'
  {   558,  14,  12,  12,    0,  -11 },   // 0x4D 'M'
  {   579,  13,  12,  12,    1,  -11 },   // 0x4E 'N'
  {   599,  10,  12,  12,    2,  -11 },   // 0x4F 'O'
  {   614,  11,  12,  12,    1,  -11 },   // 0x50 'P'
  {   631,  10,  15,  12,    2,  -11 },   // 0x51 'Q'
  {   650,  11,  12,  12,    1,  -11 },   // 0x52 'R'
  {   667,  10,  12,  12,    2,  -11 },   // 0x53 'S'
  {   682,  10,  12,  12,    3,  -11 },   // 0x54 'T'
  {   697,  11,  12,  12,    3,  -11 },   // 0x55 'U'
  {   714,  12,  12,  12,    2,  -11 },   // 0x56 'V'
  {   732,  12,  12,  12,    2,  -11 },   // 0x57 'W'
  {   750,  12,  12,  12,    1,  -11 },   // 0x58 'X'
  {   768,  10,  12,  12,    3,  -11 },   // 0x59 'Y'
  {   783,  10,  12,  12,    2,  -11 },   // 0x5A 'Z'
  {   798,   6,  15,  12,    5,  -12 },   // 0x5B '['
  {   810,   4,  15,  12,    5,  -12 },   // 0x5C '\'
  {   818,   6,  15,  12,    3,  -12 },   // 0x5D ']'
  {   830,   7,   5,  12,    4,  -11 },   // 0x5E '^'
  {   835,  13,   1,  12,   -1,    3 },   // 0x5F '_'
  {   837,   3,   3,  12,    5,  -12 },   // 0x60 '`'
  {   839,  10,   9,  12,    2,   -8 },   // 0x61 'a'
  {   851,  11,  13,  12,    1,  -12 },   // 0x62 'b'
  {   869,  11,   9,  12,    2,   -8 },   // 0x63 'c'
  {   882,  11,  13,  12,    2,  -12 },   // 0x64 'd'
  {   900,  10,   9,  12,    2,   -8 },   // 0x65 'e'
  {   912,  11,  13,  12,    2,  -12 },   // 0x66 'f'
  {   930,  11,  13,  12,    2,   -8 },   // 0x67 'g'
  {   948,  11,  13,  12,    1,  -12 },   // 0x68 'h'
  {   966,   8,  12,  12,    2,  -11 },   // 0x69 'i'
  {   978,   9,  16,  12,    2,  -11 },   // 0x6A 'j'
  {   996,  11,  13,  12,    1,  -12 },   // 0x6B 'k'
  {  1014,   8,  13,  12,    2,  -12 },   // 0x6C 'l'
  {  1027,  12,   9,  12,    0,   -8 },   // 0x6D 'm'
  {  1041,  10,   9,  12,    1,   -8 },   // 0x6E 'n'
  {  1053,  10,   9,  12,    2,   -8 },   // 0x6F 'o'
  {  1065,  12,  13,  12,    0,   -8 },   // 0x70 'p'
  {  1085,  11,  13,  12,    2,   -8 },   // 0x71 'q'
  {  1103,  10,   9,  12,    2,   -8 },   // 0x72 'r'
  {  1115,   9,   9,  12,    2,   -8 },   // 0x73 's'
  {  1126,   8,  12,  12,    2,  -11 },   // 0x74 't'
  {  1138,  10,   9,  12,    2,   -8 },   // 0x75 'u'
  {  1150,  11,   9,  12,    2,   -8 },   // 0x76 'v'
  {  1163,  11,   9,  12,    2,   -8 },   // 0x77 'w'
  {  1176,  11,   9,  12,    1,   -8 },   // 0x78 'x'
  {  1189,  12,  13,  12,    1,   -8 },   // 0x79 'y'
  {  1209,   8,   9,  12,    3,   -8 },   // 0x7A 'z'
  {  1218,   6,  15,  12,    4,  -12 },   // 0x7B '{'
  {  1230,   3,  14,  12,    5,  -11 },   // 0x7C '|'
  {  1236,   7,  15,  12,    3,  -12 },   // 0x7D '}'
  {  1250,   9,   3,  12,    3,   -6 } }; // 0x7E '~'

const GFXfont FreeMonoOblique10pt7b PROGMEM = {
  (uint8_t  *)FreeMonoOblique10pt7bBitmaps,
  (GFXglyph *)FreeMonoOblique10pt7bGlyphs,
  0x20, 0x7E, 20 };

// Approx. 1926 bytes

#endif // FreeMonoOblique10pt7b_H
