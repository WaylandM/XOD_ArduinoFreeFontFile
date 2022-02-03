#ifndef FreeMonoBoldOblique42pt7b_H
#define FreeMonoBoldOblique42pt7b_H

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

const uint8_t FreeMonoBoldOblique42pt7bBitmaps[] PROGMEM = {
  0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x01, 0xFF, 0xF8, 0x00, 0x00, 0x1F,
  0xFF, 0xF8, 0x00, 0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x0F, 0xFF, 0xFF, 0xE0,
  0x00, 0x7F, 0xFF, 0xFF, 0xC0, 0x03, 0xFF, 0xFF, 0xFF, 0x00, 0x1F, 0xFF,
  0xFF, 0xFE, 0x00, 0xFF, 0xF0, 0x3F, 0xF8, 0x07, 0xFF, 0x00, 0x7F, 0xE0,
  0x1F, 0xF0, 0x00, 0xFF, 0xC0, 0xFF, 0x80, 0x01, 0xFF, 0x07, 0xFC, 0x00,
  0x07, 0xFC, 0x1F, 0xF0, 0x00, 0x0F, 0xF0, 0xFF, 0x80, 0x00, 0x3F, 0xC3,
  0xFC, 0x00, 0x00, 0xFF, 0x0F, 0xF0, 0x00, 0x03, 0xFC, 0x7F, 0xC0, 0x00,
  0x0F, 0xF1, 0xFE, 0x00, 0x00, 0x3F, 0xC7, 0xF8, 0x00, 0x00, 0xFF, 0x3F,
  0xE0, 0x00, 0x03, 0xFC, 0xFF, 0x00, 0x00, 0x0F, 0xF3, 0xFC, 0x00, 0x00,
  0x7F, 0x8F, 0xF0, 0x00, 0x01, 0xFE, 0x3F, 0xC0, 0x00, 0x07, 0xF9, 0xFE,
  0x00, 0x00, 0x1F, 0xE7, 0xF8, 0x00, 0x00, 0x7F, 0x9F, 0xE0, 0x00, 0x03,
  0xFC, 0x7F, 0x80, 0x00, 0x0F, 0xF1, 0xFE, 0x00, 0x00, 0x3F, 0xCF, 0xF0,
  0x00, 0x00, 0xFF, 0x3F, 0xC0, 0x00, 0x07, 0xFC, 0xFF, 0x00, 0x00, 0x1F,
  0xE3, 0xFC, 0x00, 0x00, 0x7F, 0x8F, 0xF0, 0x00, 0x01, 0xFE, 0x3F, 0xC0,
  0x00, 0x0F, 0xF0, 0xFF, 0x00, 0x00, 0x3F, 0xC3, 0xFC, 0x00, 0x01, 0xFF,
  0x0F, 0xF0, 0x00, 0x07, 0xF8, 0x3F, 0xC0, 0x00, 0x3F, 0xE0, 0xFF, 0x80,
  0x01, 0xFF, 0x03, 0xFE, 0x00, 0x07, 0xFC, 0x0F, 0xFC, 0x00, 0x7F, 0xE0,
  0x1F, 0xF8, 0x03, 0xFF, 0x00, 0x7F, 0xF0, 0x3F, 0xFC, 0x01, 0xFF, 0xFF,
  0xFF, 0xE0, 0x03, 0xFF, 0xFF, 0xFF, 0x00, 0x0F, 0xFF, 0xFF, 0xF8, 0x00,
  0x1F, 0xFF, 0xFF, 0xC0, 0x00, 0x3F, 0xFF, 0xFC, 0x00, 0x00, 0x7F, 0xFF,
  0xE0, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x7F,
  0xF8, 0x00, 0x00, 0x3F, 0xFF, 0x00, 0x00, 0x0F, 0xFF, 0xE0, 0x00, 0x07,
  0xFF, 0xFC, 0x00, 0x03, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xE0, 0x00,
  0x7F, 0xFF, 0xFC, 0x00, 0x1F, 0xFE, 0x7F, 0x80, 0x03, 0xFF, 0x9F, 0xF0,
  0x00, 0x7F, 0xC3, 0xFC, 0x00, 0x0F, 0xF0, 0x7F, 0x80, 0x01, 0xF8, 0x0F,
  0xF0, 0x00, 0x08, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00,
  0x0F, 0xF0, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00,
  0x00, 0x0F, 0xF8, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0xC0,
  0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x3F,
  0xE0, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00,
  0x1F, 0xE0, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00,
  0x00, 0x1F, 0xE0, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x7F, 0x80,
  0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x7F,
  0x80, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00,
  0x7F, 0xC0, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00,
  0x00, 0x3F, 0xC0, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x01, 0xFE, 0x00,
  0x01, 0xFF, 0xFF, 0xFF, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0xFF, 0x80,
  0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xE0, 0x00,
  0x00, 0x03, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0x00, 0x00,
  0x07, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xF0, 0x00, 0x07,
  0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x7F, 0xFF, 0xFF, 0xFE, 0x00, 0x07, 0xFF,
  0x80, 0xFF, 0xF0, 0x00, 0x7F, 0xF0, 0x01, 0xFF, 0xC0, 0x07, 0xFE, 0x00,
  0x03, 0xFE, 0x00, 0x3F, 0xE0, 0x00, 0x1F, 0xF0, 0x03, 0xFE, 0x00, 0x00,
  0x7F, 0x80, 0x1F, 0xF0, 0x00, 0x03, 0xFC, 0x00, 0xFF, 0x00, 0x00, 0x1F,
  0xE0, 0x07, 0xF0, 0x00, 0x00, 0xFF, 0x00, 0x1F, 0x00, 0x00, 0x0F, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00,
  0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0xFF, 0xF0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0xE0, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xC0, 0x00,
  0x00, 0x00, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x80, 0x00, 0x00, 0x00,
  0xFF, 0xF0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x01, 0xFF,
  0xF0, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x07, 0x80, 0x03, 0xFF, 0xE0,
  0x00, 0x7E, 0x00, 0x3F, 0xFE, 0x00, 0x07, 0xF0, 0x03, 0xFF, 0xE0, 0x00,
  0x3F, 0x80, 0x7F, 0xFC, 0x00, 0x03, 0xFC, 0x03, 0xFF, 0xFF, 0xFF, 0xFF,
  0xE0, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8,
  0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x7F, 0xFF, 0xFF, 0xFF, 0xFC, 0x03,
  0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF,
  0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00,
  0x01, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0xFF,
  0xFF, 0xFF, 0x80, 0x00, 0x7F, 0xFF, 0xFF, 0xF8, 0x00, 0x1F, 0xFF, 0xFF,
  0xFF, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0xFF, 0xFF, 0xFF, 0xFE,
  0x00, 0x3F, 0xFC, 0x01, 0xFF, 0xE0, 0x07, 0xFC, 0x00, 0x0F, 0xFC, 0x00,
  0xFF, 0x00, 0x00, 0xFF, 0x80, 0x1F, 0xC0, 0x00, 0x0F, 0xF0, 0x01, 0xF0,
  0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00,
  0x07, 0xF8, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0xC0, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x00,
  0x00, 0x00, 0x03, 0xFF, 0x80, 0x00, 0x00, 0x7F, 0xFF, 0xE0, 0x00, 0x00,
  0x1F, 0xFF, 0xF8, 0x00, 0x00, 0x07, 0xFF, 0xFC, 0x00, 0x00, 0x01, 0xFF,
  0xFF, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xC0, 0x00, 0x00, 0x07, 0xFF, 0xFC,
  0x00, 0x00, 0x00, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x0F, 0xFF, 0xFC, 0x00,
  0x00, 0x00, 0x07, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x03,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x00, 0x0F, 0xF0,
  0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00,
  0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0xFF, 0x80, 0x78, 0x00, 0x00, 0x3F, 0xE0, 0x1F, 0x80, 0x00, 0x1F,
  0xFC, 0x07, 0xFE, 0x00, 0x1F, 0xFF, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
  0x3F, 0xFF, 0xFF, 0xFF, 0xF0, 0x07, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0xFF,
  0xFF, 0xFF, 0xFF, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0xFF, 0xFF,
  0xFF, 0xE0, 0x00, 0x03, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x07, 0xFF, 0xC0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0xFF, 0xF0,
  0x00, 0x00, 0x03, 0xFF, 0xC0, 0x00, 0x00, 0x1F, 0xFF, 0x00, 0x00, 0x00,
  0xFF, 0xFC, 0x00, 0x00, 0x07, 0xFF, 0xE0, 0x00, 0x00, 0x3F, 0xFF, 0x80,
  0x00, 0x00, 0xFF, 0xFE, 0x00, 0x00, 0x07, 0xFF, 0xF8, 0x00, 0x00, 0x3F,
  0xFF, 0xC0, 0x00, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0x0F, 0xFB, 0xFC, 0x00,
  0x00, 0x7F, 0xEF, 0xF0, 0x00, 0x01, 0xFF, 0x7F, 0xC0, 0x00, 0x0F, 0xF9,
  0xFE, 0x00, 0x00, 0x7F, 0xC7, 0xF8, 0x00, 0x03, 0xFE, 0x1F, 0xE0, 0x00,
  0x1F, 0xF8, 0x7F, 0x80, 0x00, 0xFF, 0xC3, 0xFC, 0x00, 0x03, 0xFE, 0x0F,
  0xF0, 0x00, 0x1F, 0xF0, 0x3F, 0xC0, 0x00, 0xFF, 0x80, 0xFF, 0x00, 0x07,
  0xFC, 0x07, 0xFC, 0x00, 0x3F, 0xF0, 0x1F, 0xE0, 0x01, 0xFF, 0x80, 0x7F,
  0x80, 0x07, 0xFC, 0x01, 0xFE, 0x00, 0x3F, 0xE0, 0x07, 0xF8, 0x01, 0xFF,
  0x00, 0x3F, 0xC0, 0x0F, 0xF8, 0x00, 0xFF, 0x00, 0x7F, 0xE0, 0x03, 0xFC,
  0x01, 0xFF, 0x00, 0x0F, 0xF0, 0x0F, 0xFF, 0xFF, 0xFF, 0xF0, 0x7F, 0xFF,
  0xFF, 0xFF, 0xF1, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0xFF, 0xFF, 0xFF, 0xFF,
  0x3F, 0xFF, 0xFF, 0xFF, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xE3, 0xFF, 0xFF,
  0xFF, 0xFF, 0x8F, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0x00,
  0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x1F,
  0xFF, 0xF0, 0x00, 0x01, 0xFF, 0xFF, 0xE0, 0x00, 0x0F, 0xFF, 0xFF, 0x80,
  0x00, 0x3F, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xF8, 0x00, 0x03, 0xFF,
  0xFF, 0xE0, 0x00, 0x0F, 0xFF, 0xFF, 0x00, 0x00, 0x1F, 0xFF, 0xF0, 0x00,
  0x00, 0x03, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0xFF, 0xFF, 0xFF, 0xF8, 0x00,
  0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0x03, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x7F,
  0xFF, 0xFF, 0xFC, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0x03, 0xFF, 0xFF,
  0xFF, 0xE0, 0x00, 0x7F, 0xFF, 0xFF, 0xF8, 0x00, 0x0F, 0xF0, 0x00, 0x00,
  0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x00,
  0x0F, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0xC0, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xC3, 0xFE, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xF0,
  0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x3F, 0xFF, 0xFF, 0xF8, 0x00,
  0x07, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x1F,
  0xFF, 0xFF, 0xFF, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0xFF, 0xF8,
  0x0F, 0xFE, 0x00, 0x0F, 0xF0, 0x00, 0xFF, 0xC0, 0x00, 0xF0, 0x00, 0x0F,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x0F, 0xF0,
  0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00,
  0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x1E,
  0x00, 0x00, 0x07, 0xF8, 0x07, 0xE0, 0x00, 0x03, 0xFF, 0x01, 0xFE, 0x00,
  0x00, 0xFF, 0xC0, 0x7F, 0xF8, 0x01, 0xFF, 0xF0, 0x0F, 0xFF, 0xFF, 0xFF,
  0xFE, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x3F, 0xFF, 0xFF, 0xFF, 0xE0,
  0x03, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x3F, 0xFF, 0xFF, 0xFC, 0x00, 0x03,
  0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x0F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x3F,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00,
  0x7F, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xC0, 0x00, 0x01, 0xFF, 0xFF,
  0xF0, 0x00, 0x03, 0xFF, 0xFF, 0xF8, 0x00, 0x07, 0xFF, 0xFF, 0xFC, 0x00,
  0x07, 0xFF, 0xFF, 0xFC, 0x00, 0x07, 0xFF, 0xFF, 0xFC, 0x00, 0x07, 0xFF,
  0xE0, 0x7C, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x00,
  0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x07,
  0xFE, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x00,
  0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00,
  0x01, 0xFE, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0x03, 0xFC, 0x00, 0x00, 0xFF, 0x07, 0xFF, 0x80, 0x00, 0x7F, 0x8F, 0xFF,
  0xE0, 0x00, 0x7F, 0x9F, 0xFF, 0xF8, 0x00, 0x3F, 0xDF, 0xFF, 0xFE, 0x00,
  0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xE0, 0x0F, 0xFF,
  0xFF, 0xFF, 0xF0, 0x07, 0xFF, 0xF8, 0x3F, 0xF8, 0x03, 0xFF, 0xE0, 0x07,
  0xFE, 0x01, 0xFF, 0xE0, 0x01, 0xFF, 0x01, 0xFF, 0xC0, 0x00, 0xFF, 0x80,
  0xFF, 0xC0, 0x00, 0x3F, 0xC0, 0x7F, 0xC0, 0x00, 0x1F, 0xE0, 0x3F, 0xC0,
  0x00, 0x0F, 0xF0, 0x1F, 0xE0, 0x00, 0x07, 0xF8, 0x0F, 0xF0, 0x00, 0x03,
  0xFC, 0x07, 0xF8, 0x00, 0x03, 0xFC, 0x03, 0xFC, 0x00, 0x01, 0xFE, 0x01,
  0xFE, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x80, 0x00, 0xFF, 0x00, 0x7F, 0xC0,
  0x00, 0xFF, 0x80, 0x3F, 0xF0, 0x00, 0xFF, 0x80, 0x0F, 0xFC, 0x00, 0xFF,
  0xC0, 0x07, 0xFF, 0x01, 0xFF, 0xC0, 0x03, 0xFF, 0xFF, 0xFF, 0xC0, 0x00,
  0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x7F, 0xFF, 0xFF, 0xE0, 0x00, 0x1F, 0xFF,
  0xFF, 0xE0, 0x00, 0x07, 0xFF, 0xFF, 0xC0, 0x00, 0x01, 0xFF, 0xFF, 0xC0,
  0x00, 0x00, 0x7F, 0xFF, 0x80, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00,
  0x3F, 0xFF, 0xFF, 0xFF, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0xFF, 0xFF,
  0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F,
  0xFF, 0xFF, 0xFF, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF,
  0xFE, 0xFF, 0x00, 0x00, 0x3F, 0xE7, 0xF8, 0x00, 0x01, 0xFF, 0x3F, 0x80,
  0x00, 0x1F, 0xF0, 0xF8, 0x00, 0x00, 0xFF, 0x87, 0x80, 0x00, 0x0F, 0xF8,
  0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00,
  0x3F, 0xC0, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00,
  0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0xFF,
  0x80, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00,
  0x07, 0xFC, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x03, 0xFE, 0x00,
  0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x1F,
  0xF0, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00,
  0x00, 0x7F, 0xC0, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x3F, 0xE0,
  0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x01,
  0xFF, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00,
  0x00, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x07, 0xFC,
  0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00,
  0x1F, 0xF0, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00,
  0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x1F,
  0x80, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC,
  0x00, 0x00, 0x00, 0xFF, 0xFE, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0x00, 0x00,
  0x3F, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x03, 0xFF, 0xFF,
  0xFF, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFE, 0x00,
  0xFF, 0xF0, 0x1F, 0xFE, 0x03, 0xFF, 0x00, 0x0F, 0xFC, 0x07, 0xFC, 0x00,
  0x0F, 0xF8, 0x1F, 0xF0, 0x00, 0x0F, 0xF0, 0x3F, 0xC0, 0x00, 0x1F, 0xE0,
  0xFF, 0x80, 0x00, 0x3F, 0xC1, 0xFE, 0x00, 0x00, 0x7F, 0x83, 0xFC, 0x00,
  0x00, 0xFE, 0x07, 0xF8, 0x00, 0x03, 0xFC, 0x0F, 0xF0, 0x00, 0x07, 0xF8,
  0x1F, 0xE0, 0x00, 0x1F, 0xE0, 0x3F, 0xE0, 0x00, 0x7F, 0x80, 0x3F, 0xE0,
  0x01, 0xFF, 0x00, 0x7F, 0xF0, 0x1F, 0xFC, 0x00, 0x7F, 0xFF, 0xFF, 0xF0,
  0x00, 0x7F, 0xFF, 0xFF, 0xC0, 0x00, 0x7F, 0xFF, 0xFE, 0x00, 0x00, 0x7F,
  0xFF, 0xF8, 0x00, 0x01, 0xFF, 0xFF, 0xF8, 0x00, 0x0F, 0xFF, 0xFF, 0xF8,
  0x00, 0x3F, 0xFF, 0xFF, 0xF8, 0x00, 0xFF, 0xFF, 0xFF, 0xF0, 0x03, 0xFF,
  0x80, 0xFF, 0xF0, 0x0F, 0xFC, 0x00, 0x7F, 0xE0, 0x1F, 0xE0, 0x00, 0x7F,
  0xE0, 0x7F, 0x80, 0x00, 0x7F, 0xC1, 0xFE, 0x00, 0x00, 0x7F, 0x83, 0xFC,
  0x00, 0x00, 0xFF, 0x07, 0xF0, 0x00, 0x01, 0xFE, 0x1F, 0xE0, 0x00, 0x03,
  0xFC, 0x3F, 0xC0, 0x00, 0x07, 0xF8, 0x7F, 0x80, 0x00, 0x1F, 0xE0, 0xFF,
  0x00, 0x00, 0x3F, 0xC1, 0xFF, 0x00, 0x00, 0xFF, 0x83, 0xFE, 0x00, 0x03,
  0xFE, 0x07, 0xFE, 0x00, 0x1F, 0xFC, 0x0F, 0xFF, 0x01, 0xFF, 0xF0, 0x0F,
  0xFF, 0xFF, 0xFF, 0xC0, 0x1F, 0xFF, 0xFF, 0xFF, 0x00, 0x1F, 0xFF, 0xFF,
  0xFC, 0x00, 0x3F, 0xFF, 0xFF, 0xF0, 0x00, 0x3F, 0xFF, 0xFF, 0xC0, 0x00,
  0x3F, 0xFF, 0xFE, 0x00, 0x00, 0x1F, 0xFF, 0xF0, 0x00, 0x00, 0x07, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x0F, 0xFF,
  0xF0, 0x00, 0x00, 0x1F, 0xFF, 0xFC, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0x00,
  0x00, 0x3F, 0xFF, 0xFF, 0xC0, 0x00, 0x3F, 0xFF, 0xFF, 0xF0, 0x00, 0x3F,
  0xFF, 0xFF, 0xF8, 0x00, 0x1F, 0xFF, 0xFF, 0xFE, 0x00, 0x1F, 0xFC, 0x07,
  0xFF, 0x00, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x0F, 0xF0, 0x00, 0x7F, 0xE0,
  0x0F, 0xF8, 0x00, 0x1F, 0xF0, 0x07, 0xF8, 0x00, 0x0F, 0xF8, 0x07, 0xF8,
  0x00, 0x03, 0xFC, 0x03, 0xFC, 0x00, 0x01, 0xFE, 0x01, 0xFE, 0x00, 0x00,
  0xFF, 0x01, 0xFE, 0x00, 0x00, 0x7F, 0x80, 0xFF, 0x00, 0x00, 0x3F, 0xC0,
  0x7F, 0x80, 0x00, 0x1F, 0xE0, 0x3F, 0xC0, 0x00, 0x1F, 0xF0, 0x1F, 0xE0,
  0x00, 0x1F, 0xF8, 0x0F, 0xF8, 0x00, 0x1F, 0xFC, 0x07, 0xFC, 0x00, 0x3F,
  0xFC, 0x03, 0xFF, 0x00, 0x3F, 0xFE, 0x00, 0xFF, 0xE0, 0xFF, 0xFF, 0x00,
  0x7F, 0xFF, 0xFF, 0xFF, 0x80, 0x3F, 0xFF, 0xFF, 0xFF, 0xC0, 0x0F, 0xFF,
  0xFF, 0xFF, 0xC0, 0x03, 0xFF, 0xFF, 0xDF, 0xE0, 0x00, 0xFF, 0xFF, 0xCF,
  0xF0, 0x00, 0x3F, 0xFF, 0x8F, 0xF0, 0x00, 0x0F, 0xFF, 0x07, 0xF8, 0x00,
  0x01, 0xFE, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00,
  0x03, 0xFC, 0x00, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x03, 0xFE,
  0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00,
  0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x03,
  0xFF, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x00,
  0x01, 0xF0, 0x3F, 0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0xFF,
  0xFF, 0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFE,
  0x00, 0x00, 0x7F, 0xFF, 0xFC, 0x00, 0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x00,
  0x07, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0x00, 0x1F, 0xE0, 0x0F, 0xFC, 0x07, 0xFF, 0x03, 0xFF, 0xC0, 0xFF,
  0xF0, 0x3F, 0xFC, 0x0F, 0xFE, 0x03, 0xFF, 0x00, 0x7F, 0xC0, 0x0F, 0xC0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00,
  0x7F, 0x80, 0x3F, 0xF0, 0x1F, 0xFC, 0x0F, 0xFF, 0x03, 0xFF, 0xC0, 0xFF,
  0xF0, 0x3F, 0xF8, 0x0F, 0xFC, 0x01, 0xFE, 0x00, 0x3F, 0x00, 0x00 };

