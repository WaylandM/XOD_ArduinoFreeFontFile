#ifndef FreeSerifItalic30pt7b_H
#define FreeSerifItalic30pt7b_H

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

const uint8_t FreeSerifItalic30pt7bBitmaps[] PROGMEM = {
  0x00, 0x01, 0xF8, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x78, 0x3C, 0x00, 0x1E,
  0x03, 0x80, 0x07, 0x80, 0x38, 0x01, 0xE0, 0x07, 0x00, 0x78, 0x00, 0x70,
  0x1E, 0x00, 0x0E, 0x07, 0xC0, 0x01, 0xC0, 0xF0, 0x00, 0x3C, 0x3E, 0x00,
  0x07, 0x87, 0x80, 0x00, 0xF1, 0xF0, 0x00, 0x1E, 0x3E, 0x00, 0x03, 0xCF,
  0x80, 0x00, 0x79, 0xF0, 0x00, 0x1F, 0x3E, 0x00, 0x03, 0xEF, 0x80, 0x00,
  0x7D, 0xF0, 0x00, 0x0F, 0xBE, 0x00, 0x01, 0xF7, 0xC0, 0x00, 0x7D, 0xF0,
  0x00, 0x0F, 0xBE, 0x00, 0x01, 0xF7, 0xC0, 0x00, 0x3E, 0xF8, 0x00, 0x0F,
  0x9E, 0x00, 0x01, 0xF3, 0xC0, 0x00, 0x3E, 0x78, 0x00, 0x0F, 0x8F, 0x00,
  0x01, 0xF1, 0xE0, 0x00, 0x7C, 0x3C, 0x00, 0x0F, 0x87, 0x80, 0x03, 0xE0,
  0x70, 0x00, 0x78, 0x0E, 0x00, 0x1E, 0x01, 0xE0, 0x07, 0xC0, 0x1C, 0x01,
  0xF0, 0x01, 0xC0, 0x7C, 0x00, 0x3C, 0x1E, 0x00, 0x03, 0xFF, 0x80, 0x00,
  0x1F, 0x80, 0x00, 0x00, 0x00, 0x78, 0x00, 0x7F, 0xC0, 0x1F, 0xFE, 0x00,
  0x03, 0xE0, 0x00, 0x1F, 0x00, 0x00, 0xF8, 0x00, 0x07, 0xC0, 0x00, 0x7C,
  0x00, 0x03, 0xE0, 0x00, 0x1F, 0x00, 0x00, 0xF8, 0x00, 0x0F, 0x80, 0x00,
  0x7C, 0x00, 0x03, 0xE0, 0x00, 0x1E, 0x00, 0x01, 0xF0, 0x00, 0x0F, 0x80,
  0x00, 0x7C, 0x00, 0x07, 0xC0, 0x00, 0x3E, 0x00, 0x01, 0xF0, 0x00, 0x0F,
  0x00, 0x00, 0xF8, 0x00, 0x07, 0xC0, 0x00, 0x3E, 0x00, 0x03, 0xE0, 0x00,
  0x1F, 0x00, 0x00, 0xF8, 0x00, 0x07, 0xC0, 0x00, 0x7C, 0x00, 0x03, 0xE0,
  0x00, 0x1F, 0x00, 0x01, 0xF0, 0x00, 0x0F, 0x80, 0x00, 0x7C, 0x00, 0x03,
  0xE0, 0x00, 0x3E, 0x00, 0x01, 0xF0, 0x00, 0x3F, 0xC0, 0x1F, 0xFF, 0xE0,
  0x00, 0x07, 0xF0, 0x00, 0x0F, 0xFF, 0x00, 0x07, 0xFF, 0xE0, 0x03, 0xFF,
  0xFC, 0x01, 0xE0, 0xFF, 0x80, 0xE0, 0x0F, 0xE0, 0x70, 0x01, 0xF8, 0x18,
  0x00, 0x3F, 0x0C, 0x00, 0x0F, 0xC0, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x7C,
  0x00, 0x00, 0x1F, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x01, 0xE0, 0x00, 0x00,
  0xF8, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x07, 0x80, 0x00,
  0x03, 0xC0, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x78, 0x00, 0x00, 0x3C, 0x00,
  0x00, 0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x03, 0x80, 0x00, 0x01, 0xC0,
  0x00, 0x00, 0xE0, 0x00, 0x00, 0x70, 0x00, 0x00, 0x38, 0x00, 0x00, 0x1C,
  0x00, 0x00, 0x0E, 0x00, 0x00, 0x07, 0x00, 0x00, 0x03, 0x80, 0x01, 0x01,
  0xC0, 0x00, 0xC0, 0xE0, 0x00, 0x20, 0x70, 0x00, 0x38, 0x1F, 0xFF, 0xFC,
  0x0F, 0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xC3, 0xFF, 0xFF, 0xE0, 0x00, 0x01,
  0xF8, 0x00, 0x01, 0xFF, 0x80, 0x01, 0xFF, 0xF0, 0x00, 0xE0, 0xFE, 0x00,
  0x30, 0x0F, 0x80, 0x10, 0x03, 0xF0, 0x0C, 0x00, 0x7C, 0x00, 0x00, 0x1F,
  0x00, 0x00, 0x07, 0xC0, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x7C, 0x00, 0x00,
  0x3E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x07, 0x80, 0x00, 0x07, 0x80, 0x00,
  0x03, 0x80, 0x00, 0x07, 0x80, 0x00, 0x0F, 0xF0, 0x00, 0x1F, 0xFE, 0x00,
  0x00, 0x3F, 0xC0, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x07,
  0xC0, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x0F, 0x00, 0x00,
  0x03, 0xC0, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x0E, 0x00,
  0x00, 0x03, 0x80, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x70, 0x00, 0x00, 0x38,
  0x00, 0x00, 0x0E, 0x03, 0xE0, 0x07, 0x00, 0xFF, 0x07, 0x80, 0x3F, 0xFF,
  0xC0, 0x0F, 0xFF, 0xC0, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70,
  0x00, 0x00, 0x0F, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x3E, 0x00, 0x00,
  0x07, 0xE0, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x01, 0xBC,
  0x00, 0x00, 0x37, 0xC0, 0x00, 0x06, 0x7C, 0x00, 0x00, 0xC7, 0x80, 0x00,
  0x18, 0x78, 0x00, 0x03, 0x0F, 0x80, 0x00, 0x60, 0xF0, 0x00, 0x0C, 0x0F,
  0x00, 0x01, 0x80, 0xF0, 0x00, 0x30, 0x1F, 0x00, 0x06, 0x01, 0xE0, 0x00,
  0xC0, 0x1E, 0x00, 0x18, 0x03, 0xE0, 0x03, 0x00, 0x3E, 0x00, 0x70, 0x03,
  0xC0, 0x0E, 0x00, 0x3C, 0x01, 0xC0, 0x07, 0xC0, 0x38, 0x00, 0x78, 0x07,
  0xFF, 0xFF, 0xFE, 0x7F, 0xFF, 0xFF, 0xE7, 0xFF, 0xFF, 0xFC, 0xFF, 0xFF,
  0xFF, 0xC0, 0x00, 0x0F, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x1E, 0x00,
  0x00, 0x01, 0xE0, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00,
  0x3C, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x07, 0xC0,
  0x00, 0x00, 0x78, 0x00, 0x00, 0x03, 0xFF, 0xF0, 0x00, 0x7F, 0xFF, 0x00,
  0x07, 0xFF, 0xE0, 0x00, 0xFF, 0xFE, 0x00, 0x08, 0x00, 0x00, 0x01, 0x80,
  0x00, 0x00, 0x10, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00,
  0x07, 0x80, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0xFF,
  0xE0, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x1F, 0xC0,
  0x00, 0x00, 0x7E, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x3F, 0x00, 0x00,
  0x01, 0xF0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x0F,
  0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0xF0, 0x00,
  0x00, 0x0E, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x01,
  0xC0, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x70, 0x00,
  0x00, 0x0E, 0x00, 0x78, 0x01, 0xC0, 0x0F, 0xE0, 0x78, 0x00, 0xFF, 0xFF,
  0x00, 0x07, 0xFF, 0xC0, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x78, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x01, 0xF0, 0x00,
  0x00, 0x3F, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x07,
  0xE0, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x7E, 0x00,
  0x00, 0x07, 0xE0, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00,
  0x3F, 0x3F, 0x00, 0x01, 0xFF, 0xFE, 0x00, 0x1F, 0xFF, 0xFC, 0x00, 0xFF,
  0x07, 0xF0, 0x0F, 0xE0, 0x0F, 0x80, 0x7E, 0x00, 0x7E, 0x07, 0xE0, 0x01,
  0xF0, 0x3E, 0x00, 0x07, 0xC1, 0xF0, 0x00, 0x3E, 0x0F, 0x80, 0x01, 0xF0,
  0xF8, 0x00, 0x0F, 0x87, 0xC0, 0x00, 0x7C, 0x3E, 0x00, 0x03, 0xE1, 0xE0,
  0x00, 0x1F, 0x0F, 0x00, 0x01, 0xF8, 0x78, 0x00, 0x0F, 0x83, 0xC0, 0x00,
  0x7C, 0x1E, 0x00, 0x03, 0xE0, 0xF0, 0x00, 0x3E, 0x03, 0x80, 0x01, 0xF0,
  0x1C, 0x00, 0x1F, 0x00, 0xE0, 0x00, 0xF0, 0x03, 0x80, 0x0F, 0x80, 0x0C,
  0x00, 0xF0, 0x00, 0x30, 0x0F, 0x00, 0x00, 0xC0, 0xF0, 0x00, 0x01, 0xFC,
  0x00, 0x00, 0x07, 0xFF, 0xFF, 0xF0, 0xFF, 0xFF, 0xFE, 0x0F, 0xFF, 0xFF,
  0xE1, 0xFF, 0xFF, 0xFC, 0x3C, 0x00, 0x03, 0x83, 0x00, 0x00, 0x78, 0x60,
  0x00, 0x07, 0x04, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x01,
  0xC0, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x78, 0x00,
  0x00, 0x0F, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x01,
  0xC0, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x70, 0x00,
  0x00, 0x0F, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x03,
  0xC0, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0xF0, 0x00,
  0x00, 0x0F, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x03,
  0xC0, 0x00, 0x00, 0x78, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0xF0, 0x00,
  0x00, 0x1E, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x03,
  0xC0, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x07,
  0x83, 0xC0, 0x01, 0xC0, 0x1C, 0x00, 0x70, 0x01, 0xC0, 0x1E, 0x00, 0x3C,
  0x07, 0x80, 0x03, 0xC0, 0xF0, 0x00, 0x78, 0x1E, 0x00, 0x0F, 0x03, 0xC0,
  0x01, 0xE0, 0x78, 0x00, 0x3C, 0x0F, 0x80, 0x0F, 0x81, 0xF8, 0x01, 0xE0,
  0x1F, 0x80, 0x78, 0x03, 0xF8, 0x1E, 0x00, 0x3F, 0x87, 0x80, 0x03, 0xFB,
  0xC0, 0x00, 0x7F, 0xC0, 0x00, 0x07, 0xF8, 0x00, 0x01, 0xFF, 0x80, 0x00,
  0xF3, 0xF8, 0x00, 0x78, 0x3F, 0x80, 0x1E, 0x03, 0xF0, 0x07, 0x80, 0x3F,
  0x01, 0xE0, 0x03, 0xF0, 0x78, 0x00, 0x3E, 0x0F, 0x00, 0x03, 0xC3, 0xC0,
  0x00, 0x7C, 0x78, 0x00, 0x07, 0x8F, 0x00, 0x00, 0xF1, 0xE0, 0x00, 0x1E,
  0x3C, 0x00, 0x03, 0xC7, 0x80, 0x00, 0x78, 0xF0, 0x00, 0x0E, 0x0F, 0x00,
  0x03, 0xC1, 0xE0, 0x00, 0x70, 0x1E, 0x00, 0x1C, 0x01, 0xE0, 0x0F, 0x00,
  0x0F, 0x07, 0x80, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x07,
  0x83, 0x80, 0x01, 0xC0, 0x18, 0x00, 0xF0, 0x01, 0x80, 0x3C, 0x00, 0x38,
  0x0F, 0x00, 0x03, 0x81, 0xE0, 0x00, 0x70, 0x78, 0x00, 0x0E, 0x1F, 0x00,
  0x01, 0xE3, 0xE0, 0x00, 0x3C, 0x7C, 0x00, 0x07, 0x9F, 0x00, 0x00, 0xF3,
  0xE0, 0x00, 0x1E, 0x7C, 0x00, 0x07, 0xCF, 0x80, 0x00, 0xF9, 0xF0, 0x00,
  0x1F, 0x3E, 0x00, 0x07, 0xE7, 0xC0, 0x00, 0xF8, 0x7C, 0x00, 0x3F, 0x0F,
  0x80, 0x07, 0xE1, 0xF8, 0x03, 0xF8, 0x1F, 0xC1, 0xFF, 0x01, 0xFF, 0xF7,
  0xE0, 0x1F, 0xF9, 0xF8, 0x00, 0xFC, 0x3F, 0x00, 0x00, 0x0F, 0xC0, 0x00,
  0x01, 0xF0, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x07, 0xE0,
  0x00, 0x00, 0xF8, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07,
  0xE0, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00, 0x00,
  0x1F, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x01, 0xC0,
  0x78, 0x1F, 0x83, 0xF0, 0x7E, 0x0F, 0xC0, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x07, 0x00, 0xF0, 0x3F, 0x07, 0xE0, 0xFC, 0x1F, 0x01, 0xE0, 0x00 };

