#ifndef FreeSerifItalic16pt7b_H
#define FreeSerifItalic16pt7b_H

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

const uint8_t FreeSerifItalic16pt7bBitmaps[] PROGMEM = {
  0x01, 0xE0, 0x0C, 0x40, 0xC0, 0x83, 0x02, 0x18, 0x0C, 0xC0, 0x33, 0x00,
  0xDC, 0x03, 0x60, 0x0D, 0x80, 0x7E, 0x01, 0xF8, 0x07, 0xC0, 0x1B, 0x00,
  0xEC, 0x03, 0x30, 0x0C, 0xC0, 0x63, 0x03, 0x86, 0x0C, 0x08, 0xE0, 0x1E,
  0x00, 0x01, 0xE0, 0xF8, 0x07, 0x00, 0xE0, 0x1C, 0x03, 0x00, 0xE0, 0x1C,
  0x03, 0x00, 0x60, 0x1C, 0x03, 0x80, 0x60, 0x1C, 0x03, 0x80, 0x70, 0x0C,
  0x03, 0x80, 0x70, 0x1E, 0x0F, 0xF0, 0x03, 0xE0, 0x3F, 0xC1, 0x87, 0x84,
  0x0F, 0x20, 0x1C, 0x00, 0x70, 0x01, 0xC0, 0x06, 0x00, 0x38, 0x00, 0xC0,
  0x06, 0x00, 0x30, 0x01, 0x80, 0x04, 0x00, 0x20, 0x01, 0x00, 0x08, 0x00,
  0x60, 0x23, 0x01, 0x1F, 0xFC, 0xFF, 0xE0, 0x00, 0xF0, 0x0C, 0xE0, 0x41,
  0xC0, 0x07, 0x00, 0x1C, 0x00, 0x70, 0x03, 0x80, 0x18, 0x03, 0x80, 0x3F,
  0x80, 0x1E, 0x00, 0x1C, 0x00, 0x30, 0x00, 0xC0, 0x03, 0x00, 0x0C, 0x00,
  0x20, 0x01, 0x86, 0x04, 0x3E, 0x20, 0x7F, 0x00, 0x00, 0x06, 0x00, 0x18,
  0x00, 0x70, 0x01, 0xE0, 0x07, 0xC0, 0x1B, 0x00, 0x66, 0x01, 0x9C, 0x06,
  0x30, 0x18, 0x60, 0x60, 0xC1, 0x83, 0x86, 0x06, 0x0F, 0xFF, 0xBF, 0xFF,
  0x00, 0x70, 0x00, 0xC0, 0x01, 0x80, 0x07, 0x00, 0x0C, 0x00, 0x18, 0x00,
  0x01, 0xFC, 0x0F, 0xF0, 0x40, 0x01, 0x00, 0x08, 0x00, 0x3C, 0x00, 0xFC,
  0x00, 0xF8, 0x00, 0xE0, 0x01, 0xC0, 0x03, 0x00, 0x0C, 0x00, 0x30, 0x00,
  0xC0, 0x02, 0x00, 0x18, 0x00, 0x43, 0x02, 0x0E, 0x10, 0x3F, 0x80, 0x00,
  0x0E, 0x00, 0xF0, 0x07, 0x80, 0x1E, 0x00, 0x70, 0x01, 0xC0, 0x07, 0x00,
  0x1E, 0x00, 0x3B, 0xE0, 0xF8, 0xE1, 0xC0, 0xE3, 0x00, 0xEE, 0x01, 0xDC,
  0x03, 0xB0, 0x07, 0x60, 0x0E, 0xC0, 0x39, 0x80, 0x71, 0x01, 0xC3, 0x03,
  0x02, 0x1C, 0x03, 0xF0, 0x00, 0x1F, 0xFE, 0x7F, 0xF9, 0x80, 0x24, 0x00,
  0xC0, 0x03, 0x00, 0x04, 0x00, 0x18, 0x00, 0x60, 0x00, 0xC0, 0x03, 0x00,
  0x0C, 0x00, 0x18, 0x00, 0x60, 0x00, 0xC0, 0x03, 0x00, 0x0C, 0x00, 0x18,
  0x00, 0x60, 0x01, 0xC0, 0x03, 0x00, 0x00, 0x03, 0xE0, 0x38, 0x60, 0xC0,
  0xC6, 0x03, 0x18, 0x0C, 0x60, 0x31, 0xC1, 0x83, 0x86, 0x0F, 0xE0, 0x1F,
  0x00, 0xDE, 0x0C, 0x3C, 0x60, 0x73, 0x80, 0xEC, 0x01, 0xB0, 0x06, 0xC0,
  0x1B, 0x00, 0x46, 0x03, 0x1C, 0x38, 0x1F, 0x80, 0x03, 0xE0, 0x18, 0x41,
  0xC1, 0x86, 0x02, 0x38, 0x0C, 0xE0, 0x37, 0x00, 0xDC, 0x03, 0x70, 0x0D,
  0xC0, 0x77, 0x01, 0xCE, 0x0E, 0x38, 0x78, 0x3E, 0xC0, 0x07, 0x00, 0x38,
  0x01, 0xC0, 0x0E, 0x00, 0xE0, 0x0F, 0x00, 0xC0, 0x00, 0x1C, 0x71, 0xC0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0xE3, 0x80 };

const GFXglyph FreeSerifItalic16pt7bGlyphs[] PROGMEM = {
  {     0,  14,  21,  15,    1,  -20 },   // 0x30 '0'
  {    37,  11,  21,  15,    2,  -20 },   // 0x31 '1'
  {    66,  14,  21,  16,    0,  -20 },   // 0x32 '2'
  {   103,  14,  21,  16,    0,  -20 },   // 0x33 '3'
  {   140,  15,  21,  15,    0,  -20 },   // 0x34 '4'
  {   180,  14,  20,  15,    1,  -19 },   // 0x35 '5'
  {   215,  15,  22,  15,    1,  -21 },   // 0x36 '6'
  {   257,  15,  20,  15,    2,  -19 },   // 0x37 '7'
  {   295,  14,  21,  15,    1,  -20 },   // 0x38 '8'
  {   332,  14,  21,  15,    1,  -20 },   // 0x39 '9'
  {   369,   6,  14,   8,    2,  -13 } }; // 0x3A ':'

const GFXfont FreeSerifItalic16pt7b PROGMEM = {
  (uint8_t  *)FreeSerifItalic16pt7bBitmaps,
  (GFXglyph *)FreeSerifItalic16pt7bGlyphs,
  0x30, 0x3A, 38 };

// Approx. 464 bytes

#endif // FreeSerifItalic16pt7b_H
