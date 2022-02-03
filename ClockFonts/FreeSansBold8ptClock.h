#ifndef FreeSansBold8pt7b_H
#define FreeSansBold8pt7b_H

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

const uint8_t FreeSansBold8pt7bBitmaps[] PROGMEM = {
  0x3C, 0x7E, 0xE7, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xE7, 0x7E, 0x3C,
  0x13, 0xFF, 0x33, 0x33, 0x33, 0x33, 0x38, 0xFB, 0x1E, 0x30, 0x60, 0xC3,
  0x1C, 0x70, 0xC3, 0xFF, 0xF0, 0x7D, 0xFF, 0x18, 0x30, 0x63, 0x87, 0x03,
  0x07, 0x8F, 0xFB, 0xE0, 0x1C, 0x38, 0xF1, 0x66, 0xC9, 0xA3, 0x7F, 0xFE,
  0x18, 0x30, 0x60, 0x3F, 0x3F, 0x60, 0x60, 0x7C, 0x7E, 0x67, 0x03, 0x03,
  0xE7, 0x7E, 0x3C, 0x38, 0xF9, 0x9E, 0x0D, 0xDF, 0xB1, 0xE3, 0xC7, 0x8D,
  0xF1, 0xC0, 0xFF, 0xFF, 0x06, 0x06, 0x0C, 0x0C, 0x18, 0x18, 0x18, 0x30,
  0x30, 0x30, 0x3C, 0xFF, 0xC3, 0xC3, 0x7E, 0x7E, 0xE7, 0xC3, 0xC3, 0xE7,
  0x7E, 0x3C, 0x3C, 0x7E, 0xE7, 0xC3, 0xC3, 0xE7, 0x7F, 0x3B, 0x03, 0xC6,
  0x7E, 0x3C, 0xF0, 0x0F };

const GFXglyph FreeSansBold8pt7bGlyphs[] PROGMEM = {
  {     0,   8,  12,   9,    0,  -11 },   // 0x30 '0'
  {    12,   4,  12,   9,    2,  -11 },   // 0x31 '1'
  {    18,   7,  12,   9,    1,  -11 },   // 0x32 '2'
  {    29,   7,  12,   9,    1,  -11 },   // 0x33 '3'
  {    40,   7,  12,   9,    1,  -11 },   // 0x34 '4'
  {    51,   8,  12,   9,    0,  -11 },   // 0x35 '5'
  {    63,   7,  12,   9,    1,  -11 },   // 0x36 '6'
  {    74,   8,  12,   9,    0,  -11 },   // 0x37 '7'
  {    86,   8,  12,   9,    0,  -11 },   // 0x38 '8'
  {    98,   8,  12,   9,    0,  -11 },   // 0x39 '9'
  {   110,   2,   8,   4,    1,   -7 } }; // 0x3A ':'

const GFXfont FreeSansBold8pt7b PROGMEM = {
  (uint8_t  *)FreeSansBold8pt7bBitmaps,
  (GFXglyph *)FreeSansBold8pt7bGlyphs,
  0x30, 0x3A, 19 };

// Approx. 196 bytes

#endif // FreeSansBold8pt7b_H
