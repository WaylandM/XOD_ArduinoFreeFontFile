#ifndef FreeMonoBold14pt7b_H
#define FreeMonoBold14pt7b_H

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

const uint8_t FreeMonoBold14pt7bBitmaps[] PROGMEM = {
  0x0F, 0x03, 0xFC, 0x7F, 0xE7, 0x9E, 0xF0, 0xFE, 0x07, 0xE0, 0x7E, 0x07,
  0xE0, 0x7E, 0x07, 0xE0, 0x7E, 0x07, 0xE0, 0x7F, 0x0F, 0x79, 0xE7, 0xFE,
  0x3F, 0xC1, 0xF0, 0x1E, 0x07, 0xC3, 0xF8, 0x77, 0x08, 0xE0, 0x1C, 0x03,
  0x80, 0x70, 0x0E, 0x01, 0xC0, 0x38, 0x07, 0x00, 0xE0, 0x1C, 0x3F, 0xFF,
  0xFF, 0xFF, 0xE0, 0x1F, 0x07, 0xFC, 0xFF, 0xEF, 0x0F, 0xE0, 0x70, 0x07,
  0x00, 0x70, 0x0F, 0x01, 0xE0, 0x3C, 0x07, 0x80, 0xF0, 0x1E, 0x03, 0x80,
  0xF0, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x0F, 0xF8, 0xFF, 0xCC, 0x1E,
  0x00, 0xE0, 0x0E, 0x01, 0xE0, 0xFC, 0x0F, 0x80, 0xFC, 0x01, 0xE0, 0x07,
  0x00, 0x70, 0x07, 0xC0, 0xFF, 0xFE, 0xFF, 0xC3, 0xF8, 0x03, 0xC0, 0x7C,
  0x07, 0xC0, 0xFC, 0x0D, 0xC1, 0xDC, 0x39, 0xC3, 0x9C, 0x71, 0xC6, 0x1C,
  0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x1C, 0x07, 0xF0, 0x7F, 0x07, 0xF0, 0x7F,
  0xC3, 0xFE, 0x1F, 0xF0, 0xE0, 0x07, 0x00, 0x3F, 0xC1, 0xFF, 0x8F, 0xFE,
  0x70, 0x70, 0x01, 0xC0, 0x0E, 0x00, 0x70, 0x03, 0xF0, 0x3F, 0xFF, 0xDF,
  0xFC, 0x3F, 0x80, 0x03, 0xE0, 0xFF, 0x1F, 0xF3, 0xE0, 0x78, 0x07, 0x00,
  0x77, 0x8E, 0xFC, 0xFF, 0xEF, 0x8F, 0xF0, 0x7E, 0x07, 0x70, 0x77, 0x0F,
  0x3F, 0xE3, 0xFC, 0x0F, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0x00,
  0xE0, 0x0E, 0x00, 0xE0, 0x1C, 0x01, 0xC0, 0x1C, 0x03, 0x80, 0x38, 0x03,
  0x80, 0x70, 0x07, 0x00, 0x70, 0x06, 0x00, 0x1F, 0x83, 0xFC, 0x7F, 0xEF,
  0x0F, 0xE0, 0x7E, 0x07, 0xE0, 0x77, 0x0E, 0x3F, 0xC1, 0xF8, 0x7F, 0xEF,
  0x0F, 0xE0, 0x7E, 0x07, 0xF0, 0xF7, 0xFE, 0x7F, 0xE1, 0xF8, 0x1F, 0x03,
  0xF8, 0x7F, 0xCF, 0x1E, 0xE0, 0xEE, 0x06, 0xE0, 0x7E, 0x0F, 0xF1, 0xF7,
  0xFF, 0x3F, 0x71, 0xEE, 0x00, 0xE0, 0x1E, 0x07, 0xCF, 0xF8, 0xFF, 0x07,
  0xC0, 0x6F, 0xF6, 0x00, 0x00, 0x6F, 0xF6 };

const GFXglyph FreeMonoBold14pt7bGlyphs[] PROGMEM = {
  {     0,  12,  18,  16,    2,  -17 },   // 0x30 '0'
  {    27,  11,  17,  16,    3,  -16 },   // 0x31 '1'
  {    51,  12,  18,  16,    2,  -17 },   // 0x32 '2'
  {    78,  12,  18,  16,    3,  -17 },   // 0x33 '3'
  {   105,  12,  17,  16,    2,  -16 },   // 0x34 '4'
  {   131,  13,  17,  16,    2,  -16 },   // 0x35 '5'
  {   159,  12,  17,  16,    3,  -16 },   // 0x36 '6'
  {   185,  12,  17,  16,    2,  -16 },   // 0x37 '7'
  {   211,  12,  18,  16,    2,  -17 },   // 0x38 '8'
  {   238,  12,  18,  16,    3,  -17 },   // 0x39 '9'
  {   265,   4,  12,  16,    6,  -11 } }; // 0x3A ':'

const GFXfont FreeMonoBold14pt7b PROGMEM = {
  (uint8_t  *)FreeMonoBold14pt7bBitmaps,
  (GFXglyph *)FreeMonoBold14pt7bGlyphs,
  0x30, 0x3A, 27 };

// Approx. 355 bytes

#endif // FreeMonoBold14pt7b_H