const GFXglyph FreeMonoBoldOblique42pt7bGlyphs[] PROGMEM = {
  {     0,  38,  53,  49,   11,  -51 },   // 0x30 '0'
  {   252,  35,  52,  49,    8,  -51 },   // 0x31 '1'
  {   480,  45,  52,  49,    4,  -51 },   // 0x32 '2'
  {   773,  43,  53,  49,    6,  -51 },   // 0x33 '3'
  {  1058,  38,  50,  49,    9,  -49 },   // 0x34 '4'
  {  1296,  43,  52,  49,    7,  -50 },   // 0x35 '5'
  {  1576,  41,  53,  49,   13,  -51 },   // 0x36 '6'
  {  1848,  37,  51,  49,   15,  -50 },   // 0x37 '7'
  {  2084,  39,  53,  49,   10,  -51 },   // 0x38 '8'
  {  2343,  41,  53,  49,    9,  -51 },   // 0x39 '9'
  {  2615,  18,  37,  49,   19,  -35 } }; // 0x3A ':'

const GFXfont FreeMonoBoldOblique42pt7b PROGMEM = {
  (uint8_t  *)FreeMonoBoldOblique42pt7bBitmaps,
  (GFXglyph *)FreeMonoBoldOblique42pt7bGlyphs,
  0x30, 0x3A, 82 };

// Approx. 2783 bytes

#endif // FreeMonoBoldOblique42pt7b_H
