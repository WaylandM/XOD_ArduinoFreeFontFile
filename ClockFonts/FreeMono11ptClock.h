#ifndef FreeMono11pt7b_H
#define FreeMono11pt7b_H

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

const uint8_t FreeMono11pt7bBitmaps[] PROGMEM = {
  0x1C, 0x31, 0x90, 0x50, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x80, 0xC0, 0x60,
  0x28, 0x26, 0x30, 0xE0, 0x10, 0x61, 0x44, 0x81, 0x02, 0x04, 0x08, 0x10,
  0x20, 0x40, 0x81, 0x1F, 0xC0, 0x3E, 0x31, 0xA0, 0x70, 0x10, 0x08, 0x0C,
  0x04, 0x04, 0x04, 0x0C, 0x08, 0x08, 0x08, 0x0B, 0xFC, 0x3C, 0x61, 0x00,
  0x40, 0x20, 0x10, 0x10, 0x30, 0x04, 0x01, 0x00, 0x40, 0x20, 0x1C, 0x31,
  0xF0, 0x0C, 0x28, 0x51, 0x24, 0x48, 0xA1, 0x42, 0x85, 0xFC, 0x10, 0x20,
  0x43, 0xC0, 0x7E, 0x20, 0x10, 0x08, 0x04, 0x02, 0xF1, 0x84, 0x01, 0x00,
  0x80, 0x40, 0x30, 0x3C, 0x31, 0xF0, 0x0F, 0x30, 0x20, 0x40, 0x40, 0x80,
  0x9C, 0xA2, 0xC1, 0x81, 0x81, 0x41, 0x62, 0x3C, 0xFF, 0xC0, 0x40, 0x20,
  0x20, 0x10, 0x08, 0x08, 0x04, 0x02, 0x02, 0x01, 0x00, 0x80, 0x80, 0x40,
  0x3E, 0x20, 0xA0, 0x30, 0x18, 0x0A, 0x08, 0xF8, 0xC6, 0x80, 0xC0, 0x60,
  0x30, 0x16, 0x31, 0xF0, 0x3C, 0x46, 0x82, 0x81, 0x81, 0x83, 0x45, 0x39,
  0x01, 0x02, 0x02, 0x04, 0x0C, 0xF0, 0xFF, 0x80, 0x3F, 0xE0 };

const GFXglyph FreeMono11pt7bGlyphs[] PROGMEM = {
  {     0,   9,  14,  13,    2,  -13 },   // 0x30 '0'
  {    16,   7,  14,  13,    3,  -13 },   // 0x31 '1'
  {    29,   9,  14,  13,    2,  -13 },   // 0x32 '2'
  {    45,   9,  14,  13,    2,  -13 },   // 0x33 '3'
  {    61,   7,  14,  13,    3,  -13 },   // 0x34 '4'
  {    74,   9,  14,  13,    2,  -13 },   // 0x35 '5'
  {    90,   8,  14,  13,    3,  -13 },   // 0x36 '6'
  {   104,   9,  14,  13,    2,  -13 },   // 0x37 '7'
  {   120,   9,  14,  13,    2,  -13 },   // 0x38 '8'
  {   136,   8,  14,  13,    3,  -13 },   // 0x39 '9'
  {   150,   3,   9,  13,    5,   -8 } }; // 0x3A ':'

const GFXfont FreeMono11pt7b PROGMEM = {
  (uint8_t  *)FreeMono11pt7bBitmaps,
  (GFXglyph *)FreeMono11pt7bGlyphs,
  0x30, 0x3A, 22 };

// Approx. 238 bytes

#endif // FreeMono11pt7b_H
