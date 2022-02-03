#ifndef FreeMonoBold16pt7b_H
#define FreeMonoBold16pt7b_H

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

const uint8_t FreeMonoBold16pt7bBitmaps[] PROGMEM = {
  0x00, 0x77, 0xFF, 0xFF, 0xFF, 0xFF, 0x73, 0x9C, 0xE7, 0x38, 0x00, 0x77,
  0xFE, 0xE0, 0xF3, 0xFC, 0xFF, 0x3F, 0xCF, 0x61, 0x98, 0x66, 0x19, 0x86,
  0x61, 0x80, 0x0C, 0x70, 0x39, 0xC0, 0xE7, 0x03, 0x9C, 0x0E, 0x70, 0x39,
  0xC1, 0xE7, 0x1F, 0xFF, 0x7F, 0xFD, 0xFF, 0xF1, 0xCF, 0x07, 0x38, 0x1C,
  0xE0, 0x73, 0x8F, 0xFF, 0xBF, 0xFE, 0xFF, 0xF8, 0x73, 0x81, 0xCE, 0x07,
  0x38, 0x1C, 0xE0, 0xE3, 0x83, 0x8E, 0x06, 0x30, 0x07, 0x00, 0x38, 0x01,
  0xC0, 0x3F, 0xE7, 0xFF, 0x7F, 0xFB, 0xC1, 0xDC, 0x06, 0xE0, 0x07, 0xE0,
  0x1F, 0xF0, 0x7F, 0xE0, 0x3F, 0x00, 0x3F, 0x00, 0xF8, 0x07, 0xF0, 0x7F,
  0xFF, 0xBF, 0xFD, 0xFF, 0x80, 0x70, 0x03, 0x80, 0x1C, 0x00, 0xE0, 0x07,
  0x00, 0x3C, 0x03, 0xF0, 0x39, 0xC1, 0x86, 0x0C, 0x30, 0x61, 0x83, 0x9C,
  0x0F, 0xC7, 0x3D, 0xF8, 0x7E, 0x1F, 0x81, 0xE7, 0x80, 0x7F, 0x07, 0x1C,
  0x30, 0x61, 0x83, 0x0E, 0x38, 0x3F, 0x80, 0xF8, 0x07, 0xC0, 0xFF, 0x0F,
  0xF8, 0x71, 0x83, 0x80, 0x1C, 0x00, 0xF0, 0x03, 0xC0, 0x3E, 0x03, 0xFB,
  0xFD, 0xFF, 0xC7, 0xFE, 0x3F, 0x70, 0xF3, 0xFF, 0xEF, 0xFF, 0x1F, 0xF8,
  0xFF, 0xFF, 0x66, 0x66, 0x60, 0x00, 0x38, 0x71, 0xE3, 0x8F, 0x1C, 0x38,
  0xF1, 0xC3, 0x87, 0x0E, 0x1C, 0x38, 0x70, 0xF0, 0xE1, 0xC3, 0xC3, 0x87,
  0x87, 0x0E, 0x0C, 0x20, 0xE1, 0xC3, 0xC3, 0x87, 0x87, 0x0E, 0x1C, 0x1C,
  0x38, 0x70, 0xE1, 0xC3, 0x87, 0x1E, 0x38, 0x71, 0xE3, 0x8F, 0x1C, 0x38,
  0x60, 0x07, 0x00, 0x38, 0x01, 0xC0, 0x8E, 0x2F, 0xFF, 0xFF, 0xFD, 0xFF,
  0xC1, 0xF0, 0x1F, 0xC0, 0xEE, 0x0F, 0x78, 0x71, 0xC1, 0x04, 0x00, 0x03,
  0x80, 0x07, 0x00, 0x0E, 0x00, 0x1C, 0x00, 0x38, 0x00, 0x70, 0x00, 0xE0,
  0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x0E, 0x00, 0x1C, 0x00, 0x38, 0x00,
  0x70, 0x00, 0xE0, 0x01, 0xC0, 0x03, 0x80, 0x3C, 0xE7, 0x9C, 0x71, 0x8E,
  0x30, 0xC0, 0x7F, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0x6F, 0xF6, 0x00, 0x10,
  0x01, 0xC0, 0x0E, 0x00, 0xE0, 0x07, 0x00, 0x78, 0x03, 0x80, 0x3C, 0x01,
  0xC0, 0x1E, 0x00, 0xE0, 0x0F, 0x00, 0x70, 0x07, 0x80, 0x38, 0x03, 0xC0,
  0x1C, 0x01, 0xE0, 0x0E, 0x00, 0xF0, 0x07, 0x00, 0x38, 0x03, 0xC0, 0x1C,
  0x00, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0x80, 0xFF, 0x0F, 0xF8, 0xF1, 0xE7,
  0x07, 0x70, 0x1F, 0x80, 0xFC, 0x07, 0xE0, 0x3F, 0x01, 0xF8, 0x0F, 0xC0,
  0x7E, 0x03, 0xF0, 0x1F, 0x80, 0xEE, 0x0E, 0x78, 0xF1, 0xFF, 0x0F, 0xF0,
  0x1F, 0x00, 0x0F, 0x00, 0xF8, 0x1F, 0xC1, 0xFE, 0x0E, 0x70, 0x03, 0x80,
  0x1C, 0x00, 0xE0, 0x07, 0x00, 0x38, 0x01, 0xC0, 0x0E, 0x00, 0x70, 0x03,
  0x80, 0x1C, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x0F, 0xC0, 0xFF,
  0xC7, 0xFF, 0xBE, 0x1E, 0xF0, 0x1F, 0x80, 0x70, 0x01, 0xC0, 0x0F, 0x00,
  0x78, 0x03, 0xE0, 0x1F, 0x00, 0xF8, 0x07, 0xC0, 0x7E, 0x01, 0xE0, 0x0F,
  0x03, 0x78, 0x1D, 0xFF, 0xF7, 0xFF, 0xDF, 0xFF, 0x1F, 0xC1, 0xFF, 0x8F,
  0xFF, 0x18, 0x1E, 0x00, 0x38, 0x00, 0xE0, 0x03, 0x80, 0x1C, 0x07, 0xF0,
  0x1F, 0x80, 0x7F, 0x00, 0x1E, 0x00, 0x3C, 0x00, 0x70, 0x01, 0xC0, 0x07,
  0xE0, 0x7B, 0xFF, 0xEF, 0xFF, 0x0F, 0xF0, 0x01, 0xE0, 0x1F, 0x00, 0xF8,
  0x0F, 0xC0, 0x7E, 0x07, 0x70, 0x7B, 0x83, 0x9C, 0x3C, 0xE1, 0xC7, 0x1C,
  0x38, 0xE1, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x1C, 0x07, 0xF8, 0x3F,
  0xC1, 0xFE, 0x3F, 0xF8, 0xFF, 0xE3, 0xFF, 0x8E, 0x00, 0x38, 0x00, 0xE0,
  0x03, 0xFC, 0x0F, 0xFC, 0x3F, 0xF8, 0xF1, 0xE3, 0x03, 0xC0, 0x07, 0x00,
  0x1C, 0x00, 0x70, 0x01, 0xFC, 0x0F, 0xFF, 0xF9, 0xFF, 0xC1, 0xFC, 0x00,
  0x01, 0xF0, 0x3F, 0xC7, 0xFE, 0x7C, 0x03, 0xC0, 0x3C, 0x01, 0xC0, 0x1E,
  0x00, 0xE7, 0xC7, 0x7F, 0x3F, 0xFD, 0xF0, 0xEF, 0x03, 0xF0, 0x1F, 0xC0,
  0xFE, 0x07, 0x78, 0x7B, 0xFF, 0x8F, 0xF8, 0x1F, 0x80, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xF8, 0x0F, 0x60, 0x38, 0x00, 0xE0, 0x07, 0x80, 0x1C, 0x00,
  0x70, 0x03, 0xC0, 0x0E, 0x00, 0x38, 0x01, 0xE0, 0x07, 0x00, 0x1C, 0x00,
  0xF0, 0x03, 0x80, 0x0E, 0x00, 0x30, 0x00, 0x0F, 0x81, 0xFF, 0x1F, 0xFD,
  0xE0, 0xEE, 0x03, 0xF0, 0x1F, 0x80, 0xFC, 0x07, 0x70, 0x71, 0xFF, 0x07,
  0xF0, 0xFF, 0xE7, 0x07, 0x70, 0x1F, 0x80, 0xFC, 0x07, 0xF0, 0x7B, 0xFF,
  0x8F, 0xF8, 0x1F, 0x00, 0x0F, 0x81, 0xFF, 0x1F, 0xF8, 0xE1, 0xEE, 0x07,
  0x70, 0x3F, 0x80, 0xFC, 0x07, 0xF0, 0x7B, 0x87, 0xDF, 0xFE, 0x7F, 0x70,
  0xF3, 0x80, 0x3C, 0x03, 0xC0, 0x3E, 0x03, 0xE7, 0xFE, 0x3F, 0xC0, 0xF8,
  0x00, 0x6F, 0xF6, 0x00, 0x00, 0x00, 0x6F, 0xF6, 0x18, 0xF3, 0xC6, 0x00,
  0x00, 0x00, 0x00, 0x03, 0xCE, 0x39, 0xC7, 0x18, 0x63, 0x8C, 0x00, 0x00,
  0x02, 0x00, 0x0F, 0x00, 0x3F, 0x00, 0xFC, 0x03, 0xF0, 0x0F, 0xC0, 0x3F,
  0x00, 0x7E, 0x00, 0x1F, 0x80, 0x07, 0xE0, 0x01, 0xF8, 0x00, 0x7E, 0x00,
  0x1F, 0x00, 0x07, 0x7F, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0x00, 0x01, 0xC0,
  0x03, 0xE0, 0x03, 0xF0, 0x01, 0xF8, 0x00, 0xFC, 0x00, 0x7E, 0x00, 0x3F,
  0x01, 0xF8, 0x0F, 0xC0, 0x7E, 0x03, 0xF0, 0x0F, 0x80, 0x1C, 0x00, 0x00,
  0x1F, 0x87, 0xFF, 0x3F, 0xFD, 0xC1, 0xFE, 0x03, 0xF0, 0x1C, 0x00, 0xE0,
  0x0F, 0x01, 0xF0, 0x3F, 0x01, 0xE0, 0x0C, 0x00, 0x60, 0x00, 0x00, 0x18,
  0x01, 0xE0, 0x0F, 0x00, 0x30, 0x00, 0x07, 0xC0, 0x7F, 0x83, 0x87, 0x1C,
  0x0E, 0x60, 0x19, 0x80, 0x6C, 0x07, 0xB0, 0x7E, 0xC3, 0xFB, 0x1E, 0x6C,
  0x61, 0xB1, 0x86, 0xC6, 0x1B, 0x1C, 0x6C, 0x3F, 0xF0, 0xFF, 0xC0, 0xFF,
  0x00, 0x06, 0x00, 0x18, 0x00, 0x70, 0x10, 0xE0, 0xE1, 0xFF, 0x01, 0xF8,
  0x1F, 0xF0, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x00, 0x1F, 0xC0, 0x03, 0xFC,
  0x00, 0x39, 0xC0, 0x07, 0x9E, 0x00, 0x70, 0xE0, 0x07, 0x0E, 0x00, 0xE0,
  0xF0, 0x0F, 0xFF, 0x01, 0xFF, 0xF8, 0x1F, 0xFF, 0x81, 0xC0, 0x38, 0x38,
  0x03, 0xCF, 0xF0, 0xFF, 0xFF, 0x0F, 0xFF, 0xF0, 0xFF, 0xFF, 0xF0, 0xFF,
  0xF8, 0xFF, 0xFC, 0x38, 0x1E, 0x38, 0x0E, 0x38, 0x0E, 0x38, 0x0E, 0x38,
  0x1C, 0x3F, 0xFC, 0x3F, 0xFC, 0x3F, 0xFE, 0x38, 0x1F, 0x38, 0x07, 0x38,
  0x07, 0x38, 0x0F, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xF8, 0x07, 0xF7, 0x1F,
  0xFF, 0x3F, 0xFF, 0x7C, 0x1F, 0x78, 0x0F, 0xF0, 0x07, 0xE0, 0x07, 0xE0,
  0x00, 0xE0, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0xF0, 0x00, 0x70,
  0x03, 0x7C, 0x0F, 0x3F, 0xFF, 0x1F, 0xFE, 0x03, 0xF8, 0xFF, 0xE0, 0xFF,
  0xF8, 0xFF, 0xFC, 0x70, 0x3E, 0x70, 0x1E, 0x70, 0x0F, 0x70, 0x07, 0x70,
  0x07, 0x70, 0x07, 0x70, 0x07, 0x70, 0x07, 0x70, 0x07, 0x70, 0x0F, 0x70,
  0x0E, 0x70, 0x3E, 0xFF, 0xFC, 0xFF, 0xF8, 0xFF, 0xE0, 0xFF, 0xFE, 0xFF,
  0xFE, 0xFF, 0xFE, 0x38, 0x0E, 0x38, 0xEE, 0x38, 0xEE, 0x38, 0xEE, 0x3F,
  0xE0, 0x3F, 0xE0, 0x3F, 0xE0, 0x38, 0xE0, 0x38, 0xE7, 0x38, 0x07, 0x38,
  0x07, 0x38, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0x38, 0x07, 0x38, 0x07, 0x38, 0xE7, 0x38, 0xE7, 0x3F,
  0xE0, 0x3F, 0xE0, 0x3F, 0xE0, 0x38, 0xE0, 0x38, 0xE0, 0x38, 0xE0, 0x38,
  0x00, 0x38, 0x00, 0xFF, 0xC0, 0xFF, 0xC0, 0xFF, 0xC0, 0x03, 0xF3, 0x07,
  0xFF, 0x8F, 0xFF, 0xCF, 0x83, 0xE7, 0x80, 0x77, 0x80, 0x3B, 0x80, 0x1D,
  0xC0, 0x00, 0xE0, 0x00, 0x70, 0x7F, 0xF8, 0x3F, 0xFC, 0x1F, 0xFE, 0x00,
  0x73, 0x80, 0x39, 0xF0, 0x3C, 0x7F, 0xFE, 0x1F, 0xFE, 0x03, 0xFC, 0x00,
  0x7F, 0x3F, 0x9F, 0xCF, 0xE7, 0xF3, 0xF8, 0x70, 0x1C, 0x1C, 0x07, 0x07,
  0x01, 0xC1, 0xC0, 0x70, 0x7F, 0xFC, 0x1F, 0xFF, 0x07, 0xFF, 0xC1, 0xC0,
  0x70, 0x70, 0x1C, 0x1C, 0x07, 0x07, 0x01, 0xC1, 0xC0, 0x73, 0xFC, 0xFF,
  0xFF, 0x3F, 0xFF, 0xCF, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x0E, 0x00,
  0x70, 0x03, 0x80, 0x1C, 0x00, 0xE0, 0x07, 0x00, 0x38, 0x01, 0xC0, 0x0E,
  0x00, 0x70, 0x03, 0x80, 0x1C, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x07,
  0xFF, 0x07, 0xFF, 0x07, 0xFF, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00,
  0x38, 0x00, 0x38, 0x00, 0x38, 0xE0, 0x38, 0xE0, 0x38, 0xE0, 0x38, 0xE0,
  0x38, 0xE0, 0x38, 0xF0, 0xF0, 0xFF, 0xF0, 0x7F, 0xE0, 0x1F, 0x80, 0xFF,
  0x3F, 0xBF, 0xCF, 0xEF, 0xF3, 0xF8, 0xE0, 0xF8, 0x38, 0x78, 0x0E, 0x3C,
  0x03, 0xBE, 0x00, 0xFF, 0x00, 0x3F, 0xE0, 0x0F, 0xFC, 0x03, 0xCF, 0x80,
  0xE1, 0xE0, 0x38, 0x3C, 0x0E, 0x07, 0x03, 0x81, 0xE3, 0xFC, 0x3F, 0xFF,
  0x0F, 0xFF, 0xC3, 0xF0, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0x1C, 0x00,
  0x1C, 0x00, 0x1C, 0x00, 0x1C, 0x00, 0x1C, 0x00, 0x1C, 0x00, 0x1C, 0x00,
  0x1C, 0x07, 0x1C, 0x07, 0x1C, 0x07, 0x1C, 0x07, 0x1C, 0x07, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0x7C, 0x03, 0xE7, 0xC0, 0x3E, 0x7E, 0x07, 0xE3,
  0xE0, 0x7C, 0x3F, 0x0F, 0xC3, 0xF0, 0xFC, 0x3F, 0x9F, 0xC3, 0xB9, 0xDC,
  0x3B, 0xFD, 0xC3, 0x9F, 0x9C, 0x39, 0xF9, 0xC3, 0x8F, 0x9C, 0x38, 0xF1,
  0xC3, 0x8F, 0x1C, 0x38, 0x01, 0xCF, 0xF0, 0xFF, 0xFF, 0x0F, 0xFF, 0xF0,
  0xFF, 0xF8, 0x3F, 0xFF, 0x0F, 0xFF, 0xE3, 0xFC, 0xF8, 0x1C, 0x3F, 0x07,
  0x0F, 0xE1, 0xC3, 0xF8, 0x70, 0xEF, 0x1C, 0x39, 0xE7, 0x0E, 0x79, 0xC3,
  0x8F, 0x70, 0xE1, 0xFC, 0x38, 0x7F, 0x0E, 0x0F, 0xC3, 0x81, 0xF3, 0xFC,
  0x7C, 0xFF, 0x0F, 0x3F, 0xC1, 0xC0, 0x03, 0xE0, 0x07, 0xFC, 0x07, 0xFF,
  0x07, 0x83, 0xC7, 0x80, 0xF3, 0x80, 0x3B, 0xC0, 0x1F, 0xC0, 0x07, 0xE0,
  0x03, 0xF0, 0x01, 0xF8, 0x00, 0xFC, 0x00, 0x77, 0x00, 0x73, 0xC0, 0x78,
  0xF0, 0x78, 0x3F, 0xF8, 0x0F, 0xF8, 0x01, 0xF0, 0x00, 0xFF, 0xE1, 0xFF,
  0xF3, 0xFF, 0xF1, 0xC0, 0xF3, 0x80, 0xE7, 0x01, 0xCE, 0x03, 0x9C, 0x07,
  0x38, 0x1C, 0x7F, 0xF8, 0xFF, 0xE1, 0xFF, 0x03, 0x80, 0x07, 0x00, 0x0E,
  0x00, 0x7F, 0xE0, 0xFF, 0xC1, 0xFF, 0x80, 0x03, 0xE0, 0x07, 0xFC, 0x07,
  0xFF, 0x07, 0x83, 0xC7, 0x80, 0xF3, 0x80, 0x3B, 0xC0, 0x1F, 0xC0, 0x07,
  0xE0, 0x03, 0xF0, 0x01, 0xF8, 0x00, 0xFC, 0x00, 0x77, 0x00, 0x73, 0xC0,
  0x78, 0xF0, 0x78, 0x3F, 0xF8, 0x0F, 0xF8, 0x03, 0xF0, 0x01, 0xC0, 0x41,
  0xFC, 0x71, 0xFF, 0xF8, 0xFF, 0xF8, 0x70, 0x78, 0x7F, 0xF0, 0x1F, 0xFF,
  0x81, 0xFF, 0xF8, 0x0E, 0x07, 0x81, 0xC0, 0x70, 0x38, 0x0E, 0x07, 0x01,
  0xC0, 0xE0, 0xF8, 0x1F, 0xFE, 0x03, 0xFF, 0x80, 0x7F, 0xE0, 0x0E, 0x3E,
  0x01, 0xC3, 0xE0, 0x38, 0x3E, 0x07, 0x03, 0xC7, 0xF8, 0x3F, 0xFF, 0x03,
  0xFF, 0xE0, 0x7C, 0x0F, 0xD8, 0x7F, 0xE3, 0xFF, 0x9E, 0x1E, 0x70, 0x39,
  0xC0, 0xE7, 0x80, 0x0F, 0xC0, 0x3F, 0xF0, 0x3F, 0xE0, 0x1F, 0x80, 0x0F,
  0xE0, 0x1F, 0x80, 0x7F, 0x03, 0xFF, 0xFE, 0xFF, 0xF3, 0xBF, 0x00, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE1, 0xC7, 0xE1, 0xC7, 0xE1, 0xC7, 0xE1,
  0xC7, 0xE1, 0xC7, 0x01, 0xC0, 0x01, 0xC0, 0x01, 0xC0, 0x01, 0xC0, 0x01,
  0xC0, 0x01, 0xC0, 0x01, 0xC0, 0x1F, 0xFC, 0x1F, 0xFC, 0x1F, 0xFC, 0xFF,
  0x3F, 0xFF, 0xCF, 0xFF, 0xF3, 0xFC, 0xE0, 0x1C, 0x38, 0x07, 0x0E, 0x01,
  0xC3, 0x80, 0x70, 0xE0, 0x1C, 0x38, 0x07, 0x0E, 0x01, 0xC3, 0x80, 0x70,
  0xE0, 0x1C, 0x38, 0x07, 0x0F, 0x03, 0xC1, 0xE1, 0xE0, 0x7F, 0xF8, 0x0F,
  0xFC, 0x00, 0xFC, 0x00, 0xFF, 0x0F, 0xFF, 0xF0, 0xFF, 0xFF, 0x0F, 0xF3,
  0xC0, 0x1C, 0x1C, 0x03, 0x81, 0xE0, 0x38, 0x1E, 0x07, 0x00, 0xE0, 0x70,
  0x0F, 0x0F, 0x00, 0x70, 0xE0, 0x07, 0x9E, 0x00, 0x39, 0xC0, 0x03, 0xDC,
  0x00, 0x3F, 0xC0, 0x01, 0xF8, 0x00, 0x1F, 0x80, 0x00, 0xF0, 0x00, 0x0F,
  0x00, 0xFF, 0x1F, 0xFF, 0xE3, 0xFF, 0xFC, 0x7F, 0xB8, 0x01, 0xC7, 0x0E,
  0x38, 0xF3, 0xE7, 0x0E, 0x7C, 0xE1, 0xCF, 0x9C, 0x3B, 0xFB, 0x87, 0x77,
  0x70, 0xEE, 0xFE, 0x1F, 0xDF, 0x83, 0xF1, 0xF0, 0x3E, 0x3E, 0x07, 0xC7,
  0xC0, 0xF0, 0x78, 0x1E, 0x0F, 0x03, 0xC1, 0xE0, 0xFE, 0x3F, 0xFF, 0x1F,
  0xFF, 0x8F, 0xE7, 0x83, 0xC1, 0xE3, 0xC0, 0x7B, 0xC0, 0x1F, 0xC0, 0x07,
  0xC0, 0x03, 0xE0, 0x01, 0xF0, 0x01, 0xFC, 0x01, 0xEF, 0x00, 0xF3, 0x80,
  0xF1, 0xE0, 0xF0, 0x79, 0xFC, 0x7F, 0xFE, 0x3F, 0xFF, 0x1F, 0xC0, 0xFE,
  0x3F, 0xFF, 0x1F, 0xFF, 0x8F, 0xE7, 0x83, 0xC1, 0xE3, 0xC0, 0x71, 0xC0,
  0x3D, 0xE0, 0x0F, 0xE0, 0x03, 0xE0, 0x01, 0xF0, 0x00, 0x70, 0x00, 0x38,
  0x00, 0x1C, 0x00, 0x0E, 0x00, 0x07, 0x00, 0x3F, 0xF8, 0x1F, 0xFC, 0x0F,
  0xFE, 0x00, 0x7F, 0xF9, 0xFF, 0xE7, 0xFF, 0x9C, 0x1E, 0x70, 0xF1, 0xC7,
  0x87, 0x1C, 0x00, 0xF0, 0x07, 0x80, 0x3C, 0x00, 0xE0, 0x07, 0x87, 0x3C,
  0x1D, 0xE0, 0x7F, 0x81, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0xFF,
  0xFF, 0x0E, 0x1C, 0x38, 0x70, 0xE1, 0xC3, 0x87, 0x0E, 0x1C, 0x38, 0x70,
  0xE1, 0xC3, 0x87, 0x0E, 0x1F, 0xFF, 0xFF, 0x00, 0x07, 0x00, 0x38, 0x01,
  0xE0, 0x07, 0x00, 0x38, 0x00, 0xE0, 0x07, 0x00, 0x3C, 0x00, 0xE0, 0x07,
  0x80, 0x1C, 0x00, 0xF0, 0x03, 0x80, 0x1E, 0x00, 0x70, 0x03, 0xC0, 0x0E,
  0x00, 0x78, 0x01, 0xC0, 0x0F, 0x00, 0x38, 0x01, 0xC0, 0x07, 0x00, 0x38,
  0x00, 0x00, 0xFF, 0xFF, 0xF8, 0x70, 0xE1, 0xC3, 0x87, 0x0E, 0x1C, 0x38,
  0x70, 0xE1, 0xC3, 0x87, 0x0E, 0x1C, 0x38, 0x70, 0xFF, 0xFF, 0xFF, 0x02,
  0x00, 0x38, 0x03, 0xC0, 0x3F, 0x03, 0xFC, 0x1E, 0xF1, 0xE3, 0xDE, 0x0F,
  0xE0, 0x7E, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80,
  0xC3, 0xC7, 0x8F, 0x0C, 0x0F, 0xE0, 0x3F, 0xF8, 0x3F, 0xF8, 0x00, 0x3C,
  0x00, 0x1C, 0x0F, 0xFC, 0x3F, 0xFC, 0x7F, 0xFC, 0xF8, 0x1C, 0xE0, 0x1C,
  0xE0, 0x7C, 0xFF, 0xFF, 0x7F, 0xFF, 0x1F, 0xDF, 0xF8, 0x00, 0x3E, 0x00,
  0x0F, 0x80, 0x00, 0xE0, 0x00, 0x38, 0x00, 0x0E, 0x7E, 0x03, 0xFF, 0xE0,
  0xFF, 0xFC, 0x3F, 0x0F, 0x8F, 0x00, 0xF3, 0x80, 0x1C, 0xE0, 0x07, 0x38,
  0x01, 0xCE, 0x00, 0x73, 0xC0, 0x3C, 0xF8, 0x1E, 0xFF, 0xFF, 0xBF, 0xFF,
  0x8F, 0x9F, 0xC0, 0x07, 0xEE, 0x3F, 0xFC, 0xFF, 0xFB, 0xC0, 0xFF, 0x00,
  0xFC, 0x01, 0xF8, 0x00, 0x70, 0x00, 0xE0, 0x01, 0xE0, 0x09, 0xE0, 0x7B,
  0xFF, 0xF3, 0xFF, 0xC1, 0xFE, 0x00, 0x00, 0x3E, 0x00, 0x1F, 0x00, 0x0F,
  0x80, 0x01, 0xC0, 0x00, 0xE0, 0x3E, 0x70, 0x7F, 0xF8, 0x7F, 0xFC, 0x78,
  0x3E, 0x78, 0x0F, 0x38, 0x03, 0x9C, 0x01, 0xCE, 0x00, 0xE7, 0x00, 0x73,
  0xC0, 0x78, 0xF0, 0x7C, 0x7F, 0xFF, 0x9F, 0xFF, 0xC3, 0xF3, 0xE0, 0x07,
  0xE0, 0x1F, 0xF8, 0x3F, 0xFC, 0x7C, 0x3E, 0x70, 0x0E, 0xF0, 0x0F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x78, 0x06, 0x3F, 0xFF, 0x1F,
  0xFE, 0x07, 0xF8, 0x03, 0xF8, 0x3F, 0xF1, 0xFF, 0xC7, 0x00, 0x1C, 0x03,
  0xFF, 0xCF, 0xFF, 0x3F, 0xFC, 0x1C, 0x00, 0x70, 0x01, 0xC0, 0x07, 0x00,
  0x1C, 0x00, 0x70, 0x01, 0xC0, 0x07, 0x00, 0xFF, 0xF3, 0xFF, 0xCF, 0xFF,
  0x00, 0x0F, 0xCF, 0x8F, 0xFF, 0xCF, 0xFF, 0xEF, 0x07, 0xCF, 0x01, 0xE7,
  0x00, 0x73, 0x80, 0x39, 0xC0, 0x1C, 0xE0, 0x0E, 0x78, 0x0F, 0x1E, 0x0F,
  0x87, 0xFF, 0xC1, 0xFF, 0xE0, 0x3E, 0x70, 0x00, 0x38, 0x00, 0x1C, 0x00,
  0x1E, 0x07, 0xFE, 0x03, 0xFE, 0x01, 0xFE, 0x00, 0xF8, 0x00, 0x7C, 0x00,
  0x3E, 0x00, 0x07, 0x00, 0x03, 0x80, 0x01, 0xCF, 0x80, 0xFF, 0xF0, 0x7F,
  0xF8, 0x3E, 0x1E, 0x1E, 0x07, 0x0E, 0x03, 0x87, 0x01, 0xC3, 0x80, 0xE1,
  0xC0, 0x70, 0xE0, 0x38, 0x70, 0x1C, 0xFE, 0x3F, 0xFF, 0x1F, 0xFF, 0x8F,
  0xE0, 0x07, 0x00, 0x38, 0x01, 0xC0, 0x00, 0x00, 0x00, 0x3F, 0x81, 0xFC,
  0x0F, 0xE0, 0x07, 0x00, 0x38, 0x01, 0xC0, 0x0E, 0x00, 0x70, 0x03, 0x80,
  0x1C, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x03, 0x80, 0x70, 0x0E,
  0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xE0, 0x1C, 0x03, 0x80,
  0x70, 0x0E, 0x01, 0xC0, 0x38, 0x07, 0x00, 0xE0, 0x1C, 0x03, 0x80, 0x70,
  0x0E, 0x03, 0xFF, 0xF7, 0xFC, 0xFF, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8,
  0x00, 0x38, 0x00, 0x38, 0x00, 0x39, 0xFC, 0x39, 0xFC, 0x39, 0xFC, 0x3B,
  0xE0, 0x3F, 0xC0, 0x3F, 0x80, 0x3F, 0x00, 0x3F, 0x80, 0x3B, 0xC0, 0x39,
  0xE0, 0x38, 0xF0, 0xF8, 0xFF, 0xF8, 0xFF, 0xF8, 0xFF, 0x7F, 0x03, 0xF8,
  0x1F, 0xC0, 0x0E, 0x00, 0x70, 0x03, 0x80, 0x1C, 0x00, 0xE0, 0x07, 0x00,
  0x38, 0x01, 0xC0, 0x0E, 0x00, 0x70, 0x03, 0x80, 0x1C, 0x00, 0xE0, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFE, 0x7B, 0xCF, 0x07, 0xFF, 0xF8, 0x7F, 0xFF, 0xC3,
  0xC7, 0x9C, 0x38, 0x71, 0xC3, 0x87, 0x1C, 0x38, 0x71, 0xC3, 0x87, 0x1C,
  0x38, 0x71, 0xC3, 0x87, 0x1C, 0x38, 0x71, 0xCF, 0xE7, 0xDF, 0xFE, 0x7D,
  0xFF, 0xE7, 0xDF, 0x79, 0xF0, 0x3F, 0xFE, 0x1F, 0xFF, 0x07, 0xC3, 0xC3,
  0x80, 0xE1, 0xC0, 0x70, 0xE0, 0x38, 0x70, 0x1C, 0x38, 0x0E, 0x1C, 0x07,
  0x0E, 0x03, 0x9F, 0xC7, 0xFF, 0xE3, 0xFF, 0xF1, 0xFC, 0x07, 0xE0, 0x1F,
  0xF8, 0x3F, 0xFC, 0x7C, 0x3E, 0xF0, 0x0F, 0xE0, 0x07, 0xE0, 0x07, 0xE0,
  0x07, 0xE0, 0x07, 0xF0, 0x0F, 0x7C, 0x3E, 0x3F, 0xFC, 0x1F, 0xF8, 0x07,
  0xE0, 0x7C, 0xF8, 0x1F, 0xFF, 0x87, 0xFF, 0xF0, 0x7C, 0x1E, 0x1E, 0x03,
  0xC7, 0x00, 0x71, 0xC0, 0x1C, 0x70, 0x07, 0x1C, 0x01, 0xC7, 0x80, 0xF1,
  0xF0, 0xF8, 0x7F, 0xFC, 0x1F, 0xFE, 0x07, 0x3E, 0x01, 0xC0, 0x00, 0x70,
  0x00, 0x1C, 0x00, 0x3F, 0xE0, 0x0F, 0xF8, 0x03, 0xFE, 0x00, 0x07, 0xCF,
  0x87, 0xFF, 0xE3, 0xFF, 0xF9, 0xE0, 0xF8, 0xF0, 0x1E, 0x38, 0x03, 0x8E,
  0x00, 0xE3, 0x80, 0x38, 0xE0, 0x0E, 0x3C, 0x07, 0x87, 0xC3, 0xE0, 0xFF,
  0xF8, 0x1F, 0xFE, 0x01, 0xF3, 0x80, 0x00, 0xE0, 0x00, 0x38, 0x00, 0x0E,
  0x00, 0x1F, 0xF0, 0x07, 0xFC, 0x01, 0xFF, 0xFC, 0x79, 0xFB, 0xFF, 0xFF,
  0xF8, 0xFE, 0x71, 0xF0, 0x03, 0xC0, 0x07, 0x00, 0x0E, 0x00, 0x1C, 0x00,
  0x38, 0x00, 0x70, 0x07, 0xFF, 0x8F, 0xFF, 0x1F, 0xFE, 0x00, 0x0F, 0xF8,
  0xFF, 0xE7, 0xFF, 0x9E, 0x0E, 0x78, 0x19, 0xFF, 0x03, 0xFF, 0x80, 0xFE,
  0x60, 0x3F, 0x80, 0x7F, 0x83, 0xFF, 0xFE, 0x7F, 0xF8, 0x3F, 0x80, 0x1C,
  0x00, 0x38, 0x00, 0x70, 0x00, 0xE0, 0x0F, 0xFF, 0x9F, 0xFF, 0x3F, 0xFE,
  0x0E, 0x00, 0x1C, 0x00, 0x38, 0x00, 0x70, 0x00, 0xE0, 0x01, 0xC0, 0x03,
  0x80, 0x07, 0x07, 0x8F, 0xFF, 0x0F, 0xFC, 0x07, 0xE0, 0xF8, 0x7E, 0xF8,
  0x7E, 0xF8, 0x7E, 0x38, 0x0E, 0x38, 0x0E, 0x38, 0x0E, 0x38, 0x0E, 0x38,
  0x0E, 0x38, 0x0E, 0x38, 0x0E, 0x3C, 0x3E, 0x1F, 0xFF, 0x1F, 0xFF, 0x07,
  0xCF, 0xFF, 0x3F, 0xFF, 0xCF, 0xFF, 0xF3, 0xFC, 0x70, 0x38, 0x1E, 0x0E,
  0x03, 0x87, 0x00, 0xE1, 0xC0, 0x3C, 0xF0, 0x07, 0x38, 0x01, 0xFE, 0x00,
  0x3F, 0x00, 0x0F, 0xC0, 0x01, 0xE0, 0x00, 0x78, 0x00, 0xFE, 0x0F, 0xFF,
  0xC1, 0xFF, 0xF8, 0x3F, 0x9C, 0x71, 0xC3, 0x8F, 0x38, 0x7B, 0xEE, 0x07,
  0x7D, 0xC0, 0xFF, 0xF8, 0x1F, 0xBF, 0x03, 0xF7, 0xC0, 0x3E, 0xF8, 0x07,
  0x8F, 0x00, 0xF1, 0xE0, 0x1C, 0x1C, 0x00, 0xFE, 0x7F, 0xFE, 0x7F, 0xFE,
  0x7F, 0x3E, 0x7C, 0x1F, 0xF8, 0x0F, 0xF0, 0x07, 0xE0, 0x07, 0xE0, 0x0F,
  0xF0, 0x1E, 0x78, 0x7C, 0x3E, 0xFE, 0x7F, 0xFE, 0x7F, 0xFE, 0x7F, 0xFE,
  0x3F, 0xFF, 0x1F, 0xFF, 0x8F, 0xE7, 0x01, 0xC3, 0xC1, 0xE0, 0xE0, 0xE0,
  0x78, 0xF0, 0x1C, 0x70, 0x0F, 0x78, 0x03, 0xB8, 0x01, 0xFC, 0x00, 0x7C,
  0x00, 0x3E, 0x00, 0x0E, 0x00, 0x07, 0x00, 0x07, 0x00, 0x07, 0x80, 0x7F,
  0xE0, 0x3F, 0xF0, 0x1F, 0xF8, 0x00, 0xFF, 0xF7, 0xFF, 0xBF, 0xFD, 0xC3,
  0xCE, 0x3C, 0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x03, 0xC1, 0xBC, 0x1F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x07, 0x87, 0xC7, 0xE3, 0x81, 0xC0, 0xE0,
  0x70, 0x38, 0x1C, 0x1E, 0x3E, 0x1E, 0x0F, 0x81, 0xE0, 0x70, 0x38, 0x1C,
  0x0E, 0x07, 0x03, 0x81, 0xE0, 0xFC, 0x3E, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFA, 0xF0, 0x7C, 0x3F, 0x07, 0x81, 0xC0, 0xE0,
  0x70, 0x38, 0x1C, 0x0E, 0x03, 0xE0, 0xF0, 0xF8, 0xF0, 0x70, 0x38, 0x1C,
  0x0E, 0x07, 0x03, 0x83, 0xC7, 0xE3, 0xE1, 0xE0, 0x1C, 0x00, 0xFE, 0x1B,
  0xFE, 0x7F, 0xBF, 0xEE, 0x1F, 0x80, 0x1E, 0x00 };

