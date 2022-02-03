#ifndef FreeSerifBoldItalic9pt7b_H
#define FreeSerifBoldItalic9pt7b_H

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

const uint8_t FreeSerifBoldItalic9pt7bBitmaps[] PROGMEM = {
  0x0F, 0x0C, 0x8C, 0x6E, 0x37, 0x1B, 0x1F, 0x8F, 0xC7, 0xC7, 0x63, 0xB1,
  0x89, 0x83, 0x80, 0x06, 0x1E, 0x0E, 0x0E, 0x0C, 0x0C, 0x1C, 0x18, 0x18,
  0x18, 0x38, 0x38, 0xFC, 0x1F, 0x13, 0xD0, 0xE0, 0x70, 0x38, 0x38, 0x18,
  0x18, 0x18, 0x08, 0x08, 0x4F, 0xCF, 0xE0, 0x1F, 0x11, 0xC0, 0xE0, 0x60,
  0xC1, 0xF0, 0x38, 0x0C, 0x06, 0x03, 0x01, 0x19, 0x8F, 0x00, 0x00, 0x80,
  0xC0, 0xE1, 0xE0, 0xB0, 0x98, 0x9C, 0x8C, 0xFF, 0x07, 0x03, 0x01, 0x80,
  0x0F, 0x88, 0x08, 0x07, 0x83, 0xE0, 0x78, 0x1C, 0x06, 0x03, 0x01, 0x80,
  0x9C, 0x87, 0x80, 0x03, 0x87, 0x07, 0x07, 0x07, 0x03, 0xE3, 0x99, 0xCC,
  0xC6, 0x63, 0x33, 0x89, 0x87, 0x80, 0x3F, 0xBF, 0x90, 0x80, 0xC0, 0x40,
  0x60, 0x20, 0x30, 0x30, 0x10, 0x18, 0x08, 0x00, 0x1E, 0x13, 0x31, 0x31,
  0x3A, 0x1C, 0x1C, 0x6E, 0xC6, 0xC6, 0xC6, 0x44, 0x38, 0x0E, 0x1C, 0x8C,
  0x6C, 0x36, 0x3B, 0x1D, 0x8E, 0x7E, 0x0E, 0x07, 0x07, 0x0E, 0x0C, 0x00,
  0x39, 0xCE, 0x00, 0x03, 0x9C, 0xE0 };

const GFXglyph FreeSerifBoldItalic9pt7bGlyphs[] PROGMEM = {
  {     0,   9,  13,   9,    0,  -11 },   // 0x30 '0'
  {    15,   8,  13,   9,    0,  -11 },   // 0x31 '1'
  {    28,   9,  13,   9,    0,  -11 },   // 0x32 '2'
  {    43,   9,  13,   9,    0,  -11 },   // 0x33 '3'
  {    58,   9,  12,   9,    0,  -11 },   // 0x34 '4'
  {    72,   9,  13,   9,    0,  -11 },   // 0x35 '5'
  {    87,   9,  13,   9,    1,  -11 },   // 0x36 '6'
  {   102,   9,  12,   9,    1,  -11 },   // 0x37 '7'
  {   116,   8,  13,   9,    0,  -11 },   // 0x38 '8'
  {   129,   9,  13,   9,    0,  -11 },   // 0x39 '9'
  {   144,   5,   9,   5,    0,   -7 } }; // 0x3A ':'

const GFXfont FreeSerifBoldItalic9pt7b PROGMEM = {
  (uint8_t  *)FreeSerifBoldItalic9pt7bBitmaps,
  (GFXglyph *)FreeSerifBoldItalic9pt7bGlyphs,
  0x30, 0x3A, 21 };

// Approx. 234 bytes

#endif // FreeSerifBoldItalic9pt7b_H
