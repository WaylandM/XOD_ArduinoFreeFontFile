#ifndef FreeSerif12pt7b_H
#define FreeSerif12pt7b_H

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

const uint8_t FreeSerif12pt7bBitmaps[] PROGMEM = {
  0x00, 0xFF, 0xFE, 0xA8, 0x3F, 0xCF, 0x3C, 0xF3, 0x8A, 0x20, 0x0C, 0x40,
  0xC4, 0x08, 0x40, 0x8C, 0x08, 0xC7, 0xFF, 0x18, 0x81, 0x88, 0x10, 0x81,
  0x08, 0xFF, 0xE1, 0x18, 0x31, 0x03, 0x10, 0x31, 0x02, 0x10, 0x04, 0x07,
  0xC6, 0x5B, 0x12, 0xC4, 0xB1, 0x0F, 0x41, 0xF0, 0x1E, 0x01, 0xE0, 0x58,
  0x13, 0x84, 0xE1, 0x3C, 0x4F, 0x96, 0x3F, 0x01, 0x00, 0x00, 0x04, 0x03,
  0x83, 0x03, 0x9F, 0x81, 0xC2, 0x20, 0x60, 0x90, 0x30, 0x24, 0x0C, 0x12,
  0x03, 0x0D, 0x00, 0xC6, 0x47, 0x9E, 0x23, 0x10, 0x09, 0x84, 0x04, 0xE1,
  0x03, 0x30, 0x40, 0x8C, 0x20, 0x43, 0x08, 0x10, 0xC4, 0x08, 0x1E, 0x00,
  0x03, 0xC0, 0x02, 0x30, 0x03, 0x08, 0x01, 0x84, 0x00, 0xE4, 0x00, 0x7C,
  0xF8, 0x1C, 0x38, 0x1E, 0x08, 0x33, 0x0C, 0x31, 0xC4, 0x10, 0x74, 0x18,
  0x3A, 0x0C, 0x0E, 0x07, 0x03, 0x83, 0xC3, 0xE2, 0x7C, 0x3E, 0xFF, 0xA0,
  0x04, 0x21, 0x08, 0x61, 0x0C, 0x30, 0xC3, 0x0C, 0x30, 0xC1, 0x04, 0x18,
  0x20, 0x40, 0x81, 0x81, 0x02, 0x04, 0x18, 0x20, 0x83, 0x0C, 0x30, 0xC3,
  0x0C, 0x30, 0x86, 0x10, 0x84, 0x20, 0x30, 0xB3, 0xD7, 0x54, 0x38, 0x7C,
  0xD3, 0x30, 0x30, 0x10, 0x04, 0x00, 0x80, 0x10, 0x02, 0x00, 0x41, 0xFF,
  0xC1, 0x00, 0x20, 0x04, 0x00, 0x80, 0x10, 0x00, 0xDF, 0x95, 0x00, 0xFC,
  0xFC, 0x06, 0x0C, 0x10, 0x60, 0xC1, 0x06, 0x0C, 0x10, 0x60, 0xC1, 0x06,
  0x0C, 0x10, 0x60, 0xC0, 0x1E, 0x0C, 0xC6, 0x19, 0x86, 0xC0, 0xB0, 0x3C,
  0x0F, 0x03, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xC0, 0xD8, 0x66, 0x18, 0xCC,
  0x1E, 0x00, 0x11, 0xC3, 0x0C, 0x30, 0xC3, 0x0C, 0x30, 0xC3, 0x0C, 0x30,
  0xC3, 0x0C, 0xFC, 0x1E, 0x18, 0xC4, 0x1A, 0x06, 0x01, 0x80, 0x60, 0x10,
  0x0C, 0x02, 0x01, 0x00, 0xC0, 0x60, 0x30, 0x18, 0x1F, 0xF8, 0x1E, 0x18,
  0xE8, 0x18, 0x06, 0x01, 0x00, 0x80, 0xF0, 0x7E, 0x03, 0xC0, 0x70, 0x0C,
  0x03, 0x00, 0xC0, 0x6E, 0x11, 0xF8, 0x01, 0x00, 0xC0, 0x70, 0x2C, 0x0B,
  0x04, 0xC2, 0x30, 0x8C, 0x43, 0x20, 0xC8, 0x33, 0xFF, 0x03, 0x00, 0xC0,
  0x30, 0x0C, 0x00, 0x03, 0xF1, 0x00, 0x40, 0x18, 0x0F, 0x80, 0xF8, 0x0E,
  0x01, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x20, 0x1B, 0x8C, 0x7C, 0x00,
  0x01, 0xC3, 0xC1, 0xC0, 0xC0, 0x70, 0x18, 0x0E, 0xF3, 0xCE, 0xC1, 0xF0,
  0x3C, 0x0F, 0x03, 0xC0, 0xD8, 0x36, 0x08, 0xC4, 0x1E, 0x00, 0x3F, 0xD0,
  0x38, 0x08, 0x06, 0x01, 0x80, 0x40, 0x10, 0x0C, 0x02, 0x00, 0x80, 0x20,
  0x10, 0x04, 0x01, 0x00, 0x80, 0x20, 0x1F, 0x18, 0x6C, 0x0F, 0x03, 0xC0,
  0xF8, 0x67, 0x30, 0xF0, 0x1E, 0x09, 0xE6, 0x3B, 0x07, 0xC0, 0xF0, 0x3C,
  0x0D, 0xC6, 0x1F, 0x00, 0x1E, 0x08, 0xC6, 0x1B, 0x02, 0xC0, 0xF0, 0x3C,
  0x0F, 0x03, 0xE0, 0xDC, 0x73, 0xEC, 0x06, 0x01, 0x80, 0xC0, 0x70, 0x38,
  0x38, 0x18, 0x00, 0xFC, 0x00, 0x3F, 0xCC, 0xC0, 0x00, 0x00, 0x06, 0x77,
  0x12, 0x40, 0x00, 0x00, 0x07, 0x01, 0xE0, 0x78, 0x1E, 0x07, 0x00, 0xC0,
  0x0F, 0x00, 0x3C, 0x00, 0xF0, 0x03, 0xC0, 0x0F, 0x00, 0x10, 0xFF, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x80, 0x0F, 0x00, 0x3C, 0x00,
  0xF0, 0x03, 0xC0, 0x0F, 0x00, 0x30, 0x0E, 0x07, 0x81, 0xE0, 0x78, 0x0E,
  0x00, 0x00, 0x00, 0x7C, 0x86, 0x83, 0xC3, 0x03, 0x03, 0x06, 0x0C, 0x08,
  0x08, 0x10, 0x10, 0x00, 0x00, 0x30, 0x30, 0x30, 0x03, 0xF0, 0x06, 0x06,
  0x06, 0x00, 0x86, 0x00, 0x26, 0x0E, 0xDB, 0x0C, 0xC7, 0x0C, 0x63, 0x84,
  0x31, 0xC6, 0x18, 0xE3, 0x08, 0x71, 0x8C, 0x4C, 0xC6, 0x46, 0x3D, 0xC1,
  0x80, 0x00, 0x30, 0x10, 0x07, 0xF0, 0x00, 0x80, 0x00, 0x60, 0x00, 0x70,
  0x00, 0x38, 0x00, 0x2E, 0x00, 0x13, 0x00, 0x19, 0xC0, 0x08, 0x60, 0x04,
  0x38, 0x04, 0x0C, 0x03, 0xFF, 0x03, 0x03, 0x81, 0x00, 0xE1, 0x80, 0x70,
  0xC0, 0x3D, 0xF0, 0x3F, 0xFF, 0x83, 0x0C, 0x30, 0x63, 0x06, 0x30, 0x63,
  0x06, 0x30, 0xC3, 0xF0, 0x30, 0xE3, 0x06, 0x30, 0x33, 0x03, 0x30, 0x33,
  0x07, 0x30, 0xEF, 0xFC, 0x07, 0xE2, 0x38, 0x3C, 0xC0, 0x3B, 0x00, 0x36,
  0x00, 0x38, 0x00, 0x30, 0x00, 0x60, 0x00, 0xC0, 0x01, 0x80, 0x03, 0x00,
  0x03, 0x00, 0x06, 0x00, 0x06, 0x00, 0x47, 0x03, 0x03, 0xF8, 0xFF, 0xC0,
  0x30, 0x78, 0x30, 0x1C, 0x30, 0x0E, 0x30, 0x06, 0x30, 0x03, 0x30, 0x03,
  0x30, 0x03, 0x30, 0x03, 0x30, 0x03, 0x30, 0x03, 0x30, 0x06, 0x30, 0x06,
  0x30, 0x0C, 0x30, 0x78, 0xFF, 0xC0, 0xFF, 0xFC, 0xC0, 0x33, 0x00, 0x4C,
  0x00, 0x30, 0x00, 0xC0, 0x43, 0x03, 0x0F, 0xFC, 0x30, 0x30, 0xC0, 0x43,
  0x00, 0x0C, 0x00, 0x30, 0x08, 0xC0, 0x23, 0x03, 0xBF, 0xFE, 0xFF, 0xFC,
  0xC0, 0x33, 0x00, 0x4C, 0x00, 0x30, 0x00, 0xC0, 0x43, 0x03, 0x0F, 0xFC,
  0x30, 0x30, 0xC0, 0x43, 0x00, 0x0C, 0x00, 0x30, 0x00, 0xC0, 0x03, 0x00,
  0x3F, 0x00, 0x07, 0xE4, 0x1C, 0x3C, 0x30, 0x0C, 0x60, 0x0C, 0x60, 0x04,
  0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x3F, 0xC0, 0x0C, 0xC0, 0x0C, 0xC0, 0x0C,
  0x60, 0x0C, 0x60, 0x0C, 0x30, 0x0C, 0x1C, 0x1C, 0x07, 0xE0, 0xFC, 0x3F,
  0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C,
  0x3F, 0xFC, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C,
  0x30, 0x0C, 0x30, 0x0C, 0xFC, 0x3F, 0xFC, 0xC3, 0x0C, 0x30, 0xC3, 0x0C,
  0x30, 0xC3, 0x0C, 0x30, 0xC3, 0x3F, 0x3F, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C,
  0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0xC8, 0xF0, 0xFC, 0xFE,
  0x30, 0x38, 0x30, 0x20, 0x30, 0x40, 0x30, 0x80, 0x33, 0x00, 0x36, 0x00,
  0x3E, 0x00, 0x37, 0x00, 0x33, 0x80, 0x31, 0xC0, 0x30, 0xE0, 0x30, 0x70,
  0x30, 0x38, 0x30, 0x3C, 0xFC, 0x7F, 0xFC, 0x00, 0x60, 0x00, 0xC0, 0x01,
  0x80, 0x03, 0x00, 0x06, 0x00, 0x0C, 0x00, 0x18, 0x00, 0x30, 0x00, 0x60,
  0x00, 0xC0, 0x01, 0x80, 0x03, 0x00, 0x26, 0x00, 0x8C, 0x07, 0x7F, 0xFE,
  0xF8, 0x01, 0xE7, 0x00, 0x70, 0xE0, 0x0E, 0x1E, 0x03, 0xC2, 0xC0, 0x58,
  0x5C, 0x1B, 0x09, 0x82, 0x61, 0x38, 0x4C, 0x27, 0x11, 0x84, 0x72, 0x30,
  0x8E, 0xC6, 0x10, 0xD0, 0xC2, 0x1E, 0x18, 0x41, 0x83, 0x1C, 0x30, 0x67,
  0xC4, 0x3F, 0xF0, 0x1F, 0x78, 0x0E, 0x3C, 0x04, 0x3E, 0x04, 0x2E, 0x04,
  0x27, 0x04, 0x23, 0x84, 0x23, 0xC4, 0x21, 0xE4, 0x20, 0xE4, 0x20, 0x74,
  0x20, 0x3C, 0x20, 0x1C, 0x20, 0x1C, 0x70, 0x0C, 0xF8, 0x04, 0x07, 0xC0,
  0x30, 0x60, 0xC0, 0x63, 0x00, 0x66, 0x00, 0xD8, 0x00, 0xF0, 0x01, 0xE0,
  0x03, 0xC0, 0x07, 0x80, 0x0F, 0x00, 0x1B, 0x00, 0x66, 0x00, 0xC6, 0x03,
  0x06, 0x0C, 0x03, 0xE0, 0xFF, 0x83, 0x0E, 0x30, 0x73, 0x03, 0x30, 0x33,
  0x03, 0x30, 0x63, 0x0E, 0x3F, 0x83, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03,
  0x00, 0x30, 0x0F, 0xC0, 0x0F, 0xE0, 0x18, 0x30, 0x30, 0x18, 0x60, 0x0C,
  0x60, 0x0C, 0xC0, 0x06, 0xC0, 0x06, 0xC0, 0x06, 0xC0, 0x06, 0xC0, 0x06,
  0xC0, 0x06, 0x60, 0x0C, 0x60, 0x0C, 0x30, 0x18, 0x18, 0x30, 0x07, 0xC0,
  0x03, 0xC0, 0x01, 0xE0, 0x00, 0x78, 0x00, 0x1F, 0xFF, 0x80, 0x61, 0xC0,
  0xC1, 0xC1, 0x81, 0x83, 0x03, 0x06, 0x06, 0x0C, 0x1C, 0x18, 0x70, 0x3F,
  0x80, 0x67, 0x00, 0xC7, 0x01, 0x8F, 0x03, 0x0F, 0x06, 0x0E, 0x0C, 0x0E,
  0x7E, 0x0F, 0x1F, 0x46, 0x19, 0x81, 0x30, 0x27, 0x02, 0xF0, 0x0F, 0x00,
  0xF8, 0x07, 0xC0, 0x38, 0x03, 0xC0, 0x34, 0x06, 0x80, 0xDC, 0x32, 0x7C,
  0xFF, 0xFF, 0x86, 0x0E, 0x0C, 0x1C, 0x18, 0x10, 0x30, 0x00, 0x60, 0x00,
  0xC0, 0x01, 0x80, 0x03, 0x00, 0x06, 0x00, 0x0C, 0x00, 0x18, 0x00, 0x30,
  0x00, 0x60, 0x00, 0xC0, 0x07, 0xE0, 0xFC, 0x1F, 0x30, 0x0E, 0x30, 0x04,
  0x30, 0x04, 0x30, 0x04, 0x30, 0x04, 0x30, 0x04, 0x30, 0x04, 0x30, 0x04,
  0x30, 0x04, 0x30, 0x04, 0x30, 0x04, 0x30, 0x04, 0x18, 0x08, 0x1C, 0x18,
  0x07, 0xE0, 0xFE, 0x0F, 0x9C, 0x03, 0x0E, 0x01, 0x83, 0x00, 0x81, 0xC0,
  0x40, 0x60, 0x40, 0x38, 0x20, 0x0C, 0x30, 0x07, 0x10, 0x01, 0x98, 0x00,
  0xE8, 0x00, 0x34, 0x00, 0x1E, 0x00, 0x06, 0x00, 0x03, 0x00, 0x01, 0x00,
  0xFC, 0xFC, 0x3D, 0xE1, 0xC0, 0x63, 0x83, 0x01, 0x86, 0x0E, 0x04, 0x1C,
  0x18, 0x10, 0x70, 0x70, 0x80, 0xC3, 0xC2, 0x03, 0x8B, 0x08, 0x06, 0x6E,
  0x40, 0x1D, 0x19, 0x00, 0x74, 0x78, 0x00, 0xE1, 0xE0, 0x03, 0x83, 0x80,
  0x0E, 0x0C, 0x00, 0x10, 0x10, 0x00, 0x40, 0x40, 0x7F, 0x1F, 0x9E, 0x03,
  0x07, 0x03, 0x01, 0xC3, 0x00, 0x71, 0x00, 0x19, 0x00, 0x0F, 0x00, 0x03,
  0x80, 0x01, 0xE0, 0x01, 0xB0, 0x01, 0x9C, 0x00, 0x87, 0x00, 0x81, 0xC0,
  0x80, 0xE0, 0xC0, 0x79, 0xF8, 0x7F, 0xFE, 0x1F, 0x78, 0x0C, 0x38, 0x08,
  0x1C, 0x18, 0x0E, 0x10, 0x06, 0x20, 0x07, 0x60, 0x03, 0xC0, 0x01, 0x80,
  0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80,
  0x07, 0xE0, 0x7F, 0xFB, 0x00, 0xC8, 0x07, 0x20, 0x38, 0x01, 0xC0, 0x07,
  0x00, 0x38, 0x01, 0xC0, 0x07, 0x00, 0x38, 0x01, 0xC0, 0x0E, 0x00, 0x38,
  0x05, 0xC0, 0x3E, 0x01, 0xBF, 0xFE, 0xFE, 0x31, 0x8C, 0x63, 0x18, 0xC6,
  0x31, 0x8C, 0x63, 0x18, 0xC6, 0x31, 0xF0, 0xC1, 0x81, 0x03, 0x06, 0x04,
  0x0C, 0x18, 0x10, 0x30, 0x60, 0x40, 0xC1, 0x81, 0x03, 0x06, 0xF8, 0xC6,
  0x31, 0x8C, 0x63, 0x18, 0xC6, 0x31, 0x8C, 0x63, 0x18, 0xC7, 0xF0, 0x0C,
  0x07, 0x01, 0x60, 0xD8, 0x23, 0x18, 0xC4, 0x1B, 0x06, 0x80, 0xC0, 0xFF,
  0xF0, 0xC7, 0x0C, 0x30, 0x3E, 0x31, 0x8C, 0x30, 0x0C, 0x03, 0x07, 0xC6,
  0x33, 0x0C, 0xC3, 0x31, 0xC7, 0xB8, 0x20, 0x38, 0x06, 0x01, 0x80, 0x60,
  0x18, 0x06, 0xF1, 0xC6, 0x61, 0xD8, 0x36, 0x0D, 0x83, 0x60, 0xD8, 0x26,
  0x19, 0x84, 0x3E, 0x00, 0x1E, 0x23, 0x63, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0,
  0xE1, 0x72, 0x3C, 0x00, 0x80, 0xE0, 0x18, 0x06, 0x01, 0x80, 0x61, 0xD8,
  0x8E, 0x61, 0xB0, 0x6C, 0x1B, 0x06, 0xC1, 0xB0, 0x6E, 0x19, 0xCE, 0x3D,
  0xC0, 0x1E, 0x08, 0xE4, 0x1B, 0xFE, 0xC0, 0x30, 0x0C, 0x03, 0x81, 0x60,
  0x9C, 0x41, 0xE0, 0x0F, 0x08, 0xC4, 0x06, 0x03, 0x01, 0x81, 0xF0, 0x60,
  0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x80, 0xC0, 0x60, 0xFC, 0x00, 0x1F,
  0x03, 0x1F, 0x60, 0xC6, 0x0C, 0x60, 0xC3, 0x18, 0x1F, 0x02, 0x00, 0x40,
  0x07, 0xFC, 0x40, 0x24, 0x02, 0xC0, 0x2C, 0x04, 0xE0, 0x83, 0xF0, 0x30,
  0x1E, 0x00, 0xC0, 0x18, 0x03, 0x00, 0x60, 0x0D, 0xE1, 0xCE, 0x30, 0xC6,
  0x18, 0xC3, 0x18, 0x63, 0x0C, 0x61, 0x8C, 0x31, 0x86, 0x79, 0xE0, 0x31,
  0x80, 0x00, 0x09, 0xC6, 0x31, 0x8C, 0x63, 0x18, 0xDF, 0x0C, 0x30, 0x00,
  0x00, 0x31, 0xC3, 0x0C, 0x30, 0xC3, 0x0C, 0x30, 0xC3, 0x0C, 0x30, 0xF2,
  0xF0, 0x20, 0x1C, 0x01, 0x80, 0x30, 0x06, 0x00, 0xC0, 0x18, 0xFB, 0x08,
  0x62, 0x0C, 0x81, 0xE0, 0x3E, 0x06, 0xE0, 0xCE, 0x18, 0xC3, 0x0E, 0xF3,
  0xE0, 0x13, 0x8C, 0x63, 0x18, 0xC6, 0x31, 0x8C, 0x63, 0x18, 0xC6, 0xF8,
  0xF7, 0x8F, 0x0E, 0x3C, 0xE3, 0x0C, 0x18, 0xC3, 0x06, 0x30, 0xC1, 0x8C,
  0x30, 0x63, 0x0C, 0x18, 0xC3, 0x06, 0x30, 0xC1, 0x8C, 0x30, 0x67, 0x9E,
  0x3C, 0xF7, 0x87, 0x18, 0xC3, 0x18, 0x63, 0x0C, 0x61, 0x8C, 0x31, 0x86,
  0x30, 0xC6, 0x19, 0xE7, 0x80, 0x1E, 0x18, 0xE4, 0x1B, 0x03, 0xC0, 0xF0,
  0x3C, 0x0F, 0x03, 0x60, 0x9C, 0x41, 0xE0, 0x77, 0x87, 0x18, 0xC3, 0x98,
  0x33, 0x06, 0x60, 0xCC, 0x19, 0x83, 0x30, 0xC7, 0x10, 0xDC, 0x18, 0x03,
  0x00, 0x60, 0x0C, 0x07, 0xE0, 0x1E, 0x88, 0xE6, 0x1B, 0x06, 0xC1, 0xB0,
  0x6C, 0x1B, 0x06, 0xE1, 0x98, 0xE3, 0xD8, 0x06, 0x01, 0x80, 0x60, 0x18,
  0x1F, 0x37, 0x7B, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x7C,
  0x7B, 0x0E, 0x0E, 0x1E, 0x0F, 0x07, 0xC3, 0x87, 0x8A, 0xE0, 0x21, 0x8F,
  0x98, 0x61, 0x86, 0x18, 0x61, 0x86, 0x19, 0x38, 0xE3, 0x98, 0x66, 0x19,
  0x86, 0x61, 0x98, 0x66, 0x19, 0x86, 0x61, 0x9C, 0xE3, 0xDC, 0xF8, 0xEE,
  0x08, 0xC1, 0x18, 0x41, 0x88, 0x32, 0x03, 0x40, 0x68, 0x06, 0x00, 0xC0,
  0x10, 0x00, 0xF3, 0xE7, 0x61, 0x83, 0x70, 0xC2, 0x30, 0xC2, 0x30, 0xC4,
  0x19, 0x64, 0x19, 0x68, 0x0E, 0x38, 0x0E, 0x38, 0x0C, 0x30, 0x04, 0x10,
  0xFB, 0xC6, 0x30, 0x64, 0x0F, 0x00, 0xC0, 0x0C, 0x03, 0xC0, 0x98, 0x21,
  0x8C, 0x3B, 0xCF, 0x80, 0xF8, 0xEE, 0x08, 0xC1, 0x18, 0x41, 0x88, 0x31,
  0x03, 0x40, 0x68, 0x06, 0x00, 0xC0, 0x08, 0x02, 0x00, 0x40, 0x10, 0x1E,
  0x03, 0x80, 0x7F, 0x90, 0xE0, 0x30, 0x18, 0x0E, 0x03, 0x01, 0xC0, 0xE0,
  0x30, 0x5C, 0x3F, 0xF8, 0x19, 0x8C, 0x63, 0x18, 0xC6, 0x31, 0xB0, 0x63,
  0x18, 0xC6, 0x31, 0x8C, 0x61, 0x80, 0xFF, 0xFF, 0x80, 0xC3, 0x18, 0xC6,
  0x31, 0x8C, 0x63, 0x06, 0xC6, 0x31, 0x8C, 0x63, 0x18, 0xCC, 0x00, 0x38,
  0x06, 0x62, 0x41, 0xC0 };

