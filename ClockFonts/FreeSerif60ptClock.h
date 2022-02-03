#ifndef FreeSerif60pt7b_H
#define FreeSerif60pt7b_H

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

const uint8_t FreeSerif60pt7bBitmaps[] PROGMEM = {
  0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x07,
  0xF8, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x0F, 0xF0, 0x00, 0x00, 0x07, 0xF8,
  0x00, 0x3F, 0xC0, 0x00, 0x00, 0x7F, 0x80, 0x00, 0xFF, 0x00, 0x00, 0x07,
  0xF8, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x0F, 0xF0, 0x00,
  0x03, 0xF8, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x3F, 0xC0, 0x00, 0x01, 0xFE,
  0x00, 0x03, 0xFC, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x1F, 0xE0, 0x00, 0x00,
  0x3F, 0xC0, 0x01, 0xFF, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x0F, 0xF0, 0x00,
  0x00, 0x07, 0xF8, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x3F, 0xE0, 0x07, 0xFC,
  0x00, 0x00, 0x01, 0xFF, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x07, 0xFC, 0x03,
  0xFE, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x3F, 0xF0, 0x00, 0x00, 0x01, 0xFF,
  0x81, 0xFF, 0x80, 0x00, 0x00, 0x0F, 0xFC, 0x0F, 0xF8, 0x00, 0x00, 0x00,
  0x7F, 0xE0, 0xFF, 0xC0, 0x00, 0x00, 0x01, 0xFF, 0x87, 0xFE, 0x00, 0x00,
  0x00, 0x0F, 0xFC, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x7F, 0xE1, 0xFF, 0x80,
  0x00, 0x00, 0x03, 0xFF, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0xFF,
  0xE0, 0x00, 0x00, 0x00, 0xFF, 0xE7, 0xFF, 0x00, 0x00, 0x00, 0x07, 0xFF,
  0x3F, 0xF0, 0x00, 0x00, 0x00, 0x1F, 0xF9, 0xFF, 0x80, 0x00, 0x00, 0x00,
  0xFF, 0xCF, 0xFC, 0x00, 0x00, 0x00, 0x07, 0xFE, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x3F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xF8, 0x00,
  0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFE,
  0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x1F, 0xFF,
  0xFF, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x07,
  0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xC0, 0x00,
  0x00, 0x00, 0x7F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xF0,
  0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF,
  0xFC, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x3F,
  0xFF, 0xFF, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xDF, 0xF8, 0x00, 0x00, 0x00,
  0x0F, 0xFC, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x7F, 0xE7, 0xFE, 0x00, 0x00,
  0x00, 0x03, 0xFF, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x3F, 0xF9, 0xFF, 0xC0,
  0x00, 0x00, 0x01, 0xFF, 0xCF, 0xFE, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x3F,
  0xF0, 0x00, 0x00, 0x00, 0x7F, 0xE1, 0xFF, 0x80, 0x00, 0x00, 0x03, 0xFF,
  0x0F, 0xFC, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x7F, 0xE0, 0x00, 0x00, 0x00,
  0xFF, 0xC1, 0xFF, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x0F, 0xFC, 0x00, 0x00,
  0x00, 0x7F, 0xE0, 0x7F, 0xE0, 0x00, 0x00, 0x03, 0xFF, 0x01, 0xFF, 0x00,
  0x00, 0x00, 0x1F, 0xF0, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x3F,
  0xC0, 0x00, 0x00, 0x0F, 0xFC, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xC0,
  0x07, 0xF8, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x1F,
  0xE0, 0x00, 0xFF, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x07, 0xF8, 0x00, 0x00,
  0x0F, 0xF0, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x7F, 0x00,
  0x00, 0x07, 0xF8, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x0F,
  0xF0, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x3F, 0x80, 0x00,
  0x00, 0xFF, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x7F, 0x80,
  0x00, 0x00, 0x07, 0xF8, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x1E, 0x00,
  0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0xFF, 0xC0,
  0x00, 0x01, 0xFF, 0xE0, 0x00, 0x03, 0xFF, 0xF0, 0x00, 0x07, 0xFF, 0xF8,
  0x00, 0x0F, 0xFF, 0xFC, 0x00, 0x1F, 0xFF, 0xFE, 0x00, 0x3E, 0x0F, 0xFF,
  0x00, 0x18, 0x03, 0xFF, 0x80, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x7F,
  0xE0, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x0F,
  0xFC, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x01,
  0xFF, 0x80, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00,
  0x3F, 0xF0, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00,
  0x07, 0xFE, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00,
  0x00, 0xFF, 0xC0, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x3F, 0xF0, 0x00,
  0x00, 0x1F, 0xF8, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x07, 0xFE, 0x00,
  0x00, 0x03, 0xFF, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00, 0xFF, 0xC0,
  0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x1F, 0xF8,
  0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x03, 0xFF,
  0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x7F,
  0xE0, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x0F,
  0xFC, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x01,
  0xFF, 0x80, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00,
  0x3F, 0xF0, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00,
  0x07, 0xFE, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00,
  0x00, 0xFF, 0xC0, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x3F, 0xF0, 0x00,
  0x00, 0x1F, 0xF8, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x07, 0xFE, 0x00,
  0x00, 0x03, 0xFF, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00, 0xFF, 0xC0,
  0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x1F, 0xF8,
  0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x07, 0xFF,
  0x80, 0x00, 0x07, 0xFF, 0xC0, 0x00, 0x07, 0xFF, 0xF0, 0x00, 0x1F, 0xFF,
  0xFF, 0x01, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x0F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF,
  0xFC, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0xFF, 0xFF,
  0xFF, 0xFF, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x03, 0xFF,
  0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x3F, 0xE0, 0x0F, 0xFF, 0xFE, 0x00, 0x07,
  0xF0, 0x00, 0x1F, 0xFF, 0xE0, 0x00, 0xFC, 0x00, 0x00, 0x7F, 0xFF, 0x00,
  0x0F, 0x80, 0x00, 0x03, 0xFF, 0xF0, 0x01, 0xF0, 0x00, 0x00, 0x1F, 0xFF,
  0x80, 0x1E, 0x00, 0x00, 0x00, 0xFF, 0xF8, 0x03, 0xE0, 0x00, 0x00, 0x07,
  0xFF, 0x80, 0x3C, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x03, 0x80, 0x00, 0x00,
  0x03, 0xFF, 0xC0, 0x78, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x07, 0x00, 0x00,
  0x00, 0x01, 0xFF, 0xC0, 0x70, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x0E, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0xC0, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x0C,
  0x00, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00,
  0x00, 0x02, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x30, 0x00, 0xF0, 0x00,
  0x00, 0x00, 0x06, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x03, 0xC0,
  0x00, 0x00, 0x00, 0x1E, 0x00, 0x78, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x0F,
  0x00, 0x00, 0x00, 0x00, 0x7C, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x1F, 0x80,
  0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x3F, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFE, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00,
  0x1F, 0xF8, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x7F,
  0xFF, 0xFC, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x3F, 0xFF,
  0xFF, 0xF8, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x0F, 0xFF, 0xFF,
  0xFF, 0xE0, 0x00, 0x7F, 0xC0, 0x3F, 0xFF, 0xC0, 0x03, 0xF8, 0x00, 0x1F,
  0xFF, 0x00, 0x0F, 0x80, 0x00, 0x3F, 0xFE, 0x00, 0x7C, 0x00, 0x00, 0x7F,
  0xF8, 0x03, 0xE0, 0x00, 0x00, 0xFF, 0xE0, 0x0F, 0x00, 0x00, 0x01, 0xFF,
  0xC0, 0x78, 0x00, 0x00, 0x07, 0xFF, 0x01, 0xC0, 0x00, 0x00, 0x0F, 0xFC,
  0x0E, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x30, 0x00, 0x00, 0x00, 0x7F, 0xC1,
  0xC0, 0x00, 0x00, 0x01, 0xFF, 0x06, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x18,
  0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00,
  0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFC,
  0x00, 0x00, 0x00, 0x03, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xF8,
  0x00, 0x00, 0x07, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xE0,
  0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0x80,
  0x00, 0x00, 0x07, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFC, 0x00,
  0x00, 0x00, 0x03, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xE0, 0x00,
  0x00, 0x00, 0x0F, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00,
  0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0xC0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7F,
  0x80, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00,
  0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x0F, 0xC0, 0x3E, 0x00, 0x00, 0x00, 0x7E, 0x03, 0xFE, 0x00,
  0x00, 0x03, 0xF0, 0x0F, 0xFE, 0x00, 0x00, 0x1F, 0x00, 0x3F, 0xFE, 0x00,
  0x00, 0xF8, 0x00, 0xFF, 0xFE, 0x00, 0x0F, 0xC0, 0x03, 0xFF, 0xFF, 0x01,
  0xFC, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x0F, 0xFF, 0xFF, 0xFC,
  0x00, 0x00, 0x0F, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x07, 0xFF, 0xC0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x0F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x7D, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xF7, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x9F,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x7F, 0xC0, 0x00, 0x00, 0x00, 0x01,
  0xF1, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x87, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x7C, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x7F, 0xC0, 0x00,
  0x00, 0x00, 0x0F, 0x81, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x07, 0xFC,
  0x00, 0x00, 0x00, 0x01, 0xE0, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x0F, 0x80,
  0x7F, 0xC0, 0x00, 0x00, 0x00, 0x7C, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x03,
  0xE0, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x1F, 0xF0, 0x00, 0x00,
  0x00, 0x7C, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x03, 0xE0, 0x01, 0xFF, 0x00,
  0x00, 0x00, 0x0F, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x1F,
  0xF0, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x0F, 0x00,
  0x01, 0xFF, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x03,
  0xE0, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x7F, 0xC0, 0x00,
  0x00, 0x7C, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x07, 0xFC,
  0x00, 0x00, 0x1F, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x78, 0x00, 0x00,
  0x7F, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x1F, 0x00,
  0x00, 0x07, 0xFC, 0x00, 0x00, 0x78, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x03,
  0xE0, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x1F, 0x00, 0x00, 0x01, 0xFF, 0x00,
  0x00, 0x78, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x1F,
  0xF0, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0xF8, 0x00, 0x00,
  0x01, 0xFF, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x1F, 0x00,
  0x00, 0x00, 0x1F, 0xF0, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x03,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x07, 0xFF, 0xFF,
  0xFF, 0xE0, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x1F, 0xFF, 0xFF,
  0xFF, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
  0xF8, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x07, 0xFF, 0xFF, 0xFF,
  0xE0, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x3F, 0xFF, 0xFF, 0xFE,
  0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00,
  0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0xFC, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x0F,
  0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x7F,
  0xFF, 0xFF, 0xF0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x03, 0xFF,
  0xFF, 0xFF, 0xF8, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x03, 0xFF,
  0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFC, 0x00, 0x00, 0x00,
  0x1F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xF8, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xF0, 0x00, 0x00, 0x00,
  0x03, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xE0, 0x00, 0x00, 0x00,
  0x03, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xC0, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x00, 0x00,
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x03,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0x80, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0x80, 0x3F, 0x00, 0x00, 0x00, 0x3F, 0x01, 0xFF,
  0x80, 0x00, 0x00, 0xFC, 0x03, 0xFF, 0xC0, 0x00, 0x03, 0xF0, 0x07, 0xFF,
  0xC0, 0x00, 0x0F, 0xC0, 0x0F, 0xFF, 0xE0, 0x00, 0x3F, 0x00, 0x1F, 0xFF,
  0xF0, 0x01, 0xF8, 0x00, 0x3F, 0xFF, 0xF8, 0x1F, 0xC0, 0x00, 0x3F, 0xFF,
  0xFF, 0xFE, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x1F, 0xFF,
  0xFF, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF,
  0x80, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xFE, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xC0,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF,
  0x80, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0xFE, 0x00, 0xFF, 0xE0, 0x00, 0x01, 0xFF, 0xE0, 0x7F, 0xFF,
  0xC0, 0x00, 0x3F, 0xFC, 0x1F, 0xFF, 0xFF, 0x80, 0x03, 0xFF, 0xC7, 0xFF,
  0xFF, 0xFC, 0x00, 0x3F, 0xFD, 0xFF, 0xFF, 0xFF, 0xF0, 0x07, 0xFF, 0xFF,
  0x00, 0x7F, 0xFF, 0x80, 0x7F, 0xFF, 0x00, 0x00, 0xFF, 0xFC, 0x07, 0xFF,
  0xE0, 0x00, 0x07, 0xFF, 0xE0, 0x7F, 0xFC, 0x00, 0x00, 0x1F, 0xFE, 0x07,
  0xFF, 0x80, 0x00, 0x00, 0xFF, 0xF0, 0xFF, 0xF8, 0x00, 0x00, 0x0F, 0xFF,
  0x8F, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0xFF, 0xF0, 0x00, 0x00, 0x03,
  0xFF, 0xCF, 0xFF, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0xFF, 0xE0, 0x00, 0x00,
  0x01, 0xFF, 0xEF, 0xFE, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0xFF, 0xE0, 0x00,
  0x00, 0x01, 0xFF, 0xEF, 0xFE, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF,
  0xE0, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x07, 0xFF,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x07,
  0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x7F, 0xF7, 0xFE, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x7F, 0xF7, 0xFF, 0x00, 0x00,
  0x00, 0x07, 0xFF, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x7F, 0xF7, 0xFF, 0x00,
  0x00, 0x00, 0x07, 0xFF, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x7F, 0xE3, 0xFF,
  0x00, 0x00, 0x00, 0x07, 0xFE, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x7F, 0xE1,
  0xFF, 0x80, 0x00, 0x00, 0x07, 0xFE, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x7F,
  0xC1, 0xFF, 0x80, 0x00, 0x00, 0x0F, 0xFC, 0x0F, 0xFC, 0x00, 0x00, 0x00,
  0xFF, 0xC0, 0xFF, 0xC0, 0x00, 0x00, 0x0F, 0xF8, 0x07, 0xFE, 0x00, 0x00,
  0x00, 0xFF, 0x80, 0x7F, 0xE0, 0x00, 0x00, 0x1F, 0xF0, 0x03, 0xFF, 0x00,
  0x00, 0x01, 0xFF, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x3F, 0xE0, 0x01, 0xFF,
  0x80, 0x00, 0x03, 0xFC, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x7F, 0xC0, 0x00,
  0x7F, 0xE0, 0x00, 0x0F, 0xF8, 0x00, 0x03, 0xFF, 0x00, 0x01, 0xFF, 0x00,
  0x00, 0x1F, 0xFC, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0xFF, 0xF0, 0x0F, 0xF8,
  0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF,
  0xC0, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0xF0, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xF0, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x0F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x81, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x3F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07,
  0xF8, 0x00, 0x00, 0x00, 0x1F, 0xC1, 0xF8, 0x00, 0x00, 0x00, 0x0F, 0xE0,
  0xF8, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x3E, 0x00, 0x00, 0x00, 0x00, 0xFE,
  0x0F, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x07, 0x80, 0x00, 0x00, 0x00, 0x1F,
  0xC1, 0xC0, 0x00, 0x00, 0x00, 0x07, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x03,
  0xF8, 0x38, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00,
  0x0F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x0F,
  0xFF, 0xFF, 0xFC, 0x00, 0x00, 0xFF, 0xC0, 0x3F, 0xF8, 0x00, 0x07, 0xF8,
  0x00, 0x1F, 0xF0, 0x00, 0x3F, 0xC0, 0x00, 0x3F, 0xE0, 0x01, 0xFE, 0x00,
  0x00, 0x7F, 0xC0, 0x0F, 0xF0, 0x00, 0x00, 0xFF, 0x80, 0x7F, 0x80, 0x00,
  0x01, 0xFE, 0x01, 0xFE, 0x00, 0x00, 0x03, 0xFC, 0x0F, 0xF0, 0x00, 0x00,
  0x0F, 0xF0, 0x3F, 0xC0, 0x00, 0x00, 0x3F, 0xC0, 0xFF, 0x00, 0x00, 0x00,
  0x7F, 0x87, 0xFC, 0x00, 0x00, 0x01, 0xFE, 0x1F, 0xE0, 0x00, 0x00, 0x07,
  0xF8, 0x7F, 0x80, 0x00, 0x00, 0x1F, 0xE1, 0xFF, 0x00, 0x00, 0x00, 0x7F,
  0x87, 0xFC, 0x00, 0x00, 0x01, 0xFE, 0x1F, 0xF0, 0x00, 0x00, 0x07, 0xF8,
  0x7F, 0xC0, 0x00, 0x00, 0x1F, 0xE1, 0xFF, 0x80, 0x00, 0x00, 0x7F, 0x87,
  0xFE, 0x00, 0x00, 0x03, 0xFC, 0x1F, 0xFC, 0x00, 0x00, 0x0F, 0xF0, 0x7F,
  0xF8, 0x00, 0x00, 0x7F, 0x80, 0xFF, 0xE0, 0x00, 0x01, 0xFE, 0x03, 0xFF,
  0xC0, 0x00, 0x0F, 0xF0, 0x07, 0xFF, 0x80, 0x00, 0x3F, 0xC0, 0x1F, 0xFF,
  0x00, 0x01, 0xFE, 0x00, 0x3F, 0xFF, 0x00, 0x0F, 0xF0, 0x00, 0x7F, 0xFE,
  0x00, 0x7F, 0x00, 0x01, 0xFF, 0xFC, 0x03, 0xF8, 0x00, 0x03, 0xFF, 0xFC,
  0x1F, 0xC0, 0x00, 0x07, 0xFF, 0xF9, 0xFC, 0x00, 0x00, 0x0F, 0xFF, 0xFF,
  0xE0, 0x00, 0x00, 0x1F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xF0,
  0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xC0,
  0x00, 0x00, 0x00, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80,
  0x00, 0x00, 0x0F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFE, 0x00,
  0x00, 0x03, 0xF7, 0xFF, 0xFC, 0x00, 0x00, 0x1F, 0x8F, 0xFF, 0xFC, 0x00,
  0x01, 0xFC, 0x1F, 0xFF, 0xF8, 0x00, 0x0F, 0xE0, 0x1F, 0xFF, 0xF0, 0x00,
  0x7F, 0x00, 0x3F, 0xFF, 0xC0, 0x03, 0xF8, 0x00, 0x3F, 0xFF, 0x80, 0x1F,
  0xC0, 0x00, 0x7F, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0xFE, 0x07, 0xF8,
  0x00, 0x00, 0xFF, 0xF8, 0x1F, 0xE0, 0x00, 0x01, 0xFF, 0xF0, 0xFF, 0x00,
  0x00, 0x03, 0xFF, 0xC7, 0xFC, 0x00, 0x00, 0x07, 0xFF, 0x9F, 0xF0, 0x00,
  0x00, 0x0F, 0xFE, 0x7F, 0x80, 0x00, 0x00, 0x3F, 0xFB, 0xFE, 0x00, 0x00,
  0x00, 0x7F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xE0, 0x00, 0x00,
  0x03, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x0F, 0xFF, 0xFE, 0x00, 0x00, 0x00,
  0x1F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0, 0x00, 0x00, 0x01,
  0xFF, 0xFF, 0x80, 0x00, 0x00, 0x07, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x1F,
  0xFF, 0xFC, 0x00, 0x00, 0x00, 0x7F, 0xDF, 0xF0, 0x00, 0x00, 0x01, 0xFE,
  0x7F, 0xC0, 0x00, 0x00, 0x07, 0xF9, 0xFF, 0x80, 0x00, 0x00, 0x3F, 0xE3,
  0xFE, 0x00, 0x00, 0x00, 0xFF, 0x0F, 0xFC, 0x00, 0x00, 0x03, 0xFC, 0x1F,
  0xF0, 0x00, 0x00, 0x1F, 0xE0, 0x3F, 0xE0, 0x00, 0x00, 0xFF, 0x00, 0xFF,
  0xC0, 0x00, 0x07, 0xFC, 0x01, 0xFF, 0x80, 0x00, 0x3F, 0xE0, 0x03, 0xFF,
  0x80, 0x03, 0xFF, 0x00, 0x03, 0xFF, 0xC0, 0x3F, 0xF0, 0x00, 0x07, 0xFF,
  0xFF, 0xFF, 0x80, 0x00, 0x07, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x07, 0xFF,
  0xFF, 0x80, 0x00, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x0F,
  0xFF, 0xFF, 0x80, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x01,
  0xFF, 0x01, 0xFF, 0xE0, 0x00, 0x00, 0x7F, 0x80, 0x07, 0xFE, 0x00, 0x00,
  0x1F, 0xE0, 0x00, 0x7F, 0xE0, 0x00, 0x07, 0xF8, 0x00, 0x07, 0xFE, 0x00,
  0x01, 0xFE, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x7F, 0x80, 0x00, 0x07, 0xFE,
  0x00, 0x1F, 0xF0, 0x00, 0x00, 0x7F, 0xC0, 0x07, 0xFC, 0x00, 0x00, 0x0F,
  0xFC, 0x00, 0xFF, 0x80, 0x00, 0x00, 0xFF, 0xC0, 0x3F, 0xF0, 0x00, 0x00,
  0x1F, 0xF8, 0x07, 0xFC, 0x00, 0x00, 0x03, 0xFF, 0x81, 0xFF, 0x80, 0x00,
  0x00, 0x3F, 0xF0, 0x3F, 0xF0, 0x00, 0x00, 0x07, 0xFF, 0x07, 0xFE, 0x00,
  0x00, 0x00, 0xFF, 0xE1, 0xFF, 0x80, 0x00, 0x00, 0x0F, 0xFE, 0x3F, 0xF0,
  0x00, 0x00, 0x01, 0xFF, 0xC7, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0xFF,
  0xC0, 0x00, 0x00, 0x07, 0xFF, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0xF7,
  0xFF, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0xFF, 0xE0, 0x00, 0x00, 0x01, 0xFF,
  0xDF, 0xFC, 0x00, 0x00, 0x00, 0x3F, 0xFB, 0xFF, 0x80, 0x00, 0x00, 0x07,
  0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00,
  0x1F, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xF8, 0x00, 0x00,
  0x00, 0x7F, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00,
  0x00, 0x01, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0xFD, 0xFF, 0xC0,
  0x00, 0x00, 0x07, 0xFF, 0xBF, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0xF7, 0xFF,
  0x80, 0x00, 0x00, 0x1F, 0xFE, 0xFF, 0xF0, 0x00, 0x00, 0x03, 0xFF, 0xCF,
  0xFF, 0x00, 0x00, 0x00, 0x7F, 0xF9, 0xFF, 0xE0, 0x00, 0x00, 0x0F, 0xFF,
  0x3F, 0xFE, 0x00, 0x00, 0x01, 0xFF, 0xE3, 0xFF, 0xC0, 0x00, 0x00, 0x7F,
  0xF8, 0x3F, 0xFC, 0x00, 0x00, 0x1F, 0xFF, 0x07, 0xFF, 0xC0, 0x00, 0x07,
  0xFF, 0xE0, 0x7F, 0xFC, 0x00, 0x01, 0xFF, 0xFC, 0x07, 0xFF, 0xE0, 0x00,
  0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0x00, 0xFE, 0xFF, 0xE0, 0x07, 0xFF, 0xFF,
  0xFF, 0x9F, 0xFC, 0x00, 0x7F, 0xFF, 0xFF, 0xC3, 0xFF, 0x80, 0x03, 0xFF,
  0xFF, 0xE0, 0x7F, 0xE0, 0x00, 0x1F, 0xFF, 0xF0, 0x1F, 0xFC, 0x00, 0x00,
  0x7F, 0xE0, 0x03, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xFE, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0x81, 0xFF, 0x1F, 0xFC, 0xFF, 0xEF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0xFF, 0x9F, 0xFC, 0x7F, 0xC0,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xE0, 0x7F, 0xC7, 0xFF, 0x3F, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFE, 0xFF, 0xE7, 0xFF, 0x1F, 0xF0, 0x3E, 0x00 };

