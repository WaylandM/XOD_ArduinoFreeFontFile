#ifndef FreeMonoBoldOblique54pt7b_H
#define FreeMonoBoldOblique54pt7b_H

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

const uint8_t FreeMonoBoldOblique54pt7bBitmaps[] PROGMEM = {
  0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xC0,
  0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF,
  0x80, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x1F, 0xFF, 0xFF,
  0xFE, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x0F, 0xFF, 0xFF,
  0xFF, 0xF8, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x03, 0xFF, 0xFF,
  0xFF, 0xFF, 0xC0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x7F, 0xFF,
  0x01, 0xFF, 0xFE, 0x00, 0x3F, 0xFF, 0x00, 0x1F, 0xFF, 0x80, 0x1F, 0xFF,
  0x00, 0x03, 0xFF, 0xE0, 0x07, 0xFF, 0x80, 0x00, 0x7F, 0xF8, 0x03, 0xFF,
  0xC0, 0x00, 0x1F, 0xFF, 0x01, 0xFF, 0xE0, 0x00, 0x03, 0xFF, 0xC0, 0x7F,
  0xF0, 0x00, 0x00, 0xFF, 0xF0, 0x3F, 0xFC, 0x00, 0x00, 0x1F, 0xFC, 0x0F,
  0xFE, 0x00, 0x00, 0x07, 0xFF, 0x03, 0xFF, 0x00, 0x00, 0x01, 0xFF, 0xC1,
  0xFF, 0xC0, 0x00, 0x00, 0x7F, 0xF0, 0x7F, 0xE0, 0x00, 0x00, 0x1F, 0xFC,
  0x3F, 0xF8, 0x00, 0x00, 0x07, 0xFF, 0x0F, 0xFE, 0x00, 0x00, 0x01, 0xFF,
  0xC3, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xF0, 0xFF, 0xC0, 0x00, 0x00, 0x1F,
  0xF8, 0x7F, 0xF0, 0x00, 0x00, 0x07, 0xFE, 0x1F, 0xFC, 0x00, 0x00, 0x03,
  0xFF, 0x87, 0xFE, 0x00, 0x00, 0x00, 0xFF, 0xE1, 0xFF, 0x80, 0x00, 0x00,
  0x3F, 0xF0, 0xFF, 0xE0, 0x00, 0x00, 0x0F, 0xFC, 0x3F, 0xF8, 0x00, 0x00,
  0x03, 0xFF, 0x0F, 0xFE, 0x00, 0x00, 0x01, 0xFF, 0xC3, 0xFF, 0x00, 0x00,
  0x00, 0x7F, 0xF0, 0xFF, 0xC0, 0x00, 0x00, 0x1F, 0xF8, 0x7F, 0xF0, 0x00,
  0x00, 0x07, 0xFE, 0x1F, 0xFC, 0x00, 0x00, 0x01, 0xFF, 0x87, 0xFF, 0x00,
  0x00, 0x00, 0xFF, 0xE1, 0xFF, 0x80, 0x00, 0x00, 0x3F, 0xF8, 0x7F, 0xE0,
  0x00, 0x00, 0x0F, 0xFC, 0x3F, 0xF8, 0x00, 0x00, 0x03, 0xFF, 0x0F, 0xFE,
  0x00, 0x00, 0x00, 0xFF, 0xC3, 0xFF, 0x80, 0x00, 0x00, 0x7F, 0xF0, 0xFF,
  0xE0, 0x00, 0x00, 0x1F, 0xF8, 0x3F, 0xF8, 0x00, 0x00, 0x07, 0xFE, 0x0F,
  0xFE, 0x00, 0x00, 0x03, 0xFF, 0x83, 0xFF, 0x80, 0x00, 0x00, 0xFF, 0xC0,
  0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xF0, 0x3F, 0xF8, 0x00, 0x00, 0x1F, 0xFC,
  0x0F, 0xFE, 0x00, 0x00, 0x0F, 0xFE, 0x03, 0xFF, 0x80, 0x00, 0x03, 0xFF,
  0x80, 0xFF, 0xF0, 0x00, 0x01, 0xFF, 0xC0, 0x3F, 0xFC, 0x00, 0x00, 0xFF,
  0xF0, 0x0F, 0xFF, 0x00, 0x00, 0x7F, 0xF8, 0x01, 0xFF, 0xE0, 0x00, 0x3F,
  0xFE, 0x00, 0x7F, 0xFC, 0x00, 0x1F, 0xFF, 0x00, 0x1F, 0xFF, 0x80, 0x0F,
  0xFF, 0x80, 0x07, 0xFF, 0xF8, 0x1F, 0xFF, 0xE0, 0x00, 0xFF, 0xFF, 0xFF,
  0xFF, 0xF0, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x07, 0xFF, 0xFF,
  0xFF, 0xFC, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x3F, 0xFF,
  0xFF, 0xFF, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x01, 0xFF,
  0xFF, 0xFF, 0x80, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x03,
  0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xC0, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x80,
  0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF8, 0x00,
  0x00, 0x00, 0x0F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x80, 0x00,
  0x00, 0x0F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xF0, 0x00, 0x00,
  0x07, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0x00, 0x00, 0x03,
  0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xE0, 0x00, 0x01, 0xFF,
  0xFF, 0xFF, 0x80, 0x00, 0x0F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x7F, 0xFF,
  0x3F, 0xF8, 0x00, 0x03, 0xFF, 0xF0, 0xFF, 0xC0, 0x00, 0x0F, 0xFF, 0x83,
  0xFF, 0x00, 0x00, 0x3F, 0xF8, 0x1F, 0xFC, 0x00, 0x00, 0xFF, 0x80, 0x7F,
  0xF0, 0x00, 0x01, 0xFC, 0x01, 0xFF, 0xC0, 0x00, 0x01, 0x00, 0x07, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x03, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xC0, 0x00,
  0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xFF,
  0x80, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF0, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x3F, 0xFF,
  0xFF, 0xFF, 0xFF, 0x83, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
  0xF8, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x7F,
  0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xF8, 0x00,
  0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF,
  0xFF, 0xC0, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x01, 0xFF,
  0xFE, 0x01, 0xFF, 0xFE, 0x00, 0x00, 0xFF, 0xFC, 0x00, 0x1F, 0xFF, 0xC0,
  0x00, 0x7F, 0xFC, 0x00, 0x03, 0xFF, 0xF0, 0x00, 0x1F, 0xFE, 0x00, 0x00,
  0x7F, 0xFC, 0x00, 0x0F, 0xFF, 0x00, 0x00, 0x0F, 0xFF, 0x00, 0x03, 0xFF,
  0x80, 0x00, 0x01, 0xFF, 0xC0, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x7F, 0xF0,
  0x00, 0x7F, 0xF0, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x1F, 0xF8, 0x00, 0x00,
  0x07, 0xFF, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0xFE,
  0x00, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x3F, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x80, 0x00, 0x1F,
  0x00, 0x00, 0xFF, 0xFF, 0x80, 0x00, 0x0F, 0xF0, 0x00, 0x7F, 0xFF, 0xC0,
  0x00, 0x07, 0xFC, 0x00, 0x3F, 0xFF, 0xC0, 0x00, 0x03, 0xFF, 0x00, 0x3F,
  0xFF, 0xE0, 0x00, 0x00, 0xFF, 0xC0, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xF0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x01, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x1F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xF8, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0x80, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x0F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0x80, 0x00,
  0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF,
  0xE0, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x3F, 0xFF,
  0xFF, 0xFF, 0xF8, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
  0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x03, 0xFF, 0xFC, 0x01,
  0xFF, 0xFF, 0x00, 0x03, 0xFF, 0xC0, 0x00, 0x3F, 0xFF, 0x00, 0x03, 0xFF,
  0x80, 0x00, 0x1F, 0xFF, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x0F, 0xFF, 0x00,
  0x01, 0xFC, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x07,
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF,
  0xC0, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0xFF,
  0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xE0, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF,
  0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xC0, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x0F, 0x80,
  0x00, 0x00, 0x1F, 0xFF, 0x80, 0x3F, 0xC0, 0x00, 0x00, 0x7F, 0xFF, 0x00,
  0x7F, 0xFC, 0x00, 0x07, 0xFF, 0xFE, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFC, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xF8, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80,
  0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF,
  0xFC, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x01, 0xFF,
  0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x07, 0xFF,
  0xF0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x3F,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x0F,
  0xFF, 0xFE, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x01,
  0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00,
  0x7F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0x00, 0x00, 0x00,
  0x1F, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xE0, 0x00, 0x00,
  0x03, 0xFF, 0xDF, 0xF8, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFE, 0x00, 0x00,
  0x00, 0xFF, 0xFB, 0xFF, 0x80, 0x00, 0x00, 0x7F, 0xFC, 0xFF, 0xC0, 0x00,
  0x00, 0x3F, 0xFE, 0x3F, 0xF0, 0x00, 0x00, 0x0F, 0xFF, 0x0F, 0xFC, 0x00,
  0x00, 0x07, 0xFF, 0x87, 0xFF, 0x00, 0x00, 0x03, 0xFF, 0xC1, 0xFF, 0xC0,
  0x00, 0x01, 0xFF, 0xF0, 0x7F, 0xE0, 0x00, 0x00, 0xFF, 0xF8, 0x1F, 0xF8,
  0x00, 0x00, 0x7F, 0xFC, 0x0F, 0xFE, 0x00, 0x00, 0x1F, 0xFE, 0x03, 0xFF,
  0x80, 0x00, 0x0F, 0xFF, 0x00, 0xFF, 0xC0, 0x00, 0x07, 0xFF, 0x80, 0x3F,
  0xF0, 0x00, 0x03, 0xFF, 0xC0, 0x0F, 0xFC, 0x00, 0x01, 0xFF, 0xF0, 0x07,
  0xFF, 0x00, 0x00, 0x7F, 0xF8, 0x01, 0xFF, 0xC0, 0x00, 0x3F, 0xFC, 0x00,
  0x7F, 0xE0, 0x00, 0x1F, 0xFE, 0x00, 0x1F, 0xF8, 0x00, 0x0F, 0xFF, 0x00,
  0x0F, 0xFE, 0x00, 0x07, 0xFF, 0x80, 0x03, 0xFF, 0x80, 0x03, 0xFF, 0xC0,
  0x00, 0xFF, 0xE0, 0x00, 0xFF, 0xF0, 0x00, 0x3F, 0xF0, 0x00, 0x7F, 0xF8,
  0x00, 0x0F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x07, 0xFF, 0x00, 0x1F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xF8, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x7F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x87,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
  0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
  0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF,
  0x80, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x3F, 0xFF,
  0xFF, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x1F, 0xFF,
  0xFF, 0xFC, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x03, 0xFF,
  0xFF, 0xFF, 0xC0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x3F,
  0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x03,
  0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xC0, 0x00, 0x00,
  0x0F, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xF8,
  0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x01, 0xFF, 0xFF, 0xFF,
  0xFF, 0xF8, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x0F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00,
  0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF,
  0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x03, 0xFF, 0xFF, 0xFF,
  0xFF, 0xF0, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x0F, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0xFF, 0xC0, 0x00,
  0x00, 0x03, 0xFF, 0xBF, 0xFF, 0xF0, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF,
  0xF8, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x1F, 0xFF,
  0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8,
  0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x07, 0xFF, 0xFF, 0xFF,
  0xFF, 0xF0, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x1F, 0xFF,
  0xE0, 0x1F, 0xFF, 0xE0, 0x00, 0x3F, 0xFC, 0x00, 0x0F, 0xFF, 0xC0, 0x00,
  0x7F, 0xC0, 0x00, 0x0F, 0xFF, 0xC0, 0x00, 0x3C, 0x00, 0x00, 0x0F, 0xFF,
  0x80, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF,
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF,
  0x80, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x01, 0xE0, 0x00,
  0x00, 0x01, 0xFF, 0xE0, 0x0F, 0xF0, 0x00, 0x00, 0x0F, 0xFF, 0xC0, 0x3F,
  0xF8, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x7F, 0xFF, 0x00, 0x0F, 0xFF, 0xFC,
  0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x03, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xE0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x0F, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFE, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x1F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
  0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF,
  0x80, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x07, 0xFF,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x01,
  0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xC0, 0x00,
  0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFE,
  0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x3F, 0xFF, 0xFF,
  0xFF, 0xF0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x03, 0xFF,
  0xFF, 0xC0, 0x3F, 0x00, 0x00, 0x0F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xC0, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x3F,
  0xF8, 0x1F, 0xFF, 0xC0, 0x00, 0x00, 0xFF, 0xE0, 0xFF, 0xFF, 0xC0, 0x00,
  0x01, 0xFF, 0xC7, 0xFF, 0xFF, 0xE0, 0x00, 0x07, 0xFF, 0x1F, 0xFF, 0xFF,
  0xE0, 0x00, 0x0F, 0xFE, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x1F, 0xFB, 0xFF,
  0xFF, 0xFF, 0xE0, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80,
  0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x0F, 0xFF, 0xFF, 0xC0, 0xFF,
  0xFF, 0x00, 0x1F, 0xFF, 0xFC, 0x00, 0x7F, 0xFE, 0x00, 0x3F, 0xFF, 0xE0,
  0x00, 0x3F, 0xFE, 0x00, 0x7F, 0xFF, 0x80, 0x00, 0x7F, 0xFC, 0x01, 0xFF,
  0xFC, 0x00, 0x00, 0x7F, 0xF8, 0x03, 0xFF, 0xF0, 0x00, 0x00, 0x7F, 0xF0,
  0x07, 0xFF, 0xC0, 0x00, 0x00, 0xFF, 0xE0, 0x0F, 0xFF, 0x00, 0x00, 0x01,
  0xFF, 0xC0, 0x1F, 0xFE, 0x00, 0x00, 0x03, 0xFF, 0x80, 0x3F, 0xF8, 0x00,
  0x00, 0x07, 0xFF, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0xFF,
  0xE0, 0x00, 0x00, 0x3F, 0xF8, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x7F, 0xF0,
  0x03, 0xFF, 0x80, 0x00, 0x00, 0xFF, 0xE0, 0x07, 0xFF, 0x00, 0x00, 0x03,
  0xFF, 0x80, 0x0F, 0xFF, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x1F, 0xFE, 0x00,
  0x00, 0x1F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x7F,
  0xFC, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x7F, 0xFC, 0x00, 0x07, 0xFF, 0xC0,
  0x00, 0xFF, 0xFC, 0x00, 0x1F, 0xFF, 0x00, 0x01, 0xFF, 0xFE, 0x01, 0xFF,
  0xFE, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x03, 0xFF, 0xFF,
  0xFF, 0xFF, 0xE0, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x07,
  0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
  0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF,
  0x80, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x07, 0xFF,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xC7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE3, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF1, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x7F, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFE, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0x1F, 0xFC, 0x00, 0x00, 0x03, 0xFF, 0x8F, 0xFC, 0x00, 0x00,
  0x03, 0xFF, 0x87, 0xFE, 0x00, 0x00, 0x01, 0xFF, 0xC1, 0xFE, 0x00, 0x00,
  0x01, 0xFF, 0xC0, 0x7C, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x03, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00,
  0x00, 0x00, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x03, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xC0, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xF0, 0x00,
  0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFE,
  0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
  0xFF, 0x80, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x03, 0xFF, 0xFF,
  0xFF, 0xFF, 0xC0, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x0F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xE0, 0x01, 0xFF, 0xFE, 0x01, 0xFF, 0xFE, 0x00, 0x3F,
  0xFF, 0x80, 0x03, 0xFF, 0xF0, 0x03, 0xFF, 0xE0, 0x00, 0x1F, 0xFF, 0x00,
  0x7F, 0xFC, 0x00, 0x00, 0xFF, 0xF0, 0x07, 0xFF, 0x00, 0x00, 0x0F, 0xFF,
  0x00, 0xFF, 0xF0, 0x00, 0x00, 0x7F, 0xF0, 0x0F, 0xFE, 0x00, 0x00, 0x07,
  0xFF, 0x01, 0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xF0, 0x1F, 0xFC, 0x00, 0x00,
  0x07, 0xFF, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x7F, 0xE0, 0x1F, 0xFC, 0x00,
  0x00, 0x0F, 0xFE, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0xFF, 0xE0, 0x1F, 0xFC,
  0x00, 0x00, 0x1F, 0xFC, 0x01, 0xFF, 0xE0, 0x00, 0x01, 0xFF, 0xC0, 0x1F,
  0xFE, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0xFF, 0xF0, 0x00, 0x0F, 0xFF, 0x00,
  0x0F, 0xFF, 0x80, 0x03, 0xFF, 0xE0, 0x00, 0x7F, 0xFF, 0x00, 0xFF, 0xFC,
  0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x3F, 0xFF, 0xFF, 0xFF,
  0xF0, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x0F, 0xFF, 0xFF,
  0xFF, 0x80, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x07, 0xFF,
  0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x3F,
  0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80,
  0x03, 0xFF, 0xF8, 0x07, 0xFF, 0xF8, 0x00, 0x7F, 0xFC, 0x00, 0x0F, 0xFF,
  0xC0, 0x0F, 0xFF, 0x80, 0x00, 0x7F, 0xFC, 0x01, 0xFF, 0xE0, 0x00, 0x03,
  0xFF, 0xE0, 0x1F, 0xFC, 0x00, 0x00, 0x1F, 0xFE, 0x03, 0xFF, 0x80, 0x00,
  0x00, 0xFF, 0xE0, 0x3F, 0xF0, 0x00, 0x00, 0x0F, 0xFE, 0x07, 0xFF, 0x00,
  0x00, 0x00, 0xFF, 0xE0, 0x7F, 0xE0, 0x00, 0x00, 0x0F, 0xFE, 0x07, 0xFE,
  0x00, 0x00, 0x00, 0xFF, 0xE0, 0xFF, 0xE0, 0x00, 0x00, 0x0F, 0xFE, 0x0F,
  0xFE, 0x00, 0x00, 0x01, 0xFF, 0xC0, 0xFF, 0xE0, 0x00, 0x00, 0x1F, 0xFC,
  0x0F, 0xFE, 0x00, 0x00, 0x03, 0xFF, 0xC0, 0xFF, 0xF0, 0x00, 0x00, 0x7F,
  0xF8, 0x0F, 0xFF, 0x00, 0x00, 0x0F, 0xFF, 0x80, 0xFF, 0xF8, 0x00, 0x01,
  0xFF, 0xF0, 0x0F, 0xFF, 0xE0, 0x00, 0x7F, 0xFF, 0x00, 0xFF, 0xFF, 0x80,
  0x3F, 0xFF, 0xE0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x7F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xC0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x3F,
  0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00,
  0x0F, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0x00,
  0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0,
  0x00, 0x00, 0x00, 0x3F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x80, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xC0, 0x00,
  0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF,
  0x80, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x03, 0xFF, 0xFF,
  0xFF, 0xFC, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0xFF,
  0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00,
  0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFE, 0x01, 0xFF, 0xFE,
  0x00, 0x07, 0xFF, 0xE0, 0x01, 0xFF, 0xF8, 0x00, 0x1F, 0xFE, 0x00, 0x03,
  0xFF, 0xE0, 0x00, 0xFF, 0xF0, 0x00, 0x07, 0xFF, 0x80, 0x03, 0xFF, 0x80,
  0x00, 0x0F, 0xFF, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x3F, 0xFC, 0x00, 0x7F,
  0xF0, 0x00, 0x00, 0xFF, 0xF0, 0x01, 0xFF, 0xC0, 0x00, 0x01, 0xFF, 0xC0,
  0x0F, 0xFE, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x1F,
  0xFC, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xF0, 0x07, 0xFF, 0x00, 0x00,
  0x01, 0xFF, 0xC0, 0x1F, 0xFC, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x7F, 0xF0,
  0x00, 0x00, 0x3F, 0xFC, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0xFF, 0xF0, 0x07,
  0xFF, 0x00, 0x00, 0x07, 0xFF, 0xC0, 0x1F, 0xFC, 0x00, 0x00, 0x3F, 0xFF,
  0x00, 0x7F, 0xF8, 0x00, 0x01, 0xFF, 0xFC, 0x01, 0xFF, 0xE0, 0x00, 0x1F,
  0xFF, 0xE0, 0x07, 0xFF, 0xC0, 0x00, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0x80,
  0x0F, 0xFF, 0xFE, 0x00, 0x3F, 0xFF, 0x81, 0xFF, 0xFF, 0xF8, 0x00, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
  0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xF0, 0x00, 0x3F, 0xFF, 0xFF, 0xFD, 0xFF, 0x80, 0x00, 0x7F, 0xFF, 0xFF,
  0xEF, 0xFE, 0x00, 0x00, 0xFF, 0xFF, 0xFE, 0x3F, 0xF8, 0x00, 0x01, 0xFF,
  0xFF, 0xF1, 0xFF, 0xC0, 0x00, 0x03, 0xFF, 0xFF, 0x07, 0xFF, 0x00, 0x00,
  0x03, 0xFF, 0xF0, 0x3F, 0xFC, 0x00, 0x00, 0x01, 0xFE, 0x00, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x01, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x00, 0x7F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0xFF, 0x00, 0x00, 0x1E, 0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x01, 0xFE,
  0x03, 0xFF, 0xFF, 0xC0, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00,
  0x7F, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
  0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF,
  0x80, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x01, 0xFF, 0xFF,
  0xFF, 0xC0, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x0F,
  0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00,
  0x3F, 0xF0, 0x00, 0xFF, 0xF0, 0x03, 0xFF, 0xF0, 0x0F, 0xFF, 0xE0, 0x1F,
  0xFF, 0xC0, 0x7F, 0xFF, 0x80, 0xFF, 0xFF, 0x01, 0xFF, 0xFC, 0x03, 0xFF,
  0xF8, 0x07, 0xFF, 0xE0, 0x07, 0xFF, 0x80, 0x07, 0xFE, 0x00, 0x07, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0,
  0x00, 0x7F, 0xE0, 0x01, 0xFF, 0xE0, 0x07, 0xFF, 0xE0, 0x1F, 0xFF, 0xC0,
  0x3F, 0xFF, 0x80, 0xFF, 0xFF, 0x01, 0xFF, 0xFE, 0x03, 0xFF, 0xF8, 0x07,
  0xFF, 0xF0, 0x0F, 0xFF, 0xC0, 0x0F, 0xFF, 0x00, 0x0F, 0xFC, 0x00, 0x0F,
  0xE0, 0x00 };

