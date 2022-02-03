#ifndef FreeSerif42pt7b_H
#define FreeSerif42pt7b_H

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

const uint8_t FreeSerif42pt7bBitmaps[] PROGMEM = {
  0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0xFF, 0xF8, 0x00, 0x00, 0x3E, 0x07,
  0xC0, 0x00, 0x07, 0x80, 0x1F, 0x00, 0x00, 0xF0, 0x00, 0xF8, 0x00, 0x1E,
  0x00, 0x0F, 0x80, 0x03, 0xE0, 0x00, 0x7C, 0x00, 0x7C, 0x00, 0x03, 0xE0,
  0x07, 0xC0, 0x00, 0x3E, 0x00, 0xF8, 0x00, 0x03, 0xF0, 0x1F, 0x80, 0x00,
  0x1F, 0x81, 0xF8, 0x00, 0x01, 0xF8, 0x1F, 0x00, 0x00, 0x1F, 0x83, 0xF0,
  0x00, 0x00, 0xFC, 0x3F, 0x00, 0x00, 0x0F, 0xC3, 0xF0, 0x00, 0x00, 0xFC,
  0x7F, 0x00, 0x00, 0x0F, 0xE7, 0xF0, 0x00, 0x00, 0xFE, 0x7E, 0x00, 0x00,
  0x0F, 0xE7, 0xE0, 0x00, 0x00, 0x7E, 0xFE, 0x00, 0x00, 0x07, 0xEF, 0xE0,
  0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x07, 0xFF, 0xE0, 0x00, 0x00, 0x7F,
  0xFE, 0x00, 0x00, 0x07, 0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00,
  0x07, 0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x07, 0xFF, 0xE0,
  0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x07, 0xFF, 0xE0, 0x00, 0x00, 0x7F,
  0xFE, 0x00, 0x00, 0x07, 0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00,
  0x07, 0xF7, 0xE0, 0x00, 0x00, 0x7F, 0x7E, 0x00, 0x00, 0x07, 0xE7, 0xE0,
  0x00, 0x00, 0x7E, 0x7F, 0x00, 0x00, 0x0F, 0xE7, 0xF0, 0x00, 0x00, 0xFE,
  0x3F, 0x00, 0x00, 0x0F, 0xE3, 0xF0, 0x00, 0x00, 0xFC, 0x3F, 0x00, 0x00,
  0x0F, 0xC1, 0xF0, 0x00, 0x00, 0xFC, 0x1F, 0x80, 0x00, 0x1F, 0x81, 0xF8,
  0x00, 0x01, 0xF8, 0x0F, 0x80, 0x00, 0x1F, 0x00, 0xFC, 0x00, 0x03, 0xF0,
  0x07, 0xC0, 0x00, 0x3E, 0x00, 0x3E, 0x00, 0x07, 0xE0, 0x03, 0xE0, 0x00,
  0x7C, 0x00, 0x1F, 0x00, 0x0F, 0x80, 0x00, 0xF8, 0x01, 0xF0, 0x00, 0x03,
  0xE0, 0x7E, 0x00, 0x00, 0x1F, 0xFF, 0x80, 0x00, 0x00, 0x3F, 0xC0, 0x00,
  0x00, 0x06, 0x00, 0x00, 0x78, 0x00, 0x07, 0xE0, 0x00, 0x7F, 0x80, 0x07,
  0xFE, 0x00, 0x7F, 0xF8, 0x07, 0xFF, 0xE0, 0x30, 0x7F, 0x80, 0x00, 0xFE,
  0x00, 0x03, 0xF8, 0x00, 0x0F, 0xE0, 0x00, 0x3F, 0x80, 0x00, 0xFE, 0x00,
  0x03, 0xF8, 0x00, 0x0F, 0xE0, 0x00, 0x3F, 0x80, 0x00, 0xFE, 0x00, 0x03,
  0xF8, 0x00, 0x0F, 0xE0, 0x00, 0x3F, 0x80, 0x00, 0xFE, 0x00, 0x03, 0xF8,
  0x00, 0x0F, 0xE0, 0x00, 0x3F, 0x80, 0x00, 0xFE, 0x00, 0x03, 0xF8, 0x00,
  0x0F, 0xE0, 0x00, 0x3F, 0x80, 0x00, 0xFE, 0x00, 0x03, 0xF8, 0x00, 0x0F,
  0xE0, 0x00, 0x3F, 0x80, 0x00, 0xFE, 0x00, 0x03, 0xF8, 0x00, 0x0F, 0xE0,
  0x00, 0x3F, 0x80, 0x00, 0xFE, 0x00, 0x03, 0xF8, 0x00, 0x0F, 0xE0, 0x00,
  0x3F, 0x80, 0x00, 0xFE, 0x00, 0x03, 0xF8, 0x00, 0x0F, 0xE0, 0x00, 0x3F,
  0x80, 0x00, 0xFE, 0x00, 0x03, 0xF8, 0x00, 0x0F, 0xE0, 0x00, 0x3F, 0x80,
  0x00, 0xFE, 0x00, 0x03, 0xF8, 0x00, 0x0F, 0xE0, 0x00, 0x7F, 0x80, 0x01,
  0xFF, 0x00, 0x1F, 0xFE, 0x07, 0xFF, 0xFF, 0xC0, 0x00, 0x07, 0xF8, 0x00,
  0x00, 0x03, 0xFF, 0xF0, 0x00, 0x00, 0xFF, 0xFF, 0x80, 0x00, 0x1F, 0xFF,
  0xFE, 0x00, 0x03, 0xFF, 0xFF, 0xF0, 0x00, 0x7F, 0xFF, 0xFF, 0x80, 0x0F,
  0xC0, 0x7F, 0xFC, 0x01, 0xE0, 0x01, 0xFF, 0xC0, 0x1C, 0x00, 0x07, 0xFE,
  0x03, 0x80, 0x00, 0x3F, 0xE0, 0x30, 0x00, 0x01, 0xFE, 0x07, 0x00, 0x00,
  0x1F, 0xF0, 0x60, 0x00, 0x00, 0xFF, 0x04, 0x00, 0x00, 0x0F, 0xF0, 0xC0,
  0x00, 0x00, 0x7F, 0x08, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x7F,
  0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00,
  0x07, 0xE0, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00,
  0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0xF8,
  0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00,
  0x3E, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00,
  0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x1E, 0x00,
  0x00, 0x00, 0x01, 0xC0, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x07,
  0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00,
  0x01, 0xC0, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00,
  0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x03, 0x80,
  0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x10, 0x0E, 0x00, 0x00, 0x03, 0x01,
  0xC0, 0x00, 0x00, 0x60, 0x38, 0x00, 0x00, 0x0E, 0x07, 0x00, 0x00, 0x01,
  0xC0, 0xFF, 0xFF, 0xFF, 0xFC, 0x1F, 0xFF, 0xFF, 0xFF, 0xC3, 0xFF, 0xFF,
  0xFF, 0xF8, 0x7F, 0xFF, 0xFF, 0xFF, 0x8F, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF,
  0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x3F, 0xFE, 0x00,
  0x00, 0xFF, 0xFF, 0x80, 0x01, 0xFF, 0xFF, 0xC0, 0x03, 0xFF, 0xFF, 0xE0,
  0x07, 0xE0, 0x7F, 0xE0, 0x0F, 0x00, 0x1F, 0xF0, 0x1E, 0x00, 0x0F, 0xF0,
  0x1C, 0x00, 0x07, 0xF8, 0x38, 0x00, 0x03, 0xF8, 0x30, 0x00, 0x03, 0xF8,
  0x60, 0x00, 0x01, 0xF8, 0x60, 0x00, 0x01, 0xF8, 0x40, 0x00, 0x01, 0xF8,
  0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x01, 0xF0,
  0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x03, 0xC0,
  0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x1C, 0x00,
  0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x01, 0xFF, 0xC0,
  0x00, 0x07, 0xFF, 0xE0, 0x00, 0x1F, 0xFF, 0xF0, 0x00, 0x7F, 0xFF, 0xF8,
  0x00, 0x01, 0xFF, 0xFC, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x07, 0xFE,
  0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0xFF,
  0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x3F,
  0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x3F,
  0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x3E,
  0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x7C,
  0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x01, 0xF0,
  0x7C, 0x00, 0x03, 0xE0, 0xFF, 0x80, 0x07, 0xC0, 0xFF, 0xF0, 0x1F, 0x00,
  0xFF, 0xFF, 0xFE, 0x00, 0x7F, 0xFF, 0xF8, 0x00, 0x3F, 0xFF, 0xE0, 0x00,
  0x0F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x03,
  0xC0, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00,
  0x00, 0x3F, 0x80, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x1F, 0xE0,
  0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x00,
  0xEF, 0xC0, 0x00, 0x00, 0x0E, 0x7E, 0x00, 0x00, 0x00, 0xE3, 0xF0, 0x00,
  0x00, 0x07, 0x1F, 0x80, 0x00, 0x00, 0x70, 0xFC, 0x00, 0x00, 0x07, 0x07,
  0xE0, 0x00, 0x00, 0x38, 0x3F, 0x00, 0x00, 0x03, 0x81, 0xF8, 0x00, 0x00,
  0x38, 0x0F, 0xC0, 0x00, 0x03, 0xC0, 0x7E, 0x00, 0x00, 0x1C, 0x03, 0xF0,
  0x00, 0x01, 0xC0, 0x1F, 0x80, 0x00, 0x1C, 0x00, 0xFC, 0x00, 0x00, 0xE0,
  0x07, 0xE0, 0x00, 0x0E, 0x00, 0x3F, 0x00, 0x00, 0xE0, 0x01, 0xF8, 0x00,
  0x0F, 0x00, 0x0F, 0xC0, 0x00, 0x70, 0x00, 0x7E, 0x00, 0x07, 0x00, 0x03,
  0xF0, 0x00, 0x78, 0x00, 0x1F, 0x80, 0x03, 0x80, 0x00, 0xFC, 0x00, 0x38,
  0x00, 0x07, 0xE0, 0x03, 0x80, 0x00, 0x3F, 0x00, 0x3C, 0x00, 0x01, 0xF8,
  0x01, 0xC0, 0x00, 0x0F, 0xC0, 0x1C, 0x00, 0x00, 0x7E, 0x01, 0xE0, 0x00,
  0x03, 0xF0, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xF8, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00,
  0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0xFC,
  0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
  0x01, 0xF8, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x7E, 0x00,
  0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00,
  0xFC, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x00, 0x00, 0x00, 0x20, 0x00, 0x7F, 0xFF, 0xF8, 0x00, 0x3F, 0xFF, 0xFE,
  0x00, 0x0F, 0xFF, 0xFF, 0x00, 0x07, 0xFF, 0xFF, 0xC0, 0x01, 0xFF, 0xFF,
  0xE0, 0x00, 0xFF, 0xFF, 0xF8, 0x00, 0x38, 0x00, 0x00, 0x00, 0x1E, 0x00,
  0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0xE0,
  0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x0F,
  0xE0, 0x00, 0x00, 0x03, 0xFF, 0x80, 0x00, 0x00, 0xFF, 0xFC, 0x00, 0x00,
  0x7F, 0xFF, 0xC0, 0x00, 0x1F, 0xFF, 0xFC, 0x00, 0x0F, 0xFF, 0xFF, 0xC0,
  0x03, 0xFF, 0xFF, 0xF8, 0x00, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0x0F, 0xFF,
  0xE0, 0x00, 0x00, 0x7F, 0xFC, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00,
  0xFF, 0xE0, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00,
  0x00, 0x3F, 0xC0, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x01, 0xFE, 0x00,
  0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x03, 0xF8,
  0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x07,
  0xE0, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00,
  0x1F, 0x80, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00,
  0x00, 0xFC, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00,
  0x00, 0x07, 0xC0, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0xF8, 0x0F,
  0x80, 0x00, 0x7C, 0x07, 0xF8, 0x00, 0x3E, 0x03, 0xFF, 0x80, 0x1F, 0x00,
  0xFF, 0xF8, 0x1F, 0x80, 0x1F, 0xFF, 0xFF, 0xC0, 0x07, 0xFF, 0xFF, 0xC0,
  0x00, 0x7F, 0xFF, 0x80, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x07, 0x80, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x0F, 0xC0, 0x00,
  0x00, 0x0F, 0xC0, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x03, 0xF8, 0x00,
  0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x1F, 0xC0,
  0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x7F,
  0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00,
  0xFE, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00,
  0x01, 0xFC, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x0F, 0xE0, 0x00,
  0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x7F, 0x81, 0xFE, 0x00, 0x0F, 0xF1,
  0xFF, 0xF8, 0x03, 0xFC, 0xFF, 0xFF, 0x80, 0x7F, 0xBF, 0xFF, 0xFC, 0x0F,
  0xFE, 0x01, 0xFF, 0xC1, 0xFF, 0x00, 0x0F, 0xFC, 0x7F, 0xC0, 0x00, 0x7F,
  0x8F, 0xF0, 0x00, 0x0F, 0xF9, 0xFE, 0x00, 0x00, 0xFF, 0x3F, 0x80, 0x00,
  0x0F, 0xF7, 0xF0, 0x00, 0x01, 0xFE, 0xFE, 0x00, 0x00, 0x1F, 0xDF, 0xC0,
  0x00, 0x03, 0xFF, 0xF8, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x07, 0xFF,
  0xE0, 0x00, 0x00, 0xFF, 0xFC, 0x00, 0x00, 0x1F, 0xFF, 0x80, 0x00, 0x03,
  0xFF, 0xF0, 0x00, 0x00, 0x7F, 0x7E, 0x00, 0x00, 0x0F, 0xEF, 0xC0, 0x00,
  0x01, 0xFD, 0xFC, 0x00, 0x00, 0x3F, 0xBF, 0x80, 0x00, 0x07, 0xE3, 0xF0,
  0x00, 0x00, 0xFC, 0x7E, 0x00, 0x00, 0x1F, 0x8F, 0xE0, 0x00, 0x07, 0xF0,
  0xFC, 0x00, 0x00, 0xFC, 0x0F, 0xC0, 0x00, 0x1F, 0x81, 0xF8, 0x00, 0x03,
  0xE0, 0x1F, 0x80, 0x00, 0xF8, 0x01, 0xF8, 0x00, 0x1E, 0x00, 0x1F, 0x00,
  0x07, 0xC0, 0x01, 0xF8, 0x01, 0xE0, 0x00, 0x1F, 0xC0, 0xF8, 0x00, 0x00,
  0xFF, 0xFC, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF,
  0xC3, 0xFF, 0xFF, 0xFF, 0xF1, 0xFF, 0xFF, 0xFF, 0xFC, 0x7F, 0xFF, 0xFF,
  0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0x8F, 0xFF, 0xFF, 0xFF, 0xE3, 0xE0, 0x00,
  0x00, 0xF9, 0xE0, 0x00, 0x00, 0x7C, 0x70, 0x00, 0x00, 0x1F, 0x18, 0x00,
  0x00, 0x07, 0xCC, 0x00, 0x00, 0x03, 0xE3, 0x00, 0x00, 0x00, 0xF8, 0x00,
  0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x07, 0xC0,
  0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x3E,
  0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x01,
  0xF0, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00,
  0x0F, 0x80, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00,
  0x00, 0x7C, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00,
  0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x3E, 0x00,
  0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x01, 0xF0,
  0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x0F,
  0x80, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00,
  0x7C, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00,
  0x03, 0xE0, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00,
  0x00, 0x1F, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x03, 0xE0, 0x00,
  0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x1F, 0x00,
  0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0xF8,
  0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x01, 0xFF, 0xFC, 0x00, 0x0F, 0xC0,
  0xFE, 0x00, 0x3E, 0x00, 0x7E, 0x00, 0xF8, 0x00, 0x3E, 0x03, 0xE0, 0x00,
  0x7E, 0x0F, 0x80, 0x00, 0x7E, 0x1F, 0x00, 0x00, 0xFC, 0x7C, 0x00, 0x00,
  0xFC, 0xF8, 0x00, 0x01, 0xF9, 0xF0, 0x00, 0x03, 0xF3, 0xE0, 0x00, 0x07,
  0xEF, 0xE0, 0x00, 0x0F, 0xDF, 0xC0, 0x00, 0x1F, 0x9F, 0x80, 0x00, 0x3F,
  0x3F, 0x80, 0x00, 0xFC, 0x7F, 0x80, 0x01, 0xF8, 0xFF, 0x00, 0x07, 0xE0,
  0xFF, 0x00, 0x0F, 0x81, 0xFF, 0x00, 0x3F, 0x01, 0xFF, 0x80, 0xF8, 0x01,
  0xFF, 0x83, 0xE0, 0x01, 0xFF, 0x9F, 0x80, 0x01, 0xFF, 0xFC, 0x00, 0x01,
  0xFF, 0xE0, 0x00, 0x01, 0xFF, 0xE0, 0x00, 0x01, 0xFF, 0xE0, 0x00, 0x01,
  0xFF, 0xE0, 0x00, 0x03, 0xFF, 0xE0, 0x00, 0x1F, 0xFF, 0xE0, 0x00, 0x78,
  0xFF, 0xE0, 0x01, 0xE0, 0xFF, 0xE0, 0x07, 0x80, 0xFF, 0xE0, 0x1F, 0x00,
  0x7F, 0xE0, 0x7C, 0x00, 0x7F, 0xE1, 0xF0, 0x00, 0x7F, 0xC7, 0xE0, 0x00,
  0x7F, 0xCF, 0xC0, 0x00, 0x7F, 0x9F, 0x00, 0x00, 0x7F, 0x7E, 0x00, 0x00,
  0x7F, 0xFC, 0x00, 0x00, 0xFF, 0xF8, 0x00, 0x01, 0xFF, 0xF0, 0x00, 0x01,
  0xFF, 0xE0, 0x00, 0x03, 0xFF, 0xC0, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x0F,
  0xFF, 0x80, 0x00, 0x1F, 0x3F, 0x00, 0x00, 0x3E, 0x7E, 0x00, 0x00, 0xFC,
  0x7E, 0x00, 0x01, 0xF0, 0x7E, 0x00, 0x07, 0xC0, 0xFE, 0x00, 0x0F, 0x80,
  0xFE, 0x00, 0x7E, 0x00, 0x7F, 0x03, 0xF0, 0x00, 0x3F, 0xFF, 0x80, 0x00,
  0x0F, 0xF8, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x03, 0xFF, 0xF0, 0x00,
  0x00, 0xFC, 0x0F, 0xC0, 0x00, 0x1F, 0x00, 0x3F, 0x00, 0x03, 0xE0, 0x01,
  0xF8, 0x00, 0x7C, 0x00, 0x0F, 0xC0, 0x0F, 0x80, 0x00, 0x7E, 0x01, 0xF8,
  0x00, 0x07, 0xF0, 0x1F, 0x00, 0x00, 0x3F, 0x03, 0xF0, 0x00, 0x03, 0xF8,
  0x3F, 0x00, 0x00, 0x3F, 0x87, 0xE0, 0x00, 0x01, 0xFC, 0x7E, 0x00, 0x00,
  0x1F, 0xC7, 0xE0, 0x00, 0x01, 0xFE, 0xFE, 0x00, 0x00, 0x1F, 0xEF, 0xE0,
  0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x0F, 0xEF, 0xE0, 0x00, 0x00, 0xFF,
  0xFE, 0x00, 0x00, 0x0F, 0xFF, 0xE0, 0x00, 0x00, 0xFF, 0xFE, 0x00, 0x00,
  0x0F, 0xFF, 0xE0, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x0F, 0xFF, 0xF0,
  0x00, 0x00, 0xFF, 0x7F, 0x00, 0x00, 0x0F, 0xF7, 0xF8, 0x00, 0x00, 0xFF,
  0x7F, 0x80, 0x00, 0x0F, 0xF3, 0xFC, 0x00, 0x00, 0xFF, 0x3F, 0xE0, 0x00,
  0x1F, 0xF1, 0xFE, 0x00, 0x03, 0xFE, 0x1F, 0xF8, 0x00, 0xFF, 0xE0, 0xFF,
  0xE0, 0x3E, 0xFE, 0x07, 0xFF, 0xFF, 0xDF, 0xE0, 0x3F, 0xFF, 0xF1, 0xFC,
  0x00, 0xFF, 0xFC, 0x1F, 0xC0, 0x01, 0xFE, 0x03, 0xFC, 0x00, 0x00, 0x00,
  0x3F, 0x80, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00,
  0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x1F, 0xE0,
  0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x07,
  0xF0, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00,
  0x03, 0xFC, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00,
  0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x3F, 0xC0,
  0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x03, 0xFC,
  0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x3F, 0xBF, 0xDF,
  0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0xF1, 0xFD, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF,
  0xF7, 0xF1, 0xE0 };

