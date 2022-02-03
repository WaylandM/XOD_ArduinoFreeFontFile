#ifndef FreeSerifItalic24pt7b_H
#define FreeSerifItalic24pt7b_H

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

const uint8_t FreeSerifItalic24pt7bBitmaps[] PROGMEM = {
  0x00, 0x1F, 0x80, 0x03, 0x86, 0x00, 0x30, 0x18, 0x03, 0x00, 0xC0, 0x38,
  0x03, 0x03, 0x80, 0x18, 0x38, 0x00, 0xE1, 0xC0, 0x07, 0x1C, 0x00, 0x38,
  0xE0, 0x01, 0xCF, 0x00, 0x0E, 0x70, 0x00, 0x77, 0x80, 0x07, 0xBC, 0x00,
  0x3D, 0xE0, 0x01, 0xEE, 0x00, 0x0F, 0xF0, 0x00, 0x77, 0x80, 0x07, 0xBC,
  0x00, 0x3D, 0xC0, 0x01, 0xCE, 0x00, 0x1E, 0x70, 0x00, 0xF3, 0x80, 0x07,
  0x1C, 0x00, 0x78, 0xE0, 0x03, 0x83, 0x00, 0x38, 0x18, 0x03, 0x80, 0xE0,
  0x18, 0x03, 0x01, 0x80, 0x0C, 0x38, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00,
  0x80, 0x1F, 0xC0, 0x3F, 0xE0, 0x01, 0xF0, 0x00, 0xF0, 0x00, 0x78, 0x00,
  0x3C, 0x00, 0x1C, 0x00, 0x1E, 0x00, 0x0F, 0x00, 0x07, 0x80, 0x07, 0x80,
  0x03, 0xC0, 0x01, 0xE0, 0x00, 0xF0, 0x00, 0xF0, 0x00, 0x78, 0x00, 0x3C,
  0x00, 0x3C, 0x00, 0x1E, 0x00, 0x0F, 0x00, 0x07, 0x80, 0x07, 0x80, 0x03,
  0xC0, 0x01, 0xE0, 0x01, 0xE0, 0x00, 0xF0, 0x00, 0x78, 0x00, 0x3C, 0x00,
  0x3C, 0x00, 0x3F, 0x01, 0xFF, 0xF0, 0x00, 0x3F, 0x00, 0x07, 0xFE, 0x00,
  0x7F, 0xF8, 0x07, 0x07, 0xE0, 0x60, 0x1F, 0x06, 0x00, 0x7C, 0x20, 0x01,
  0xE0, 0x00, 0x0F, 0x00, 0x00, 0x78, 0x00, 0x03, 0xC0, 0x00, 0x1C, 0x00,
  0x01, 0xE0, 0x00, 0x0E, 0x00, 0x00, 0xF0, 0x00, 0x07, 0x00, 0x00, 0x70,
  0x00, 0x07, 0x00, 0x00, 0x70, 0x00, 0x03, 0x00, 0x00, 0x30, 0x00, 0x03,
  0x00, 0x00, 0x30, 0x00, 0x03, 0x00, 0x00, 0x30, 0x00, 0x03, 0x00, 0x00,
  0x30, 0x01, 0x03, 0x00, 0x08, 0x30, 0x00, 0xC3, 0xFF, 0xFC, 0x3F, 0xFF,
  0xE3, 0xFF, 0xFE, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0xFF, 0xC0, 0x06, 0x0F,
  0x80, 0x30, 0x1E, 0x01, 0x80, 0x3C, 0x00, 0x00, 0xF0, 0x00, 0x03, 0xC0,
  0x00, 0x0F, 0x00, 0x00, 0x78, 0x00, 0x01, 0xE0, 0x00, 0x0E, 0x00, 0x00,
  0xF0, 0x00, 0x0E, 0x00, 0x01, 0xF8, 0x00, 0x3F, 0xF8, 0x00, 0x0F, 0xF0,
  0x00, 0x07, 0xC0, 0x00, 0x0F, 0x80, 0x00, 0x3E, 0x00, 0x00, 0x78, 0x00,
  0x01, 0xE0, 0x00, 0x07, 0x80, 0x00, 0x1E, 0x00, 0x00, 0x70, 0x00, 0x01,
  0xC0, 0x00, 0x07, 0x00, 0x00, 0x38, 0x00, 0x00, 0xC0, 0x78, 0x06, 0x03,
  0xF8, 0x70, 0x07, 0xFF, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x0C, 0x00,
  0x00, 0x70, 0x00, 0x03, 0xC0, 0x00, 0x1F, 0x00, 0x00, 0xF8, 0x00, 0x07,
  0xE0, 0x00, 0x37, 0x80, 0x00, 0xDC, 0x00, 0x06, 0x70, 0x00, 0x33, 0xC0,
  0x01, 0x8F, 0x00, 0x0C, 0x38, 0x00, 0x60, 0xE0, 0x03, 0x07, 0x80, 0x18,
  0x1E, 0x00, 0xC0, 0x70, 0x06, 0x03, 0xC0, 0x30, 0x0F, 0x01, 0x80, 0x38,
  0x0C, 0x00, 0xE0, 0x70, 0x07, 0x81, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xBF,
  0xFF, 0xFE, 0x00, 0x0F, 0x00, 0x00, 0x38, 0x00, 0x00, 0xE0, 0x00, 0x07,
  0x80, 0x00, 0x1E, 0x00, 0x00, 0x70, 0x00, 0x03, 0xC0, 0x00, 0x0F, 0x00,
  0x00, 0x3F, 0xFC, 0x00, 0xFF, 0xF0, 0x07, 0xFF, 0x80, 0x10, 0x00, 0x00,
  0x40, 0x00, 0x02, 0x00, 0x00, 0x08, 0x00, 0x00, 0x70, 0x00, 0x01, 0xF8,
  0x00, 0x0F, 0xF0, 0x00, 0x3F, 0xF0, 0x00, 0x1F, 0xE0, 0x00, 0x1F, 0x80,
  0x00, 0x1F, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x78, 0x00, 0x01, 0xE0, 0x00,
  0x03, 0x80, 0x00, 0x0E, 0x00, 0x00, 0x38, 0x00, 0x00, 0xE0, 0x00, 0x03,
  0x80, 0x00, 0x0C, 0x00, 0x00, 0x70, 0x00, 0x01, 0xC0, 0x00, 0x06, 0x00,
  0x00, 0x30, 0x00, 0x01, 0x80, 0x70, 0x0E, 0x03, 0xF0, 0xE0, 0x07, 0xFF,
  0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x01, 0xF0, 0x00, 0x1F,
  0x00, 0x00, 0xF8, 0x00, 0x03, 0xE0, 0x00, 0x0F, 0x00, 0x00, 0x7C, 0x00,
  0x01, 0xF0, 0x00, 0x03, 0xC0, 0x00, 0x0F, 0x80, 0x00, 0x3E, 0x00, 0x00,
  0xF9, 0xF8, 0x01, 0xFF, 0xFC, 0x07, 0xE0, 0x7C, 0x0F, 0x80, 0x7C, 0x3E,
  0x00, 0x78, 0x78, 0x00, 0x78, 0xF0, 0x00, 0xF3, 0xC0, 0x01, 0xE7, 0x80,
  0x03, 0xCF, 0x00, 0x07, 0x9C, 0x00, 0x0F, 0x38, 0x00, 0x3E, 0x70, 0x00,
  0x78, 0xE0, 0x00, 0xF1, 0xC0, 0x03, 0xC1, 0x80, 0x07, 0x83, 0x00, 0x1E,
  0x03, 0x00, 0x38, 0x06, 0x01, 0xE0, 0x03, 0x07, 0x80, 0x01, 0xF8, 0x00,
  0x1F, 0xFF, 0xF9, 0xFF, 0xFF, 0xCF, 0xFF, 0xFC, 0xE0, 0x00, 0xCC, 0x00,
  0x0E, 0x40, 0x00, 0x60, 0x00, 0x07, 0x00, 0x00, 0x70, 0x00, 0x03, 0x80,
  0x00, 0x38, 0x00, 0x01, 0x80, 0x00, 0x1C, 0x00, 0x01, 0xC0, 0x00, 0x0E,
  0x00, 0x00, 0xE0, 0x00, 0x07, 0x00, 0x00, 0x70, 0x00, 0x07, 0x00, 0x00,
  0x38, 0x00, 0x03, 0x80, 0x00, 0x1C, 0x00, 0x01, 0xC0, 0x00, 0x1E, 0x00,
  0x00, 0xE0, 0x00, 0x0E, 0x00, 0x00, 0x70, 0x00, 0x07, 0x00, 0x00, 0x78,
  0x00, 0x03, 0x80, 0x00, 0x38, 0x00, 0x01, 0xC0, 0x00, 0x1C, 0x00, 0x00,
  0x00, 0x3F, 0x80, 0x03, 0x83, 0x80, 0x1C, 0x03, 0x00, 0xE0, 0x0E, 0x07,
  0x00, 0x1C, 0x1C, 0x00, 0x70, 0x70, 0x01, 0xC1, 0xC0, 0x07, 0x07, 0x80,
  0x1C, 0x1E, 0x00, 0xE0, 0x3E, 0x07, 0x80, 0xFC, 0x38, 0x01, 0xFB, 0xC0,
  0x03, 0xF8, 0x00, 0x0F, 0xE0, 0x00, 0x7F, 0xC0, 0x07, 0x1F, 0x80, 0x78,
  0x3F, 0x03, 0x80, 0x7E, 0x1E, 0x00, 0xF8, 0x70, 0x01, 0xE3, 0x80, 0x03,
  0xCE, 0x00, 0x07, 0x38, 0x00, 0x1C, 0xE0, 0x00, 0x73, 0x80, 0x01, 0xCE,
  0x00, 0x06, 0x1C, 0x00, 0x38, 0x70, 0x01, 0xC0, 0xE0, 0x0E, 0x01, 0xE0,
  0xE0, 0x01, 0xFE, 0x00, 0x00, 0x1F, 0x80, 0x03, 0xC3, 0x00, 0x1C, 0x02,
  0x00, 0xE0, 0x0C, 0x07, 0x00, 0x18, 0x3C, 0x00, 0x60, 0xE0, 0x01, 0xC7,
  0x80, 0x07, 0x1E, 0x00, 0x1C, 0xF0, 0x00, 0x73, 0xC0, 0x01, 0xCF, 0x00,
  0x07, 0x3C, 0x00, 0x3C, 0xF0, 0x00, 0xF3, 0xC0, 0x03, 0xCF, 0x00, 0x1E,
  0x1E, 0x00, 0x78, 0x7C, 0x03, 0xE0, 0xF8, 0x3F, 0x01, 0xFF, 0xBC, 0x03,
  0xF1, 0xE0, 0x00, 0x0F, 0x80, 0x00, 0x3C, 0x00, 0x01, 0xE0, 0x00, 0x0F,
  0x80, 0x00, 0x7C, 0x00, 0x03, 0xE0, 0x00, 0x1F, 0x00, 0x00, 0xF0, 0x00,
  0x0F, 0x80, 0x00, 0x78, 0x00, 0x0F, 0x80, 0x00, 0xE0, 0x00, 0x00, 0x07,
  0x07, 0xC3, 0xE1, 0xF0, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x3E, 0x1F, 0x0F, 0x83, 0x80 };