const GFXglyph FreeMonoBoldOblique54pt7bGlyphs[] PROGMEM = {
  {     0,  50,  70,  64,   14,  -67 },   // 0x30 '0'
  {   438,  46,  68,  64,   10,  -67 },   // 0x31 '1'
  {   829,  58,  68,  64,    6,  -67 },   // 0x32 '2'
  {  1322,  56,  70,  64,    9,  -67 },   // 0x33 '3'
  {  1812,  50,  66,  64,   11,  -65 },   // 0x34 '4'
  {  2225,  55,  68,  64,    9,  -65 },   // 0x35 '5'
  {  2693,  55,  70,  64,   16,  -67 },   // 0x36 '6'
  {  3175,  49,  66,  64,   20,  -65 },   // 0x37 '7'
  {  3580,  52,  70,  64,   13,  -67 },   // 0x38 '8'
  {  4035,  54,  70,  64,   12,  -67 },   // 0x39 '9'
  {  4508,  23,  48,  64,   25,  -45 } }; // 0x3A ':'

const GFXfont FreeMonoBoldOblique54pt7b PROGMEM = {
  (uint8_t  *)FreeMonoBoldOblique54pt7bBitmaps,
  (GFXglyph *)FreeMonoBoldOblique54pt7bGlyphs,
  0x30, 0x3A, 106 };

// Approx. 4730 bytes

#endif // FreeMonoBoldOblique54pt7b_H