const GFXglyph FreeSerifItalic30pt7bGlyphs[] PROGMEM = {
  {     0,  27,  40,  29,    2,  -39 },   // 0x30 '0'
  {   135,  21,  40,  29,    3,  -39 },   // 0x31 '1'
  {   240,  26,  40,  29,    1,  -39 },   // 0x32 '2'
  {   370,  26,  40,  30,    1,  -39 },   // 0x33 '3'
  {   500,  28,  40,  29,    0,  -39 },   // 0x34 '4'
  {   640,  28,  39,  29,    1,  -38 },   // 0x35 '5'
  {   777,  29,  41,  29,    2,  -40 },   // 0x36 '6'
  {   926,  28,  39,  29,    4,  -38 },   // 0x37 '7'
  {  1063,  27,  39,  29,    2,  -38 },   // 0x38 '8'
  {  1195,  27,  40,  29,    2,  -38 },   // 0x39 '9'
  {  1330,  11,  27,  15,    3,  -25 } }; // 0x3A ':'

const GFXfont FreeSerifItalic30pt7b PROGMEM = {
  (uint8_t  *)FreeSerifItalic30pt7bBitmaps,
  (GFXglyph *)FreeSerifItalic30pt7bGlyphs,
  0x30, 0x3A, 71 };

// Approx. 1452 bytes

#endif // FreeSerifItalic30pt7b_H