const GFXglyph FreeSerifItalic24pt7bGlyphs[] PROGMEM = {
  {     0,  21,  31,  23,    2,  -30 },   // 0x30 '0'
  {    82,  17,  32,  23,    2,  -31 },   // 0x31 '1'
  {   150,  21,  31,  24,    0,  -30 },   // 0x32 '2'
  {   232,  22,  32,  23,    0,  -31 },   // 0x33 '3'
  {   320,  22,  32,  23,    0,  -31 },   // 0x34 '4'
  {   408,  22,  32,  24,    0,  -31 },   // 0x35 '5'
  {   496,  23,  32,  23,    1,  -31 },   // 0x36 '6'
  {   588,  21,  32,  23,    4,  -31 },   // 0x37 '7'
  {   672,  22,  32,  23,    1,  -31 },   // 0x38 '8'
  {   760,  22,  33,  23,    1,  -31 },   // 0x39 '9'
  {   851,   9,  22,  12,    2,  -20 } }; // 0x3A ':'

const GFXfont FreeSerifItalic24pt7b PROGMEM = {
  (uint8_t  *)FreeSerifItalic24pt7bBitmaps,
  (GFXglyph *)FreeSerifItalic24pt7bGlyphs,
  0x30, 0x3A, 56 };

// Approx. 960 bytes

#endif // FreeSerifItalic24pt7b_H
