#ifndef FreeSansBold48pt7b_H
#define FreeSansBold48pt7b_H

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

const uint8_t FreeSansBold48pt7bBitmaps[] PROGMEM = {
  0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xF0, 0x00, 0x00,
  0x03, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xC0, 0x00, 0x07,
  0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFC, 0x00, 0x07, 0xFF,
  0xFF, 0xFF, 0xF0, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xC0, 0x07, 0xFF, 0xFF,
  0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xF8, 0x03, 0xFF, 0xFF, 0xFF,
  0xFF, 0xE0, 0x1F, 0xFF, 0xE0, 0xFF, 0xFF, 0x01, 0xFF, 0xFC, 0x01, 0xFF,
  0xFC, 0x0F, 0xFF, 0xC0, 0x07, 0xFF, 0xE0, 0x7F, 0xFC, 0x00, 0x3F, 0xFF,
  0x07, 0xFF, 0xE0, 0x00, 0xFF, 0xFC, 0x3F, 0xFE, 0x00, 0x03, 0xFF, 0xE1,
  0xFF, 0xF0, 0x00, 0x1F, 0xFF, 0x0F, 0xFF, 0x00, 0x00, 0xFF, 0xF8, 0xFF,
  0xF8, 0x00, 0x03, 0xFF, 0xE7, 0xFF, 0xC0, 0x00, 0x1F, 0xFF, 0x3F, 0xFE,
  0x00, 0x00, 0xFF, 0xF9, 0xFF, 0xF0, 0x00, 0x07, 0xFF, 0xCF, 0xFF, 0x80,
  0x00, 0x3F, 0xFE, 0x7F, 0xF8, 0x00, 0x01, 0xFF, 0xF7, 0xFF, 0xC0, 0x00,
  0x07, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xF0, 0x00, 0x01,
  0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x0F, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x7F,
  0xFF, 0xFF, 0xE0, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x1F, 0xFF,
  0xFF, 0xF8, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x07, 0xFF, 0xFF,
  0xFE, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xF0, 0x00, 0x01, 0xFF, 0xFF, 0xFF,
  0x80, 0x00, 0x0F, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xE0,
  0x00, 0x03, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xF8, 0x00,
  0x00, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x07, 0xFF, 0xFF, 0xFE, 0x00, 0x00,
  0x3F, 0xFF, 0xFF, 0xF0, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x0F,
  0xFF, 0xBF, 0xFC, 0x00, 0x00, 0x7F, 0xF9, 0xFF, 0xF0, 0x00, 0x07, 0xFF,
  0xCF, 0xFF, 0x80, 0x00, 0x3F, 0xFE, 0x7F, 0xFC, 0x00, 0x01, 0xFF, 0xF3,
  0xFF, 0xE0, 0x00, 0x0F, 0xFF, 0x9F, 0xFF, 0x00, 0x00, 0x7F, 0xFC, 0x7F,
  0xF8, 0x00, 0x07, 0xFF, 0xC3, 0xFF, 0xE0, 0x00, 0x3F, 0xFE, 0x1F, 0xFF,
  0x00, 0x01, 0xFF, 0xF0, 0xFF, 0xFC, 0x00, 0x1F, 0xFF, 0x83, 0xFF, 0xE0,
  0x00, 0xFF, 0xF8, 0x1F, 0xFF, 0x80, 0x0F, 0xFF, 0xC0, 0xFF, 0xFE, 0x00,
  0xFF, 0xFE, 0x03, 0xFF, 0xF8, 0x0F, 0xFF, 0xE0, 0x1F, 0xFF, 0xFF, 0xFF,
  0xFF, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xF0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF,
  0x80, 0x0F, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0x80,
  0x00, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0x80, 0x00,
  0x0F, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0x00, 0x00, 0x00,
  0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xF8, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x1F,
  0xF0, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x1F, 0xFC, 0x00, 0x01, 0xFF, 0xE0,
  0x00, 0x1F, 0xFF, 0x00, 0x01, 0xFF, 0xF8, 0x00, 0x3F, 0xFF, 0xC0, 0x07,
  0xFF, 0xFE, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0x80, 0x00, 0x7F, 0xFC, 0x00, 0x03, 0xFF, 0xE0, 0x00, 0x1F,
  0xFF, 0x00, 0x00, 0xFF, 0xF8, 0x00, 0x07, 0xFF, 0xC0, 0x00, 0x3F, 0xFE,
  0x00, 0x01, 0xFF, 0xF0, 0x00, 0x0F, 0xFF, 0x80, 0x00, 0x7F, 0xFC, 0x00,
  0x03, 0xFF, 0xE0, 0x00, 0x1F, 0xFF, 0x00, 0x00, 0xFF, 0xF8, 0x00, 0x07,
  0xFF, 0xC0, 0x00, 0x3F, 0xFE, 0x00, 0x01, 0xFF, 0xF0, 0x00, 0x0F, 0xFF,
  0x80, 0x00, 0x7F, 0xFC, 0x00, 0x03, 0xFF, 0xE0, 0x00, 0x1F, 0xFF, 0x00,
  0x00, 0xFF, 0xF8, 0x00, 0x07, 0xFF, 0xC0, 0x00, 0x3F, 0xFE, 0x00, 0x01,
  0xFF, 0xF0, 0x00, 0x0F, 0xFF, 0x80, 0x00, 0x7F, 0xFC, 0x00, 0x03, 0xFF,
  0xE0, 0x00, 0x1F, 0xFF, 0x00, 0x00, 0xFF, 0xF8, 0x00, 0x07, 0xFF, 0xC0,
  0x00, 0x3F, 0xFE, 0x00, 0x01, 0xFF, 0xF0, 0x00, 0x0F, 0xFF, 0x80, 0x00,
  0x7F, 0xFC, 0x00, 0x03, 0xFF, 0xE0, 0x00, 0x1F, 0xFF, 0x00, 0x00, 0xFF,
  0xF8, 0x00, 0x07, 0xFF, 0xC0, 0x00, 0x3F, 0xFE, 0x00, 0x01, 0xFF, 0xF0,
  0x00, 0x0F, 0xFF, 0x80, 0x00, 0x7F, 0xFC, 0x00, 0x03, 0xFF, 0xE0, 0x00,
  0x1F, 0xFF, 0x00, 0x00, 0xFF, 0xF8, 0x00, 0x07, 0xFF, 0xC0, 0x00, 0x3F,
  0xFE, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xF8, 0x00,
  0x00, 0x07, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xE0, 0x00,
  0x0F, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x0F,
  0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x07, 0xFF,
  0xFF, 0xFF, 0xFF, 0xC0, 0x7F, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xFF,
  0xFF, 0xFF, 0xF8, 0x3F, 0xFF, 0xE0, 0x7F, 0xFF, 0xC1, 0xFF, 0xFC, 0x00,
  0xFF, 0xFF, 0x1F, 0xFF, 0xC0, 0x03, 0xFF, 0xF8, 0xFF, 0xFC, 0x00, 0x0F,
  0xFF, 0xC7, 0xFF, 0xC0, 0x00, 0x3F, 0xFF, 0x7F, 0xFE, 0x00, 0x01, 0xFF,
  0xFB, 0xFF, 0xF0, 0x00, 0x0F, 0xFF, 0xDF, 0xFF, 0x00, 0x00, 0x3F, 0xFE,
  0xFF, 0xF8, 0x00, 0x01, 0xFF, 0xF7, 0xFF, 0xC0, 0x00, 0x0F, 0xFF, 0xBF,
  0xFE, 0x00, 0x00, 0x7F, 0xFD, 0xFF, 0xF0, 0x00, 0x03, 0xFF, 0xEF, 0xFF,
  0x80, 0x00, 0x1F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF8, 0x00, 0x00,
  0x00, 0x07, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x00,
  0x03, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0xF8, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0x80, 0x00, 0x00, 0x01, 0xFF,
  0xFC, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xC0, 0x00, 0x00, 0x01, 0xFF, 0xFE,
  0x00, 0x00, 0x00, 0x1F, 0xFF, 0xE0, 0x00, 0x00, 0x01, 0xFF, 0xFE, 0x00,
  0x00, 0x00, 0x1F, 0xFF, 0xE0, 0x00, 0x00, 0x01, 0xFF, 0xFE, 0x00, 0x00,
  0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x03, 0xFF, 0xFE, 0x00, 0x00, 0x00,
  0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x07, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x7F,
  0xFF, 0xC0, 0x00, 0x00, 0x07, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0xFF, 0xFF,
  0x80, 0x00, 0x00, 0x0F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00,
  0x00, 0x00, 0x0F, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
  0x00, 0x0F, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
  0x0F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x07,
  0xFF, 0xF0, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x00, 0x03, 0xFF,
  0xF8, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
  0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xE0, 0x00, 0x00,
  0x3F, 0xFF, 0xFF, 0x80, 0x00, 0x0F, 0xFF, 0xFF, 0xFE, 0x00, 0x01, 0xFF,
  0xFF, 0xFF, 0xF0, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0x80, 0x0F, 0xFF, 0xFF,
  0xFF, 0xFC, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x1F, 0xFF, 0xFF, 0xFF,
  0xFE, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF,
  0x83, 0xFF, 0xFC, 0x0F, 0xFF, 0xF8, 0x7F, 0xFF, 0x00, 0x3F, 0xFF, 0x87,
  0xFF, 0xE0, 0x01, 0xFF, 0xF8, 0x7F, 0xFC, 0x00, 0x0F, 0xFF, 0xCF, 0xFF,
  0xC0, 0x00, 0xFF, 0xFC, 0xFF, 0xFC, 0x00, 0x07, 0xFF, 0xCF, 0xFF, 0x80,
  0x00, 0x7F, 0xFC, 0xFF, 0xF8, 0x00, 0x07, 0xFF, 0xCF, 0xFF, 0x80, 0x00,
  0x7F, 0xFC, 0xFF, 0xF8, 0x00, 0x07, 0xFF, 0xCF, 0xFF, 0x80, 0x00, 0x7F,
  0xFC, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xF8,
  0x00, 0x00, 0x00, 0x0F, 0xFF, 0x80, 0x00, 0x00, 0x01, 0xFF, 0xF0, 0x00,
  0x00, 0x00, 0x3F, 0xFF, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xE0, 0x00, 0x00,
  0x03, 0xFF, 0xFC, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x7F,
  0xFF, 0xE0, 0x00, 0x00, 0x07, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x7F, 0xFF,
  0xC0, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xF8,
  0x00, 0x00, 0x07, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0x00,
  0x00, 0x07, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00,
  0x00, 0x03, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xE0, 0x00, 0x00, 0x00,
  0x3F, 0xFE, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x1F,
  0xFF, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x1F, 0xFF,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x1F, 0xFF, 0xFF,
  0xF8, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x1F, 0xFF, 0xFF, 0xF8,
  0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x3F, 0xFF, 0x7F, 0xFC, 0x00,
  0x03, 0xFF, 0xE7, 0xFF, 0xE0, 0x00, 0x7F, 0xFE, 0x7F, 0xFE, 0x00, 0x0F,
  0xFF, 0xE7, 0xFF, 0xF0, 0x01, 0xFF, 0xFC, 0x3F, 0xFF, 0xE0, 0x7F, 0xFF,
  0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80,
  0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x7F,
  0xFF, 0xFF, 0xFF, 0xE0, 0x03, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x1F, 0xFF,
  0xFF, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xE0, 0x00, 0x03, 0xFF, 0xFF,
  0xF8, 0x00, 0x00, 0x0F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xF8,
  0x00, 0x00, 0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x80,
  0x00, 0x00, 0x07, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xF8, 0x00,
  0x00, 0x00, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0x80, 0x00,
  0x00, 0x1F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xF8, 0x00, 0x00,
  0x03, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0x80, 0x00, 0x00,
  0x7F, 0xFF, 0xFE, 0x00, 0x00, 0x03, 0xFE, 0xFF, 0xF8, 0x00, 0x00, 0x1F,
  0xFB, 0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xCF, 0xFF, 0x80, 0x00, 0x03, 0xFF,
  0x3F, 0xFE, 0x00, 0x00, 0x0F, 0xF8, 0xFF, 0xF8, 0x00, 0x00, 0x7F, 0xC3,
  0xFF, 0xE0, 0x00, 0x03, 0xFF, 0x0F, 0xFF, 0x80, 0x00, 0x0F, 0xF8, 0x3F,
  0xFE, 0x00, 0x00, 0x7F, 0xE0, 0xFF, 0xF8, 0x00, 0x01, 0xFF, 0x03, 0xFF,
  0xE0, 0x00, 0x0F, 0xF8, 0x0F, 0xFF, 0x80, 0x00, 0x3F, 0xE0, 0x3F, 0xFE,
  0x00, 0x01, 0xFF, 0x00, 0xFF, 0xF8, 0x00, 0x0F, 0xF8, 0x03, 0xFF, 0xE0,
  0x00, 0x3F, 0xE0, 0x0F, 0xFF, 0x80, 0x01, 0xFF, 0x00, 0x3F, 0xFE, 0x00,
  0x07, 0xFC, 0x00, 0xFF, 0xF8, 0x00, 0x3F, 0xE0, 0x03, 0xFF, 0xE0, 0x01,
  0xFF, 0x00, 0x0F, 0xFF, 0x80, 0x07, 0xFC, 0x00, 0x3F, 0xFE, 0x00, 0x3F,
  0xE0, 0x00, 0xFF, 0xF8, 0x00, 0xFF, 0x80, 0x03, 0xFF, 0xE0, 0x07, 0xFC,
  0x00, 0x0F, 0xFF, 0x80, 0x1F, 0xE0, 0x00, 0x3F, 0xFE, 0x00, 0xFF, 0x80,
  0x00, 0xFF, 0xF8, 0x07, 0xFC, 0x00, 0x03, 0xFF, 0xE0, 0x1F, 0xF0, 0x00,
  0x0F, 0xFF, 0x80, 0xFF, 0x80, 0x00, 0x3F, 0xFE, 0x03, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x00, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF8, 0x00,
  0x00, 0x00, 0x03, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF8, 0x00, 0x00,
  0x00, 0x03, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF8, 0x00, 0x00, 0x00,
  0x03, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x80, 0x00, 0x00, 0x00,
  0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x03,
  0xFF, 0xE0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x03, 0xFF, 0xFF,
  0xFF, 0xFF, 0x80, 0x0F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x3F, 0xFF, 0xFF,
  0xFF, 0xF8, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x07, 0xFF, 0xFF, 0xFF,
  0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x7F, 0xFF, 0xFF, 0xFF,
  0xF8, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF,
  0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8,
  0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x03,
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x7F,
  0xE0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x07, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x0F, 0xF0, 0x00, 0x00, 0x7F, 0xE1,
  0xFF, 0xF8, 0x00, 0x03, 0xFF, 0x1F, 0xFF, 0xF8, 0x00, 0x0F, 0xFC, 0xFF,
  0xFF, 0xF8, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0xFF, 0xFF, 0xFF,
  0xFF, 0xE0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x0F, 0xFF, 0xFF, 0xFF,
  0xFF, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFC, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x1F, 0xFF, 0xE0, 0x3F, 0xFF,
  0xE0, 0x7F, 0xFC, 0x00, 0x3F, 0xFF, 0xC1, 0xFF, 0xE0, 0x00, 0x7F, 0xFF,
  0x0F, 0xFF, 0x00, 0x00, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF8,
  0x00, 0x00, 0x00, 0x07, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x80,
  0x00, 0x00, 0x00, 0x3F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFC, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xC0, 0x00,
  0x00, 0x00, 0x1F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFC, 0x00, 0x00,
  0x00, 0x01, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x1F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFC, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x0F, 0xFF, 0xBF, 0xFE, 0x00, 0x00,
  0x3F, 0xFE, 0xFF, 0xF8, 0x00, 0x01, 0xFF, 0xFB, 0xFF, 0xF0, 0x00, 0x07,
  0xFF, 0xE7, 0xFF, 0xC0, 0x00, 0x3F, 0xFF, 0x1F, 0xFF, 0x80, 0x01, 0xFF,
  0xFC, 0x7F, 0xFF, 0x00, 0x0F, 0xFF, 0xF0, 0xFF, 0xFF, 0x00, 0xFF, 0xFF,
  0x83, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
  0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x3F, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
  0x7F, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x01,
  0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x03,
  0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00,
  0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x03,
  0xFF, 0xFE, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0x00, 0x00, 0x03, 0xFF,
  0xFF, 0xFE, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFE, 0x00, 0x01, 0xFF, 0xFF,
  0xFF, 0xFC, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x7F, 0xFF, 0xFF,
  0xFF, 0xE0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x0F, 0xFF, 0xFF, 0xFF,
  0xFF, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFE, 0x01, 0xFF, 0xFE, 0x03, 0xFF,
  0xFC, 0x0F, 0xFF, 0xC0, 0x03, 0xFF, 0xF0, 0x3F, 0xFE, 0x00, 0x07, 0xFF,
  0xC1, 0xFF, 0xF0, 0x00, 0x1F, 0xFF, 0x87, 0xFF, 0xC0, 0x00, 0x3F, 0xFE,
  0x1F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x03,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x7F,
  0xFC, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x07, 0xFF,
  0xC0, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFC,
  0x03, 0xFE, 0x00, 0x01, 0xFF, 0xE0, 0x7F, 0xFF, 0x00, 0x0F, 0xFF, 0x87,
  0xFF, 0xFF, 0x00, 0x3F, 0xFE, 0x3F, 0xFF, 0xFF, 0x00, 0xFF, 0xFB, 0xFF,
  0xFF, 0xFE, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF,
  0xFF, 0xF8, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0xFF, 0xFF, 0x03, 0xFF,
  0xFF, 0x3F, 0xFF, 0xF0, 0x03, 0xFF, 0xFC, 0xFF, 0xFF, 0x80, 0x03, 0xFF,
  0xF3, 0xFF, 0xFC, 0x00, 0x0F, 0xFF, 0xEF, 0xFF, 0xE0, 0x00, 0x1F, 0xFF,
  0xBF, 0xFF, 0x80, 0x00, 0x3F, 0xFE, 0xFF, 0xFC, 0x00, 0x00, 0xFF, 0xFF,
  0xFF, 0xF0, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x07, 0xFF, 0xFF,
  0xFE, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x7F, 0xFF, 0xFF,
  0xE0, 0x00, 0x01, 0xFF, 0xF7, 0xFF, 0x80, 0x00, 0x07, 0xFF, 0xDF, 0xFE,
  0x00, 0x00, 0x1F, 0xFF, 0x7F, 0xF8, 0x00, 0x00, 0x7F, 0xFD, 0xFF, 0xE0,
  0x00, 0x01, 0xFF, 0xF7, 0xFF, 0x80, 0x00, 0x07, 0xFF, 0xCF, 0xFF, 0x00,
  0x00, 0x3F, 0xFE, 0x3F, 0xFC, 0x00, 0x00, 0xFF, 0xF8, 0xFF, 0xF0, 0x00,
  0x07, 0xFF, 0xE3, 0xFF, 0xE0, 0x00, 0x1F, 0xFF, 0x87, 0xFF, 0xC0, 0x00,
  0xFF, 0xFC, 0x1F, 0xFF, 0x80, 0x07, 0xFF, 0xF0, 0x7F, 0xFF, 0x00, 0x3F,
  0xFF, 0xC0, 0xFF, 0xFF, 0x03, 0xFF, 0xFE, 0x03, 0xFF, 0xFF, 0xFF, 0xFF,
  0xF8, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x0F, 0xFF, 0xFF, 0xFF, 0xFE,
  0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xC0,
  0x00, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xE0, 0x00,
  0x01, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xF0, 0x00, 0x00,
  0x03, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00, 0x00,
  0x03, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x80, 0x00, 0x00, 0x00,
  0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x0F,
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0xF8, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFF,
  0x80, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x07, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xC0, 0x00,
  0x00, 0x00, 0x0F, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00,
  0x00, 0x00, 0x7F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00,
  0x00, 0x01, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xC0, 0x00, 0x00, 0x00,
  0x0F, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0xF0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x07,
  0xFF, 0x80, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0xFE, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0xF8, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x03, 0xFF,
  0xE0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x1F, 0xFF,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0xF8, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0xFF,
  0xFF, 0x80, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x03, 0xFF, 0xFF,
  0xFF, 0xC0, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x7F, 0xFF, 0xFF,
  0xFF, 0xC0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x03, 0xFF, 0xFF, 0xFF,
  0xFF, 0xC0, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x1F, 0xFF, 0xFF, 0xFF,
  0xFF, 0x80, 0x7F, 0xFF, 0x80, 0xFF, 0xFF, 0x80, 0xFF, 0xFC, 0x00, 0x3F,
  0xFF, 0x01, 0xFF, 0xF0, 0x00, 0x3F, 0xFE, 0x07, 0xFF, 0xC0, 0x00, 0x3F,
  0xFE, 0x0F, 0xFF, 0x00, 0x00, 0x3F, 0xFC, 0x1F, 0xFC, 0x00, 0x00, 0x7F,
  0xF8, 0x3F, 0xF8, 0x00, 0x00, 0xFF, 0xF0, 0x7F, 0xF0, 0x00, 0x01, 0xFF,
  0xE0, 0xFF, 0xE0, 0x00, 0x01, 0xFF, 0xC1, 0xFF, 0xC0, 0x00, 0x07, 0xFF,
  0x83, 0xFF, 0x80, 0x00, 0x0F, 0xFF, 0x07, 0xFF, 0x80, 0x00, 0x1F, 0xFE,
  0x07, 0xFF, 0x00, 0x00, 0x3F, 0xF8, 0x0F, 0xFF, 0x00, 0x00, 0xFF, 0xF0,
  0x0F, 0xFF, 0x00, 0x03, 0xFF, 0xC0, 0x1F, 0xFF, 0x00, 0x0F, 0xFF, 0x80,
  0x1F, 0xFF, 0x80, 0xFF, 0xFE, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xF8, 0x00,
  0x1F, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
  0x0F, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFC, 0x00, 0x01,
  0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x3F,
  0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x01, 0xFF,
  0xFE, 0x03, 0xFF, 0xFC, 0x07, 0xFF, 0xF0, 0x01, 0xFF, 0xFC, 0x1F, 0xFF,
  0xC0, 0x00, 0xFF, 0xFC, 0x3F, 0xFE, 0x00, 0x00, 0xFF, 0xF8, 0xFF, 0xFC,
  0x00, 0x01, 0xFF, 0xF9, 0xFF, 0xF0, 0x00, 0x01, 0xFF, 0xF3, 0xFF, 0xE0,
  0x00, 0x03, 0xFF, 0xEF, 0xFF, 0x80, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0x00,
  0x00, 0x07, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFC, 0x00,
  0x00, 0x1F, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xF0, 0x00,
  0x00, 0x7F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xC0, 0x00,
  0x01, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0x80, 0x00,
  0x0F, 0xFF, 0xDF, 0xFF, 0x80, 0x00, 0x3F, 0xFF, 0x3F, 0xFF, 0x00, 0x00,
  0x7F, 0xFE, 0x7F, 0xFF, 0x00, 0x01, 0xFF, 0xFC, 0x7F, 0xFF, 0x80, 0x0F,
  0xFF, 0xF0, 0xFF, 0xFF, 0xC0, 0x7F, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0x81, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFC, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x01, 0xFF, 0xFF, 0xFF, 0xFF,
  0xC0, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFC,
  0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0x00,
  0x00, 0x00, 0x3F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xF0, 0x00,
  0x00, 0x03, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0x80, 0x00,
  0x07, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x0F,
  0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x07, 0xFF,
  0xFF, 0xFF, 0xFE, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xF8, 0x07, 0xFF, 0xFF,
  0xFF, 0xFF, 0xC0, 0x3F, 0xFF, 0xC0, 0xFF, 0xFF, 0x03, 0xFF, 0xF8, 0x01,
  0xFF, 0xF8, 0x1F, 0xFF, 0x80, 0x07, 0xFF, 0xE1, 0xFF, 0xF8, 0x00, 0x1F,
  0xFF, 0x0F, 0xFF, 0xC0, 0x00, 0x7F, 0xF8, 0x7F, 0xFC, 0x00, 0x01, 0xFF,
  0xE3, 0xFF, 0xE0, 0x00, 0x0F, 0xFF, 0x3F, 0xFF, 0x00, 0x00, 0x7F, 0xF9,
  0xFF, 0xF0, 0x00, 0x01, 0xFF, 0xEF, 0xFF, 0x80, 0x00, 0x0F, 0xFF, 0x7F,
  0xFC, 0x00, 0x00, 0x7F, 0xFB, 0xFF, 0xE0, 0x00, 0x03, 0xFF, 0xDF, 0xFF,
  0x00, 0x00, 0x1F, 0xFE, 0xFF, 0xF8, 0x00, 0x00, 0xFF, 0xF7, 0xFF, 0xC0,
  0x00, 0x07, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xF0, 0x00,
  0x01, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x1F, 0xFF, 0xFF, 0xFE, 0x00, 0x00,
  0xFF, 0xFD, 0xFF, 0xF0, 0x00, 0x07, 0xFF, 0xEF, 0xFF, 0xC0, 0x00, 0x7F,
  0xFF, 0x7F, 0xFE, 0x00, 0x07, 0xFF, 0xFB, 0xFF, 0xF8, 0x00, 0x3F, 0xFF,
  0xCF, 0xFF, 0xE0, 0x07, 0xFF, 0xFE, 0x7F, 0xFF, 0xC0, 0xFF, 0xFF, 0xF1,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x3F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0xFF,
  0xFF, 0xFF, 0xFF, 0xF8, 0x1F, 0xFF, 0xFF, 0xF7, 0xFF, 0xC0, 0x7F, 0xFF,
  0xFF, 0xBF, 0xFE, 0x00, 0xFF, 0xFF, 0xF9, 0xFF, 0xE0, 0x03, 0xFF, 0xFF,
  0x0F, 0xFF, 0x00, 0x07, 0xFF, 0xF0, 0x7F, 0xF8, 0x00, 0x07, 0xFC, 0x03,
  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0xF0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8,
  0x00, 0x00, 0x00, 0x03, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x3F, 0xFE, 0x3F,
  0xFE, 0x00, 0x01, 0xFF, 0xE1, 0xFF, 0xF0, 0x00, 0x0F, 0xFF, 0x0F, 0xFF,
  0xC0, 0x00, 0xFF, 0xF8, 0x7F, 0xFE, 0x00, 0x0F, 0xFF, 0x81, 0xFF, 0xFC,
  0x00, 0xFF, 0xFC, 0x0F, 0xFF, 0xF8, 0x1F, 0xFF, 0xC0, 0x7F, 0xFF, 0xFF,
  0xFF, 0xFE, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x07, 0xFF, 0xFF, 0xFF,
  0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
  0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0x00,
  0x00, 0x1F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xFF, 0xFE, 0x00, 0x00,
  0x00, 0x7F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFC };

