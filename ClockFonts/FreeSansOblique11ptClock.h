#ifndef FreeSansOblique11pt7b_H
#define FreeSansOblique11pt7b_H

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

const uint8_t FreeSansOblique11pt7bBitmaps[] PROGMEM = {
  0x07, 0x83, 0xF8, 0x63, 0x98, 0x37, 0x06, 0xC0, 0xD8, 0x1B, 0x03, 0xC0,
  0xF8, 0x1B, 0x03, 0x60, 0x6C, 0x19, 0xC7, 0x1F, 0xC1, 0xE0, 0x04, 0x33,
  0xBE, 0xF8, 0x61, 0x8C, 0x30, 0xC3, 0x0C, 0x61, 0x86, 0x18, 0x03, 0xE0,
  0x7F, 0x83, 0x0E, 0x30, 0x31, 0x81, 0x80, 0x0C, 0x00, 0xC0, 0x0E, 0x01,
  0xC0, 0x3C, 0x03, 0x80, 0x70, 0x07, 0x00, 0x30, 0x01, 0xFF, 0x9F, 0xFC,
  0x07, 0x83, 0xF8, 0xE1, 0x98, 0x36, 0x06, 0x01, 0x81, 0xE0, 0x3C, 0x01,
  0xC0, 0x18, 0x03, 0x60, 0x6C, 0x19, 0xC7, 0x1F, 0xC1, 0xF0, 0x00, 0x20,
  0x06, 0x00, 0xE0, 0x1E, 0x03, 0x40, 0x6C, 0x0C, 0xC1, 0x8C, 0x30, 0xC6,
  0x08, 0x7F, 0xF7, 0xFE, 0x01, 0x80, 0x18, 0x03, 0x00, 0x30, 0x0F, 0xF0,
  0xFF, 0x18, 0x01, 0x80, 0x10, 0x03, 0x78, 0x3F, 0xC3, 0x0E, 0x00, 0x60,
  0x06, 0x00, 0x60, 0x06, 0xC0, 0xCE, 0x18, 0x7F, 0x83, 0xE0, 0x03, 0xC0,
  0xFE, 0x1C, 0x73, 0x83, 0x30, 0x06, 0x00, 0x67, 0x87, 0xFC, 0xF0, 0xEE,
  0x06, 0xC0, 0x6C, 0x06, 0xC0, 0xCE, 0x1C, 0x7F, 0x83, 0xE0, 0x7F, 0xF7,
  0xFE, 0x00, 0x60, 0x0C, 0x01, 0x80, 0x30, 0x02, 0x00, 0x60, 0x0C, 0x01,
  0x80, 0x18, 0x03, 0x00, 0x30, 0x06, 0x00, 0x60, 0x0C, 0x00, 0x07, 0x83,
  0xF8, 0x61, 0x98, 0x33, 0x06, 0x61, 0x87, 0xE1, 0xFC, 0x71, 0xCC, 0x1B,
  0x03, 0x60, 0x6C, 0x19, 0xC7, 0x1F, 0xC1, 0xF0, 0x0F, 0x83, 0xF8, 0xE3,
  0x98, 0x36, 0x06, 0xC0, 0xD8, 0x3B, 0x8F, 0x3F, 0xC3, 0xD8, 0x03, 0x00,
  0xEC, 0x19, 0xC6, 0x1F, 0xC1, 0xE0, 0x77, 0x00, 0x00, 0x00, 0x0E, 0xE0 };

const GFXglyph FreeSansOblique11pt7bGlyphs[] PROGMEM = {
  {     0,  11,  16,  12,    2,  -15 },   // 0x30 '0'
  {    22,   6,  16,  12,    5,  -15 },   // 0x31 '1'
  {    34,  13,  16,  12,    1,  -15 },   // 0x32 '2'
  {    60,  11,  16,  12,    2,  -15 },   // 0x33 '3'
  {    82,  12,  16,  12,    1,  -15 },   // 0x34 '4'
  {   106,  12,  16,  12,    2,  -15 },   // 0x35 '5'
  {   130,  12,  16,  12,    2,  -15 },   // 0x36 '6'
  {   154,  12,  16,  12,    3,  -15 },   // 0x37 '7'
  {   178,  11,  16,  12,    2,  -15 },   // 0x38 '8'
  {   200,  11,  16,  12,    2,  -15 },   // 0x39 '9'
  {   222,   4,  11,   6,    3,  -10 } }; // 0x3A ':'

const GFXfont FreeSansOblique11pt7b PROGMEM = {
  (uint8_t  *)FreeSansOblique11pt7bBitmaps,
  (GFXglyph *)FreeSansOblique11pt7bGlyphs,
  0x30, 0x3A, 26 };

// Approx. 312 bytes

#endif // FreeSansOblique11pt7b_H
