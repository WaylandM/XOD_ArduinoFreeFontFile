#ifndef FreeMonoOblique48pt7b_H
#define FreeMonoOblique48pt7b_H

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

const uint8_t FreeMonoOblique48pt7bBitmaps[] PROGMEM = {
  0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x01,
  0xFF, 0xFF, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0x00, 0x00, 0x3F, 0xC0, 0xFF,
  0x00, 0x00, 0xFC, 0x00, 0x7E, 0x00, 0x03, 0xE0, 0x00, 0x3E, 0x00, 0x0F,
  0x80, 0x00, 0x7C, 0x00, 0x3E, 0x00, 0x00, 0x7C, 0x00, 0xF8, 0x00, 0x00,
  0x78, 0x01, 0xE0, 0x00, 0x00, 0xF0, 0x07, 0x80, 0x00, 0x01, 0xF0, 0x0F,
  0x00, 0x00, 0x03, 0xE0, 0x3C, 0x00, 0x00, 0x03, 0xC0, 0xF8, 0x00, 0x00,
  0x07, 0x81, 0xE0, 0x00, 0x00, 0x0F, 0x07, 0xC0, 0x00, 0x00, 0x1E, 0x0F,
  0x00, 0x00, 0x00, 0x3C, 0x1E, 0x00, 0x00, 0x00, 0x78, 0x78, 0x00, 0x00,
  0x00, 0xF0, 0xF0, 0x00, 0x00, 0x01, 0xE1, 0xE0, 0x00, 0x00, 0x03, 0xC7,
  0x80, 0x00, 0x00, 0x07, 0x0F, 0x00, 0x00, 0x00, 0x1E, 0x1E, 0x00, 0x00,
  0x00, 0x3C, 0x38, 0x00, 0x00, 0x00, 0x78, 0x70, 0x00, 0x00, 0x00, 0xE1,
  0xE0, 0x00, 0x00, 0x01, 0xC3, 0xC0, 0x00, 0x00, 0x07, 0x87, 0x00, 0x00,
  0x00, 0x0F, 0x0E, 0x00, 0x00, 0x00, 0x1E, 0x3C, 0x00, 0x00, 0x00, 0x38,
  0x78, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0x00, 0x00, 0x01, 0xE1, 0xE0, 0x00,
  0x00, 0x03, 0xC3, 0x80, 0x00, 0x00, 0x07, 0x0F, 0x00, 0x00, 0x00, 0x0E,
  0x1E, 0x00, 0x00, 0x00, 0x3C, 0x3C, 0x00, 0x00, 0x00, 0x78, 0x78, 0x00,
  0x00, 0x00, 0xE0, 0xF0, 0x00, 0x00, 0x03, 0xC1, 0xE0, 0x00, 0x00, 0x07,
  0x83, 0xC0, 0x00, 0x00, 0x1E, 0x07, 0x80, 0x00, 0x00, 0x3C, 0x0F, 0x00,
  0x00, 0x00, 0xF0, 0x1E, 0x00, 0x00, 0x01, 0xE0, 0x3C, 0x00, 0x00, 0x07,
  0x80, 0x7C, 0x00, 0x00, 0x1F, 0x00, 0x78, 0x00, 0x00, 0x7C, 0x00, 0xF0,
  0x00, 0x00, 0xF8, 0x01, 0xF0, 0x00, 0x03, 0xE0, 0x01, 0xE0, 0x00, 0x0F,
  0x80, 0x03, 0xE0, 0x00, 0x7E, 0x00, 0x03, 0xE0, 0x01, 0xF8, 0x00, 0x07,
  0xF8, 0x1F, 0xE0, 0x00, 0x07, 0xFF, 0xFF, 0x80, 0x00, 0x07, 0xFF, 0xFC,
  0x00, 0x00, 0x03, 0xFF, 0xE0, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x07,
  0xF8, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00,
  0x3F, 0x78, 0x00, 0x00, 0x0F, 0xCF, 0x00, 0x00, 0x03, 0xF1, 0xE0, 0x00,
  0x00, 0xFC, 0x3C, 0x00, 0x00, 0x7F, 0x0F, 0x80, 0x00, 0x1F, 0x81, 0xE0,
  0x00, 0x07, 0xE0, 0x3C, 0x00, 0x01, 0xF8, 0x07, 0x80, 0x00, 0x7E, 0x00,
  0xF0, 0x00, 0x0F, 0x80, 0x3C, 0x00, 0x01, 0xC0, 0x07, 0x80, 0x00, 0x00,
  0x00, 0xF0, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00,
  0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x03, 0xC0,
  0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x03,
  0xC0, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00,
  0x01, 0xE0, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00,
  0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x07, 0x80,
  0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x07,
  0x80, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00,
  0x07, 0x80, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00,
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x1E, 0x00,
  0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x0F,
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00,
  0x0F, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00,
  0x00, 0x0F, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF8, 0x00, 0x00, 0x00,
  0x1F, 0xFF, 0xF0, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x1F,
  0xE0, 0x1F, 0xE0, 0x00, 0x00, 0xFC, 0x00, 0x1F, 0x80, 0x00, 0x07, 0xC0,
  0x00, 0x3F, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x7E, 0x00, 0x01, 0xF0, 0x00,
  0x00, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0x01, 0xE0, 0x00, 0x3C, 0x00, 0x00,
  0x07, 0xC0, 0x01, 0xE0, 0x00, 0x00, 0x0F, 0x00, 0x0F, 0x80, 0x00, 0x00,
  0x3C, 0x00, 0x3C, 0x00, 0x00, 0x00, 0xF0, 0x00, 0xE0, 0x00, 0x00, 0x03,
  0xC0, 0x01, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C,
  0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00,
  0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00,
  0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0x80, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x70, 0x01, 0xF8, 0x00,
  0x00, 0x01, 0xC0, 0x0F, 0xC0, 0x00, 0x00, 0x0F, 0x00, 0x7C, 0x00, 0x00,
  0x00, 0x3C, 0x03, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x0F, 0xFF, 0xFF, 0xFF,
  0xFF, 0x80, 0x3F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
  0xF8, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7F,
  0xE0, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xC0, 0x00, 0x00, 0x1F, 0xFF, 0xFE,
  0x00, 0x00, 0x07, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0xFF, 0x00, 0x7F, 0x80,
  0x00, 0x3F, 0x80, 0x00, 0xFC, 0x00, 0x07, 0xE0, 0x00, 0x07, 0xE0, 0x00,
  0xFC, 0x00, 0x00, 0x3E, 0x00, 0x0F, 0x00, 0x00, 0x01, 0xF0, 0x00, 0xE0,
  0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00,
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00,
  0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x03,
  0xF8, 0x00, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x80,
  0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00,
  0xF8, 0x04, 0x00, 0x00, 0x00, 0x1F, 0x00, 0xF0, 0x00, 0x00, 0x03, 0xE0,
  0x0F, 0x80, 0x00, 0x00, 0x7C, 0x00, 0xFE, 0x00, 0x00, 0x1F, 0x80, 0x07,
  0xF8, 0x00, 0x07, 0xF0, 0x00, 0x3F, 0xF0, 0x03, 0xFE, 0x00, 0x00, 0xFF,
  0xFF, 0xFF, 0x80, 0x00, 0x03, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x0F, 0xFF,
  0xF8, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xFC, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0xFF, 0xC0,
  0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x1E, 0x78, 0x00, 0x00, 0x00,
  0xF1, 0xE0, 0x00, 0x00, 0x07, 0x87, 0x80, 0x00, 0x00, 0x3C, 0x1E, 0x00,
  0x00, 0x01, 0xF0, 0xF0, 0x00, 0x00, 0x07, 0x83, 0xC0, 0x00, 0x00, 0x3C,
  0x0F, 0x00, 0x00, 0x01, 0xE0, 0x3C, 0x00, 0x00, 0x0F, 0x00, 0xF0, 0x00,
  0x00, 0x7C, 0x07, 0x80, 0x00, 0x01, 0xE0, 0x1E, 0x00, 0x00, 0x0F, 0x00,
  0x78, 0x00, 0x00, 0x78, 0x01, 0xE0, 0x00, 0x03, 0xC0, 0x07, 0x80, 0x00,
  0x1F, 0x00, 0x3C, 0x00, 0x00, 0x78, 0x00, 0xF0, 0x00, 0x03, 0xC0, 0x03,
  0xC0, 0x00, 0x1E, 0x00, 0x0F, 0x00, 0x00, 0xF0, 0x00, 0x7C, 0x00, 0x07,
  0xC0, 0x01, 0xE0, 0x00, 0x1E, 0x00, 0x07, 0x80, 0x00, 0xF0, 0x00, 0x1E,
  0x00, 0x07, 0x80, 0x00, 0x78, 0x00, 0x3C, 0x00, 0x03, 0xE0, 0x01, 0xF0,
  0x00, 0x0F, 0x00, 0x07, 0x80, 0x00, 0x3C, 0x00, 0x3C, 0x00, 0x00, 0xF0,
  0x01, 0xE0, 0x00, 0x03, 0xC0, 0x0F, 0x00, 0x00, 0x1F, 0x00, 0x7C, 0x00,
  0x00, 0x78, 0x01, 0xE0, 0x00, 0x01, 0xE0, 0x0F, 0x00, 0x00, 0x07, 0x80,
  0x78, 0x00, 0x00, 0x1E, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x87, 0xFF, 0xFF,
  0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0xFF, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00,
  0x1E, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00,
  0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00,
  0xF0, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00,
  0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x0F, 0xFF,
  0xFC, 0x00, 0x00, 0x7F, 0xFF, 0xF8, 0x00, 0x01, 0xFF, 0xFF, 0xE0, 0x00,
  0x07, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x1F,
  0xFF, 0xFF, 0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x3F, 0xFF,
  0xFF, 0xFE, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00,
  0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00,
  0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00,
  0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00,
  0x00, 0x01, 0xE0, 0x1F, 0xF0, 0x00, 0x00, 0x1E, 0x1F, 0xFF, 0xC0, 0x00,
  0x01, 0xC7, 0xFF, 0xFF, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xF8, 0x00, 0x03,
  0xFF, 0x80, 0x3F, 0xC0, 0x00, 0x3F, 0xC0, 0x00, 0xFE, 0x00, 0x03, 0xE0,
  0x00, 0x03, 0xE0, 0x00, 0x30, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x78,
  0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00,
  0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00,
  0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x1E,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x06, 0x00,
  0x00, 0x00, 0x0F, 0x00, 0xF8, 0x00, 0x00, 0x01, 0xF0, 0x0F, 0xC0, 0x00,
  0x00, 0x3E, 0x00, 0x7E, 0x00, 0x00, 0x0F, 0xC0, 0x07, 0xF0, 0x00, 0x01,
  0xF8, 0x00, 0x3F, 0xC0, 0x00, 0x7F, 0x00, 0x01, 0xFF, 0x80, 0x3F, 0xC0,
  0x00, 0x07, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x1F, 0xFF, 0xFE, 0x00, 0x00,
  0x00, 0x7F, 0xFF, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xF0, 0x00, 0x00,
  0x0F, 0xFF, 0xFC, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0x00, 0x00, 0x0F, 0xFC,
  0x03, 0xC0, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00,
  0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x01,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00,
  0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x01,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00,
  0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x7C, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x1F, 0xC0, 0x00, 0x07, 0x80,
  0x3F, 0xFE, 0x00, 0x03, 0xE0, 0x3F, 0xFF, 0xC0, 0x00, 0xF0, 0x3F, 0xFF,
  0xF8, 0x00, 0x3C, 0x1F, 0xC0, 0x7F, 0x00, 0x1F, 0x0F, 0xC0, 0x07, 0xE0,
  0x07, 0xC7, 0xC0, 0x00, 0xF8, 0x01, 0xE3, 0xC0, 0x00, 0x1F, 0x00, 0x79,
  0xE0, 0x00, 0x03, 0xC0, 0x1E, 0xF0, 0x00, 0x00, 0xF8, 0x0F, 0xF8, 0x00,
  0x00, 0x3E, 0x03, 0xFC, 0x00, 0x00, 0x07, 0x80, 0xFE, 0x00, 0x00, 0x01,
  0xE0, 0x3F, 0x00, 0x00, 0x00, 0x78, 0x0F, 0x80, 0x00, 0x00, 0x1E, 0x03,
  0xE0, 0x00, 0x00, 0x07, 0x80, 0xF0, 0x00, 0x00, 0x01, 0xE0, 0x3C, 0x00,
  0x00, 0x00, 0x78, 0x0F, 0x00, 0x00, 0x00, 0x3C, 0x03, 0xC0, 0x00, 0x00,
  0x0F, 0x00, 0xF0, 0x00, 0x00, 0x03, 0xC0, 0x3E, 0x00, 0x00, 0x01, 0xE0,
  0x0F, 0x80, 0x00, 0x00, 0x78, 0x01, 0xE0, 0x00, 0x00, 0x3C, 0x00, 0x78,
  0x00, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x00, 0x0F, 0x80, 0x03, 0xC0, 0x00,
  0x03, 0xC0, 0x00, 0xF8, 0x00, 0x03, 0xE0, 0x00, 0x1F, 0x00, 0x01, 0xF8,
  0x00, 0x07, 0xE0, 0x00, 0xFC, 0x00, 0x00, 0xFF, 0x01, 0xFC, 0x00, 0x00,
  0x1F, 0xFF, 0xFE, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x3F,
  0xFF, 0x00, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF,
  0xFF, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFC, 0xFF,
  0xFF, 0xFF, 0xFF, 0xE7, 0x80, 0x00, 0x00, 0x0F, 0x3C, 0x00, 0x00, 0x00,
  0x7B, 0xC0, 0x00, 0x00, 0x03, 0xDE, 0x00, 0x00, 0x00, 0x3C, 0x60, 0x00,
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x01, 0xE0,
  0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00,
  0x07, 0x80, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00,
  0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x1E,
  0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00,
  0x00, 0x78, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x3C, 0x00,
  0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x01,
  0xE0, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00,
  0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x07, 0x80,
  0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00,
  0x1E, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00,
  0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x78,
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00,
  0x01, 0xE0, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00,
  0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x07,
  0x80, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00,
  0x00, 0x3C, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x1E, 0x00,
  0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00,
  0x78, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xE0, 0x00, 0x00, 0x0F, 0xFF, 0xFC,
  0x00, 0x00, 0x1F, 0xFF, 0xFF, 0x00, 0x00, 0x1F, 0xC0, 0x3F, 0xC0, 0x00,
  0x3F, 0x80, 0x03, 0xF0, 0x00, 0x3F, 0x00, 0x00, 0xF8, 0x00, 0x3F, 0x00,
  0x00, 0x3E, 0x00, 0x3E, 0x00, 0x00, 0x0F, 0x00, 0x1E, 0x00, 0x00, 0x07,
  0xC0, 0x1E, 0x00, 0x00, 0x01, 0xE0, 0x1F, 0x00, 0x00, 0x00, 0xF0, 0x0F,
  0x00, 0x00, 0x00, 0x78, 0x07, 0x80, 0x00, 0x00, 0x3C, 0x07, 0x80, 0x00,
  0x00, 0x1E, 0x03, 0xC0, 0x00, 0x00, 0x0F, 0x01, 0xE0, 0x00, 0x00, 0x0F,
  0x00, 0xF0, 0x00, 0x00, 0x07, 0x80, 0x78, 0x00, 0x00, 0x03, 0xC0, 0x3C,
  0x00, 0x00, 0x03, 0xC0, 0x1F, 0x00, 0x00, 0x03, 0xC0, 0x07, 0x80, 0x00,
  0x03, 0xE0, 0x03, 0xE0, 0x00, 0x03, 0xE0, 0x00, 0xF8, 0x00, 0x03, 0xE0,
  0x00, 0x7E, 0x00, 0x07, 0xC0, 0x00, 0x1F, 0xE0, 0x1F, 0xC0, 0x00, 0x03,
  0xFF, 0xFF, 0x80, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xFF,
  0x80, 0x00, 0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x01, 0xFE, 0x01, 0xFC, 0x00,
  0x01, 0xF0, 0x00, 0x3F, 0x00, 0x01, 0xF0, 0x00, 0x07, 0xC0, 0x03, 0xE0,
  0x00, 0x01, 0xE0, 0x03, 0xE0, 0x00, 0x00, 0xF8, 0x01, 0xE0, 0x00, 0x00,
  0x3C, 0x01, 0xE0, 0x00, 0x00, 0x1F, 0x01, 0xE0, 0x00, 0x00, 0x07, 0x80,
  0xF0, 0x00, 0x00, 0x03, 0xC0, 0xF0, 0x00, 0x00, 0x01, 0xE0, 0x78, 0x00,
  0x00, 0x00, 0xF0, 0x78, 0x00, 0x00, 0x00, 0x78, 0x3C, 0x00, 0x00, 0x00,
  0x3C, 0x1E, 0x00, 0x00, 0x00, 0x1C, 0x0F, 0x00, 0x00, 0x00, 0x1E, 0x07,
  0x80, 0x00, 0x00, 0x0F, 0x03, 0xC0, 0x00, 0x00, 0x0F, 0x01, 0xE0, 0x00,
  0x00, 0x07, 0x80, 0xF8, 0x00, 0x00, 0x07, 0x80, 0x3C, 0x00, 0x00, 0x07,
  0xC0, 0x1F, 0x00, 0x00, 0x07, 0xC0, 0x0F, 0xC0, 0x00, 0x07, 0xC0, 0x03,
  0xF0, 0x00, 0x0F, 0xC0, 0x00, 0xFC, 0x00, 0x1F, 0xC0, 0x00, 0x7F, 0xC0,
  0x7F, 0x80, 0x00, 0x1F, 0xFF, 0xFF, 0x80, 0x00, 0x03, 0xFF, 0xFF, 0x80,
  0x00, 0x00, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xF0, 0x00, 0x00,
  0x03, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0xFE,
  0x03, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x1F, 0x80, 0x00, 0x7E, 0x00, 0x03,
  0xE0, 0x00, 0x1F, 0x00, 0x00, 0x7C, 0x00, 0x0F, 0x00, 0x00, 0x0F, 0x00,
  0x07, 0x80, 0x00, 0x03, 0xE0, 0x03, 0xE0, 0x00, 0x00, 0xF8, 0x00, 0xF0,
  0x00, 0x00, 0x1E, 0x00, 0x78, 0x00, 0x00, 0x07, 0x80, 0x1E, 0x00, 0x00,
  0x01, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x3C, 0x03, 0xC0, 0x00, 0x00, 0x0F,
  0x00, 0xF0, 0x00, 0x00, 0x03, 0xC0, 0x78, 0x00, 0x00, 0x00, 0xF0, 0x1E,
  0x00, 0x00, 0x00, 0x3C, 0x07, 0x80, 0x00, 0x00, 0x1F, 0x01, 0xE0, 0x00,
  0x00, 0x07, 0xC0, 0x78, 0x00, 0x00, 0x03, 0xF0, 0x1E, 0x00, 0x00, 0x01,
  0xFC, 0x07, 0x80, 0x00, 0x00, 0xFF, 0x01, 0xF0, 0x00, 0x00, 0x7F, 0xC0,
  0x7C, 0x00, 0x00, 0x3D, 0xE0, 0x0F, 0x00, 0x00, 0x1E, 0x78, 0x03, 0xE0,
  0x00, 0x0F, 0x1E, 0x00, 0x7C, 0x00, 0x0F, 0x8F, 0x80, 0x1F, 0x80, 0x07,
  0xC3, 0xE0, 0x03, 0xF8, 0x0F, 0xE0, 0xF0, 0x00, 0x7F, 0xFF, 0xF0, 0x3C,
  0x00, 0x0F, 0xFF, 0xF0, 0x1F, 0x00, 0x01, 0xFF, 0xF0, 0x07, 0x80, 0x00,
  0x0F, 0xE0, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0x80, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x07,
  0xE0, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0x80, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x0F, 0x00, 0xFF, 0xC0, 0x00,
  0x03, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x3F,
  0xFF, 0xC0, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0x80, 0x07, 0xFE, 0x00, 0xFF, 0xE0, 0x1F, 0xFF, 0x01, 0xFF, 0xF0, 0x3F,
  0xFF, 0x03, 0xFF, 0xF0, 0x3F, 0xFE, 0x03, 0xFF, 0xE0, 0x1F, 0xFC, 0x01,
  0xFF, 0x80, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x01, 0xFF,
  0x80, 0x3F, 0xFC, 0x07, 0xFF, 0xC0, 0x7F, 0xFC, 0x0F, 0xFF, 0xC0, 0xFF,
  0xFC, 0x0F, 0xFF, 0x80, 0xFF, 0xF8, 0x07, 0xFF, 0x00, 0x7F, 0xE0, 0x01,
  0xF8, 0x00 };

