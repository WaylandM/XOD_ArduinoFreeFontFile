#ifndef FreeMonoBoldOblique12pt7b_H
#define FreeMonoBoldOblique12pt7b_H

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

const uint8_t FreeMonoBoldOblique12pt7bBitmaps[] PROGMEM = {
  0x00, 0x1C, 0xF3, 0xCE, 0x38, 0xE7, 0x1C, 0x61, 0x84, 0x00, 0x63, 0x8C,
  0x00, 0xE7, 0xE7, 0xE6, 0xC6, 0xC6, 0xC4, 0x84, 0x03, 0x30, 0x19, 0x81,
  0xDC, 0x0C, 0xE0, 0x66, 0x1F, 0xFC, 0xFF, 0xE1, 0x98, 0x0C, 0xC0, 0xEE,
  0x06, 0x70, 0xFF, 0xCF, 0xFE, 0x1D, 0xC0, 0xCC, 0x06, 0x60, 0x77, 0x03,
  0x30, 0x00, 0x01, 0x00, 0x70, 0x0C, 0x07, 0xF1, 0xFE, 0x71, 0xCC, 0x11,
  0xC0, 0x3F, 0x03, 0xF0, 0x0F, 0x20, 0x6E, 0x0D, 0xC3, 0x3F, 0xE7, 0xF8,
  0x1C, 0x03, 0x00, 0x60, 0x0C, 0x00, 0x0E, 0x03, 0xE0, 0xC4, 0x10, 0x82,
  0x30, 0x7C, 0x07, 0x78, 0x7C, 0x7F, 0x19, 0xF0, 0x62, 0x08, 0x41, 0x18,
  0x3E, 0x03, 0x80, 0x07, 0xC1, 0xF8, 0x62, 0x0C, 0x01, 0x80, 0x38, 0x0F,
  0x03, 0xF7, 0x6F, 0xD8, 0xF3, 0x1E, 0x7F, 0xE7, 0xF8, 0xFF, 0x6D, 0x20,
  0x06, 0x1C, 0x70, 0xC3, 0x06, 0x18, 0x30, 0xC1, 0x83, 0x06, 0x0C, 0x18,
  0x30, 0x70, 0x60, 0xC1, 0x00, 0x0C, 0x18, 0x38, 0x30, 0x60, 0xC1, 0x83,
  0x06, 0x0C, 0x30, 0x61, 0xC3, 0x0E, 0x38, 0x61, 0xC3, 0x00, 0x06, 0x00,
  0xC0, 0x18, 0x3F, 0x7F, 0xFE, 0xFF, 0x07, 0x81, 0xF8, 0x77, 0x0C, 0x60,
  0x03, 0x00, 0x70, 0x07, 0x00, 0x60, 0x06, 0x0F, 0xFF, 0xFF, 0xF0, 0xE0,
  0x0C, 0x00, 0xC0, 0x0C, 0x01, 0xC0, 0x18, 0x00, 0x1C, 0xE3, 0x1C, 0x63,
  0x08, 0x00, 0x7F, 0xFF, 0xFF, 0xC0, 0x7F, 0x00, 0x00, 0x08, 0x00, 0x70,
  0x01, 0x80, 0x0E, 0x00, 0x70, 0x03, 0x80, 0x0C, 0x00, 0x70, 0x03, 0x80,
  0x0C, 0x00, 0x70, 0x03, 0x80, 0x0C, 0x00, 0x70, 0x03, 0x80, 0x0C, 0x00,
  0x70, 0x03, 0x80, 0x0C, 0x00, 0x20, 0x00, 0x07, 0x83, 0xF8, 0xE3, 0x98,
  0x37, 0x06, 0xC0, 0xD8, 0x1B, 0x03, 0xE0, 0xF8, 0x1B, 0x03, 0x60, 0xEE,
  0x38, 0xFE, 0x0F, 0x00, 0x03, 0xC1, 0xF0, 0x7E, 0x0C, 0xC0, 0x38, 0x07,
  0x00, 0xC0, 0x18, 0x07, 0x00, 0xE0, 0x18, 0x03, 0x00, 0x61, 0xFF, 0xFF,
  0xF0, 0x03, 0xE0, 0x3F, 0x83, 0x8E, 0x38, 0x31, 0x81, 0x80, 0x18, 0x01,
  0xC0, 0x1C, 0x01, 0xC0, 0x38, 0x03, 0x80, 0x38, 0x47, 0x87, 0x3F, 0xF3,
  0xFF, 0x80, 0x07, 0xC1, 0xFF, 0x18, 0x70, 0x03, 0x00, 0x30, 0x06, 0x07,
  0xC0, 0x7C, 0x00, 0xE0, 0x06, 0x00, 0x60, 0x06, 0xC1, 0xCF, 0xF8, 0x7E,
  0x00, 0x01, 0xE0, 0x3C, 0x0F, 0x03, 0x60, 0xCC, 0x3B, 0x8E, 0x63, 0x8C,
  0x61, 0x9F, 0xFB, 0xFF, 0x01, 0x81, 0xF8, 0x3F, 0x00, 0x0F, 0xF1, 0xFE,
  0x18, 0x01, 0x80, 0x18, 0x03, 0xF8, 0x3F, 0xC3, 0x8E, 0x00, 0x60, 0x06,
  0x00, 0x60, 0x0C, 0xC1, 0xCF, 0xF8, 0x7E, 0x00, 0x03, 0xE1, 0xFC, 0x70,
  0x1C, 0x03, 0x00, 0xC0, 0x1B, 0xC7, 0xFC, 0xF3, 0x98, 0x33, 0x06, 0x60,
  0xCE, 0x30, 0xFC, 0x0F, 0x00, 0xFF, 0xFF, 0xFB, 0x07, 0x60, 0xC0, 0x38,
  0x06, 0x01, 0xC0, 0x30, 0x0E, 0x01, 0x80, 0x70, 0x1C, 0x03, 0x80, 0x60,
  0x08, 0x00, 0x07, 0x83, 0xF8, 0xE3, 0xB0, 0x36, 0x06, 0xC0, 0xDC, 0x31,
  0xFC, 0x3F, 0x8C, 0x3B, 0x03, 0x60, 0x6C, 0x39, 0xFE, 0x1F, 0x00, 0x07,
  0x81, 0xF8, 0x63, 0x98, 0x33, 0x06, 0x60, 0xCE, 0x79, 0xFF, 0x1E, 0xC0,
  0x18, 0x06, 0x01, 0xC0, 0x71, 0xFC, 0x3E, 0x00, 0x19, 0xCC, 0x00, 0x00,
  0x00, 0x67, 0x30, 0x06, 0x1C, 0x30, 0x00, 0x00, 0x00, 0x00, 0x38, 0x71,
  0xC3, 0x0E, 0x18, 0x20, 0x00, 0x00, 0x18, 0x03, 0xC0, 0x7C, 0x1F, 0x03,
  0xE0, 0x3E, 0x00, 0x7C, 0x01, 0xF0, 0x03, 0xE0, 0x07, 0x80, 0x08, 0x7F,
  0xFB, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFB, 0xFF, 0xC0, 0x30,
  0x01, 0xE0, 0x07, 0xC0, 0x0F, 0x00, 0x3E, 0x00, 0x7C, 0x1F, 0x03, 0xE0,
  0x7C, 0x07, 0x80, 0x20, 0x00, 0x3E, 0x7F, 0xB0, 0xF8, 0x30, 0x18, 0x1C,
  0x1C, 0x3C, 0x38, 0x18, 0x00, 0x06, 0x07, 0x03, 0x00, 0x03, 0xC0, 0x7E,
  0x0C, 0x71, 0x83, 0x30, 0x33, 0x0F, 0x33, 0xE6, 0x76, 0x6C, 0x66, 0xC6,
  0x6C, 0x6C, 0xFC, 0xC7, 0xEC, 0x00, 0xC0, 0x0C, 0x00, 0xE3, 0x07, 0xF0,
  0x3C, 0x00, 0x07, 0xF0, 0x1F, 0xE0, 0x07, 0xC0, 0x1F, 0x80, 0x3B, 0x00,
  0xE7, 0x01, 0x8E, 0x07, 0x1C, 0x1F, 0xF8, 0x3F, 0xF0, 0xE0, 0x71, 0x80,
  0xEF, 0xC7, 0xFF, 0x8F, 0xC0, 0x3F, 0xF1, 0xFF, 0xC3, 0x06, 0x38, 0x31,
  0xC1, 0x8C, 0x18, 0x7F, 0xC3, 0xFE, 0x38, 0x39, 0xC0, 0xCC, 0x06, 0x60,
  0x6F, 0xFF, 0x7F, 0xE0, 0x03, 0xEC, 0x3F, 0xF1, 0xC3, 0x8C, 0x06, 0x60,
  0x19, 0x80, 0x0C, 0x00, 0x30, 0x00, 0xC0, 0x03, 0x00, 0x0C, 0x03, 0x3C,
  0x1C, 0x7F, 0xE0, 0x7E, 0x00, 0x3F, 0xE1, 0xFF, 0x87, 0x0E, 0x30, 0x31,
  0x81, 0x8C, 0x0C, 0xE0, 0x67, 0x03, 0x30, 0x31, 0x81, 0x8C, 0x0C, 0xE1,
  0xCF, 0xFC, 0x7F, 0x80, 0x1F, 0xFE, 0x3F, 0xFC, 0x38, 0x38, 0x70, 0x70,
  0xCC, 0xC1, 0x98, 0x03, 0xF0, 0x0F, 0xE0, 0x1D, 0x80, 0x31, 0x18, 0x60,
  0x70, 0xC0, 0xE7, 0xFF, 0x9F, 0xFF, 0x00, 0x1F, 0xFF, 0x1F, 0xFE, 0x0E,
  0x06, 0x0C, 0x0E, 0x0C, 0xC4, 0x0C, 0xC0, 0x1F, 0xC0, 0x1F, 0xC0, 0x19,
  0xC0, 0x19, 0x80, 0x18, 0x00, 0x38, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x07,
  0xEC, 0x7F, 0xF3, 0x83, 0x9C, 0x06, 0x60, 0x19, 0x80, 0x0C, 0x00, 0x30,
  0xFE, 0xC3, 0xFB, 0x01, 0xCC, 0x07, 0x3C, 0x38, 0x7F, 0xE0, 0x7E, 0x00,
  0x0F, 0xBF, 0x1F, 0xBE, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x1C, 0x0C, 0x1C,
  0x1F, 0xF8, 0x1F, 0xF8, 0x18, 0x18, 0x18, 0x38, 0x18, 0x38, 0x38, 0x30,
  0x7C, 0xFC, 0xFC, 0xF8, 0x3F, 0xF3, 0xFF, 0x03, 0x00, 0x70, 0x07, 0x00,
  0x60, 0x06, 0x00, 0x60, 0x0E, 0x00, 0xE0, 0x0E, 0x00, 0xC0, 0xFF, 0xCF,
  0xFC, 0x03, 0xFF, 0x03, 0xFF, 0x00, 0x38, 0x00, 0x30, 0x00, 0x30, 0x00,
  0x30, 0x00, 0x70, 0x20, 0x70, 0x60, 0x60, 0x60, 0x60, 0x60, 0xE0, 0xE1,
  0xC0, 0xFF, 0x80, 0x3F, 0x00, 0x1F, 0x9F, 0x1F, 0x9E, 0x0E, 0x38, 0x0C,
  0x70, 0x0C, 0xE0, 0x0F, 0xC0, 0x1F, 0xC0, 0x1F, 0xE0, 0x1C, 0xE0, 0x18,
  0x60, 0x18, 0x70, 0x38, 0x70, 0xFE, 0x3C, 0xFC, 0x3C, 0x3F, 0xC1, 0xFE,
  0x01, 0x80, 0x1C, 0x00, 0xE0, 0x06, 0x00, 0x30, 0x01, 0x80, 0x1C, 0x18,
  0xE0, 0xC6, 0x06, 0x30, 0x7F, 0xFF, 0xFF, 0xF8, 0x1E, 0x07, 0x87, 0x81,
  0xE0, 0xF0, 0xF0, 0x7C, 0x7C, 0x1F, 0x1F, 0x06, 0xCF, 0x81, 0xBF, 0x60,
  0xEF, 0x98, 0x3B, 0xEE, 0x0C, 0x73, 0x83, 0x1C, 0xC0, 0xC0, 0x30, 0xFC,
  0x7E, 0x3F, 0x1F, 0x80, 0x1E, 0x1F, 0x8F, 0x8F, 0xC3, 0xC1, 0x81, 0xF1,
  0xC0, 0xF8, 0xE0, 0x6E, 0x60, 0x77, 0x30, 0x3B, 0x98, 0x18, 0xFC, 0x0C,
  0x7E, 0x06, 0x1E, 0x07, 0x0F, 0x07, 0xE3, 0x83, 0xE1, 0xC0, 0x03, 0xE0,
  0x3F, 0xE1, 0xC3, 0x8C, 0x07, 0x60, 0x0D, 0x80, 0x3C, 0x00, 0xF0, 0x03,
  0xC0, 0x1B, 0x00, 0x6E, 0x03, 0x1C, 0x38, 0x7F, 0xC0, 0x7C, 0x00, 0x3F,
  0xE1, 0xFF, 0x83, 0x0E, 0x38, 0x31, 0xC1, 0x8C, 0x0C, 0x60, 0xC3, 0xFC,
  0x3F, 0xC1, 0xC0, 0x0C, 0x00, 0x60, 0x0F, 0xF0, 0x7F, 0x80, 0x03, 0xE0,
  0x3F, 0xE1, 0xC3, 0x8C, 0x07, 0x60, 0x0D, 0x80, 0x3C, 0x00, 0xF0, 0x03,
  0xC0, 0x1B, 0x00, 0x6E, 0x03, 0x1C, 0x38, 0x7F, 0xC0, 0xFC, 0x03, 0x02,
  0x1F, 0xFC, 0xFF, 0xE0, 0x1F, 0xF0, 0x3F, 0xF8, 0x38, 0x70, 0x60, 0x60,
  0xC0, 0xC1, 0x87, 0x07, 0xFC, 0x0F, 0xF0, 0x18, 0xF0, 0x30, 0xE0, 0x60,
  0xE1, 0xC1, 0xCF, 0xE1, 0xFF, 0xC3, 0xC0, 0x0F, 0xB1, 0xFF, 0x30, 0xE6,
  0x06, 0x60, 0x67, 0x80, 0x7F, 0x01, 0xFC, 0x01, 0xC4, 0x0C, 0xC0, 0xCE,
  0x18, 0xFF, 0x8B, 0xE0, 0x7F, 0xFB, 0xFF, 0xD9, 0xCF, 0xCE, 0x7C, 0x63,
  0x63, 0x18, 0x18, 0x01, 0xC0, 0x0E, 0x00, 0x60, 0x03, 0x00, 0x18, 0x0F,
  0xF8, 0x7F, 0xC0, 0x7E, 0xFF, 0xF3, 0xF3, 0x03, 0x1C, 0x0C, 0x60, 0x31,
  0x81, 0xC6, 0x06, 0x38, 0x18, 0xE0, 0x63, 0x03, 0x8C, 0x0C, 0x30, 0x70,
  0x7F, 0x80, 0xF8, 0x00, 0xFC, 0x7F, 0xF8, 0xFD, 0xC0, 0x61, 0x81, 0xC3,
  0x87, 0x07, 0x0C, 0x0E, 0x38, 0x0C, 0x60, 0x19, 0xC0, 0x3F, 0x00, 0x7C,
  0x00, 0xF8, 0x00, 0xE0, 0x01, 0x80, 0x00, 0x7E, 0x7E, 0xFC, 0xFD, 0xC0,
  0x73, 0x9C, 0xE7, 0x79, 0x8E, 0xF7, 0x1B, 0xEE, 0x36, 0xD8, 0x7D, 0xF0,
  0xF3, 0xE1, 0xE7, 0x83, 0x8F, 0x07, 0x1E, 0x1C, 0x38, 0x00, 0x1F, 0x1F,
  0x1F, 0x1F, 0x0E, 0x1C, 0x07, 0x38, 0x07, 0x70, 0x03, 0xE0, 0x03, 0xC0,
  0x03, 0xC0, 0x07, 0xE0, 0x0E, 0xE0, 0x1C, 0x70, 0x38, 0x70, 0xFC, 0xFC,
  0xFC, 0xFC, 0xF8, 0xFF, 0xC7, 0xCC, 0x38, 0x73, 0x83, 0x9C, 0x0F, 0xC0,
  0x7C, 0x01, 0xC0, 0x0C, 0x00, 0x60, 0x03, 0x00, 0x38, 0x0F, 0xF8, 0x7F,
  0x80, 0x0F, 0xF8, 0x7F, 0xE1, 0xC7, 0x86, 0x1C, 0x18, 0xE0, 0x07, 0x00,
  0x38, 0x01, 0xC0, 0x0E, 0x00, 0x70, 0xC3, 0x83, 0x1C, 0x1C, 0x7F, 0xF3,
  0xFF, 0x80, 0x0F, 0x87, 0xC3, 0x03, 0x81, 0xC0, 0xC0, 0x60, 0x30, 0x38,
  0x1C, 0x0C, 0x06, 0x03, 0x03, 0x81, 0xC0, 0xC0, 0x60, 0x3E, 0x3F, 0x00,
  0x41, 0xC3, 0x83, 0x07, 0x0E, 0x1C, 0x18, 0x38, 0x70, 0xE0, 0xC1, 0xC3,
  0x83, 0x06, 0x0E, 0x1C, 0x18, 0x20, 0x0F, 0x83, 0xE0, 0x18, 0x0E, 0x03,
  0x80, 0xC0, 0x30, 0x0C, 0x07, 0x01, 0xC0, 0x60, 0x18, 0x06, 0x03, 0x80,
  0xE0, 0x30, 0x0C, 0x1F, 0x07, 0xC0, 0x02, 0x01, 0x80, 0xF0, 0x7E, 0x3B,
  0x9C, 0x7E, 0x1F, 0x03, 0xFF, 0xFF, 0xFF, 0xFC, 0xCE, 0x73, 0x1F, 0xC3,
  0xFE, 0x00, 0x60, 0x06, 0x0F, 0xE3, 0xFE, 0x70, 0xCC, 0x0C, 0xC3, 0xCF,
  0xFF, 0x7F, 0xF0, 0x1E, 0x00, 0x3C, 0x00, 0x38, 0x00, 0x70, 0x00, 0xDF,
  0x81, 0xFF, 0x83, 0xC3, 0x8F, 0x03, 0x1C, 0x06, 0x38, 0x0C, 0x70, 0x18,
  0xE0, 0x63, 0xE1, 0x9F, 0xFE, 0x3D, 0xF8, 0x00, 0x0F, 0xF3, 0xFF, 0x30,
  0x76, 0x07, 0xE0, 0x6C, 0x00, 0xC0, 0x0C, 0x00, 0xE0, 0x67, 0xFE, 0x3F,
  0x80, 0x00, 0x3C, 0x00, 0xF0, 0x01, 0xC0, 0x06, 0x07, 0xD8, 0x7F, 0xE3,
  0x0F, 0x98, 0x1E, 0xE0, 0x73, 0x01, 0xCC, 0x07, 0x30, 0x3C, 0xE1, 0xF1,
  0xFF, 0xE3, 0xF7, 0x80, 0x0F, 0xC1, 0xFE, 0x78, 0x76, 0x03, 0xFF, 0xFF,
  0xFF, 0xC0, 0x0C, 0x00, 0xE0, 0xE7, 0xFE, 0x3F, 0x80, 0x00, 0xFC, 0x07,
  0xF8, 0x0C, 0x00, 0x38, 0x01, 0xFF, 0x07, 0xFE, 0x01, 0x80, 0x07, 0x00,
  0x0E, 0x00, 0x18, 0x00, 0x30, 0x00, 0x60, 0x01, 0xC0, 0x1F, 0xF8, 0x3F,
  0xF0, 0x00, 0x0F, 0xBC, 0x7F, 0xF3, 0x0F, 0x18, 0x1C, 0xC0, 0x73, 0x01,
  0x8C, 0x0E, 0x30, 0x38, 0xE3, 0xE1, 0xFF, 0x83, 0xEC, 0x00, 0x30, 0x01,
  0xC0, 0x06, 0x07, 0xF0, 0x1F, 0x80, 0x1E, 0x01, 0xF0, 0x03, 0x00, 0x18,
  0x00, 0xDE, 0x0F, 0xF8, 0x78, 0xC3, 0x86, 0x18, 0x30, 0xC1, 0x8E, 0x1C,
  0x70, 0xE3, 0x06, 0x7E, 0xFF, 0xE7, 0xE0, 0x03, 0x80, 0x70, 0x00, 0x0F,
  0xC1, 0xF0, 0x06, 0x00, 0xC0, 0x38, 0x07, 0x00, 0xC0, 0x18, 0x03, 0x0F,
  0xFF, 0xFF, 0xC0, 0x00, 0x70, 0x07, 0x00, 0x00, 0xFF, 0x1F, 0xF0, 0x07,
  0x00, 0x70, 0x06, 0x00, 0x60, 0x06, 0x00, 0xE0, 0x0E, 0x00, 0xC0, 0x0C,
  0x00, 0xC0, 0x1C, 0x03, 0x87, 0xF0, 0xFE, 0x00, 0x1E, 0x00, 0x78, 0x00,
  0xE0, 0x03, 0x80, 0x0C, 0xFC, 0x33, 0xE0, 0xDE, 0x07, 0xE0, 0x1F, 0x00,
  0x7C, 0x01, 0xF8, 0x06, 0xF0, 0x39, 0xC3, 0xE7, 0xEF, 0x1F, 0x80, 0x0F,
  0x81, 0xF0, 0x06, 0x01, 0xC0, 0x38, 0x06, 0x00, 0xC0, 0x18, 0x07, 0x00,
  0xE0, 0x18, 0x03, 0x00, 0x61, 0xFF, 0xFF, 0xF8, 0x3F, 0xBC, 0x7F, 0xFC,
  0xF3, 0x98, 0xC6, 0x33, 0x9C, 0xE7, 0x39, 0xCC, 0x63, 0x18, 0xC6, 0x31,
  0x8D, 0xF7, 0xBF, 0xEF, 0x78, 0x3D, 0xE1, 0xFF, 0x8F, 0x8C, 0x38, 0x61,
  0x83, 0x0C, 0x18, 0xE1, 0xC7, 0x0E, 0x30, 0x67, 0xEF, 0xFE, 0x7E, 0x07,
  0xC1, 0xFE, 0x38, 0x76, 0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x06, 0xE1,
  0xC7, 0xF8, 0x3E, 0x00, 0x1E, 0xFC, 0x1F, 0xFE, 0x0F, 0x87, 0x0F, 0x03,
  0x0E, 0x03, 0x0E, 0x03, 0x0E, 0x07, 0x0E, 0x06, 0x1F, 0x0C, 0x1F, 0xF8,
  0x19, 0xF0, 0x18, 0x00, 0x18, 0x00, 0x38, 0x00, 0xFE, 0x00, 0xFE, 0x00,
  0x0F, 0xDE, 0x3F, 0xFC, 0xC3, 0xE3, 0x03, 0x84, 0x07, 0x18, 0x0E, 0x30,
  0x1C, 0x60, 0x78, 0xE1, 0xE0, 0xFF, 0xC0, 0xF9, 0x80, 0x03, 0x00, 0x0E,
  0x00, 0x1C, 0x01, 0xFC, 0x03, 0xF8, 0x1E, 0x78, 0x7F, 0xF0, 0x7C, 0xC3,
  0xC0, 0x0E, 0x00, 0x30, 0x00, 0xC0, 0x03, 0x00, 0x1C, 0x03, 0xFF, 0x0F,
  0xFC, 0x00, 0x07, 0xF1, 0xFF, 0x30, 0x73, 0x86, 0x3F, 0x81, 0xFE, 0x03,
  0xE6, 0x06, 0xF0, 0xEF, 0xFC, 0xFF, 0x00, 0x0C, 0x07, 0x01, 0x83, 0xFF,
  0xFF, 0xCE, 0x03, 0x00, 0xC0, 0x30, 0x1C, 0x07, 0x01, 0x83, 0x7F, 0xCF,
  0xC0, 0xF0, 0xFF, 0x1F, 0x60, 0x76, 0x07, 0x60, 0x76, 0x06, 0x60, 0x66,
  0x0E, 0x61, 0xE7, 0xFF, 0x3E, 0xF0, 0x7E, 0x7E, 0xFC, 0xFC, 0xE0, 0xC0,
  0xC3, 0x81, 0x86, 0x03, 0x98, 0x07, 0x70, 0x06, 0xC0, 0x0F, 0x80, 0x1E,
  0x00, 0x38, 0x00, 0xF8, 0x7F, 0xE3, 0xE6, 0x63, 0x1B, 0xDC, 0x6F, 0x61,
  0xFF, 0x87, 0xFC, 0x1E, 0xF0, 0x73, 0x81, 0xCE, 0x06, 0x38, 0x00, 0x3E,
  0x7C, 0xF9, 0xF1, 0xE7, 0x03, 0xF8, 0x07, 0xC0, 0x1F, 0x01, 0xFC, 0x0F,
  0x38, 0x78, 0xFB, 0xF7, 0xEF, 0x9F, 0x80, 0x1F, 0x1F, 0x3E, 0x1F, 0x1C,
  0x1C, 0x0C, 0x18, 0x0E, 0x38, 0x0E, 0x70, 0x06, 0x60, 0x07, 0xE0, 0x07,
  0xC0, 0x07, 0xC0, 0x03, 0x80, 0x07, 0x00, 0x07, 0x00, 0x0E, 0x00, 0xFF,
  0x00, 0xFF, 0x00, 0x1F, 0xF1, 0xFF, 0x38, 0xE3, 0x1C, 0x03, 0x80, 0x70,
  0x0E, 0x01, 0xC6, 0x38, 0x67, 0xFE, 0x7F, 0xE0, 0x01, 0xC0, 0xF0, 0x70,
  0x18, 0x06, 0x03, 0x80, 0xE0, 0x30, 0x1C, 0x3E, 0x0F, 0x00, 0x60, 0x18,
  0x06, 0x03, 0x80, 0xC0, 0x30, 0x0F, 0x01, 0xC0, 0x0C, 0x71, 0xC7, 0x18,
  0x63, 0x8E, 0x30, 0xC3, 0x1C, 0x71, 0x86, 0x38, 0xE3, 0x04, 0x00, 0x0E,
  0x07, 0x80, 0xC0, 0x60, 0x70, 0x30, 0x18, 0x0C, 0x06, 0x01, 0xC1, 0xE1,
  0xC0, 0xC0, 0xE0, 0x70, 0x30, 0x38, 0x78, 0x38, 0x00, 0x3C, 0x27, 0xE6,
  0xEF, 0xCC, 0x38 };

