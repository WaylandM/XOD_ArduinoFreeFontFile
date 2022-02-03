#ifndef FreeSansOblique42pt7b_H
#define FreeSansOblique42pt7b_H

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

const uint8_t FreeSansOblique42pt7bBitmaps[] PROGMEM = {
  0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xF0, 0x00, 0x00,
  0x07, 0xFF, 0xFF, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xE0, 0x00, 0x03, 0xFF,
  0xFF, 0xFC, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0xFF, 0xFF, 0xFF,
  0xF0, 0x00, 0x7F, 0xF8, 0x1F, 0xFC, 0x00, 0x3F, 0xF0, 0x01, 0xFF, 0x80,
  0x0F, 0xF8, 0x00, 0x3F, 0xE0, 0x07, 0xFC, 0x00, 0x0F, 0xF8, 0x03, 0xFE,
  0x00, 0x01, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x7F, 0xC0, 0x7F, 0x80, 0x00,
  0x0F, 0xF0, 0x1F, 0xE0, 0x00, 0x03, 0xFC, 0x0F, 0xF0, 0x00, 0x00, 0xFF,
  0x03, 0xFC, 0x00, 0x00, 0x3F, 0xC1, 0xFE, 0x00, 0x00, 0x0F, 0xF0, 0x7F,
  0x80, 0x00, 0x03, 0xFC, 0x3F, 0xC0, 0x00, 0x00, 0xFE, 0x0F, 0xF0, 0x00,
  0x00, 0x3F, 0x83, 0xFC, 0x00, 0x00, 0x0F, 0xE1, 0xFE, 0x00, 0x00, 0x07,
  0xF8, 0x7F, 0x80, 0x00, 0x01, 0xFE, 0x1F, 0xE0, 0x00, 0x00, 0x7F, 0x87,
  0xF8, 0x00, 0x00, 0x1F, 0xE3, 0xFC, 0x00, 0x00, 0x07, 0xF0, 0xFF, 0x00,
  0x00, 0x03, 0xFC, 0x3F, 0xC0, 0x00, 0x00, 0xFF, 0x0F, 0xF0, 0x00, 0x00,
  0x3F, 0xC7, 0xF8, 0x00, 0x00, 0x0F, 0xF1, 0xFE, 0x00, 0x00, 0x03, 0xFC,
  0x7F, 0x80, 0x00, 0x01, 0xFE, 0x1F, 0xE0, 0x00, 0x00, 0x7F, 0x87, 0xF8,
  0x00, 0x00, 0x1F, 0xE1, 0xFE, 0x00, 0x00, 0x07, 0xF8, 0x7F, 0x00, 0x00,
  0x01, 0xFC, 0x3F, 0xC0, 0x00, 0x00, 0xFF, 0x0F, 0xF0, 0x00, 0x00, 0x3F,
  0xC3, 0xFC, 0x00, 0x00, 0x0F, 0xF0, 0xFF, 0x00, 0x00, 0x07, 0xF8, 0x3F,
  0xC0, 0x00, 0x01, 0xFE, 0x0F, 0xF0, 0x00, 0x00, 0x7F, 0x03, 0xFC, 0x00,
  0x00, 0x3F, 0xC0, 0xFF, 0x00, 0x00, 0x0F, 0xE0, 0x3F, 0xC0, 0x00, 0x07,
  0xF8, 0x0F, 0xF0, 0x00, 0x03, 0xFC, 0x03, 0xFE, 0x00, 0x00, 0xFF, 0x00,
  0xFF, 0x80, 0x00, 0x7F, 0x80, 0x1F, 0xF0, 0x00, 0x3F, 0xE0, 0x07, 0xFC,
  0x00, 0x1F, 0xF0, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x00, 0x3F, 0xF8, 0x1F,
  0xFE, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0x80,
  0x00, 0x3F, 0xFF, 0xFF, 0xC0, 0x00, 0x07, 0xFF, 0xFF, 0xC0, 0x00, 0x00,
  0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x0F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x7F,
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3E,
  0x00, 0x00, 0x7E, 0x00, 0x00, 0xFE, 0x00, 0x00, 0xFE, 0x00, 0x01, 0xFE,
  0x00, 0x03, 0xFC, 0x00, 0x0F, 0xFC, 0x00, 0x7F, 0xFC, 0x07, 0xFF, 0xFC,
  0x7F, 0xFF, 0xFC, 0x7F, 0xFF, 0xF8, 0x7F, 0xFF, 0xF8, 0x7F, 0xFF, 0xF8,
  0xFF, 0xFF, 0xF8, 0xFF, 0xFF, 0xF0, 0x00, 0x07, 0xF0, 0x00, 0x07, 0xF0,
  0x00, 0x07, 0xF0, 0x00, 0x0F, 0xF0, 0x00, 0x0F, 0xE0, 0x00, 0x0F, 0xE0,
  0x00, 0x0F, 0xE0, 0x00, 0x0F, 0xE0, 0x00, 0x1F, 0xC0, 0x00, 0x1F, 0xC0,
  0x00, 0x1F, 0xC0, 0x00, 0x1F, 0xC0, 0x00, 0x3F, 0xC0, 0x00, 0x3F, 0x80,
  0x00, 0x3F, 0x80, 0x00, 0x3F, 0x80, 0x00, 0x3F, 0x80, 0x00, 0x7F, 0x00,
  0x00, 0x7F, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x7F, 0x00, 0x00, 0xFF, 0x00,
  0x00, 0xFE, 0x00, 0x00, 0xFE, 0x00, 0x00, 0xFE, 0x00, 0x00, 0xFE, 0x00,
  0x01, 0xFE, 0x00, 0x01, 0xFC, 0x00, 0x01, 0xFC, 0x00, 0x01, 0xFC, 0x00,
  0x01, 0xFC, 0x00, 0x03, 0xF8, 0x00, 0x03, 0xF8, 0x00, 0x03, 0xF8, 0x00,
  0x03, 0xF8, 0x00, 0x07, 0xF8, 0x00, 0x07, 0xF0, 0x00, 0x07, 0xF0, 0x00,
  0x07, 0xF0, 0x00, 0x07, 0xF0, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x01,
  0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x03,
  0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x03,
  0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x03, 0xFF, 0xC0, 0x3F, 0xFC, 0x00, 0x03,
  0xFF, 0x00, 0x07, 0xFF, 0x00, 0x03, 0xFF, 0x00, 0x01, 0xFF, 0x80, 0x01,
  0xFF, 0x00, 0x00, 0x7F, 0xC0, 0x01, 0xFF, 0x00, 0x00, 0x1F, 0xF0, 0x00,
  0xFF, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0xFF, 0x00, 0x00, 0x03, 0xFC, 0x00,
  0x7F, 0x80, 0x00, 0x01, 0xFE, 0x00, 0x3F, 0x80, 0x00, 0x00, 0xFF, 0x00,
  0x3F, 0xC0, 0x00, 0x00, 0x7F, 0x80, 0x1F, 0xC0, 0x00, 0x00, 0x3F, 0xC0,
  0x0F, 0xE0, 0x00, 0x00, 0x1F, 0xE0, 0x07, 0xF0, 0x00, 0x00, 0x1F, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF8,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xF0,
  0x00, 0x00, 0x00, 0x07, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xC0,
  0x00, 0x00, 0x00, 0x0F, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF,
  0xFF, 0xFF, 0xE0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x01, 0xFF, 0xFF,
  0xFF, 0xFF, 0xF8, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFC, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x7F, 0xFF,
  0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFC, 0x00, 0x00, 0x1F,
  0xFF, 0xFF, 0xF0, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x7F, 0xFF,
  0xFF, 0xFC, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xC0, 0x01, 0xFF, 0xE0, 0x1F,
  0xFE, 0x00, 0x3F, 0xF0, 0x00, 0x7F, 0xE0, 0x03, 0xFC, 0x00, 0x03, 0xFF,
  0x00, 0x7F, 0x80, 0x00, 0x1F, 0xF0, 0x07, 0xF0, 0x00, 0x00, 0xFF, 0x00,
  0xFF, 0x00, 0x00, 0x0F, 0xF0, 0x0F, 0xE0, 0x00, 0x00, 0xFF, 0x01, 0xFC,
  0x00, 0x00, 0x0F, 0xF0, 0x1F, 0xC0, 0x00, 0x00, 0xFF, 0x01, 0xFC, 0x00,
  0x00, 0x0F, 0xF0, 0x3F, 0xC0, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xE0, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0xC0, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00,
  0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x1F, 0xFF, 0xE0, 0x00, 0x00, 0x01,
  0xFF, 0xF8, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xC0, 0x00, 0x00, 0x01, 0xFF,
  0xFF, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x03, 0xFF,
  0xC0, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE0,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0xFF, 0x0F, 0xF0, 0x00, 0x00, 0x0F, 0xF0, 0xFF, 0x00, 0x00, 0x01,
  0xFE, 0x0F, 0xF0, 0x00, 0x00, 0x1F, 0xE0, 0xFF, 0x00, 0x00, 0x01, 0xFE,
  0x0F, 0xF0, 0x00, 0x00, 0x3F, 0xE0, 0xFF, 0x00, 0x00, 0x03, 0xFC, 0x0F,
  0xF0, 0x00, 0x00, 0x7F, 0xC0, 0xFF, 0x80, 0x00, 0x0F, 0xF8, 0x0F, 0xF8,
  0x00, 0x01, 0xFF, 0x80, 0x7F, 0xC0, 0x00, 0x3F, 0xF0, 0x07, 0xFE, 0x00,
  0x0F, 0xFE, 0x00, 0x7F, 0xFC, 0x07, 0xFF, 0xC0, 0x03, 0xFF, 0xFF, 0xFF,
  0xF8, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xE0,
  0x00, 0x0F, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0x00, 0x00,
  0x00, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00,
  0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x00,
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x00, 0x3F, 0xF0,
  0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x00, 0x00,
  0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x03, 0xFF, 0xE0, 0x00, 0x00, 0x01,
  0xFF, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x7F, 0xFF,
  0x00, 0x00, 0x00, 0x3F, 0xDF, 0xC0, 0x00, 0x00, 0x1F, 0xE7, 0xF0, 0x00,
  0x00, 0x07, 0xF1, 0xFC, 0x00, 0x00, 0x03, 0xF8, 0xFF, 0x00, 0x00, 0x01,
  0xFC, 0x3F, 0x80, 0x00, 0x00, 0xFE, 0x0F, 0xE0, 0x00, 0x00, 0x7F, 0x03,
  0xF8, 0x00, 0x00, 0x3F, 0x80, 0xFE, 0x00, 0x00, 0x1F, 0xC0, 0x7F, 0x80,
  0x00, 0x0F, 0xE0, 0x1F, 0xC0, 0x00, 0x07, 0xF0, 0x07, 0xF0, 0x00, 0x03,
  0xFC, 0x01, 0xFC, 0x00, 0x01, 0xFE, 0x00, 0x7F, 0x00, 0x00, 0xFF, 0x00,
  0x3F, 0x80, 0x00, 0x7F, 0x80, 0x0F, 0xE0, 0x00, 0x3F, 0xC0, 0x03, 0xF8,
  0x00, 0x0F, 0xE0, 0x00, 0xFE, 0x00, 0x07, 0xF0, 0x00, 0x7F, 0x80, 0x03,
  0xF8, 0x00, 0x1F, 0xC0, 0x01, 0xFC, 0x00, 0x07, 0xF0, 0x00, 0xFE, 0x00,
  0x01, 0xFC, 0x00, 0x7F, 0x00, 0x00, 0x7F, 0x00, 0x3F, 0x80, 0x00, 0x3F,
  0x80, 0x0F, 0xC0, 0x00, 0x0F, 0xE0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x3F, 0xC0,
  0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00,
  0x1F, 0xC0, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00,
  0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x07,
  0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x7F,
  0xFF, 0xFF, 0xFE, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x0F, 0xFF,
  0xFF, 0xFF, 0xE0, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0x80, 0x01, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00,
  0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00,
  0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0xFF, 0x00, 0x00, 0x00,
  0x7E, 0x1F, 0xFF, 0x80, 0x00, 0x03, 0xF9, 0xFF, 0xFF, 0x80, 0x00, 0x0F,
  0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFE, 0x00, 0x01, 0xFF,
  0xFF, 0xFF, 0xFC, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x1F, 0xFE,
  0x01, 0xFF, 0xE0, 0x00, 0xFF, 0xE0, 0x01, 0xFF, 0xC0, 0x03, 0xFE, 0x00,
  0x03, 0xFF, 0x00, 0x0F, 0xF0, 0x00, 0x07, 0xFE, 0x00, 0x7F, 0x80, 0x00,
  0x0F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0x80, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7F,
  0x80, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0x80, 0xFF, 0x00, 0x00, 0x01, 0xFE, 0x03, 0xFC,
  0x00, 0x00, 0x07, 0xF0, 0x0F, 0xF0, 0x00, 0x00, 0x3F, 0xC0, 0x3F, 0xE0,
  0x00, 0x01, 0xFE, 0x00, 0xFF, 0x80, 0x00, 0x0F, 0xF8, 0x03, 0xFF, 0x00,
  0x00, 0x7F, 0xC0, 0x07, 0xFC, 0x00, 0x03, 0xFE, 0x00, 0x1F, 0xFC, 0x00,
  0x3F, 0xF8, 0x00, 0x7F, 0xFC, 0x03, 0xFF, 0xC0, 0x00, 0xFF, 0xFF, 0xFF,
  0xFE, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x07, 0xFF, 0xFF, 0xFF,
  0x00, 0x00, 0x07, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0x80,
  0x00, 0x00, 0x0F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00, 0x01, 0xFF, 0xFE, 0x00,
  0x00, 0x00, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0x00, 0x00,
  0x1F, 0xFF, 0xFF, 0xF0, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0xFF,
  0xFF, 0xFF, 0xE0, 0x00, 0x7F, 0xF0, 0x1F, 0xFE, 0x00, 0x1F, 0xF8, 0x00,
  0xFF, 0xC0, 0x07, 0xFC, 0x00, 0x0F, 0xFC, 0x01, 0xFF, 0x00, 0x00, 0xFF,
  0x80, 0x3F, 0xC0, 0x00, 0x1F, 0xF0, 0x0F, 0xF0, 0x00, 0x01, 0xFE, 0x01,
  0xFE, 0x00, 0x00, 0x3F, 0xC0, 0x7F, 0x80, 0x00, 0x07, 0xF8, 0x0F, 0xF0,
  0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x1F, 0xE0, 0x00, 0x03,
  0xFC, 0x0F, 0xFF, 0x80, 0x00, 0x7F, 0x07, 0xFF, 0xFC, 0x00, 0x1F, 0xE3,
  0xFF, 0xFF, 0xC0, 0x03, 0xFC, 0xFF, 0xFF, 0xFC, 0x00, 0x7F, 0xBF, 0xFF,
  0xFF, 0xC0, 0x1F, 0xEF, 0xFF, 0xFF, 0xFC, 0x03, 0xFF, 0xFE, 0x07, 0xFF,
  0x80, 0x7F, 0xFE, 0x00, 0x3F, 0xF8, 0x0F, 0xFF, 0x00, 0x01, 0xFF, 0x03,
  0xFF, 0xC0, 0x00, 0x3F, 0xF0, 0x7F, 0xF0, 0x00, 0x03, 0xFE, 0x0F, 0xFC,
  0x00, 0x00, 0x7F, 0xC1, 0xFF, 0x80, 0x00, 0x07, 0xF8, 0x3F, 0xE0, 0x00,
  0x00, 0xFF, 0x07, 0xF8, 0x00, 0x00, 0x1F, 0xE1, 0xFF, 0x00, 0x00, 0x03,
  0xFC, 0x3F, 0xE0, 0x00, 0x00, 0x7F, 0x87, 0xF8, 0x00, 0x00, 0x0F, 0xF0,
  0xFF, 0x00, 0x00, 0x01, 0xFC, 0x1F, 0xE0, 0x00, 0x00, 0x7F, 0x83, 0xFC,
  0x00, 0x00, 0x0F, 0xF0, 0x7F, 0x80, 0x00, 0x01, 0xFC, 0x0F, 0xF0, 0x00,
  0x00, 0x7F, 0x81, 0xFE, 0x00, 0x00, 0x0F, 0xF0, 0x3F, 0xC0, 0x00, 0x03,
  0xFC, 0x07, 0xFC, 0x00, 0x00, 0x7F, 0x80, 0xFF, 0x80, 0x00, 0x1F, 0xE0,
  0x0F, 0xF8, 0x00, 0x07, 0xFC, 0x01, 0xFF, 0x80, 0x01, 0xFF, 0x00, 0x3F,
  0xF8, 0x00, 0xFF, 0xC0, 0x03, 0xFF, 0xC0, 0x7F, 0xF0, 0x00, 0x3F, 0xFF,
  0xFF, 0xFE, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x7F, 0xFF, 0xFF,
  0xC0, 0x00, 0x07, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x3F, 0xFF, 0xF8, 0x00,
  0x00, 0x03, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x07,
  0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x0F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x0F, 0xFF, 0xFF,
  0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0x80, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00,
  0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xE0, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0,
  0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00,
  0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00,
  0x01, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x03,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x00, 0x07, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00,
  0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00,
  0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x00,
  0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xE0, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0,
  0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00,
  0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00,
  0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xC0,
  0x00, 0x00, 0x00, 0x3F, 0xFF, 0xC0, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0x80,
  0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFC, 0x00,
  0x01, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0x01,
  0xFF, 0xE0, 0x1F, 0xFE, 0x00, 0x0F, 0xFC, 0x00, 0x3F, 0xF0, 0x00, 0xFF,
  0x80, 0x00, 0xFF, 0xC0, 0x0F, 0xF8, 0x00, 0x03, 0xFE, 0x00, 0x7F, 0x80,
  0x00, 0x0F, 0xF0, 0x07, 0xFC, 0x00, 0x00, 0x7F, 0x80, 0x3F, 0xC0, 0x00,
  0x03, 0xFC, 0x01, 0xFE, 0x00, 0x00, 0x1F, 0xE0, 0x1F, 0xE0, 0x00, 0x00,
  0xFF, 0x00, 0xFF, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xF8, 0x00, 0x00, 0x7F,
  0x80, 0x3F, 0xC0, 0x00, 0x03, 0xFC, 0x01, 0xFE, 0x00, 0x00, 0x3F, 0xC0,
  0x0F, 0xF0, 0x00, 0x01, 0xFE, 0x00, 0x7F, 0xC0, 0x00, 0x1F, 0xE0, 0x03,
  0xFE, 0x00, 0x01, 0xFE, 0x00, 0x0F, 0xFC, 0x00, 0x3F, 0xE0, 0x00, 0x3F,
  0xF8, 0x07, 0xFE, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x03, 0xFF,
  0xFF, 0xFC, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0xFF, 0xFF,
  0xFE, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xF8, 0x00, 0x01, 0xFF, 0xFF, 0xFF,
  0xE0, 0x00, 0x3F, 0xFC, 0x03, 0xFF, 0x80, 0x03, 0xFF, 0x00, 0x07, 0xFE,
  0x00, 0x3F, 0xE0, 0x00, 0x1F, 0xF8, 0x03, 0xFE, 0x00, 0x00, 0x7F, 0xC0,
  0x3F, 0xE0, 0x00, 0x01, 0xFF, 0x01, 0xFE, 0x00, 0x00, 0x0F, 0xF8, 0x1F,
  0xE0, 0x00, 0x00, 0x3F, 0xC1, 0xFF, 0x00, 0x00, 0x01, 0xFE, 0x0F, 0xF0,
  0x00, 0x00, 0x0F, 0xF0, 0x7F, 0x80, 0x00, 0x00, 0x7F, 0x87, 0xF8, 0x00,
  0x00, 0x03, 0xFC, 0x3F, 0xC0, 0x00, 0x00, 0x1F, 0xC1, 0xFE, 0x00, 0x00,
  0x01, 0xFE, 0x0F, 0xF0, 0x00, 0x00, 0x0F, 0xF0, 0x7F, 0x80, 0x00, 0x00,
  0x7F, 0x03, 0xFC, 0x00, 0x00, 0x07, 0xF8, 0x1F, 0xE0, 0x00, 0x00, 0x7F,
  0xC0, 0xFF, 0x80, 0x00, 0x07, 0xFC, 0x07, 0xFE, 0x00, 0x00, 0x7F, 0xC0,
  0x1F, 0xF8, 0x00, 0x07, 0xFE, 0x00, 0xFF, 0xE0, 0x00, 0xFF, 0xE0, 0x03,
  0xFF, 0xE0, 0x1F, 0xFE, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x7F,
  0xFF, 0xFF, 0xFE, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x07, 0xFF,
  0xFF, 0xFE, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x1F, 0xFF,
  0xF8, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
  0xFF, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x7F, 0xFF,
  0xF8, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xE0, 0x00, 0x03, 0xFF, 0xFF, 0xFF,
  0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x80,
  0x03, 0xFF, 0xE0, 0x3F, 0xFC, 0x00, 0x3F, 0xF0, 0x00, 0xFF, 0xC0, 0x07,
  0xFE, 0x00, 0x07, 0xFE, 0x00, 0xFF, 0x80, 0x00, 0x3F, 0xE0, 0x0F, 0xF0,
  0x00, 0x01, 0xFE, 0x01, 0xFF, 0x00, 0x00, 0x1F, 0xF0, 0x1F, 0xE0, 0x00,
  0x00, 0xFF, 0x03, 0xFC, 0x00, 0x00, 0x0F, 0xF0, 0x3F, 0xC0, 0x00, 0x00,
  0xFF, 0x07, 0xF8, 0x00, 0x00, 0x0F, 0xF0, 0x7F, 0x80, 0x00, 0x00, 0xFF,
  0x07, 0xF0, 0x00, 0x00, 0x0F, 0xF0, 0x7F, 0x00, 0x00, 0x00, 0xFF, 0x0F,
  0xF0, 0x00, 0x00, 0x1F, 0xF0, 0xFF, 0x00, 0x00, 0x01, 0xFF, 0x0F, 0xF0,
  0x00, 0x00, 0x1F, 0xF0, 0xFF, 0x00, 0x00, 0x03, 0xFE, 0x0F, 0xF0, 0x00,
  0x00, 0x3F, 0xE0, 0xFF, 0x00, 0x00, 0x07, 0xFE, 0x0F, 0xF8, 0x00, 0x00,
  0xFF, 0xE0, 0xFF, 0x80, 0x00, 0x0F, 0xFE, 0x0F, 0xFC, 0x00, 0x01, 0xFF,
  0xE0, 0x7F, 0xC0, 0x00, 0x7F, 0xFC, 0x07, 0xFF, 0x00, 0x0F, 0xFF, 0xC0,
  0x3F, 0xFC, 0x07, 0xFF, 0xFC, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x1F,
  0xFF, 0xFF, 0xF7, 0xF8, 0x00, 0xFF, 0xFF, 0xFE, 0x7F, 0x80, 0x07, 0xFF,
  0xFF, 0x87, 0xF8, 0x00, 0x3F, 0xFF, 0xF0, 0xFF, 0x80, 0x00, 0xFF, 0xFC,
  0x0F, 0xF0, 0x00, 0x01, 0xFE, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0xF0, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE0,
  0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00,
  0x00, 0x00, 0x07, 0xF8, 0x0F, 0xF0, 0x00, 0x00, 0xFF, 0x80, 0xFF, 0x00,
  0x00, 0x0F, 0xF0, 0x0F, 0xF0, 0x00, 0x01, 0xFF, 0x00, 0xFF, 0x80, 0x00,
  0x3F, 0xE0, 0x0F, 0xF8, 0x00, 0x07, 0xFE, 0x00, 0xFF, 0xC0, 0x00, 0xFF,
  0xC0, 0x07, 0xFE, 0x00, 0x3F, 0xF8, 0x00, 0x7F, 0xF8, 0x0F, 0xFF, 0x00,
  0x03, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x3F, 0xFF, 0xFF, 0xFC, 0x00, 0x01,
  0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x3F,
  0xFF, 0xFC, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x03, 0xFF,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x7F, 0xC0, 0x3F, 0xC0, 0x1F, 0xE0,
  0x0F, 0xF0, 0x07, 0xF8, 0x07, 0xFC, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x03, 0xFC, 0x01,
  0xFE, 0x00, 0xFF, 0x00, 0x7F, 0x80, 0x7F, 0xC0, 0x3F, 0xC0, 0x00 };

