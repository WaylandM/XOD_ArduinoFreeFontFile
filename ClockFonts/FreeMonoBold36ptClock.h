#ifndef FreeMonoBold36pt7b_H
#define FreeMonoBold36pt7b_H

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

const uint8_t FreeMonoBold36pt7bBitmaps[] PROGMEM = {
  0x00, 0x0F, 0xF0, 0x00, 0x00, 0xFF, 0xF8, 0x00, 0x07, 0xFF, 0xFC, 0x00,
  0x1F, 0xFF, 0xFC, 0x00, 0x7F, 0xFF, 0xFC, 0x01, 0xFF, 0xFF, 0xFC, 0x07,
  0xFF, 0xFF, 0xFC, 0x0F, 0xFC, 0x1F, 0xF8, 0x3F, 0xE0, 0x0F, 0xF8, 0x7F,
  0x80, 0x0F, 0xF1, 0xFE, 0x00, 0x0F, 0xF3, 0xFC, 0x00, 0x1F, 0xE7, 0xF0,
  0x00, 0x1F, 0xCF, 0xE0, 0x00, 0x3F, 0xBF, 0xC0, 0x00, 0x7F, 0xFF, 0x00,
  0x00, 0x7F, 0xFE, 0x00, 0x00, 0xFF, 0xFC, 0x00, 0x01, 0xFF, 0xF8, 0x00,
  0x03, 0xFF, 0xF0, 0x00, 0x07, 0xFF, 0xE0, 0x00, 0x0F, 0xFF, 0xC0, 0x00,
  0x1F, 0xFF, 0x80, 0x00, 0x3F, 0xFF, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00,
  0xFF, 0xFC, 0x00, 0x01, 0xFF, 0xF8, 0x00, 0x03, 0xFF, 0xF0, 0x00, 0x07,
  0xFF, 0xE0, 0x00, 0x0F, 0xFF, 0xC0, 0x00, 0x1F, 0xFF, 0x80, 0x00, 0x3F,
  0xFF, 0x00, 0x00, 0xFF, 0x7F, 0x00, 0x01, 0xFC, 0xFE, 0x00, 0x03, 0xF9,
  0xFE, 0x00, 0x0F, 0xF3, 0xFC, 0x00, 0x1F, 0xE3, 0xFC, 0x00, 0x7F, 0x87,
  0xFC, 0x01, 0xFF, 0x07, 0xFE, 0x0F, 0xFC, 0x0F, 0xFF, 0xFF, 0xF8, 0x0F,
  0xFF, 0xFF, 0xE0, 0x0F, 0xFF, 0xFF, 0x80, 0x0F, 0xFF, 0xFE, 0x00, 0x0F,
  0xFF, 0xF8, 0x00, 0x07, 0xFF, 0xC0, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00,
  0x1F, 0xE0, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x7F,
  0xF8, 0x00, 0x07, 0xFF, 0xE0, 0x00, 0x3F, 0xFF, 0x80, 0x03, 0xFF, 0xFE,
  0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x7F, 0xEF, 0xE0, 0x03, 0xFF, 0x3F, 0x80,
  0x0F, 0xF0, 0xFE, 0x00, 0x1F, 0x83, 0xF8, 0x00, 0x38, 0x0F, 0xE0, 0x00,
  0x00, 0x3F, 0x80, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00,
  0x0F, 0xE0, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x03,
  0xF8, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0xFE,
  0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x3F, 0x80,
  0x00, 0x00, 0xFE, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x0F, 0xE0, 0x00,
  0x00, 0x3F, 0x80, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00,
  0x0F, 0xE0, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x03,
  0xF8, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x3F, 0x80, 0x01, 0xFF, 0xFF,
  0xFF, 0x1F, 0xFF, 0xFF, 0xFE, 0x7F, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF,
  0xF7, 0xFF, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xFE, 0x1F, 0xFF, 0xFF, 0xF0,
  0x00, 0x1F, 0xF0, 0x00, 0x01, 0xFF, 0xFC, 0x00, 0x0F, 0xFF, 0xFE, 0x00,
  0x3F, 0xFF, 0xFE, 0x00, 0xFF, 0xFF, 0xFE, 0x03, 0xFF, 0xFF, 0xFE, 0x0F,
  0xFF, 0xFF, 0xFE, 0x3F, 0xF8, 0x0F, 0xFE, 0x7F, 0xC0, 0x07, 0xFD, 0xFF,
  0x00, 0x07, 0xFB, 0xFC, 0x00, 0x07, 0xFF, 0xF8, 0x00, 0x07, 0xFF, 0xE0,
  0x00, 0x0F, 0xEF, 0xC0, 0x00, 0x1F, 0xCE, 0x00, 0x00, 0x3F, 0x80, 0x00,
  0x00, 0xFF, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00,
  0x1F, 0xF0, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x07,
  0xFE, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x01, 0xFF,
  0x80, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0xFF, 0xE0,
  0x00, 0x03, 0xFF, 0x80, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x7F, 0xF0, 0x00,
  0x01, 0xFF, 0xC0, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00,
  0x7F, 0xF0, 0x00, 0xF1, 0xFF, 0xC0, 0x03, 0xF7, 0xFE, 0x00, 0x07, 0xFF,
  0xF8, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x1F, 0xF0, 0x00, 0x01,
  0xFF, 0xFE, 0x00, 0x07, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xC0, 0x3F,
  0xFF, 0xFF, 0xE0, 0x7F, 0xFF, 0xFF, 0xF0, 0x7F, 0xFF, 0xFF, 0xF0, 0x7F,
  0xE0, 0x1F, 0xF8, 0x7F, 0x80, 0x07, 0xF8, 0x7E, 0x00, 0x03, 0xFC, 0x1C,
  0x00, 0x01, 0xFC, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x01, 0xFC, 0x00,
  0x00, 0x01, 0xFC, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x03, 0xF8, 0x00,
  0x00, 0x07, 0xF8, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x0F, 0xFF, 0xF0, 0x00,
  0x1F, 0xFF, 0xE0, 0x00, 0x3F, 0xFF, 0x80, 0x00, 0x3F, 0xFF, 0x00, 0x00,
  0x3F, 0xFF, 0x80, 0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x0F, 0xFF, 0xF0, 0x00,
  0x00, 0x3F, 0xF8, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x03, 0xFE, 0x00,
  0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0x00,
  0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x7F, 0x00,
  0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x01, 0xFE, 0x7C,
  0x00, 0x03, 0xFE, 0xFF, 0x00, 0x1F, 0xFC, 0xFF, 0xFF, 0xFF, 0xFC, 0xFF,
  0xFF, 0xFF, 0xF8, 0xFF, 0xFF, 0xFF, 0xF0, 0x7F, 0xFF, 0xFF, 0xE0, 0x3F,
  0xFF, 0xFF, 0xC0, 0x0F, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00,
  0x00, 0xFF, 0xC0, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00,
  0x7F, 0xF0, 0x00, 0x03, 0xFF, 0xC0, 0x00, 0x1F, 0xFF, 0x00, 0x00, 0x7F,
  0xFC, 0x00, 0x03, 0xFF, 0xF0, 0x00, 0x0F, 0xFF, 0xC0, 0x00, 0x7F, 0xFF,
  0x00, 0x03, 0xFF, 0xFC, 0x00, 0x0F, 0xF7, 0xF0, 0x00, 0x7F, 0x9F, 0xC0,
  0x01, 0xFE, 0x7F, 0x00, 0x0F, 0xF1, 0xFC, 0x00, 0x7F, 0x87, 0xF0, 0x01,
  0xFE, 0x1F, 0xC0, 0x0F, 0xF0, 0x7F, 0x00, 0x3F, 0xC1, 0xFC, 0x01, 0xFE,
  0x07, 0xF0, 0x07, 0xF0, 0x1F, 0xC0, 0x3F, 0xC0, 0x7F, 0x01, 0xFE, 0x01,
  0xFC, 0x07, 0xF8, 0x07, 0xF0, 0x3F, 0xC0, 0x1F, 0xC0, 0xFE, 0x00, 0x7F,
  0x07, 0xF8, 0x01, 0xFC, 0x3F, 0xFF, 0xFF, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFB, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x01, 0xFC, 0x00, 0x00,
  0x07, 0xF0, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x1F, 0xFF, 0xC0, 0x00, 0xFF,
  0xFF, 0xC0, 0x07, 0xFF, 0xFF, 0x00, 0x1F, 0xFF, 0xFC, 0x00, 0x7F, 0xFF,
  0xF0, 0x00, 0xFF, 0xFF, 0x80, 0x01, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xF0,
  0x07, 0xFF, 0xFF, 0xFE, 0x03, 0xFF, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0xFF,
  0x80, 0xFF, 0xFF, 0xFF, 0xC0, 0x7F, 0xFF, 0xFF, 0xC0, 0x3F, 0xFF, 0xFF,
  0xC0, 0x1F, 0xC0, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x07, 0xF0, 0x00,
  0x00, 0x03, 0xF8, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0xFE, 0x00,
  0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x3F, 0x8F, 0xF0, 0x00, 0x1F, 0xFF,
  0xFF, 0x00, 0x0F, 0xFF, 0xFF, 0xC0, 0x07, 0xFF, 0xFF, 0xF8, 0x03, 0xFF,
  0xFF, 0xFE, 0x01, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xC0, 0x7F,
  0xE0, 0x3F, 0xF0, 0x1F, 0xC0, 0x07, 0xFC, 0x07, 0x00, 0x01, 0xFE, 0x00,
  0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x0F, 0xE0,
  0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x01, 0xFC,
  0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x3F,
  0x80, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x1F, 0xCF, 0x80, 0x00, 0x1F,
  0xE7, 0xE0, 0x00, 0x1F, 0xF7, 0xFE, 0x00, 0x7F, 0xF3, 0xFF, 0xFF, 0xFF,
  0xF9, 0xFF, 0xFF, 0xFF, 0xF8, 0x7F, 0xFF, 0xFF, 0xF8, 0x1F, 0xFF, 0xFF,
  0xF8, 0x07, 0xFF, 0xFF, 0xF0, 0x00, 0x7F, 0xFF, 0xE0, 0x00, 0x07, 0xFF,
  0x80, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x0F, 0xFF, 0xE0, 0x00, 0xFF,
  0xFF, 0xC0, 0x07, 0xFF, 0xFF, 0x00, 0x7F, 0xFF, 0xFC, 0x03, 0xFF, 0xFF,
  0xF0, 0x1F, 0xFF, 0xFF, 0xC0, 0xFF, 0xF8, 0x1E, 0x07, 0xFF, 0x00, 0x00,
  0x3F, 0xF8, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x3F,
  0xE0, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x1F, 0xE0,
  0x00, 0x00, 0x7F, 0x80, 0x00, 0x03, 0xFC, 0x1F, 0xC0, 0x0F, 0xF1, 0xFF,
  0xE0, 0x3F, 0x9F, 0xFF, 0xC0, 0xFE, 0xFF, 0xFF, 0x83, 0xFF, 0xFF, 0xFF,
  0x0F, 0xFF, 0xFF, 0xFE, 0x3F, 0xFF, 0xFF, 0xFC, 0xFF, 0xFC, 0x1F, 0xF3,
  0xFF, 0xC0, 0x3F, 0xEF, 0xFC, 0x00, 0x7F, 0xBF, 0xE0, 0x00, 0xFE, 0xFF,
  0x80, 0x03, 0xFF, 0xFC, 0x00, 0x07, 0xFF, 0xF0, 0x00, 0x1F, 0xFF, 0xC0,
  0x00, 0x7F, 0xFF, 0x00, 0x01, 0xFD, 0xFC, 0x00, 0x07, 0xF7, 0xF8, 0x00,
  0x1F, 0xDF, 0xE0, 0x00, 0xFF, 0x3F, 0xC0, 0x07, 0xF8, 0xFF, 0x80, 0x1F,
  0xE1, 0xFF, 0x81, 0xFF, 0x87, 0xFF, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xE0,
  0x1F, 0xFF, 0xFF, 0x80, 0x3F, 0xFF, 0xFC, 0x00, 0x7F, 0xFF, 0xC0, 0x00,
  0x7F, 0xFE, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
  0x00, 0xFF, 0x7E, 0x00, 0x01, 0xFE, 0xFC, 0x00, 0x03, 0xF8, 0xF0, 0x00,
  0x0F, 0xF0, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
  0xFF, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x0F,
  0xF0, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0xFF,
  0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x0F, 0xF0,
  0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0xFF, 0x00,
  0x00, 0x01, 0xFE, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x0F, 0xF0, 0x00,
  0x00, 0x1F, 0xE0, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0xFF, 0x00, 0x00,
  0x01, 0xFC, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00,
  0x1F, 0xC0, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x01,
  0xFC, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x0F,
  0xC0, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x1F,
  0xF0, 0x00, 0x00, 0xFF, 0xF8, 0x00, 0x07, 0xFF, 0xFC, 0x00, 0x3F, 0xFF,
  0xFE, 0x00, 0xFF, 0xFF, 0xFE, 0x03, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xFF,
  0xFC, 0x1F, 0xF8, 0x0F, 0xFC, 0x3F, 0xC0, 0x07, 0xF8, 0xFF, 0x00, 0x07,
  0xF9, 0xFE, 0x00, 0x0F, 0xF3, 0xF8, 0x00, 0x0F, 0xE7, 0xF0, 0x00, 0x1F,
  0xCF, 0xE0, 0x00, 0x3F, 0x9F, 0xC0, 0x00, 0x7F, 0x3F, 0xC0, 0x01, 0xFE,
  0x3F, 0x80, 0x03, 0xF8, 0x7F, 0x80, 0x0F, 0xF0, 0x7F, 0xC0, 0x7F, 0xC0,
  0x7F, 0xFF, 0xFF, 0x00, 0x7F, 0xFF, 0xFC, 0x00, 0x7F, 0xFF, 0xF0, 0x00,
  0xFF, 0xFF, 0xE0, 0x03, 0xFF, 0xFF, 0xE0, 0x0F, 0xFF, 0xFF, 0xE0, 0x3F,
  0xFF, 0xFF, 0xE0, 0xFF, 0xC0, 0x7F, 0xE3, 0xFE, 0x00, 0x3F, 0xE7, 0xF8,
  0x00, 0x3F, 0xCF, 0xE0, 0x00, 0x3F, 0xBF, 0x80, 0x00, 0x3F, 0xFF, 0x00,
  0x00, 0x7F, 0xFE, 0x00, 0x00, 0xFF, 0xFC, 0x00, 0x01, 0xFF, 0xF8, 0x00,
  0x03, 0xFF, 0xF8, 0x00, 0x0F, 0xFF, 0xF8, 0x00, 0x3F, 0xEF, 0xF8, 0x00,
  0xFF, 0x9F, 0xFC, 0x07, 0xFF, 0x1F, 0xFF, 0xFF, 0xFC, 0x3F, 0xFF, 0xFF,
  0xF8, 0x3F, 0xFF, 0xFF, 0xE0, 0x3F, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFC,
  0x00, 0x0F, 0xFF, 0xE0, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0xE0,
  0x00, 0x07, 0xFF, 0xE0, 0x00, 0x3F, 0xFF, 0xE0, 0x03, 0xFF, 0xFF, 0xC0,
  0x1F, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0xFE, 0x1F,
  0xF8, 0x1F, 0xF8, 0x7F, 0x80, 0x1F, 0xF1, 0xFE, 0x00, 0x3F, 0xCF, 0xF0,
  0x00, 0x7F, 0xBF, 0x80, 0x01, 0xFE, 0xFE, 0x00, 0x03, 0xFB, 0xF8, 0x00,
  0x0F, 0xFF, 0xE0, 0x00, 0x3F, 0xFF, 0x80, 0x00, 0xFF, 0xFE, 0x00, 0x03,
  0xFF, 0xFC, 0x00, 0x1F, 0xFF, 0xF0, 0x00, 0x7F, 0xDF, 0xE0, 0x03, 0xFF,
  0x7F, 0xC0, 0x3F, 0xFC, 0xFF, 0x83, 0xFF, 0xF3, 0xFF, 0xFF, 0xFF, 0xC7,
  0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFC, 0x1F, 0xFF, 0xF7, 0xF0, 0x3F,
  0xFF, 0x1F, 0xC0, 0x7F, 0xF8, 0xFF, 0x00, 0x3F, 0x83, 0xFC, 0x00, 0x00,
  0x1F, 0xE0, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x0F,
  0xF0, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x1F, 0xF0,
  0x00, 0x01, 0xFF, 0xC0, 0x00, 0x0F, 0xFE, 0x07, 0x81, 0xFF, 0xF0, 0x3F,
  0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFC, 0x03, 0xFF, 0xFF, 0xE0, 0x0F, 0xFF,
  0xFE, 0x00, 0x3F, 0xFF, 0xF0, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x3F, 0xC0,
  0x00, 0x00, 0x3F, 0x1F, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xFE,
  0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x7F, 0xBF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xF7, 0xF8, 0xFC };

