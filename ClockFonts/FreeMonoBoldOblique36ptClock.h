#ifndef FreeMonoBoldOblique36pt7b_H
#define FreeMonoBoldOblique36pt7b_H

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

const uint8_t FreeMonoBoldOblique36pt7bBitmaps[] PROGMEM = {
  0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x7F, 0xFC, 0x00, 0x00, 0x7F, 0xFF,
  0xC0, 0x00, 0x3F, 0xFF, 0xF8, 0x00, 0x3F, 0xFF, 0xFF, 0x00, 0x1F, 0xFF,
  0xFF, 0xC0, 0x0F, 0xFF, 0xFF, 0xF8, 0x07, 0xFF, 0x07, 0xFE, 0x01, 0xFF,
  0x00, 0x7F, 0x80, 0xFF, 0x00, 0x0F, 0xF0, 0x7F, 0x80, 0x03, 0xFC, 0x1F,
  0xE0, 0x00, 0x7F, 0x0F, 0xF0, 0x00, 0x1F, 0xC3, 0xF8, 0x00, 0x07, 0xF0,
  0xFE, 0x00, 0x01, 0xFC, 0x7F, 0x00, 0x00, 0x7F, 0x1F, 0xC0, 0x00, 0x1F,
  0xC7, 0xF0, 0x00, 0x07, 0xF3, 0xF8, 0x00, 0x03, 0xF8, 0xFE, 0x00, 0x00,
  0xFE, 0x3F, 0x80, 0x00, 0x3F, 0x8F, 0xE0, 0x00, 0x0F, 0xE3, 0xF8, 0x00,
  0x07, 0xF1, 0xFC, 0x00, 0x01, 0xFC, 0x7F, 0x00, 0x00, 0x7F, 0x1F, 0xC0,
  0x00, 0x1F, 0xC7, 0xF0, 0x00, 0x0F, 0xE1, 0xFC, 0x00, 0x03, 0xF8, 0xFE,
  0x00, 0x00, 0xFE, 0x3F, 0x80, 0x00, 0x3F, 0x8F, 0xE0, 0x00, 0x1F, 0xC3,
  0xF8, 0x00, 0x07, 0xF0, 0xFE, 0x00, 0x03, 0xFC, 0x3F, 0x80, 0x00, 0xFE,
  0x0F, 0xE0, 0x00, 0x7F, 0x83, 0xFC, 0x00, 0x3F, 0xC0, 0xFF, 0x00, 0x1F,
  0xF0, 0x1F, 0xE0, 0x0F, 0xF8, 0x07, 0xFE, 0x0F, 0xFC, 0x01, 0xFF, 0xFF,
  0xFE, 0x00, 0x3F, 0xFF, 0xFF, 0x00, 0x0F, 0xFF, 0xFF, 0x80, 0x01, 0xFF,
  0xFF, 0xC0, 0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x07, 0xFF, 0xE0, 0x00, 0x00,
  0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0xFF, 0xC0,
  0x00, 0x03, 0xFF, 0x80, 0x00, 0x1F, 0xFF, 0x00, 0x00, 0xFF, 0xFC, 0x00,
  0x03, 0xFF, 0xF8, 0x00, 0x1F, 0xFF, 0xF0, 0x00, 0x7F, 0xFF, 0xE0, 0x01,
  0xFF, 0xBF, 0xC0, 0x03, 0xFE, 0x7F, 0x00, 0x07, 0xF0, 0xFE, 0x00, 0x0F,
  0x81, 0xFC, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00,
  0x1F, 0xC0, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00,
  0xFE, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x0F,
  0xE0, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0xFE,
  0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x07, 0xF0,
  0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x7F, 0x00,
  0x00, 0x00, 0xFE, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x07, 0xF0, 0x00,
  0x00, 0x0F, 0xE0, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x3F, 0x80, 0x00,
  0x00, 0x7F, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x0F, 0xFF, 0xFF, 0xFE, 0x7F,
  0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFB, 0xFF,
  0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xFF, 0xC7, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
  0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0x00, 0x00, 0x01, 0xFF,
  0xFF, 0x80, 0x00, 0x0F, 0xFF, 0xFF, 0x80, 0x00, 0x3F, 0xFF, 0xFF, 0x80,
  0x00, 0xFF, 0xFF, 0xFF, 0x80, 0x03, 0xFF, 0xFF, 0xFF, 0x00, 0x0F, 0xFE,
  0x07, 0xFF, 0x00, 0x1F, 0xE0, 0x03, 0xFE, 0x00, 0x7F, 0x80, 0x03, 0xFC,
  0x00, 0xFE, 0x00, 0x03, 0xF8, 0x03, 0xFC, 0x00, 0x07, 0xF0, 0x07, 0xF0,
  0x00, 0x0F, 0xE0, 0x0F, 0xC0, 0x00, 0x1F, 0xC0, 0x0F, 0x00, 0x00, 0x3F,
  0x80, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00,
  0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0xFF,
  0x80, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00,
  0x00, 0x7F, 0xE0, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00, 0x0F, 0xFE,
  0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00,
  0x07, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0xFF, 0xE0,
  0x00, 0x00, 0x03, 0xFF, 0x80, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00,
  0x7F, 0xF0, 0x00, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x0F, 0xFE, 0x00,
  0x1E, 0x00, 0x3F, 0xF8, 0x00, 0x7E, 0x01, 0xFF, 0xE0, 0x01, 0xFC, 0x07,
  0xFF, 0x00, 0x03, 0xF8, 0x0F, 0xFF, 0xFF, 0xFF, 0xF0, 0x3F, 0xFF, 0xFF,
  0xFF, 0xE0, 0x7F, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x01,
  0xFF, 0xFF, 0xFF, 0xFE, 0x03, 0xFF, 0xFF, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF,
  0xFF, 0xF8, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x07, 0xFF, 0xF8,
  0x00, 0x00, 0xFF, 0xFF, 0xE0, 0x00, 0x1F, 0xFF, 0xFF, 0xC0, 0x01, 0xFF,
  0xFF, 0xFE, 0x00, 0x1F, 0xFF, 0xFF, 0xF8, 0x01, 0xFF, 0xFF, 0xFF, 0xC0,
  0x0F, 0xFC, 0x03, 0xFF, 0x00, 0x7F, 0x00, 0x07, 0xF8, 0x03, 0xF0, 0x00,
  0x1F, 0xC0, 0x0F, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00,
  0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x1F,
  0xC0, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00,
  0x03, 0xFE, 0x00, 0x00, 0x1F, 0xFF, 0xE0, 0x00, 0x01, 0xFF, 0xFE, 0x00,
  0x00, 0x1F, 0xFF, 0xE0, 0x00, 0x00, 0xFF, 0xFC, 0x00, 0x00, 0x07, 0xFF,
  0xF0, 0x00, 0x00, 0x3F, 0xFF, 0xC0, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
  0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0xFF,
  0x80, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00,
  0x00, 0x7F, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x1F, 0xC0,
  0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00,
  0xFF, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x1E, 0x00, 0x00, 0xFF, 0x81, 0xFC,
  0x00, 0x3F, 0xF8, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xF8,
  0x07, 0xFF, 0xFF, 0xFF, 0x80, 0x3F, 0xFF, 0xFF, 0xF8, 0x00, 0xFF, 0xFF,
  0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x1F,
  0xFC, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x03,
  0xFF, 0xE0, 0x00, 0x00, 0xFF, 0xF8, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00,
  0x3F, 0xFF, 0x00, 0x00, 0x1F, 0xFF, 0xC0, 0x00, 0x0F, 0xFF, 0xF0, 0x00,
  0x07, 0xFD, 0xFC, 0x00, 0x01, 0xFE, 0xFE, 0x00, 0x00, 0xFF, 0x3F, 0x80,
  0x00, 0x7F, 0x8F, 0xE0, 0x00, 0x3F, 0xC3, 0xF8, 0x00, 0x1F, 0xF0, 0xFE,
  0x00, 0x0F, 0xF8, 0x7F, 0x00, 0x03, 0xFC, 0x1F, 0xC0, 0x01, 0xFE, 0x07,
  0xF0, 0x00, 0xFF, 0x01, 0xFC, 0x00, 0x7F, 0x80, 0xFF, 0x00, 0x3F, 0xC0,
  0x3F, 0x80, 0x0F, 0xF0, 0x0F, 0xE0, 0x07, 0xF8, 0x03, 0xF8, 0x03, 0xFC,
  0x00, 0xFE, 0x01, 0xFE, 0x00, 0x7F, 0x00, 0xFF, 0xFF, 0xFF, 0xF8, 0x3F,
  0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xC7, 0xFF, 0xFF, 0xFF, 0xF1,
  0xFF, 0xFF, 0xFF, 0xFC, 0x7F, 0xFF, 0xFF, 0xFE, 0x1F, 0xFF, 0xFF, 0xFF,
  0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x1F,
  0xC0, 0x00, 0x01, 0xFF, 0xFE, 0x00, 0x00, 0xFF, 0xFF, 0xC0, 0x00, 0x7F,
  0xFF, 0xF0, 0x00, 0x1F, 0xFF, 0xFC, 0x00, 0x07, 0xFF, 0xFE, 0x00, 0x01,
  0xFF, 0xFF, 0x80, 0x00, 0x3F, 0xFF, 0x80, 0x00, 0x0F, 0xFF, 0xFF, 0xF0,
  0x00, 0x7F, 0xFF, 0xFF, 0xC0, 0x03, 0xFF, 0xFF, 0xFE, 0x00, 0x3F, 0xFF,
  0xFF, 0xF0, 0x01, 0xFF, 0xFF, 0xFF, 0x80, 0x0F, 0xFF, 0xFF, 0xF8, 0x00,
  0x7F, 0xFF, 0xFF, 0x80, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00,
  0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x7F,
  0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
  0x01, 0xFC, 0x7F, 0x80, 0x00, 0x0F, 0xFF, 0xFF, 0x80, 0x00, 0x7F, 0xFF,
  0xFE, 0x00, 0x07, 0xFF, 0xFF, 0xF8, 0x00, 0x3F, 0xFF, 0xFF, 0xE0, 0x01,
  0xFF, 0xFF, 0xFF, 0x80, 0x0F, 0xFF, 0xFF, 0xFC, 0x00, 0x7F, 0xE0, 0x7F,
  0xE0, 0x03, 0xF8, 0x00, 0xFF, 0x80, 0x0E, 0x00, 0x03, 0xFC, 0x00, 0x00,
  0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x03, 0xF8,
  0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00,
  0x07, 0xF0, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00,
  0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x1F,
  0xE0, 0x78, 0x00, 0x01, 0xFE, 0x07, 0xE0, 0x00, 0x1F, 0xF0, 0x7F, 0xE0,
  0x07, 0xFF, 0x03, 0xFF, 0xFF, 0xFF, 0xF0, 0x1F, 0xFF, 0xFF, 0xFF, 0x00,
  0xFF, 0xFF, 0xFF, 0xF0, 0x03, 0xFF, 0xFF, 0xFF, 0x00, 0x0F, 0xFF, 0xFF,
  0xE0, 0x00, 0x1F, 0xFF, 0xFC, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x3F,
  0xFF, 0xF0, 0x00, 0x0F, 0xFF, 0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xF0, 0x00,
  0x7F, 0xFF, 0xFE, 0x00, 0x0F, 0xFF, 0xFF, 0xE0, 0x01, 0xFF, 0xE0, 0x78,
  0x00, 0x3F, 0xF8, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0xFF, 0x80,
  0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x3F,
  0xC0, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00,
  0x0F, 0xE0, 0x00, 0x00, 0x01, 0xFC, 0x0F, 0xE0, 0x00, 0x1F, 0xC7, 0xFF,
  0x80, 0x03, 0xF8, 0xFF, 0xFC, 0x00, 0x3F, 0xBF, 0xFF, 0xE0, 0x03, 0xF7,
  0xFF, 0xFF, 0x00, 0x7F, 0xFF, 0xFF, 0xF8, 0x07, 0xFF, 0xFF, 0xFF, 0x80,
  0x7F, 0xFE, 0x0F, 0xF8, 0x07, 0xFF, 0x00, 0x7F, 0xC0, 0xFF, 0xE0, 0x03,
  0xFC, 0x0F, 0xF8, 0x00, 0x1F, 0xC0, 0xFF, 0x00, 0x01, 0xFC, 0x0F, 0xF0,
  0x00, 0x1F, 0xC0, 0xFE, 0x00, 0x01, 0xFC, 0x0F, 0xE0, 0x00, 0x1F, 0xC0,
  0xFE, 0x00, 0x03, 0xF8, 0x0F, 0xE0, 0x00, 0x3F, 0x80, 0xFE, 0x00, 0x03,
  0xF8, 0x0F, 0xF0, 0x00, 0x7F, 0x00, 0xFF, 0x00, 0x0F, 0xF0, 0x07, 0xF8,
  0x01, 0xFE, 0x00, 0x7F, 0xE0, 0x7F, 0xC0, 0x07, 0xFF, 0xFF, 0xFC, 0x00,
  0x3F, 0xFF, 0xFF, 0x80, 0x03, 0xFF, 0xFF, 0xF0, 0x00, 0x1F, 0xFF, 0xFE,
  0x00, 0x00, 0xFF, 0xFF, 0x80, 0x00, 0x07, 0xFF, 0xE0, 0x00, 0x00, 0x0F,
  0xF8, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0x7F,
  0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFE, 0xFF,
  0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0x00, 0x01, 0xFC, 0xFC,
  0x00, 0x03, 0xFC, 0xFC, 0x00, 0x03, 0xF8, 0x78, 0x00, 0x07, 0xF8, 0x00,
  0x00, 0x07, 0xF0, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x0F, 0xE0, 0x00,
  0x00, 0x1F, 0xE0, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x3F, 0xC0, 0x00,
  0x00, 0x7F, 0x80, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00,
  0x00, 0xFE, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00,
  0x03, 0xFC, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00,
  0x0F, 0xF0, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00,
  0x1F, 0xC0, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
  0x7F, 0x80, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x01,
  0xFE, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x03,
  0xF8, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x07,
  0xF0, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0xE0, 0x00, 0x00, 0x1F, 0xFF, 0x80, 0x00, 0x1F, 0xFF, 0xF8,
  0x00, 0x07, 0xFF, 0xFF, 0x80, 0x01, 0xFF, 0xFF, 0xF8, 0x00, 0x7F, 0xFF,
  0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xF0, 0x07, 0xFE, 0x03, 0xFF, 0x01, 0xFF,
  0x00, 0x1F, 0xE0, 0x7F, 0x80, 0x03, 0xFC, 0x0F, 0xE0, 0x00, 0x3F, 0x83,
  0xFC, 0x00, 0x07, 0xF0, 0x7F, 0x00, 0x00, 0xFE, 0x0F, 0xE0, 0x00, 0x1F,
  0xC1, 0xFC, 0x00, 0x07, 0xF0, 0x3F, 0x80, 0x00, 0xFE, 0x07, 0xF8, 0x00,
  0x3F, 0x80, 0x7F, 0x80, 0x1F, 0xE0, 0x0F, 0xFC, 0x0F, 0xFC, 0x00, 0xFF,
  0xFF, 0xFE, 0x00, 0x1F, 0xFF, 0xFF, 0x80, 0x01, 0xFF, 0xFF, 0xE0, 0x00,
  0x1F, 0xFF, 0xF8, 0x00, 0x0F, 0xFF, 0xFF, 0xC0, 0x03, 0xFF, 0xFF, 0xFC,
  0x00, 0xFF, 0xFF, 0xFF, 0x80, 0x3F, 0xF0, 0x1F, 0xF8, 0x0F, 0xF0, 0x00,
  0xFF, 0x03, 0xFC, 0x00, 0x0F, 0xF0, 0x7F, 0x00, 0x00, 0xFE, 0x1F, 0xC0,
  0x00, 0x1F, 0xC3, 0xF0, 0x00, 0x03, 0xF8, 0xFE, 0x00, 0x00, 0x7F, 0x1F,
  0xC0, 0x00, 0x0F, 0xE3, 0xF8, 0x00, 0x03, 0xF8, 0x7F, 0x00, 0x00, 0xFF,
  0x0F, 0xF0, 0x00, 0x3F, 0xE1, 0xFF, 0x00, 0x0F, 0xF8, 0x3F, 0xF8, 0x0F,
  0xFE, 0x03, 0xFF, 0xFF, 0xFF, 0xC0, 0x7F, 0xFF, 0xFF, 0xF0, 0x07, 0xFF,
  0xFF, 0xFC, 0x00, 0x7F, 0xFF, 0xFE, 0x00, 0x07, 0xFF, 0xFF, 0x00, 0x00,
  0x7F, 0xFF, 0x80, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xF0, 0x00, 0x00, 0x0F, 0xFF, 0xE0, 0x00, 0x01, 0xFF, 0xFF, 0x00, 0x00,
  0x7F, 0xFF, 0xF8, 0x00, 0x0F, 0xFF, 0xFF, 0xC0, 0x01, 0xFF, 0xFF, 0xFC,
  0x00, 0x3F, 0xFF, 0xFF, 0xE0, 0x07, 0xFE, 0x07, 0xFE, 0x00, 0x7F, 0x80,
  0x1F, 0xE0, 0x0F, 0xF0, 0x00, 0xFF, 0x00, 0xFE, 0x00, 0x0F, 0xF0, 0x1F,
  0xC0, 0x00, 0x7F, 0x01, 0xFC, 0x00, 0x07, 0xF0, 0x1F, 0xC0, 0x00, 0x7F,
  0x03, 0xF8, 0x00, 0x07, 0xF0, 0x3F, 0x80, 0x00, 0x7F, 0x03, 0xF8, 0x00,
  0x0F, 0xF0, 0x3F, 0x80, 0x00, 0xFF, 0x03, 0xF8, 0x00, 0x1F, 0xF0, 0x3F,
  0xC0, 0x07, 0xFF, 0x03, 0xFE, 0x00, 0xFF, 0xE0, 0x3F, 0xF0, 0x7F, 0xFE,
  0x01, 0xFF, 0xFF, 0xFF, 0xE0, 0x1F, 0xFF, 0xFF, 0xFE, 0x00, 0xFF, 0xFF,
  0xEF, 0xC0, 0x07, 0xFF, 0xFD, 0xFC, 0x00, 0x3F, 0xFF, 0x1F, 0xC0, 0x01,
  0xFF, 0xE3, 0xF8, 0x00, 0x07, 0xF0, 0x7F, 0x80, 0x00, 0x00, 0x07, 0xF0,
  0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x03,
  0xFC, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00,
  0x01, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x1F, 0xFC, 0x00,
  0x1E, 0x0F, 0xFF, 0x80, 0x07, 0xFF, 0xFF, 0xF0, 0x00, 0x7F, 0xFF, 0xFE,
  0x00, 0x0F, 0xFF, 0xFF, 0x80, 0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x0F, 0xFF,
  0xFC, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00,
  0x00, 0x7C, 0x01, 0xFE, 0x03, 0xFF, 0x07, 0xFF, 0x07, 0xFF, 0x07, 0xFF,
  0x07, 0xFE, 0x03, 0xFC, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80,
  0x3F, 0xC0, 0x7F, 0xE0, 0xFF, 0xE0, 0xFF, 0xE0, 0xFF, 0xE0, 0xFF, 0xC0,
  0x7F, 0x80, 0x3E, 0x00 };

