#ifndef FreeSerifItalic42pt7b_H
#define FreeSerifItalic42pt7b_H

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

const uint8_t FreeSerifItalic42pt7bBitmaps[] PROGMEM = {
  0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x01, 0xFF, 0xE0, 0x00, 0x00, 0x1F,
  0x07, 0x80, 0x00, 0x03, 0xE0, 0x1E, 0x00, 0x00, 0x3C, 0x00, 0x78, 0x00,
  0x03, 0xC0, 0x01, 0xE0, 0x00, 0x3E, 0x00, 0x0F, 0x00, 0x03, 0xE0, 0x00,
  0x7C, 0x00, 0x3E, 0x00, 0x01, 0xE0, 0x03, 0xF0, 0x00, 0x0F, 0x00, 0x3F,
  0x00, 0x00, 0x7C, 0x01, 0xF8, 0x00, 0x03, 0xE0, 0x1F, 0x80, 0x00, 0x1F,
  0x00, 0xFC, 0x00, 0x00, 0xF8, 0x0F, 0xC0, 0x00, 0x07, 0xE0, 0xFE, 0x00,
  0x00, 0x3F, 0x07, 0xE0, 0x00, 0x01, 0xF8, 0x7F, 0x00, 0x00, 0x0F, 0xC3,
  0xF8, 0x00, 0x00, 0x7E, 0x1F, 0x80, 0x00, 0x03, 0xF1, 0xFC, 0x00, 0x00,
  0x3F, 0x8F, 0xE0, 0x00, 0x01, 0xFC, 0xFF, 0x00, 0x00, 0x0F, 0xE7, 0xF0,
  0x00, 0x00, 0x7F, 0x3F, 0x80, 0x00, 0x03, 0xF9, 0xFC, 0x00, 0x00, 0x1F,
  0xDF, 0xE0, 0x00, 0x01, 0xFE, 0xFE, 0x00, 0x00, 0x0F, 0xE7, 0xF0, 0x00,
  0x00, 0x7F, 0x3F, 0x80, 0x00, 0x03, 0xF9, 0xFC, 0x00, 0x00, 0x1F, 0xDF,
  0xC0, 0x00, 0x01, 0xFE, 0xFE, 0x00, 0x00, 0x0F, 0xE7, 0xF0, 0x00, 0x00,
  0x7F, 0x3F, 0x80, 0x00, 0x03, 0xF9, 0xFC, 0x00, 0x00, 0x3F, 0x8F, 0xE0,
  0x00, 0x01, 0xFC, 0x7E, 0x00, 0x00, 0x0F, 0xC3, 0xF0, 0x00, 0x00, 0xFE,
  0x1F, 0x80, 0x00, 0x07, 0xF0, 0xFC, 0x00, 0x00, 0x3F, 0x07, 0xE0, 0x00,
  0x03, 0xF8, 0x3F, 0x00, 0x00, 0x1F, 0x81, 0xF8, 0x00, 0x01, 0xF8, 0x07,
  0xC0, 0x00, 0x0F, 0xC0, 0x3E, 0x00, 0x00, 0xFC, 0x01, 0xF0, 0x00, 0x07,
  0xC0, 0x07, 0x80, 0x00, 0x7E, 0x00, 0x3E, 0x00, 0x07, 0xE0, 0x01, 0xF0,
  0x00, 0x7E, 0x00, 0x07, 0xC0, 0x03, 0xE0, 0x00, 0x1E, 0x00, 0x3E, 0x00,
  0x00, 0x78, 0x07, 0xE0, 0x00, 0x01, 0xF0, 0x7C, 0x00, 0x00, 0x07, 0xFF,
  0x80, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00,
  0x00, 0x1F, 0xE0, 0x00, 0x0F, 0xFF, 0x80, 0x01, 0xFF, 0xFE, 0x00, 0x00,
  0x0F, 0xF8, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x01,
  0xFC, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0xFE,
  0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x7F, 0x00,
  0x00, 0x01, 0xFC, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x3F, 0x80, 0x00,
  0x00, 0xFE, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00,
  0x7F, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x3F,
  0x80, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x0F, 0xC0,
  0x00, 0x00, 0x7F, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x07, 0xF0, 0x00,
  0x00, 0x1F, 0x80, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00,
  0x0F, 0xE0, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x07,
  0xF0, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x03, 0xF8,
  0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x01, 0xFC, 0x00,
  0x00, 0x07, 0xF0, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0xFE, 0x00, 0x00,
  0x03, 0xF8, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x01,
  0xFC, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x01, 0xFF,
  0x00, 0x00, 0x3F, 0xFF, 0x00, 0x0F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00,
  0x3F, 0xC0, 0x00, 0x00, 0x1F, 0xFF, 0x80, 0x00, 0x03, 0xFF, 0xFC, 0x00,
  0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x1F, 0xFF, 0xFF, 0x80, 0x03, 0xFF, 0xFF,
  0xF8, 0x00, 0x7E, 0x03, 0xFF, 0xC0, 0x07, 0x80, 0x0F, 0xFE, 0x00, 0xF0,
  0x00, 0x3F, 0xE0, 0x1C, 0x00, 0x01, 0xFE, 0x01, 0x80, 0x00, 0x1F, 0xF0,
  0x38, 0x00, 0x00, 0xFF, 0x03, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00,
  0x7F, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00,
  0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x07, 0xE0,
  0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00,
  0xFC, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00,
  0x00, 0x3F, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x7C, 0x00,
  0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x3E,
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00,
  0x0F, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00,
  0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x1E, 0x00,
  0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x0F,
  0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00,
  0x03, 0x80, 0x00, 0x00, 0x00, 0x70, 0x00, 0x01, 0x80, 0x0E, 0x00, 0x00,
  0x18, 0x01, 0xC0, 0x00, 0x03, 0x00, 0x38, 0x00, 0x00, 0x70, 0x07, 0x00,
  0x00, 0x1F, 0x00, 0xFF, 0xFF, 0xFF, 0xE0, 0x1F, 0xFF, 0xFF, 0xFE, 0x03,
  0xFF, 0xFF, 0xFF, 0xC0, 0x7F, 0xFF, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF,
  0xC0, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00,
  0x00, 0x7F, 0xF8, 0x00, 0x00, 0x0F, 0xFF, 0xE0, 0x00, 0x00, 0xFF, 0xFF,
  0x80, 0x00, 0x0F, 0x03, 0xFE, 0x00, 0x00, 0xE0, 0x07, 0xF8, 0x00, 0x0E,
  0x00, 0x1F, 0xC0, 0x00, 0xC0, 0x00, 0xFF, 0x00, 0x04, 0x00, 0x03, 0xF8,
  0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00,
  0x07, 0xF0, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x01, 0xFC, 0x00,
  0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x0F,
  0xE0, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00,
  0x00, 0xF8, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00,
  0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x1F, 0xFF,
  0xE0, 0x00, 0x00, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00,
  0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0xFF,
  0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00,
  0x00, 0x7F, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x1F, 0xC0,
  0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00,
  0x1F, 0x80, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00,
  0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x0F,
  0x80, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00,
  0x00, 0x3E, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x1E, 0x00,
  0x00, 0x00, 0x01, 0xF0, 0x01, 0xF0, 0x00, 0x0F, 0x00, 0x1F, 0xE0, 0x00,
  0xF0, 0x00, 0xFF, 0xC0, 0x1F, 0x00, 0x0F, 0xFF, 0x83, 0xF0, 0x00, 0x3F,
  0xFF, 0xFE, 0x00, 0x01, 0xFF, 0xFF, 0xE0, 0x00, 0x07, 0xFF, 0xFC, 0x00,
  0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00,
  0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00,
  0x07, 0xE0, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x7F, 0x00,
  0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00,
  0x1F, 0xF8, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x01, 0xEF, 0xC0,
  0x00, 0x00, 0x07, 0x9F, 0x80, 0x00, 0x00, 0x1E, 0x7F, 0x00, 0x00, 0x00,
  0x78, 0xFC, 0x00, 0x00, 0x01, 0xE1, 0xF8, 0x00, 0x00, 0x07, 0x83, 0xF0,
  0x00, 0x00, 0x1E, 0x0F, 0xC0, 0x00, 0x00, 0x78, 0x1F, 0x80, 0x00, 0x01,
  0xE0, 0x3F, 0x00, 0x00, 0x07, 0x80, 0x7E, 0x00, 0x00, 0x0E, 0x01, 0xF8,
  0x00, 0x00, 0x38, 0x03, 0xF0, 0x00, 0x00, 0xE0, 0x07, 0xE0, 0x00, 0x03,
  0x80, 0x1F, 0xC0, 0x00, 0x0E, 0x00, 0x3F, 0x00, 0x00, 0x38, 0x00, 0x7E,
  0x00, 0x00, 0xE0, 0x00, 0xFC, 0x00, 0x03, 0x80, 0x03, 0xF0, 0x00, 0x0E,
  0x00, 0x07, 0xE0, 0x00, 0x38, 0x00, 0x0F, 0xC0, 0x00, 0xE0, 0x00, 0x3F,
  0x80, 0x03, 0x80, 0x00, 0x7E, 0x00, 0x0E, 0x00, 0x00, 0xFC, 0x00, 0x38,
  0x00, 0x01, 0xF8, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xE1, 0xFF, 0xFF, 0xFF,
  0xFF, 0xC7, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F,
  0xFF, 0xFF, 0xFF, 0xFE, 0x7F, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x03,
  0xF0, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00,
  0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x01,
  0xF8, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00,
  0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00,
  0x7E, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00,
  0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0xFF, 0xFC, 0x00, 0x01, 0xFF, 0xFF, 0xF0, 0x00, 0x0F, 0xFF,
  0xFF, 0x80, 0x00, 0x3F, 0xFF, 0xFE, 0x00, 0x01, 0xFF, 0xFF, 0xF8, 0x00,
  0x07, 0xFF, 0xFF, 0xC0, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00,
  0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00,
  0xE0, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00,
  0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x0F,
  0xFF, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0x00, 0x00, 0x01, 0xFF, 0xFE, 0x00,
  0x00, 0x07, 0xFF, 0xFC, 0x00, 0x00, 0x07, 0xFF, 0xF8, 0x00, 0x00, 0x01,
  0xFF, 0xF0, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0xFF, 0xC0,
  0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00,
  0x03, 0xF8, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x1F, 0xC0,
  0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00,
  0x01, 0xF0, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x1F, 0x00,
  0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00,
  0x07, 0xC0, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00,
  0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00,
  0x3C, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00,
  0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x07,
  0x80, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x78,
  0x00, 0x0F, 0x80, 0x03, 0xFC, 0x00, 0x7C, 0x00, 0x0F, 0xFC, 0x0F, 0xC0,
  0x00, 0x3F, 0xFF, 0xFE, 0x00, 0x00, 0xFF, 0xFF, 0xE0, 0x00, 0x01, 0xFF,
  0xFE, 0x00, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x07, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x0F, 0xFC,
  0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00,
  0x03, 0xFC, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x3F, 0xE0,
  0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00,
  0x01, 0xFE, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x0F, 0xF8,
  0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00,
  0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x00, 0xFF,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x1F, 0xC0,
  0x00, 0x03, 0xFC, 0xFF, 0xF0, 0x00, 0x07, 0xFF, 0xFF, 0xFC, 0x00, 0x07,
  0xFF, 0xFF, 0xFE, 0x00, 0x0F, 0xFF, 0x03, 0xFF, 0x00, 0x0F, 0xFC, 0x00,
  0x7F, 0x80, 0x1F, 0xF0, 0x00, 0x3F, 0xC0, 0x1F, 0xE0, 0x00, 0x1F, 0xC0,
  0x3F, 0xE0, 0x00, 0x1F, 0xE0, 0x3F, 0xC0, 0x00, 0x0F, 0xE0, 0x3F, 0x80,
  0x00, 0x0F, 0xE0, 0x7F, 0x80, 0x00, 0x07, 0xF0, 0x7F, 0x80, 0x00, 0x07,
  0xF0, 0x7F, 0x00, 0x00, 0x07, 0xF0, 0x7F, 0x00, 0x00, 0x07, 0xF0, 0xFF,
  0x00, 0x00, 0x07, 0xF0, 0xFE, 0x00, 0x00, 0x07, 0xF0, 0xFE, 0x00, 0x00,
  0x07, 0xF0, 0xFE, 0x00, 0x00, 0x07, 0xF0, 0xFE, 0x00, 0x00, 0x0F, 0xF0,
  0xFC, 0x00, 0x00, 0x0F, 0xF0, 0xFC, 0x00, 0x00, 0x0F, 0xE0, 0xFC, 0x00,
  0x00, 0x0F, 0xE0, 0xFC, 0x00, 0x00, 0x1F, 0xE0, 0xFC, 0x00, 0x00, 0x1F,
  0xC0, 0xFC, 0x00, 0x00, 0x1F, 0xC0, 0xFC, 0x00, 0x00, 0x3F, 0xC0, 0x7C,
  0x00, 0x00, 0x3F, 0x80, 0x7C, 0x00, 0x00, 0x3F, 0x80, 0x7C, 0x00, 0x00,
  0x7F, 0x00, 0x3E, 0x00, 0x00, 0x7E, 0x00, 0x3E, 0x00, 0x00, 0xFC, 0x00,
  0x1E, 0x00, 0x01, 0xF8, 0x00, 0x0F, 0x00, 0x03, 0xF8, 0x00, 0x0F, 0x80,
  0x07, 0xE0, 0x00, 0x07, 0xC0, 0x0F, 0xC0, 0x00, 0x01, 0xE0, 0x3F, 0x80,
  0x00, 0x00, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x03,
  0xFF, 0xFF, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xF0, 0x7F, 0xFF, 0xFF,
  0xFF, 0x81, 0xFF, 0xFF, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xF0, 0x7F,
  0xFF, 0xFF, 0xFF, 0x81, 0xF0, 0x00, 0x00, 0x3E, 0x0F, 0x00, 0x00, 0x00,
  0xF0, 0x38, 0x00, 0x00, 0x07, 0xC1, 0x80, 0x00, 0x00, 0x1E, 0x04, 0x00,
  0x00, 0x00, 0xF0, 0x10, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x1E,
  0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00,
  0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x03, 0xC0,
  0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00,
  0x03, 0xC0, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00,
  0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00,
  0x7C, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00,
  0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x0F,
  0x80, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00,
  0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x01, 0xF0,
  0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00,
  0x01, 0xF0, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x7E, 0x00,
  0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00,
  0x3E, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00,
  0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x0F,
  0xC0, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00,
  0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x01, 0xF8,
  0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0xF0, 0x00, 0x00, 0x03, 0xFF, 0xF8, 0x00, 0x00, 0x3F, 0x01, 0xF8, 0x00,
  0x01, 0xF0, 0x01, 0xF0, 0x00, 0x0F, 0x80, 0x03, 0xE0, 0x00, 0x7E, 0x00,
  0x07, 0xC0, 0x03, 0xF0, 0x00, 0x0F, 0x80, 0x0F, 0xC0, 0x00, 0x3E, 0x00,
  0x3E, 0x00, 0x00, 0x7C, 0x01, 0xF8, 0x00, 0x01, 0xF0, 0x07, 0xE0, 0x00,
  0x07, 0xC0, 0x1F, 0x80, 0x00, 0x1F, 0x00, 0x7E, 0x00, 0x00, 0x7C, 0x01,
  0xF8, 0x00, 0x01, 0xF0, 0x07, 0xF0, 0x00, 0x07, 0xC0, 0x1F, 0xC0, 0x00,
  0x3E, 0x00, 0x3F, 0x80, 0x00, 0xF8, 0x00, 0xFF, 0x00, 0x07, 0xC0, 0x03,
  0xFE, 0x00, 0x3E, 0x00, 0x07, 0xFC, 0x01, 0xF0, 0x00, 0x0F, 0xF8, 0x0F,
  0x80, 0x00, 0x3F, 0xF0, 0xF8, 0x00, 0x00, 0x7F, 0xEF, 0x80, 0x00, 0x00,
  0xFF, 0xF0, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00, 0x07, 0xFF, 0x00,
  0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x03, 0xEF, 0xFC, 0x00, 0x00, 0x3E,
  0x1F, 0xF8, 0x00, 0x03, 0xE0, 0x3F, 0xE0, 0x00, 0x3F, 0x00, 0x7F, 0xC0,
  0x01, 0xF0, 0x00, 0xFF, 0x80, 0x0F, 0x80, 0x01, 0xFE, 0x00, 0x7C, 0x00,
  0x03, 0xFC, 0x03, 0xF0, 0x00, 0x07, 0xF8, 0x0F, 0x80, 0x00, 0x1F, 0xE0,
  0x7C, 0x00, 0x00, 0x3F, 0x81, 0xF0, 0x00, 0x00, 0x7F, 0x0F, 0xC0, 0x00,
  0x01, 0xFC, 0x3E, 0x00, 0x00, 0x03, 0xF0, 0xF8, 0x00, 0x00, 0x0F, 0xC3,
  0xE0, 0x00, 0x00, 0x3F, 0x0F, 0x80, 0x00, 0x00, 0xFC, 0x3E, 0x00, 0x00,
  0x03, 0xF0, 0xF8, 0x00, 0x00, 0x0F, 0xC3, 0xE0, 0x00, 0x00, 0x3E, 0x07,
  0xC0, 0x00, 0x01, 0xF8, 0x1F, 0x00, 0x00, 0x07, 0xC0, 0x7E, 0x00, 0x00,
  0x3F, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x01, 0xF0, 0x00, 0x07, 0xC0, 0x03,
  0xE0, 0x00, 0x3E, 0x00, 0x07, 0xE0, 0x03, 0xF0, 0x00, 0x0F, 0xE0, 0x3F,
  0x00, 0x00, 0x0F, 0xFF, 0xF0, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0xE0, 0x00, 0x00, 0x01, 0xFF, 0xF0, 0x00, 0x00, 0x1F, 0x81,
  0xF0, 0x00, 0x01, 0xF8, 0x01, 0xE0, 0x00, 0x0F, 0x80, 0x03, 0xC0, 0x00,
  0x7C, 0x00, 0x0F, 0x80, 0x03, 0xE0, 0x00, 0x1E, 0x00, 0x1F, 0x80, 0x00,
  0x7C, 0x00, 0xFC, 0x00, 0x00, 0xF0, 0x03, 0xF0, 0x00, 0x03, 0xE0, 0x1F,
  0x80, 0x00, 0x0F, 0x80, 0xFE, 0x00, 0x00, 0x3E, 0x03, 0xF8, 0x00, 0x00,
  0xFC, 0x1F, 0xC0, 0x00, 0x03, 0xF0, 0x7F, 0x00, 0x00, 0x0F, 0xC1, 0xFC,
  0x00, 0x00, 0x3F, 0x07, 0xE0, 0x00, 0x00, 0xFC, 0x3F, 0x80, 0x00, 0x03,
  0xF0, 0xFE, 0x00, 0x00, 0x1F, 0xC3, 0xF8, 0x00, 0x00, 0x7F, 0x0F, 0xE0,
  0x00, 0x01, 0xFC, 0x3F, 0x80, 0x00, 0x07, 0xF0, 0xFE, 0x00, 0x00, 0x3F,
  0xC3, 0xF8, 0x00, 0x00, 0xFE, 0x0F, 0xE0, 0x00, 0x03, 0xF8, 0x3F, 0xC0,
  0x00, 0x1F, 0xE0, 0x7F, 0x00, 0x00, 0x7F, 0x81, 0xFC, 0x00, 0x03, 0xFC,
  0x07, 0xF8, 0x00, 0x0F, 0xF0, 0x0F, 0xE0, 0x00, 0xFF, 0xC0, 0x3F, 0xC0,
  0x07, 0xFE, 0x00, 0x7F, 0xC0, 0x7F, 0xF8, 0x00, 0xFF, 0xFF, 0xDF, 0xE0,
  0x01, 0xFF, 0xFC, 0xFF, 0x00, 0x03, 0xFF, 0xC3, 0xF8, 0x00, 0x03, 0xF8,
  0x1F, 0xE0, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00,
  0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x07,
  0xF8, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00,
  0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x01, 0xFE,
  0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00,
  0x07, 0xF8, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x07, 0xF8, 0x00,
  0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0xFF,
  0x80, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x78, 0x01, 0xF8, 0x07, 0xF8, 0x0F, 0xF0, 0x1F, 0xE0, 0x3F,
  0xC0, 0x7F, 0x80, 0x7E, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x0F, 0xC0, 0x3F, 0xC0, 0x7F,
  0x80, 0xFF, 0x01, 0xFE, 0x03, 0xFC, 0x03, 0xF0, 0x03, 0xC0, 0x00 };