const GFXglyph FreeMonoBold16pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,  19,    0,    0 },   // 0x20 ' '
  {     1,   5,  20,  19,    7,  -19 },   // 0x21 '!'
  {    14,  10,   9,  19,    4,  -18 },   // 0x22 '"'
  {    26,  14,  24,  19,    2,  -20 },   // 0x23 '#'
  {    68,  13,  25,  19,    3,  -20 },   // 0x24 '$'
  {   109,  13,  19,  19,    3,  -18 },   // 0x25 '%'
  {   140,  13,  17,  19,    2,  -16 },   // 0x26 '&'
  {   168,   4,   9,  19,    7,  -18 },   // 0x27 '''
  {   173,   7,  25,  19,    8,  -19 },   // 0x28 '('
  {   195,   7,  25,  19,    3,  -19 },   // 0x29 ')'
  {   217,  13,  13,  19,    3,  -18 },   // 0x2A '*'
  {   239,  15,  17,  19,    2,  -16 },   // 0x2B '+'
  {   271,   6,   9,  19,    5,   -3 },   // 0x2C ','
  {   278,  16,   3,  19,    1,   -9 },   // 0x2D '-'
  {   284,   4,   4,  19,    7,   -3 },   // 0x2E '.'
  {   286,  13,  26,  19,    3,  -21 },   // 0x2F '/'
  {   329,  13,  20,  19,    3,  -19 },   // 0x30 '0'
  {   362,  13,  19,  19,    3,  -18 },   // 0x31 '1'
  {   393,  14,  20,  19,    2,  -19 },   // 0x32 '2'
  {   428,  14,  20,  19,    2,  -19 },   // 0x33 '3'
  {   463,  13,  19,  19,    3,  -18 },   // 0x34 '4'
  {   494,  14,  19,  19,    2,  -18 },   // 0x35 '5'
  {   528,  13,  20,  19,    3,  -19 },   // 0x36 '6'
  {   561,  14,  19,  19,    2,  -18 },   // 0x37 '7'
  {   595,  13,  20,  19,    3,  -19 },   // 0x38 '8'
  {   628,  13,  20,  19,    3,  -19 },   // 0x39 '9'
  {   661,   4,  14,  19,    7,  -13 },   // 0x3A ':'
  {   668,   6,  19,  19,    4,  -13 },   // 0x3B ';'
  {   683,  16,  14,  19,    1,  -15 },   // 0x3C '<'
  {   711,  16,   9,  19,    1,  -12 },   // 0x3D '='
  {   729,  15,  14,  19,    2,  -15 },   // 0x3E '>'
  {   756,  13,  18,  19,    3,  -17 },   // 0x3F '?'
  {   786,  14,  24,  19,    2,  -18 },   // 0x40 '@'
  {   828,  20,  18,  19,   -1,  -17 },   // 0x41 'A'
  {   873,  16,  18,  19,    1,  -17 },   // 0x42 'B'
  {   909,  16,  18,  19,    1,  -17 },   // 0x43 'C'
  {   945,  16,  18,  19,    1,  -17 },   // 0x44 'D'
  {   981,  16,  18,  19,    1,  -17 },   // 0x45 'E'
  {  1017,  16,  18,  19,    1,  -17 },   // 0x46 'F'
  {  1053,  17,  18,  19,    1,  -17 },   // 0x47 'G'
  {  1092,  18,  18,  19,    0,  -17 },   // 0x48 'H'
  {  1133,  13,  18,  19,    3,  -17 },   // 0x49 'I'
  {  1163,  16,  18,  19,    2,  -17 },   // 0x4A 'J'
  {  1199,  18,  18,  19,    1,  -17 },   // 0x4B 'K'
  {  1240,  16,  18,  19,    2,  -17 },   // 0x4C 'L'
  {  1276,  20,  18,  19,   -1,  -17 },   // 0x4D 'M'
  {  1321,  18,  18,  19,    0,  -17 },   // 0x4E 'N'
  {  1362,  17,  18,  19,    1,  -17 },   // 0x4F 'O'
  {  1401,  15,  18,  19,    1,  -17 },   // 0x50 'P'
  {  1435,  17,  23,  19,    1,  -17 },   // 0x51 'Q'
  {  1484,  19,  18,  19,    0,  -17 },   // 0x52 'R'
  {  1527,  14,  18,  19,    2,  -17 },   // 0x53 'S'
  {  1559,  16,  18,  19,    1,  -17 },   // 0x54 'T'
  {  1595,  18,  18,  19,    0,  -17 },   // 0x55 'U'
  {  1636,  20,  18,  19,   -1,  -17 },   // 0x56 'V'
  {  1681,  19,  18,  19,    0,  -17 },   // 0x57 'W'
  {  1724,  17,  18,  19,    1,  -17 },   // 0x58 'X'
  {  1763,  17,  18,  19,    1,  -17 },   // 0x59 'Y'
  {  1802,  14,  18,  19,    2,  -17 },   // 0x5A 'Z'
  {  1834,   7,  24,  19,    8,  -18 },   // 0x5B '['
  {  1855,  13,  26,  19,    3,  -21 },   // 0x5C '\'
  {  1898,   7,  24,  19,    4,  -18 },   // 0x5D ']'
  {  1919,  13,  10,  19,    3,  -19 },   // 0x5E '^'
  {  1936,  19,   3,  19,    0,    4 },   // 0x5F '_'
  {  1944,   6,   5,  19,    5,  -19 },   // 0x60 '`'
  {  1948,  16,  14,  19,    1,  -13 },   // 0x61 'a'
  {  1976,  18,  19,  19,    0,  -18 },   // 0x62 'b'
  {  2019,  15,  14,  19,    2,  -13 },   // 0x63 'c'
  {  2046,  17,  19,  19,    1,  -18 },   // 0x64 'd'
  {  2087,  16,  14,  19,    1,  -13 },   // 0x65 'e'
  {  2115,  14,  19,  19,    3,  -18 },   // 0x66 'f'
  {  2149,  17,  20,  19,    1,  -13 },   // 0x67 'g'
  {  2192,  17,  19,  19,    1,  -18 },   // 0x68 'h'
  {  2233,  13,  19,  19,    3,  -18 },   // 0x69 'i'
  {  2264,  11,  25,  19,    3,  -18 },   // 0x6A 'j'
  {  2299,  16,  19,  19,    2,  -18 },   // 0x6B 'k'
  {  2337,  13,  19,  19,    3,  -18 },   // 0x6C 'l'
  {  2368,  20,  14,  19,   -1,  -13 },   // 0x6D 'm'
  {  2403,  17,  14,  19,    1,  -13 },   // 0x6E 'n'
  {  2433,  16,  14,  19,    1,  -13 },   // 0x6F 'o'
  {  2461,  18,  20,  19,    0,  -13 },   // 0x70 'p'
  {  2506,  18,  20,  19,    1,  -13 },   // 0x71 'q'
  {  2551,  15,  14,  19,    3,  -13 },   // 0x72 'r'
  {  2578,  14,  14,  19,    2,  -13 },   // 0x73 's'
  {  2603,  15,  18,  19,    1,  -17 },   // 0x74 't'
  {  2637,  16,  14,  19,    1,  -13 },   // 0x75 'u'
  {  2665,  18,  14,  19,    0,  -13 },   // 0x76 'v'
  {  2697,  19,  14,  19,    0,  -13 },   // 0x77 'w'
  {  2731,  16,  14,  19,    1,  -13 },   // 0x78 'x'
  {  2759,  17,  20,  19,    1,  -13 },   // 0x79 'y'
  {  2802,  13,  14,  19,    3,  -13 },   // 0x7A 'z'
  {  2825,   9,  24,  19,    5,  -18 },   // 0x7B '{'
  {  2852,   3,  24,  19,    8,  -18 },   // 0x7C '|'
  {  2861,   9,  24,  19,    5,  -18 },   // 0x7D '}'
  {  2888,  15,   6,  19,    2,  -11 } }; // 0x7E '~'

const GFXfont FreeMonoBold16pt7b PROGMEM = {
  (uint8_t  *)FreeMonoBold16pt7bBitmaps,
  (GFXglyph *)FreeMonoBold16pt7bGlyphs,
  0x20, 0x7E, 31 };

// Approx. 3572 bytes

#endif // FreeMonoBold16pt7b_H