const GFXglyph FreeMonoBoldOblique36pt7bGlyphs[] PROGMEM = {
  {     0,  34,  46,  43,    9,  -44 },   // 0x30 '0'
  {   196,  31,  45,  43,    7,  -44 },   // 0x31 '1'
  {   371,  39,  45,  43,    4,  -44 },   // 0x32 '2'
  {   591,  37,  46,  43,    6,  -44 },   // 0x33 '3'
  {   804,  34,  44,  43,    7,  -43 },   // 0x34 '4'
  {   991,  37,  45,  43,    6,  -43 },   // 0x35 '5'
  {  1200,  36,  46,  43,   11,  -44 },   // 0x36 '6'
  {  1407,  32,  44,  43,   13,  -43 },   // 0x37 '7'
  {  1583,  35,  46,  43,    8,  -44 },   // 0x38 '8'
  {  1785,  36,  46,  43,    8,  -44 },   // 0x39 '9'
  {  1992,  16,  32,  43,   16,  -30 } }; // 0x3A ':'

const GFXfont FreeMonoBoldOblique36pt7b PROGMEM = {
  (uint8_t  *)FreeMonoBoldOblique36pt7bBitmaps,
  (GFXglyph *)FreeMonoBoldOblique36pt7bGlyphs,
  0x30, 0x3A, 71 };

// Approx. 2140 bytes

#endif // FreeMonoBoldOblique36pt7b_H
