#ifndef FreeSansBold54pt7b_H
#define FreeSansBold54pt7b_H

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

const uint8_t FreeSansBold54pt7bBitmaps[] PROGMEM = {
  0x00, 0x00, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0x00,
  0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
  0xF0, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x03, 0xFF, 0xFF,
  0xFF, 0xFC, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x0F, 0xFF,
  0xFF, 0xFF, 0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x3F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
  0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x07, 0xFF, 0xFE, 0x07, 0xFF, 0xFE,
  0x00, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xF0, 0x0F, 0xFF, 0xF0, 0x00, 0xFF,
  0xFF, 0x01, 0xFF, 0xFE, 0x00, 0x07, 0xFF, 0xF8, 0x1F, 0xFF, 0xC0, 0x00,
  0x7F, 0xFF, 0x81, 0xFF, 0xFC, 0x00, 0x03, 0xFF, 0xF8, 0x3F, 0xFF, 0x80,
  0x00, 0x3F, 0xFF, 0xC3, 0xFF, 0xF8, 0x00, 0x01, 0xFF, 0xFC, 0x3F, 0xFF,
  0x80, 0x00, 0x1F, 0xFF, 0xC3, 0xFF, 0xF0, 0x00, 0x01, 0xFF, 0xFC, 0x7F,
  0xFF, 0x00, 0x00, 0x0F, 0xFF, 0xE7, 0xFF, 0xF0, 0x00, 0x00, 0xFF, 0xFE,
  0x7F, 0xFF, 0x00, 0x00, 0x0F, 0xFF, 0xE7, 0xFF, 0xF0, 0x00, 0x00, 0xFF,
  0xFE, 0x7F, 0xFF, 0x00, 0x00, 0x0F, 0xFF, 0xE7, 0xFF, 0xE0, 0x00, 0x00,
  0xFF, 0xFE, 0x7F, 0xFE, 0x00, 0x00, 0x0F, 0xFF, 0xEF, 0xFF, 0xE0, 0x00,
  0x00, 0x7F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xE0,
  0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF,
  0xE0, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x07, 0xFF, 0xFF,
  0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x07, 0xFF,
  0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x07,
  0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFE, 0x00, 0x00,
  0x07, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFE, 0x00,
  0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFE,
  0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xFF, 0xFF,
  0xFE, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xFF,
  0xFF, 0xFE, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x7F,
  0xFF, 0x7F, 0xFE, 0x00, 0x00, 0x0F, 0xFF, 0xE7, 0xFF, 0xF0, 0x00, 0x00,
  0xFF, 0xFE, 0x7F, 0xFF, 0x00, 0x00, 0x0F, 0xFF, 0xE7, 0xFF, 0xF0, 0x00,
  0x00, 0xFF, 0xFE, 0x7F, 0xFF, 0x00, 0x00, 0x0F, 0xFF, 0xE7, 0xFF, 0xF0,
  0x00, 0x00, 0xFF, 0xFE, 0x7F, 0xFF, 0x00, 0x00, 0x1F, 0xFF, 0xE3, 0xFF,
  0xF8, 0x00, 0x01, 0xFF, 0xFC, 0x3F, 0xFF, 0x80, 0x00, 0x1F, 0xFF, 0xC3,
  0xFF, 0xF8, 0x00, 0x01, 0xFF, 0xFC, 0x3F, 0xFF, 0xC0, 0x00, 0x3F, 0xFF,
  0xC1, 0xFF, 0xFC, 0x00, 0x03, 0xFF, 0xF8, 0x1F, 0xFF, 0xE0, 0x00, 0x7F,
  0xFF, 0x81, 0xFF, 0xFE, 0x00, 0x0F, 0xFF, 0xF0, 0x0F, 0xFF, 0xF8, 0x01,
  0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xE0, 0x7F, 0xFF, 0xF0, 0x07, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFE, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x03, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x01,
  0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
  0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFC,
  0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
  0xF0, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x0F, 0xFF,
  0xFE, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xFF, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x00,
  0x07, 0xFF, 0x00, 0x00, 0x0F, 0xFF, 0x00, 0x00, 0x1F, 0xFF, 0x00, 0x00,
  0x1F, 0xFF, 0x00, 0x00, 0x3F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x01,
  0xFF, 0xFF, 0x00, 0x07, 0xFF, 0xFF, 0x00, 0x1F, 0xFF, 0xFF, 0x01, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00,
  0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00,
  0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00,
  0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00,
  0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00,
  0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00,
  0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00,
  0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00,
  0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00,
  0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00,
  0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00,
  0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00,
  0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00,
  0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00,
  0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00,
  0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00,
  0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00,
  0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00,
  0x1F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFE, 0x00, 0x00, 0x00,
  0x1F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0x80, 0x00,
  0x07, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
  0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xC0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x01, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xC0, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0x81, 0xFF, 0xFF, 0xC0, 0x7F, 0xFF, 0xF8, 0x7F, 0xFF, 0xE0,
  0x03, 0xFF, 0xFF, 0x0F, 0xFF, 0xF8, 0x00, 0x3F, 0xFF, 0xF3, 0xFF, 0xFE,
  0x00, 0x03, 0xFF, 0xFE, 0x7F, 0xFF, 0x80, 0x00, 0x3F, 0xFF, 0xCF, 0xFF,
  0xE0, 0x00, 0x03, 0xFF, 0xFD, 0xFF, 0xFC, 0x00, 0x00, 0x7F, 0xFF, 0xFF,
  0xFF, 0x80, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0xFF, 0xFF,
  0xFF, 0xFC, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x03, 0xFF,
  0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x0F,
  0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00,
  0x3F, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x07, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xF0, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xC0,
  0x00, 0x00, 0x00, 0x1F, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFC,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x7F, 0xFF,
  0xE0, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x0F, 0xFF,
  0xFE, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0xFF,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x1F,
  0xFF, 0xFE, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00,
  0x3F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFE, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x7F, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x00,
  0x00, 0x07, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x7F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xF8, 0x00,
  0x00, 0x00, 0x03, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x80,
  0x00, 0x00, 0x00, 0x1F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x1F,
  0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x3F,
  0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x07,
  0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
  0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0x03, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xF0, 0x7F, 0xFF, 0xC0, 0x07,
  0xFF, 0xFE, 0x1F, 0xFF, 0xF0, 0x00, 0x3F, 0xFF, 0xC3, 0xFF, 0xFC, 0x00,
  0x07, 0xFF, 0xF8, 0x7F, 0xFF, 0x80, 0x00, 0x7F, 0xFF, 0x8F, 0xFF, 0xE0,
  0x00, 0x0F, 0xFF, 0xF3, 0xFF, 0xFC, 0x00, 0x00, 0xFF, 0xFE, 0x7F, 0xFF,
  0x80, 0x00, 0x1F, 0xFF, 0xCF, 0xFF, 0xE0, 0x00, 0x03, 0xFF, 0xF9, 0xFF,
  0xFC, 0x00, 0x00, 0x7F, 0xFF, 0x3F, 0xFF, 0x80, 0x00, 0x0F, 0xFF, 0xE7,
  0xFF, 0xF0, 0x00, 0x01, 0xFF, 0xFC, 0xFF, 0xFE, 0x00, 0x00, 0x3F, 0xFF,
  0x80, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x01, 0xFF,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x0F,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xC0, 0x00, 0x00, 0x00,
  0x3F, 0xFF, 0xF0, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00,
  0x3F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0x00, 0x00,
  0x00, 0x03, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0x80,
  0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF,
  0x80, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x0F, 0xFF,
  0xFF, 0x80, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xE0, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x03, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x07, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF,
  0xFF, 0xF0, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x0F, 0xFF,
  0xFF, 0xFF, 0xC0, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x7F,
  0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x0F, 0xFF, 0xF7, 0xFF, 0xF0, 0x00, 0x01,
  0xFF, 0xFC, 0xFF, 0xFE, 0x00, 0x00, 0x7F, 0xFF, 0x9F, 0xFF, 0xE0, 0x00,
  0x1F, 0xFF, 0xF3, 0xFF, 0xFE, 0x00, 0x07, 0xFF, 0xFE, 0x3F, 0xFF, 0xE0,
  0x01, 0xFF, 0xFF, 0x87, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xF0, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x01,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
  0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFC,
  0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF,
  0x80, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x03, 0xFF, 0xFF,
  0xC0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFE, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xF8, 0x00, 0x00,
  0x00, 0x0F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xE0, 0x00,
  0x00, 0x00, 0x7F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0x80,
  0x00, 0x00, 0x03, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFE,
  0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x07, 0xFF, 0xFF,
  0xF8, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x3F, 0xFF,
  0xFF, 0xE0, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x01, 0xFF,
  0xBF, 0xFF, 0x80, 0x00, 0x00, 0x7F, 0xF7, 0xFF, 0xF0, 0x00, 0x00, 0x0F,
  0xFC, 0xFF, 0xFE, 0x00, 0x00, 0x03, 0xFF, 0x1F, 0xFF, 0xC0, 0x00, 0x00,
  0xFF, 0xE3, 0xFF, 0xF8, 0x00, 0x00, 0x1F, 0xF8, 0x7F, 0xFF, 0x00, 0x00,
  0x07, 0xFE, 0x0F, 0xFF, 0xE0, 0x00, 0x00, 0xFF, 0xC1, 0xFF, 0xFC, 0x00,
  0x00, 0x3F, 0xF0, 0x3F, 0xFF, 0x80, 0x00, 0x0F, 0xFE, 0x07, 0xFF, 0xF0,
  0x00, 0x01, 0xFF, 0x80, 0xFF, 0xFE, 0x00, 0x00, 0x7F, 0xE0, 0x1F, 0xFF,
  0xC0, 0x00, 0x0F, 0xFC, 0x03, 0xFF, 0xF8, 0x00, 0x03, 0xFF, 0x00, 0x7F,
  0xFF, 0x00, 0x00, 0x7F, 0xE0, 0x0F, 0xFF, 0xE0, 0x00, 0x1F, 0xF8, 0x01,
  0xFF, 0xFC, 0x00, 0x07, 0xFE, 0x00, 0x3F, 0xFF, 0x80, 0x00, 0xFF, 0xC0,
  0x07, 0xFF, 0xF0, 0x00, 0x3F, 0xF0, 0x00, 0xFF, 0xFE, 0x00, 0x07, 0xFC,
  0x00, 0x1F, 0xFF, 0xC0, 0x01, 0xFF, 0x80, 0x03, 0xFF, 0xF8, 0x00, 0x7F,
  0xE0, 0x00, 0x7F, 0xFF, 0x00, 0x0F, 0xFC, 0x00, 0x0F, 0xFF, 0xE0, 0x03,
  0xFF, 0x00, 0x01, 0xFF, 0xFC, 0x00, 0x7F, 0xC0, 0x00, 0x3F, 0xFF, 0x80,
  0x1F, 0xF8, 0x00, 0x07, 0xFF, 0xF0, 0x03, 0xFE, 0x00, 0x00, 0xFF, 0xFE,
  0x00, 0xFF, 0xC0, 0x00, 0x1F, 0xFF, 0xC0, 0x3F, 0xF0, 0x00, 0x03, 0xFF,
  0xF8, 0x07, 0xFC, 0x00, 0x00, 0x7F, 0xFF, 0x01, 0xFF, 0x80, 0x00, 0x0F,
  0xFF, 0xE0, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x1F, 0xFF,
  0xC0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x7F,
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0x80, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xE0, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0x80,
  0x00, 0x00, 0x00, 0x07, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xC0, 0x00, 0x00, 0x7F, 0xFF, 0xFF,
  0xFF, 0xFF, 0x80, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0x80, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8,
  0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xF8, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF,
  0xFF, 0xF8, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x3F, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x03, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x00, 0xFF,
  0xC0, 0x00, 0x00, 0xFF, 0xF0, 0x7F, 0xFF, 0x80, 0x00, 0x0F, 0xFE, 0x3F,
  0xFF, 0xFE, 0x00, 0x00, 0xFF, 0xE7, 0xFF, 0xFF, 0xF8, 0x00, 0x0F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x0F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
  0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xE0, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xF8, 0x1F, 0xFF, 0xF8, 0x07, 0xFF, 0xFF, 0x81, 0xFF, 0xFE, 0x00,
  0x1F, 0xFF, 0xFC, 0x3F, 0xFF, 0x80, 0x00, 0xFF, 0xFF, 0xC3, 0xFF, 0xF0,
  0x00, 0x03, 0xFF, 0xFC, 0x3F, 0xFF, 0x00, 0x00, 0x3F, 0xFF, 0xE0, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0xFF, 0xFF,
  0xFF, 0xFE, 0x00, 0x00, 0x0F, 0xFF, 0xEF, 0xFF, 0xE0, 0x00, 0x00, 0xFF,
  0xFE, 0xFF, 0xFE, 0x00, 0x00, 0x1F, 0xFF, 0xEF, 0xFF, 0xF0, 0x00, 0x03,
  0xFF, 0xFE, 0x7F, 0xFF, 0x00, 0x00, 0x3F, 0xFF, 0xC7, 0xFF, 0xF8, 0x00,
  0x07, 0xFF, 0xFC, 0x7F, 0xFF, 0xC0, 0x01, 0xFF, 0xFF, 0x83, 0xFF, 0xFF,
  0x80, 0x7F, 0xFF, 0xF8, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8,
  0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF,
  0xE0, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x7F, 0xFF, 0xFF,
  0xFF, 0x80, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x0F, 0xFF,
  0xFF, 0xF8, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x00, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xC0,
  0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x7F, 0xFF, 0xFF,
  0xFF, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0xFF, 0xFF,
  0xFF, 0xFF, 0xF0, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00,
  0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x00, 0x3F, 0xFF, 0xF0, 0x1F, 0xFF, 0xFC, 0x03, 0xFF, 0xFE, 0x00, 0x3F,
  0xFF, 0xE0, 0x1F, 0xFF, 0xC0, 0x00, 0xFF, 0xFF, 0x81, 0xFF, 0xFC, 0x00,
  0x03, 0xFF, 0xFC, 0x0F, 0xFF, 0xE0, 0x00, 0x0F, 0xFF, 0xE0, 0xFF, 0xFE,
  0x00, 0x00, 0x7F, 0xFF, 0x07, 0xFF, 0xF0, 0x00, 0x01, 0xFF, 0xFC, 0x3F,
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xC0,
  0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF,
  0xF0, 0x07, 0xFF, 0x00, 0x00, 0x3F, 0xFF, 0x81, 0xFF, 0xFF, 0x00, 0x01,
  0xFF, 0xF8, 0x3F, 0xFF, 0xFE, 0x00, 0x1F, 0xFF, 0xC3, 0xFF, 0xFF, 0xFC,
  0x00, 0xFF, 0xFE, 0x7F, 0xFF, 0xFF, 0xF0, 0x07, 0xFF, 0xF7, 0xFF, 0xFF,
  0xFF, 0xE0, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x81, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFE, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x7F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F,
  0xFF, 0xFF, 0xC0, 0x7F, 0xFF, 0xF8, 0xFF, 0xFF, 0xF8, 0x00, 0xFF, 0xFF,
  0xE7, 0xFF, 0xFF, 0x80, 0x01, 0xFF, 0xFF, 0x3F, 0xFF, 0xF0, 0x00, 0x07,
  0xFF, 0xFD, 0xFF, 0xFF, 0x80, 0x00, 0x1F, 0xFF, 0xEF, 0xFF, 0xF8, 0x00,
  0x00, 0xFF, 0xFF, 0x7F, 0xFF, 0x80, 0x00, 0x03, 0xFF, 0xFB, 0xFF, 0xFC,
  0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
  0xFE, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x1F, 0xFF,
  0xFF, 0xFF, 0x80, 0x00, 0x00, 0xFF, 0xFE, 0xFF, 0xFC, 0x00, 0x00, 0x07,
  0xFF, 0xF7, 0xFF, 0xE0, 0x00, 0x00, 0x3F, 0xFF, 0xBF, 0xFF, 0x00, 0x00,
  0x01, 0xFF, 0xFD, 0xFF, 0xF8, 0x00, 0x00, 0x0F, 0xFF, 0xEF, 0xFF, 0xC0,
  0x00, 0x00, 0x7F, 0xFF, 0x7F, 0xFE, 0x00, 0x00, 0x03, 0xFF, 0xF9, 0xFF,
  0xF8, 0x00, 0x00, 0x3F, 0xFF, 0xCF, 0xFF, 0xC0, 0x00, 0x01, 0xFF, 0xFC,
  0x7F, 0xFE, 0x00, 0x00, 0x1F, 0xFF, 0xE3, 0xFF, 0xF8, 0x00, 0x00, 0xFF,
  0xFF, 0x0F, 0xFF, 0xE0, 0x00, 0x0F, 0xFF, 0xF8, 0x7F, 0xFF, 0x00, 0x00,
  0xFF, 0xFF, 0x83, 0xFF, 0xFC, 0x00, 0x0F, 0xFF, 0xFC, 0x0F, 0xFF, 0xF8,
  0x00, 0xFF, 0xFF, 0xC0, 0x7F, 0xFF, 0xF0, 0x1F, 0xFF, 0xFE, 0x01, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
  0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x1F, 0xFF, 0xFF, 0xFF,
  0xFF, 0x80, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x01, 0xFF, 0xFF,
  0xFF, 0xFF, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x0F,
  0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x3F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00,
  0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xC0, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0x80,
  0x00, 0x00, 0x00, 0x03, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF,
  0xC0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0xFF, 0x80, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xFF, 0x80, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00,
  0x1F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xE0, 0x00,
  0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
  0xC0, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x3F, 0xFF, 0xFF,
  0xFF, 0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x0F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x01,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x07, 0xFF, 0xFE, 0x01, 0xFF, 0xFF,
  0x80, 0x3F, 0xFF, 0xE0, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFE, 0x00, 0x01,
  0xFF, 0xFC, 0x03, 0xFF, 0xF0, 0x00, 0x03, 0xFF, 0xF0, 0x1F, 0xFF, 0xC0,
  0x00, 0x07, 0xFF, 0xE0, 0x7F, 0xFE, 0x00, 0x00, 0x1F, 0xFF, 0x81, 0xFF,
  0xF8, 0x00, 0x00, 0x3F, 0xFE, 0x07, 0xFF, 0xC0, 0x00, 0x00, 0xFF, 0xF8,
  0x1F, 0xFF, 0x00, 0x00, 0x03, 0xFF, 0xE0, 0x7F, 0xFC, 0x00, 0x00, 0x0F,
  0xFF, 0x81, 0xFF, 0xF0, 0x00, 0x00, 0x3F, 0xFE, 0x07, 0xFF, 0xC0, 0x00,
  0x00, 0xFF, 0xF8, 0x1F, 0xFF, 0x00, 0x00, 0x03, 0xFF, 0xE0, 0x3F, 0xFE,
  0x00, 0x00, 0x0F, 0xFF, 0x00, 0xFF, 0xF8, 0x00, 0x00, 0x7F, 0xFC, 0x03,
  0xFF, 0xF0, 0x00, 0x01, 0xFF, 0xF0, 0x07, 0xFF, 0xC0, 0x00, 0x0F, 0xFF,
  0x80, 0x1F, 0xFF, 0xC0, 0x00, 0x7F, 0xFE, 0x00, 0x3F, 0xFF, 0x80, 0x03,
  0xFF, 0xF0, 0x00, 0x7F, 0xFF, 0x80, 0x7F, 0xFF, 0x80, 0x00, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFC, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x03,
  0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xF8, 0x00,
  0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
  0xC0, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x7F, 0xFF, 0xFF,
  0xFF, 0xFF, 0x80, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x1F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0xFF, 0xFF, 0xE0, 0x1F, 0xFF, 0xFC, 0x07,
  0xFF, 0xFE, 0x00, 0x1F, 0xFF, 0xF8, 0x1F, 0xFF, 0xE0, 0x00, 0x1F, 0xFF,
  0xE0, 0xFF, 0xFF, 0x00, 0x00, 0x3F, 0xFF, 0xC3, 0xFF, 0xF8, 0x00, 0x00,
  0x7F, 0xFF, 0x1F, 0xFF, 0xE0, 0x00, 0x01, 0xFF, 0xFE, 0x7F, 0xFF, 0x00,
  0x00, 0x03, 0xFF, 0xF9, 0xFF, 0xFC, 0x00, 0x00, 0x0F, 0xFF, 0xEF, 0xFF,
  0xE0, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x7F, 0xFF,
  0xFF, 0xFE, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x07,
  0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0x00,
  0x00, 0x7F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xF8,
  0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x3F, 0xFF, 0xFF,
  0xFF, 0xC0, 0x00, 0x00, 0xFF, 0xFF, 0x7F, 0xFF, 0x80, 0x00, 0x03, 0xFF,
  0xF9, 0xFF, 0xFE, 0x00, 0x00, 0x1F, 0xFF, 0xE7, 0xFF, 0xFC, 0x00, 0x00,
  0xFF, 0xFF, 0x9F, 0xFF, 0xF8, 0x00, 0x07, 0xFF, 0xFE, 0x3F, 0xFF, 0xF8,
  0x00, 0x7F, 0xFF, 0xF0, 0xFF, 0xFF, 0xF8, 0x07, 0xFF, 0xFF, 0xC1, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8,
  0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFE, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x7F, 0xFF, 0xFF,
  0xFF, 0xFF, 0x80, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x01, 0xFF,
  0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
  0x03, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xFF, 0xFE, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
  0x07, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
  0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF,
  0xF0, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x07, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFC, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x1F, 0xFF, 0xFC,
  0x07, 0xFF, 0xFE, 0x01, 0xFF, 0xFF, 0x00, 0x1F, 0xFF, 0xE0, 0x3F, 0xFF,
  0xE0, 0x00, 0x7F, 0xFF, 0x03, 0xFF, 0xFC, 0x00, 0x07, 0xFF, 0xF0, 0x3F,
  0xFF, 0x80, 0x00, 0x3F, 0xFF, 0x87, 0xFF, 0xF8, 0x00, 0x01, 0xFF, 0xF8,
  0x7F, 0xFF, 0x00, 0x00, 0x1F, 0xFF, 0x87, 0xFF, 0xF0, 0x00, 0x00, 0xFF,
  0xFC, 0x7F, 0xFF, 0x00, 0x00, 0x0F, 0xFF, 0xCF, 0xFF, 0xE0, 0x00, 0x00,
  0xFF, 0xFC, 0xFF, 0xFE, 0x00, 0x00, 0x07, 0xFF, 0xCF, 0xFF, 0xE0, 0x00,
  0x00, 0x7F, 0xFE, 0xFF, 0xFE, 0x00, 0x00, 0x07, 0xFF, 0xEF, 0xFF, 0xE0,
  0x00, 0x00, 0x7F, 0xFE, 0xFF, 0xFE, 0x00, 0x00, 0x07, 0xFF, 0xEF, 0xFF,
  0xE0, 0x00, 0x00, 0x7F, 0xFE, 0xFF, 0xFE, 0x00, 0x00, 0x07, 0xFF, 0xEF,
  0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x07, 0xFF,
  0xFF, 0xFF, 0xE0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x0F,
  0xFF, 0xF7, 0xFF, 0xF0, 0x00, 0x00, 0xFF, 0xFF, 0x7F, 0xFF, 0x00, 0x00,
  0x1F, 0xFF, 0xF7, 0xFF, 0xF8, 0x00, 0x01, 0xFF, 0xFF, 0x7F, 0xFF, 0x80,
  0x00, 0x3F, 0xFF, 0xF3, 0xFF, 0xFC, 0x00, 0x03, 0xFF, 0xFF, 0x3F, 0xFF,
  0xE0, 0x00, 0x7F, 0xFF, 0xF3, 0xFF, 0xFF, 0x00, 0x1F, 0xFF, 0xFF, 0x1F,
  0xFF, 0xFE, 0x07, 0xFF, 0xFF, 0xF1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x3F, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x0F, 0xFF, 0xFF,
  0xFF, 0x7F, 0xFF, 0x00, 0x7F, 0xFF, 0xFF, 0xE7, 0xFF, 0xE0, 0x01, 0xFF,
  0xFF, 0xFC, 0x7F, 0xFE, 0x00, 0x0F, 0xFF, 0xFF, 0x87, 0xFF, 0xE0, 0x00,
  0x1F, 0xFF, 0xE0, 0x7F, 0xFE, 0x00, 0x00, 0x3F, 0xF0, 0x07, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF8, 0x7F, 0xFF, 0x00,
  0x00, 0x1F, 0xFF, 0x87, 0xFF, 0xF0, 0x00, 0x03, 0xFF, 0xF8, 0x7F, 0xFF,
  0x80, 0x00, 0x3F, 0xFF, 0x07, 0xFF, 0xF8, 0x00, 0x07, 0xFF, 0xF0, 0x3F,
  0xFF, 0xC0, 0x00, 0xFF, 0xFF, 0x03, 0xFF, 0xFE, 0x00, 0x1F, 0xFF, 0xE0,
  0x3F, 0xFF, 0xFC, 0x07, 0xFF, 0xFE, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xC0, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0x80, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x7F, 0xFF, 0xFF,
  0xFF, 0xFF, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x1F, 0xFF,
  0xFF, 0xFF, 0xFC, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x07,
  0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFC, 0x00, 0x00,
  0x00, 0x7F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xC0, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF };

const GFXglyph FreeSansBold54pt7bGlyphs[] PROGMEM = {
  {     0,  52,  79,  59,    3,  -76 },   // 0x30 '0'
  {   514,  32,  75,  59,    8,  -74 },   // 0x31 '1'
  {   814,  51,  77,  59,    4,  -76 },   // 0x32 '2'
  {  1305,  51,  79,  59,    4,  -76 },   // 0x33 '3'
  {  1809,  51,  75,  59,    4,  -74 },   // 0x34 '4'
  {  2288,  52,  77,  59,    3,  -74 },   // 0x35 '5'
  {  2789,  53,  79,  59,    3,  -76 },   // 0x36 '6'
  {  3313,  52,  75,  59,    3,  -74 },   // 0x37 '7'
  {  3801,  54,  79,  59,    2,  -76 },   // 0x38 '8'
  {  4335,  52,  80,  59,    3,  -76 },   // 0x39 '9'
  {  4855,  16,  55,  27,    5,  -54 } }; // 0x3A ':'

const GFXfont FreeSansBold54pt7b PROGMEM = {
  (uint8_t  *)FreeSansBold54pt7bBitmaps,
  (GFXglyph *)FreeSansBold54pt7bGlyphs,
  0x30, 0x3A, 127 };

// Approx. 5049 bytes

#endif // FreeSansBold54pt7b_H