const GFXglyph FreeSerif42pt7bGlyphs[] PROGMEM = {
  {     0,  36,  56,  41,    2,  -54 },   // 0x30 '0'
  {   252,  22,  55,  41,    9,  -54 },   // 0x31 '1'
  {   404,  36,  55,  41,    3,  -54 },   // 0x32 '2'
  {   652,  32,  57,  41,    4,  -55 },   // 0x33 '3'
  {   880,  37,  55,  41,    1,  -54 },   // 0x34 '4'
  {  1135,  34,  57,  41,    2,  -55 },   // 0x35 '5'
  {  1378,  35,  57,  41,    3,  -55 },   // 0x36 '6'
  {  1628,  34,  55,  41,    2,  -53 },   // 0x37 '7'
  {  1862,  31,  56,  41,    5,  -54 },   // 0x38 '8'
  {  2079,  36,  57,  41,    2,  -54 },   // 0x39 '9'
  {  2336,   9,  38,  21,    7,  -36 } }; // 0x3A ':'

const GFXfont FreeSerif42pt7b PROGMEM = {
  (uint8_t  *)FreeSerif42pt7bBitmaps,
  (GFXglyph *)FreeSerif42pt7bGlyphs,
  0x30, 0x3A, 99 };

// Approx. 2463 bytes

#endif // FreeSerif42pt7b_H