const GFXglyph FreeMonoBoldOblique12pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,  14,    0,    0 },   // 0x20 ' '
  {     1,   6,  15,  14,    6,  -14 },   // 0x21 '!'
  {    13,   8,   7,  14,    6,  -13 },   // 0x22 '"'
  {    20,  13,  18,  14,    2,  -15 },   // 0x23 '#'
  {    50,  11,  20,  14,    3,  -16 },   // 0x24 '$'
  {    78,  11,  15,  14,    3,  -14 },   // 0x25 '%'
  {    99,  11,  13,  14,    2,  -12 },   // 0x26 '&'
  {   117,   3,   7,  14,    8,  -13 },   // 0x27 '''
  {   120,   7,  19,  14,    7,  -14 },   // 0x28 '('
  {   137,   7,  19,  14,    2,  -14 },   // 0x29 ')'
  {   154,  11,  10,  14,    4,  -14 },   // 0x2A '*'
  {   168,  12,  13,  14,    3,  -12 },   // 0x2B '+'
  {   188,   6,   7,  14,    3,   -2 },   // 0x2C ','
  {   194,  13,   2,  14,    2,   -7 },   // 0x2D '-'
  {   198,   3,   3,  14,    6,   -2 },   // 0x2E '.'
  {   200,  14,  20,  14,    2,  -16 },   // 0x2F '/'
  {   235,  11,  15,  14,    3,  -14 },   // 0x30 '0'
  {   256,  11,  15,  14,    2,  -14 },   // 0x31 '1'
  {   277,  13,  15,  14,    1,  -14 },   // 0x32 '2'
  {   302,  12,  15,  14,    2,  -14 },   // 0x33 '3'
  {   325,  11,  14,  14,    3,  -13 },   // 0x34 '4'
  {   345,  12,  15,  14,    2,  -14 },   // 0x35 '5'
  {   368,  11,  15,  14,    4,  -14 },   // 0x36 '6'
  {   389,  11,  15,  14,    4,  -14 },   // 0x37 '7'
  {   410,  11,  15,  14,    3,  -14 },   // 0x38 '8'
  {   431,  11,  15,  14,    3,  -14 },   // 0x39 '9'
  {   452,   5,  11,  14,    5,  -10 },   // 0x3A ':'
  {   459,   7,  15,  14,    3,  -10 },   // 0x3B ';'
  {   473,  13,  11,  14,    2,  -11 },   // 0x3C '<'
  {   491,  13,   7,  14,    2,   -9 },   // 0x3D '='
  {   503,  13,  11,  14,    2,  -11 },   // 0x3E '>'
  {   521,   9,  14,  14,    5,  -13 },   // 0x3F '?'
  {   537,  12,  19,  14,    2,  -14 },   // 0x40 '@'
  {   566,  15,  14,  14,    0,  -13 },   // 0x41 'A'
  {   593,  13,  14,  14,    1,  -13 },   // 0x42 'B'
  {   616,  14,  14,  14,    2,  -13 },   // 0x43 'C'
  {   641,  13,  14,  14,    1,  -13 },   // 0x44 'D'
  {   664,  15,  14,  14,    0,  -13 },   // 0x45 'E'
  {   691,  16,  14,  14,    0,  -13 },   // 0x46 'F'
  {   719,  14,  14,  14,    1,  -13 },   // 0x47 'G'
  {   744,  16,  14,  14,    0,  -13 },   // 0x48 'H'
  {   772,  12,  14,  14,    2,  -13 },   // 0x49 'I'
  {   793,  16,  14,  14,    0,  -13 },   // 0x4A 'J'
  {   821,  16,  14,  14,    0,  -13 },   // 0x4B 'K'
  {   849,  13,  14,  14,    1,  -13 },   // 0x4C 'L'
  {   872,  18,  14,  14,    0,  -13 },   // 0x4D 'M'
  {   904,  17,  14,  14,    0,  -13 },   // 0x4E 'N'
  {   934,  14,  14,  14,    1,  -13 },   // 0x4F 'O'
  {   959,  13,  14,  14,    1,  -13 },   // 0x50 'P'
  {   982,  14,  17,  14,    1,  -13 },   // 0x51 'Q'
  {  1012,  15,  14,  14,    0,  -13 },   // 0x52 'R'
  {  1039,  12,  14,  14,    3,  -13 },   // 0x53 'S'
  {  1060,  13,  14,  14,    2,  -13 },   // 0x54 'T'
  {  1083,  14,  14,  14,    2,  -13 },   // 0x55 'U'
  {  1108,  15,  14,  14,    1,  -13 },   // 0x56 'V'
  {  1135,  15,  14,  14,    1,  -13 },   // 0x57 'W'
  {  1162,  16,  14,  14,    0,  -13 },   // 0x58 'X'
  {  1190,  13,  14,  14,    2,  -13 },   // 0x59 'Y'
  {  1213,  14,  14,  14,    1,  -13 },   // 0x5A 'Z'
  {  1238,   9,  19,  14,    5,  -14 },   // 0x5B '['
  {  1260,   7,  20,  14,    5,  -16 },   // 0x5C '\'
  {  1278,  10,  19,  14,    2,  -14 },   // 0x5D ']'
  {  1302,  10,   8,  14,    4,  -15 },   // 0x5E '^'
  {  1312,  15,   2,  14,   -1,    4 },   // 0x5F '_'
  {  1316,   4,   4,  14,    7,  -15 },   // 0x60 '`'
  {  1318,  12,  11,  14,    2,  -10 },   // 0x61 'a'
  {  1335,  15,  15,  14,   -1,  -14 },   // 0x62 'b'
  {  1364,  12,  11,  14,    2,  -10 },   // 0x63 'c'
  {  1381,  14,  15,  14,    2,  -14 },   // 0x64 'd'
  {  1408,  12,  11,  14,    2,  -10 },   // 0x65 'e'
  {  1425,  15,  15,  14,    2,  -14 },   // 0x66 'f'
  {  1454,  14,  16,  14,    2,  -10 },   // 0x67 'g'
  {  1482,  13,  15,  14,    1,  -14 },   // 0x68 'h'
  {  1507,  11,  14,  14,    2,  -13 },   // 0x69 'i'
  {  1527,  12,  19,  14,    1,  -13 },   // 0x6A 'j'
  {  1556,  14,  15,  14,    1,  -14 },   // 0x6B 'k'
  {  1583,  11,  15,  14,    2,  -14 },   // 0x6C 'l'
  {  1604,  15,  11,  14,    0,  -10 },   // 0x6D 'm'
  {  1625,  13,  11,  14,    1,  -10 },   // 0x6E 'n'
  {  1643,  12,  11,  14,    2,  -10 },   // 0x6F 'o'
  {  1660,  16,  16,  14,   -1,  -10 },   // 0x70 'p'
  {  1692,  15,  16,  14,    1,  -10 },   // 0x71 'q'
  {  1722,  14,  11,  14,    1,  -10 },   // 0x72 'r'
  {  1742,  12,  11,  14,    2,  -10 },   // 0x73 's'
  {  1759,  10,  14,  14,    2,  -13 },   // 0x74 't'
  {  1777,  12,  11,  14,    2,  -10 },   // 0x75 'u'
  {  1794,  15,  11,  14,    1,  -10 },   // 0x76 'v'
  {  1815,  14,  11,  14,    2,  -10 },   // 0x77 'w'
  {  1835,  14,  11,  14,    1,  -10 },   // 0x78 'x'
  {  1855,  16,  16,  14,    0,  -10 },   // 0x79 'y'
  {  1887,  12,  11,  14,    2,  -10 },   // 0x7A 'z'
  {  1904,  10,  19,  14,    4,  -14 },   // 0x7B '{'
  {  1928,   6,  19,  14,    5,  -14 },   // 0x7C '|'
  {  1943,   9,  19,  14,    3,  -14 },   // 0x7D '}'
  {  1965,  12,   4,  14,    3,   -7 } }; // 0x7E '~'

const GFXfont FreeMonoBoldOblique12pt7b PROGMEM = {
  (uint8_t  *)FreeMonoBoldOblique12pt7bBitmaps,
  (GFXglyph *)FreeMonoBoldOblique12pt7bGlyphs,
  0x20, 0x7E, 24 };

// Approx. 2643 bytes

#endif // FreeMonoBoldOblique12pt7b_H