const GFXglyph FreeSerif12pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,   6,    0,    0 },   // 0x20 ' '
  {     1,   2,  16,   8,    3,  -15 },   // 0x21 '!'
  {     5,   6,   6,  10,    1,  -15 },   // 0x22 '"'
  {    10,  12,  16,  12,    0,  -15 },   // 0x23 '#'
  {    34,  10,  18,  12,    1,  -16 },   // 0x24 '$'
  {    57,  18,  17,  20,    1,  -16 },   // 0x25 '%'
  {    96,  17,  16,  19,    1,  -15 },   // 0x26 '&'
  {   130,   2,   6,   5,    1,  -15 },   // 0x27 '''
  {   132,   6,  20,   8,    1,  -15 },   // 0x28 '('
  {   147,   6,  20,   8,    1,  -15 },   // 0x29 ')'
  {   162,   8,  10,  12,    3,  -14 },   // 0x2A '*'
  {   172,  11,  11,  14,    1,  -10 },   // 0x2B '+'
  {   188,   3,   6,   6,    2,   -2 },   // 0x2C ','
  {   191,   6,   1,   8,    1,   -5 },   // 0x2D '-'
  {   192,   2,   3,   6,    2,   -2 },   // 0x2E '.'
  {   193,   7,  17,   7,    0,  -16 },   // 0x2F '/'
  {   208,  10,  17,  12,    1,  -16 },   // 0x30 '0'
  {   230,   6,  17,  12,    3,  -16 },   // 0x31 '1'
  {   243,  10,  15,  12,    1,  -14 },   // 0x32 '2'
  {   262,  10,  16,  12,    1,  -15 },   // 0x33 '3'
  {   282,  10,  16,  12,    1,  -15 },   // 0x34 '4'
  {   302,  10,  17,  12,    1,  -16 },   // 0x35 '5'
  {   324,  10,  17,  12,    1,  -16 },   // 0x36 '6'
  {   346,  10,  16,  12,    0,  -15 },   // 0x37 '7'
  {   366,  10,  17,  12,    1,  -16 },   // 0x38 '8'
  {   388,  10,  18,  12,    1,  -16 },   // 0x39 '9'
  {   411,   2,  12,   6,    2,  -11 },   // 0x3A ':'
  {   414,   4,  15,   6,    2,  -11 },   // 0x3B ';'
  {   422,  12,  13,  14,    1,  -12 },   // 0x3C '<'
  {   442,  12,   6,  14,    1,   -8 },   // 0x3D '='
  {   451,  12,  13,  14,    1,  -11 },   // 0x3E '>'
  {   471,   8,  17,  11,    2,  -16 },   // 0x3F '?'
  {   488,  17,  16,  21,    2,  -15 },   // 0x40 '@'
  {   522,  17,  16,  17,    0,  -15 },   // 0x41 'A'
  {   556,  12,  16,  15,    1,  -15 },   // 0x42 'B'
  {   580,  15,  16,  16,    1,  -15 },   // 0x43 'C'
  {   610,  16,  16,  17,    0,  -15 },   // 0x44 'D'
  {   642,  14,  16,  15,    0,  -15 },   // 0x45 'E'
  {   670,  14,  16,  14,    0,  -15 },   // 0x46 'F'
  {   698,  16,  16,  17,    1,  -15 },   // 0x47 'G'
  {   730,  16,  16,  17,    0,  -15 },   // 0x48 'H'
  {   762,   6,  16,   8,    1,  -15 },   // 0x49 'I'
  {   774,   8,  16,   9,    0,  -15 },   // 0x4A 'J'
  {   790,  16,  16,  17,    1,  -15 },   // 0x4B 'K'
  {   822,  15,  16,  15,    0,  -15 },   // 0x4C 'L'
  {   852,  19,  16,  21,    1,  -15 },   // 0x4D 'M'
  {   890,  16,  16,  17,    1,  -15 },   // 0x4E 'N'
  {   922,  15,  16,  17,    1,  -15 },   // 0x4F 'O'
  {   952,  12,  16,  14,    0,  -15 },   // 0x50 'P'
  {   976,  16,  20,  17,    1,  -15 },   // 0x51 'Q'
  {  1016,  15,  16,  16,    0,  -15 },   // 0x52 'R'
  {  1046,  11,  16,  13,    0,  -15 },   // 0x53 'S'
  {  1068,  15,  16,  15,    0,  -15 },   // 0x54 'T'
  {  1098,  16,  16,  17,    1,  -15 },   // 0x55 'U'
  {  1130,  17,  16,  17,    0,  -15 },   // 0x56 'V'
  {  1164,  22,  16,  23,    0,  -15 },   // 0x57 'W'
  {  1208,  17,  16,  17,    0,  -15 },   // 0x58 'X'
  {  1242,  16,  16,  17,    0,  -15 },   // 0x59 'Y'
  {  1274,  14,  16,  15,    1,  -15 },   // 0x5A 'Z'
  {  1302,   5,  20,   8,    2,  -15 },   // 0x5B '['
  {  1315,   7,  17,   7,    0,  -16 },   // 0x5C '\'
  {  1330,   5,  20,   8,    1,  -15 },   // 0x5D ']'
  {  1343,  10,   9,  11,    1,  -15 },   // 0x5E '^'
  {  1355,  12,   1,  12,    0,    3 },   // 0x5F '_'
  {  1357,   5,   4,   6,    0,  -15 },   // 0x60 '`'
  {  1360,  10,  11,  10,    1,  -10 },   // 0x61 'a'
  {  1374,  10,  17,  12,    1,  -16 },   // 0x62 'b'
  {  1396,   8,  11,  11,    1,  -10 },   // 0x63 'c'
  {  1407,  10,  17,  12,    1,  -16 },   // 0x64 'd'
  {  1429,  10,  11,  11,    1,  -10 },   // 0x65 'e'
  {  1443,   9,  17,   9,    0,  -16 },   // 0x66 'f'
  {  1463,  12,  16,  11,    0,  -10 },   // 0x67 'g'
  {  1487,  11,  17,  12,    0,  -16 },   // 0x68 'h'
  {  1511,   5,  16,   7,    0,  -15 },   // 0x69 'i'
  {  1521,   6,  21,   8,    0,  -15 },   // 0x6A 'j'
  {  1537,  11,  17,  12,    1,  -16 },   // 0x6B 'k'
  {  1561,   5,  17,   6,    0,  -16 },   // 0x6C 'l'
  {  1572,  18,  11,  19,    0,  -10 },   // 0x6D 'm'
  {  1597,  11,  11,  12,    0,  -10 },   // 0x6E 'n'
  {  1613,  10,  11,  12,    1,  -10 },   // 0x6F 'o'
  {  1627,  11,  16,  12,    0,  -10 },   // 0x70 'p'
  {  1649,  10,  16,  12,    1,  -10 },   // 0x71 'q'
  {  1669,   8,  11,   8,    0,  -10 },   // 0x72 'r'
  {  1680,   7,  11,   9,    1,  -10 },   // 0x73 's'
  {  1690,   6,  13,   7,    1,  -12 },   // 0x74 't'
  {  1700,  10,  11,  12,    1,  -10 },   // 0x75 'u'
  {  1714,  11,  11,  11,    0,  -10 },   // 0x76 'v'
  {  1730,  16,  11,  16,    0,  -10 },   // 0x77 'w'
  {  1752,  11,  11,  12,    0,  -10 },   // 0x78 'x'
  {  1768,  11,  16,  11,    0,  -10 },   // 0x79 'y'
  {  1790,  10,  11,  10,    0,  -10 },   // 0x7A 'z'
  {  1804,   5,  21,  12,    2,  -16 },   // 0x7B '{'
  {  1818,   1,  17,   5,    2,  -16 },   // 0x7C '|'
  {  1821,   5,  21,  12,    5,  -15 },   // 0x7D '}'
  {  1835,  12,   3,  12,    0,   -6 } }; // 0x7E '~'

const GFXfont FreeSerif12pt7b PROGMEM = {
  (uint8_t  *)FreeSerif12pt7bBitmaps,
  (GFXglyph *)FreeSerif12pt7bGlyphs,
  0x20, 0x7E, 28 };

// Approx. 2512 bytes

#endif // FreeSerif12pt7b_H
