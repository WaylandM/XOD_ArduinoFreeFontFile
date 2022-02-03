#ifndef FreeSerif8pt7b_H
#define FreeSerif8pt7b_H

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

const uint8_t FreeSerif8pt7bBitmaps[] PROGMEM = {
  0x3C, 0x66, 0x42, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0x42, 0x66, 0x3C, 0x03,
  0x8C, 0x63, 0x18, 0xC6, 0x31, 0x8C, 0xF0, 0x3C, 0x4E, 0x86, 0x06, 0x06,
  0x0C, 0x08, 0x10, 0x20, 0x61, 0xFE, 0x79, 0x18, 0x30, 0x41, 0x8F, 0x83,
  0x83, 0x06, 0x1B, 0xC0, 0x04, 0x18, 0xF1, 0x64, 0xC9, 0xA3, 0x3F, 0x0C,
  0x18, 0x30, 0x1E, 0x40, 0xC1, 0xE0, 0xE0, 0xC1, 0x83, 0x04, 0x13, 0xC0,
  0x0E, 0x30, 0xC3, 0x0E, 0x1B, 0xBB, 0xE3, 0xC7, 0x8D, 0x91, 0xC0, 0xFE,
  0x10, 0x42, 0x08, 0x21, 0x04, 0x10, 0x82, 0x00, 0x3D, 0x8F, 0x1E, 0x36,
  0x83, 0x1B, 0x63, 0xC7, 0xCD, 0xF0, 0x3C, 0x66, 0xC3, 0xC3, 0xC3, 0xE3,
  0x7F, 0x06, 0x06, 0x0C, 0x38, 0x60, 0xC0, 0x0C };

const GFXglyph FreeSerif8pt7bGlyphs[] PROGMEM = {
  {     0,   8,  11,   8,    0,  -10 },   // 0x30 '0'
  {    11,   5,  12,   8,    1,  -11 },   // 0x31 '1'
  {    19,   8,  11,   8,    1,  -10 },   // 0x32 '2'
  {    30,   7,  11,   8,    1,  -10 },   // 0x33 '3'
  {    40,   7,  11,   8,    1,  -10 },   // 0x34 '4'
  {    50,   7,  11,   8,    1,  -10 },   // 0x35 '5'
  {    60,   7,  12,   8,    1,  -11 },   // 0x36 '6'
  {    71,   6,  11,   8,    1,  -10 },   // 0x37 '7'
  {    80,   7,  11,   8,    1,  -10 },   // 0x38 '8'
  {    90,   8,  12,   8,    0,  -10 },   // 0x39 '9'
  {   102,   2,   7,   4,    1,   -6 } }; // 0x3A ':'

const GFXfont FreeSerif8pt7b PROGMEM = {
  (uint8_t  *)FreeSerif8pt7bBitmaps,
  (GFXglyph *)FreeSerif8pt7bGlyphs,
  0x30, 0x3A, 19 };

// Approx. 188 bytes

#endif // FreeSerif8pt7b_H
