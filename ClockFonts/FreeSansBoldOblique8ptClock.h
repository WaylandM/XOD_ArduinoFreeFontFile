#ifndef FreeSansBoldOblique8pt7b_H
#define FreeSansBoldOblique8pt7b_H

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

const uint8_t FreeSansBoldOblique8pt7bBitmaps[] PROGMEM = {
  0x0F, 0x1F, 0xCC, 0x6C, 0x36, 0x1F, 0x0F, 0x0F, 0x86, 0xC3, 0x63, 0x3F,
  0x8F, 0x00, 0x1F, 0xFE, 0x73, 0x18, 0xC6, 0x73, 0x18, 0x0F, 0x87, 0xF3,
  0x8C, 0xC3, 0x00, 0xC0, 0x60, 0x30, 0x38, 0x38, 0x1C, 0x07, 0xFB, 0xFC,
  0x1F, 0x1F, 0xD8, 0x60, 0x30, 0x30, 0x70, 0x7C, 0x06, 0x03, 0x63, 0xBF,
  0x8F, 0x80, 0x03, 0x03, 0x82, 0xC2, 0x62, 0x73, 0x33, 0xFD, 0xFE, 0x0E,
  0x06, 0x03, 0x00, 0x1F, 0x9F, 0xCC, 0x05, 0xC7, 0xF3, 0x18, 0x0C, 0x06,
  0xC6, 0x7F, 0x1E, 0x00, 0x0F, 0x0F, 0xCC, 0x6C, 0x06, 0xE3, 0xFB, 0x8D,
  0x86, 0xC3, 0x63, 0x3F, 0x8F, 0x00, 0x7F, 0xBF, 0xC0, 0xC0, 0xC0, 0xC0,
  0xC0, 0xC0, 0x60, 0x60, 0x30, 0x38, 0x00, 0x1F, 0x1F, 0xD8, 0x6C, 0x33,
  0xF3, 0xF9, 0x8D, 0x86, 0xC3, 0x63, 0x3F, 0x8F, 0x00, 0x0F, 0x1F, 0xCC,
  0x6C, 0x36, 0x1B, 0x1D, 0xFE, 0x76, 0x03, 0x63, 0x3F, 0x0F, 0x00, 0x6C,
  0x00, 0x36 };

const GFXglyph FreeSansBoldOblique8pt7bGlyphs[] PROGMEM = {
  {     0,   9,  12,   9,    1,  -11 },   // 0x30 '0'
  {    14,   5,  11,   9,    3,  -10 },   // 0x31 '1'
  {    21,  10,  12,   9,    0,  -11 },   // 0x32 '2'
  {    36,   9,  12,   9,    1,  -11 },   // 0x33 '3'
  {    50,   9,  11,   9,    1,  -10 },   // 0x34 '4'
  {    63,   9,  11,   9,    1,  -10 },   // 0x35 '5'
  {    76,   9,  12,   9,    1,  -11 },   // 0x36 '6'
  {    90,   9,  11,   9,    2,  -10 },   // 0x37 '7'
  {   103,   9,  12,   9,    1,  -11 },   // 0x38 '8'
  {   117,   9,  12,   9,    1,  -11 },   // 0x39 '9'
  {   131,   3,   8,   5,    2,   -7 } }; // 0x3A ':'

const GFXfont FreeSansBoldOblique8pt7b PROGMEM = {
  (uint8_t  *)FreeSansBoldOblique8pt7bBitmaps,
  (GFXglyph *)FreeSansBoldOblique8pt7bGlyphs,
  0x30, 0x3A, 19 };

// Approx. 218 bytes

#endif // FreeSansBoldOblique8pt7b_H