const GFXglyph FreeSansOblique42pt7bGlyphs[] PROGMEM = {
  {     0,  42,  60,  46,    8,  -57 },   // 0x30 '0'
  {   315,  24,  58,  46,   17,  -57 },   // 0x31 '1'
  {   489,  49,  58,  46,    3,  -57 },   // 0x32 '2'
  {   845,  44,  60,  46,    6,  -57 },   // 0x33 '3'
  {  1175,  42,  58,  46,    5,  -57 },   // 0x34 '4'
  {  1480,  46,  60,  46,    6,  -57 },   // 0x35 '5'
  {  1825,  43,  60,  46,    8,  -57 },   // 0x36 '6'
  {  2148,  44,  58,  46,   11,  -57 },   // 0x37 '7'
  {  2467,  45,  60,  46,    6,  -57 },   // 0x38 '8'
  {  2805,  44,  60,  46,    6,  -57 },   // 0x39 '9'
  {  3135,  17,  43,  23,    9,  -42 } }; // 0x3A ':'

const GFXfont FreeSansOblique42pt7b PROGMEM = {
  (uint8_t  *)FreeSansOblique42pt7bBitmaps,
  (GFXglyph *)FreeSansOblique42pt7bGlyphs,
  0x30, 0x3A, 99 };

// Approx. 3311 bytes

#endif // FreeSansOblique42pt7b_H