const GFXglyph FreeSansBold48pt7bGlyphs[] PROGMEM = {
  {     0,  45,  70,  52,    3,  -67 },   // 0x30 '0'
  {   394,  29,  67,  52,    6,  -66 },   // 0x31 '1'
  {   637,  45,  68,  52,    3,  -67 },   // 0x32 '2'
  {  1020,  44,  70,  52,    4,  -67 },   // 0x33 '3'
  {  1405,  46,  67,  52,    3,  -66 },   // 0x34 '4'
  {  1791,  46,  69,  52,    2,  -66 },   // 0x35 '5'
  {  2188,  46,  70,  52,    3,  -67 },   // 0x36 '6'
  {  2591,  47,  67,  52,    3,  -66 },   // 0x37 '7'
  {  2985,  47,  70,  52,    2,  -67 },   // 0x38 '8'
  {  3397,  45,  70,  52,    3,  -67 },   // 0x39 '9'
  {  3791,  14,  49,  23,    5,  -48 } }; // 0x3A ':'

const GFXfont FreeSansBold48pt7b PROGMEM = {
  (uint8_t  *)FreeSansBold48pt7bBitmaps,
  (GFXglyph *)FreeSansBold48pt7bGlyphs,
  0x30, 0x3A, 113 };

// Approx. 3961 bytes

#endif // FreeSansBold48pt7b_H