const GFXglyph FreeMonoOblique48pt7bGlyphs[] PROGMEM = {
  {     0,  39,  59,  56,   15,  -57 },   // 0x30 '0'
  {   288,  35,  57,  56,   11,  -56 },   // 0x31 '1'
  {   538,  46,  58,  56,    8,  -57 },   // 0x32 '2'
  {   872,  44,  59,  56,   11,  -57 },   // 0x33 '3'
  {  1197,  38,  57,  56,   13,  -56 },   // 0x34 '4'
  {  1468,  44,  58,  56,   11,  -56 },   // 0x35 '5'
  {  1787,  42,  59,  56,   17,  -57 },   // 0x36 '6'
  {  2097,  37,  57,  56,   20,  -56 },   // 0x37 '7'
  {  2361,  41,  59,  56,   13,  -57 },   // 0x38 '8'
  {  2664,  42,  59,  56,   14,  -57 },   // 0x39 '9'
  {  2974,  20,  40,  56,   22,  -38 } }; // 0x3A ':'

const GFXfont FreeMonoOblique48pt7b PROGMEM = {
  (uint8_t  *)FreeMonoOblique48pt7bBitmaps,
  (GFXglyph *)FreeMonoOblique48pt7bGlyphs,
  0x30, 0x3A, 94 };

// Approx. 3158 bytes

#endif // FreeMonoOblique48pt7b_H