const GFXglyph FreeSerifItalic42pt7bGlyphs[] PROGMEM = {
  {     0,  37,  56,  41,    3,  -54 },   // 0x30 '0'
  {   259,  30,  55,  41,    4,  -54 },   // 0x31 '1'
  {   466,  36,  55,  41,    1,  -54 },   // 0x32 '2'
  {   714,  37,  57,  41,    1,  -55 },   // 0x33 '3'
  {   978,  39,  55,  41,    0,  -54 },   // 0x34 '4'
  {  1247,  38,  55,  41,    2,  -53 },   // 0x35 '5'
  {  1509,  40,  58,  41,    2,  -56 },   // 0x36 '6'
  {  1799,  38,  55,  41,    6,  -53 },   // 0x37 '7'
  {  2061,  38,  56,  41,    2,  -54 },   // 0x38 '8'
  {  2327,  38,  56,  41,    2,  -54 },   // 0x39 '9'
  {  2593,  15,  37,  21,    4,  -35 } }; // 0x3A ':'

const GFXfont FreeSerifItalic42pt7b PROGMEM = {
  (uint8_t  *)FreeSerifItalic42pt7bBitmaps,
  (GFXglyph *)FreeSerifItalic42pt7bGlyphs,
  0x30, 0x3A, 99 };

// Approx. 2747 bytes

#endif // FreeSerifItalic42pt7b_H
