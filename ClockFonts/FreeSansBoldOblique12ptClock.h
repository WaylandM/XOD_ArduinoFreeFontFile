#ifndef FreeSansBoldOblique12pt7b_H
#define FreeSansBoldOblique12pt7b_H

#ifdef __AVR__
#include <avr/io.h>
#include <avr/pgmspace.h>
#elif defined(ESP8266)
#include <pgmspace.h>
#elif defined(__IMXRT1052__) || defined(__IMXRT1062__)
// PROGMEM is defefind for T4 to place data in specific memory section
#undef PROGMEM
#define PROGMEM
#else
#define PROGMEM
#endif

const uint8_t FreeSansBoldOblique12pt7bBitmaps[] PROGMEM = {
  0x03, 0xC0, 0x7F, 0x87, 0xFE, 0x78, 0xF3, 0xC7, 0xBC, 0x3D, 0xE1, 0xEF,
  0x0F, 0xF0, 0x7F, 0x87, 0xBC, 0x3D, 0xE1, 0xEF, 0x1E, 0x78, 0xF3, 0xFF,
  0x0F, 0xF0, 0x3E, 0x00, 0x03, 0x83, 0x83, 0xCF, 0xEF, 0xF0, 0x78, 0x38,
  0x1C, 0x0E, 0x0F, 0x07, 0x03, 0x81, 0xC1, 0xE0, 0xF0, 0x70, 0x38, 0x00,
  0x03, 0xF0, 0x0F, 0xF8, 0x7F, 0xF8, 0xF1, 0xF3, 0xC1, 0xE7, 0x83, 0xC0,
  0x07, 0x80, 0x1E, 0x00, 0x78, 0x03, 0xE0, 0x0F, 0x00, 0x78, 0x01, 0xE0,
  0x07, 0x00, 0x1F, 0xFC, 0x3F, 0xF8, 0xFF, 0xF0, 0x07, 0xE0, 0xFF, 0x8F,
  0xFE, 0xF8, 0xF7, 0x87, 0x80, 0x78, 0x0F, 0x80, 0xFC, 0x07, 0xE0, 0x0F,
  0x80, 0x3C, 0x01, 0xEF, 0x0F, 0x78, 0xF3, 0xFF, 0x8F, 0xF8, 0x3F, 0x00,
  0x00, 0x78, 0x07, 0xC0, 0x7E, 0x03, 0xF0, 0x37, 0x03, 0x38, 0x31, 0xC3,
  0x9E, 0x38, 0xF1, 0x87, 0x1F, 0xFE, 0xFF, 0xF7, 0xFF, 0x80, 0xF0, 0x07,
  0x00, 0x38, 0x03, 0xC0, 0x07, 0xFC, 0x1F, 0xF0, 0xFF, 0xC3, 0x00, 0x1C,
  0x00, 0x7F, 0x81, 0xFF, 0x0F, 0xFE, 0x38, 0xF8, 0x01, 0xE0, 0x07, 0x80,
  0x1E, 0xF0, 0xF3, 0xC7, 0xCF, 0xFE, 0x1F, 0xF0, 0x3F, 0x00, 0x03, 0xE0,
  0x7F, 0x87, 0xFE, 0x78, 0xF3, 0xC0, 0x3D, 0xE1, 0xFF, 0x8F, 0xFE, 0xF9,
  0xF7, 0xC7, 0xBC, 0x3D, 0xE1, 0xEF, 0x1E, 0x7C, 0xF3, 0xFF, 0x0F, 0xF0,
  0x1F, 0x00, 0x7F, 0xFB, 0xFF, 0xDF, 0xFE, 0x00, 0xE0, 0x0E, 0x00, 0xE0,
  0x0E, 0x00, 0xE0, 0x0F, 0x00, 0x70, 0x07, 0x00, 0x78, 0x03, 0x80, 0x3C,
  0x01, 0xC0, 0x0E, 0x00, 0xF0, 0x00, 0x03, 0xF0, 0x1F, 0xE0, 0xFF, 0xC7,
  0x8F, 0x1C, 0x3C, 0x71, 0xE0, 0xFF, 0x03, 0xF8, 0x3F, 0xF1, 0xE1, 0xE7,
  0x87, 0xBC, 0x1E, 0xF0, 0x7B, 0xE3, 0xCF, 0xFF, 0x1F, 0xF8, 0x1F, 0x80,
  0x03, 0xE0, 0x3F, 0xE1, 0xFF, 0x8F, 0x9F, 0x3C, 0x3D, 0xE0, 0xF7, 0x83,
  0xDE, 0x1F, 0x7C, 0xFD, 0xFF, 0xE3, 0xFF, 0x87, 0xDE, 0x00, 0xF3, 0xC7,
  0x8F, 0xFE, 0x1F, 0xF0, 0x3F, 0x00, 0x1C, 0xF3, 0x80, 0x00, 0x00, 0x00,
  0x01, 0xCF, 0x38 };

const GFXglyph FreeSansBoldOblique12pt7bGlyphs[] PROGMEM = {
  {     0,  13,  17,  13,    2,  -16 },   // 0x30 '0'
  {    28,   9,  17,  13,    4,  -16 },   // 0x31 '1'
  {    48,  15,  17,  13,    1,  -16 },   // 0x32 '2'
  {    80,  13,  17,  13,    2,  -16 },   // 0x33 '3'
  {   108,  13,  17,  13,    1,  -16 },   // 0x34 '4'
  {   136,  14,  17,  13,    1,  -16 },   // 0x35 '5'
  {   166,  13,  17,  13,    2,  -16 },   // 0x36 '6'
  {   194,  13,  17,  13,    3,  -16 },   // 0x37 '7'
  {   222,  14,  17,  13,    1,  -16 },   // 0x38 '8'
  {   252,  14,  17,  13,    2,  -16 },   // 0x39 '9'
  {   282,   6,  12,   8,    3,  -11 } }; // 0x3A ':'

const GFXfont FreeSansBoldOblique12pt7b PROGMEM = {
  (uint8_t  *)FreeSansBoldOblique12pt7bBitmaps,
  (GFXglyph *)FreeSansBoldOblique12pt7bGlyphs,
  0x30, 0x3A, 28 };

// Approx. 375 bytes

#endif // FreeSansBoldOblique12pt7b_H