const GFXglyph FreeSerif60pt7bGlyphs[] PROGMEM = {
  {     0,  53,  82,  59,    3,  -79 },   // 0x30 '0'
  {   544,  33,  79,  59,   13,  -78 },   // 0x31 '1'
  {   870,  52,  80,  59,    4,  -79 },   // 0x32 '2'
  {  1390,  46,  82,  59,    5,  -79 },   // 0x33 '3'
  {  1862,  54,  80,  59,    1,  -79 },   // 0x34 '4'
  {  2402,  47,  83,  59,    4,  -80 },   // 0x35 '5'
  {  2890,  52,  82,  59,    4,  -79 },   // 0x36 '6'
  {  3423,  50,  79,  59,    2,  -77 },   // 0x37 '7'
  {  3917,  46,  82,  59,    7,  -79 },   // 0x38 '8'
  {  4389,  51,  82,  59,    4,  -79 },   // 0x39 '9'
  {  4912,  13,  55,  30,    9,  -53 } }; // 0x3A ':'

const GFXfont FreeSerif60pt7b PROGMEM = {
  (uint8_t  *)FreeSerif60pt7bBitmaps,
  (GFXglyph *)FreeSerif60pt7bGlyphs,
  0x30, 0x3A, 141 };

// Approx. 5086 bytes

#endif // FreeSerif60pt7b_H