const GFXglyph FreeMonoBold36pt7bGlyphs[] PROGMEM = {
  {     0,  31,  46,  43,    6,  -44 },   // 0x30 '0'
  {   179,  30,  45,  43,    6,  -44 },   // 0x31 '1'
  {   348,  31,  45,  43,    5,  -44 },   // 0x32 '2'
  {   523,  32,  46,  43,    5,  -44 },   // 0x33 '3'
  {   707,  30,  44,  43,    6,  -43 },   // 0x34 '4'
  {   872,  33,  45,  43,    4,  -43 },   // 0x35 '5'
  {  1058,  30,  46,  43,    8,  -44 },   // 0x36 '6'
  {  1231,  31,  44,  43,    5,  -43 },   // 0x37 '7'
  {  1402,  31,  46,  43,    6,  -44 },   // 0x38 '8'
  {  1581,  30,  46,  43,    8,  -44 },   // 0x39 '9'
  {  1754,  10,  32,  43,   16,  -30 } }; // 0x3A ':'

const GFXfont FreeMonoBold36pt7b PROGMEM = {
  (uint8_t  *)FreeMonoBold36pt7bBitmaps,
  (GFXglyph *)FreeMonoBold36pt7bGlyphs,
  0x30, 0x3A, 71 };

// Approx. 1878 bytes

#endif // FreeMonoBold36pt7b_H
