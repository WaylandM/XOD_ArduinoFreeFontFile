#ifndef FreeMonoOblique66pt7b_H
#define FreeMonoOblique66pt7b_H

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

const uint8_t FreeMonoOblique66pt7bBitmaps[] PROGMEM = {
  0x00, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x03, 0xFF,
  0xFF, 0xF8, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x07,
  0xFE, 0x01, 0xFF, 0x80, 0x00, 0x00, 0x7F, 0x80, 0x01, 0xFE, 0x00, 0x00,
  0x07, 0xF0, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x1F, 0xC0,
  0x00, 0x07, 0xE0, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x01,
  0xF8, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x3E, 0x00, 0x00,
  0x00, 0x3F, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x3E, 0x00,
  0x00, 0x00, 0x07, 0xC0, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x1F,
  0x00, 0x00, 0x00, 0x01, 0xF8, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x0F, 0xC0,
  0x0F, 0x80, 0x00, 0x00, 0x00, 0x3E, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x01,
  0xF0, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x7C, 0x00, 0x00, 0x00,
  0x00, 0x7C, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x3E, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x0F, 0x80,
  0x00, 0x00, 0x00, 0x07, 0xC0, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x07,
  0xC0, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0x83, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x78, 0x1F, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xC0, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x0F, 0x80, 0x00, 0x00,
  0x00, 0x01, 0xF0, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x83, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0xF8, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x3E, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x01, 0xF0,
  0x7C, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00,
  0xF8, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x3E, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x78, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x1E, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xC0, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x0F,
  0x80, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x1E, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xC0, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x0F, 0x80, 0x00, 0x00,
  0x00, 0x03, 0xE0, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x03, 0xE0, 0x00,
  0x00, 0x00, 0x01, 0xF8, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x7C, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x07, 0xE0,
  0x3E, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x03,
  0xF0, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x7C, 0x00, 0x00, 0x00,
  0x01, 0xF8, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x1F, 0x00, 0x00,
  0x00, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x07, 0xE0,
  0x00, 0x00, 0x00, 0x7E, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00,
  0xF8, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x03, 0xF0,
  0x00, 0x3F, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x03,
  0xF8, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x1F, 0x80, 0x00,
  0x03, 0xF8, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x03, 0xF8,
  0x00, 0x07, 0xF8, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0xFF, 0x80, 0x00, 0x00,
  0x7F, 0xE0, 0x3F, 0xF8, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0x80, 0x00,
  0x00, 0x07, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x03, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x0F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x1F, 0xEF, 0x80, 0x00, 0x00,
  0x00, 0x7F, 0xCF, 0x80, 0x00, 0x00, 0x00, 0xFF, 0x0F, 0x80, 0x00, 0x00,
  0x01, 0xFE, 0x0F, 0x80, 0x00, 0x00, 0x03, 0xFC, 0x1F, 0x00, 0x00, 0x00,
  0x07, 0xF8, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x1F, 0x00, 0x00, 0x00,
  0x3F, 0xC0, 0x1F, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x3F, 0x00, 0x00, 0x00,
  0xFF, 0x00, 0x3E, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x3E, 0x00, 0x00, 0x03,
  0xFC, 0x00, 0x3E, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x3E, 0x00, 0x00, 0x03,
  0xE0, 0x00, 0x7E, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x7C, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xF0, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
  0x80, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF,
  0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x07,
  0xFC, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x07, 0xF0,
  0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x1F, 0xC0,
  0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0x00,
  0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x1F, 0x80, 0x00,
  0x00, 0x01, 0xF8, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00,
  0x07, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x3F, 0x80, 0x00, 0x00,
  0x00, 0x1F, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x07,
  0xE0, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xC0, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x01, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F,
  0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x01, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x78, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x03, 0xE0,
  0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x07, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x3E, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x01,
  0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x07, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x7F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0x80, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x3F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xC0,
  0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0xFC,
  0x00, 0x7F, 0xF0, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0xFF, 0x80, 0x00,
  0x01, 0xFF, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00,
  0x1F, 0xC0, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x7E,
  0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x3E,
  0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x07, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xC0, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF,
  0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x07, 0x80, 0x00, 0x00, 0x00,
  0x01, 0xF8, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x0F, 0xF0,
  0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x01, 0xFC,
  0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x3F, 0xF0, 0x00,
  0x00, 0x0F, 0xF0, 0x00, 0x01, 0xFF, 0xE0, 0x00, 0x07, 0xFE, 0x00, 0x00,
  0x0F, 0xFF, 0xE0, 0x03, 0xFF, 0x80, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF,
  0xF0, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x03, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x3E,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xC3, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xF8,
  0x3E, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x03,
  0xF0, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x07, 0xC0, 0x00, 0x00, 0x00,
  0x0F, 0xC0, 0x7C, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x07, 0xC0, 0x00, 0x00,
  0x00, 0x1F, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x0F, 0x80, 0x00,
  0x00, 0x00, 0x7E, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x0F, 0x80,
  0x00, 0x00, 0x00, 0xF8, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x1F,
  0x00, 0x00, 0x00, 0x03, 0xF0, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x7E, 0x00,
  0x1F, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x01, 0xF0, 0x00, 0x00, 0x00, 0xF8,
  0x00, 0x3F, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x03,
  0xF0, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x03, 0xE0, 0x00, 0x00,
  0x0F, 0xC0, 0x00, 0x3E, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x07, 0xC0, 0x00,
  0x00, 0x1F, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x07, 0xC0,
  0x00, 0x00, 0x7E, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x0F,
  0xC0, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x1F, 0x00, 0x00,
  0x0F, 0x80, 0x00, 0x03, 0xF0, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x7E, 0x00,
  0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00, 0x01, 0xF8, 0x00, 0x00, 0xF8,
  0x00, 0x00, 0x1F, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x01, 0xF0, 0x00, 0x03,
  0xF0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x01, 0xF0, 0x00,
  0x07, 0xC0, 0x00, 0x00, 0x3F, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x03, 0xE0,
  0x00, 0x1F, 0x80, 0x00, 0x00, 0x3E, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x03,
  0xE0, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x07, 0xC0, 0x00, 0x00,
  0x07, 0xC0, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x1F, 0x80, 0x00,
  0x00, 0x07, 0xC0, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x3E, 0x00,
  0x00, 0x00, 0x0F, 0xC0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x7F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x87, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8,
  0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xF8, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00,
  0x3F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
  0x00, 0x3F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFE, 0x00,
  0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x1F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00,
  0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x7F, 0xFF, 0xFF,
  0xFF, 0xFF, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xF0, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x0F,
  0x80, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x7C, 0x7F, 0xFF, 0xFF, 0x80,
  0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0xFF,
  0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x01, 0xFF, 0xFE, 0x00, 0x7F, 0xE0, 0x00,
  0x00, 0x0F, 0xFF, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x7F, 0xC0, 0x00,
  0x01, 0xFE, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00,
  0x1E, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xC0, 0x01, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x1F,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x7E, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x3F, 0xC0,
  0x00, 0x00, 0x00, 0x7F, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x07, 0xF0,
  0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x1F, 0xF8, 0x00,
  0x00, 0x1F, 0xE0, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x03, 0xFE, 0x00, 0x00,
  0x00, 0xFF, 0xF8, 0x01, 0xFF, 0xE0, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF,
  0xFC, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00,
  0x0F, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x1F,
  0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xF8, 0x00, 0x00,
  0x00, 0x7F, 0xFC, 0x01, 0xFC, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x1C,
  0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x1F, 0xF0, 0x00, 0x00,
  0x03, 0xE0, 0x00, 0xFF, 0xFE, 0x00, 0x00, 0x01, 0xF0, 0x01, 0xFF, 0xFF,
  0xC0, 0x00, 0x01, 0xF8, 0x03, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0xF8, 0x03,
  0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x7C, 0x07, 0xFE, 0x01, 0xFF, 0x80, 0x00,
  0x7E, 0x07, 0xF8, 0x00, 0x3F, 0xC0, 0x00, 0x3E, 0x07, 0xF0, 0x00, 0x07,
  0xF0, 0x00, 0x1F, 0x07, 0xF0, 0x00, 0x01, 0xFC, 0x00, 0x0F, 0x87, 0xE0,
  0x00, 0x00, 0x7E, 0x00, 0x0F, 0xC7, 0xE0, 0x00, 0x00, 0x3F, 0x80, 0x07,
  0xC7, 0xE0, 0x00, 0x00, 0x0F, 0xC0, 0x03, 0xE7, 0xE0, 0x00, 0x00, 0x03,
  0xE0, 0x01, 0xF7, 0xE0, 0x00, 0x00, 0x01, 0xF0, 0x00, 0xFB, 0xE0, 0x00,
  0x00, 0x00, 0xFC, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x7F,
  0xE0, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x0F,
  0x80, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x0F, 0xF0, 0x00, 0x00,
  0x00, 0x03, 0xE0, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x03, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0xF8, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7C,
  0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x7C, 0x00, 0x00, 0x00,
  0x00, 0x3E, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x1F, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0x80, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x07, 0xC0,
  0x07, 0xC0, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x03, 0xF0, 0x00, 0x00, 0x00,
  0x03, 0xE0, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x7C, 0x00,
  0x00, 0x00, 0x01, 0xF0, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00,
  0x1F, 0x80, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00,
  0xF8, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x01, 0xF8, 0x00,
  0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00,
  0x3F, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0xFE,
  0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x01, 0xFC, 0x00,
  0x00, 0xFE, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x01, 0xFE, 0x00, 0x00, 0x00,
  0x3F, 0xF0, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFC, 0x00,
  0x00, 0x00, 0x03, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x7F, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0x9F, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE7, 0xC0, 0x00, 0x00,
  0x00, 0x00, 0xFB, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7E, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xCF, 0x80, 0x00,
  0x00, 0x00, 0x03, 0xE3, 0xC0, 0x00, 0x00, 0x00, 0x01, 0xF8, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0x80, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x01, 0xFF, 0xFF,
  0xFF, 0xC0, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x0F,
  0xF8, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x07, 0xF8, 0x00,
  0x00, 0x3F, 0x80, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00,
  0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x01, 0xF8, 0x00,
  0x00, 0x00, 0x7E, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x03,
  0xE0, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x3F,
  0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x0F, 0x80, 0x00, 0x00,
  0x00, 0x1F, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x1F, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00,
  0x1E, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x3E, 0x00, 0x00,
  0x00, 0x00, 0x3E, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x3E,
  0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x7C,
  0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x3F, 0x00, 0x00, 0x00,
  0x01, 0xF8, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x1F, 0x80,
  0x00, 0x00, 0x03, 0xE0, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x07, 0xC0, 0x00,
  0x0F, 0xC0, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x3F,
  0x80, 0x00, 0x07, 0xF8, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x03, 0xFC, 0x00,
  0x03, 0xFC, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x3F, 0xF0, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x1F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x07, 0xFE,
  0x00, 0x7F, 0xE0, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x0F, 0xF0, 0x00, 0x00,
  0x3F, 0x80, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x01, 0xFC,
  0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x01, 0xF8, 0x00, 0x00,
  0x00, 0x7E, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x07, 0xE0,
  0x00, 0x00, 0x00, 0x3F, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x1F, 0x00,
  0x0F, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x1F, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0x80, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x3E, 0x00, 0x00,
  0x00, 0x00, 0x0F, 0x80, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x7C,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0x80, 0x78, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0x80, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x3E, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x7C, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x7C,
  0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x03, 0xF0,
  0x00, 0x7E, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x3F, 0x00, 0x00, 0x00,
  0x0F, 0xC0, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x1F, 0xC0,
  0x00, 0x00, 0x7F, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x01, 0xFE, 0x00, 0x00,
  0x0F, 0xF8, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x3F, 0xF8,
  0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0xFF, 0xFF,
  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x07, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFC,
  0x00, 0x00, 0x00, 0x0F, 0xF8, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0xE0,
  0x00, 0x7F, 0xC0, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x0F, 0xE0, 0x00, 0x00,
  0x1F, 0xC0, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0xFE,
  0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x0F, 0x80, 0x00,
  0x00, 0x0F, 0xC0, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x0F,
  0xC0, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0xFC,
  0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x07, 0xE0, 0x00, 0x00,
  0x00, 0x1F, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x03, 0xE0,
  0x00, 0x00, 0x00, 0x07, 0xC0, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x03, 0xF0,
  0x00, 0xF8, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x7C, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x3E, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80,
  0x1F, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x0F, 0x80, 0x00, 0x00, 0x00,
  0x03, 0xE0, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x03, 0xE0, 0x00,
  0x00, 0x00, 0x03, 0xF8, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00,
  0xF8, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x1F, 0x00, 0x00,
  0x00, 0x01, 0xFF, 0x80, 0x0F, 0xC0, 0x00, 0x00, 0x01, 0xF7, 0xC0, 0x07,
  0xE0, 0x00, 0x00, 0x01, 0xFB, 0xE0, 0x01, 0xF0, 0x00, 0x00, 0x01, 0xF9,
  0xF0, 0x00, 0xFC, 0x00, 0x00, 0x01, 0xF8, 0xF8, 0x00, 0x7F, 0x00, 0x00,
  0x01, 0xF8, 0xFC, 0x00, 0x1F, 0x80, 0x00, 0x01, 0xF8, 0x7C, 0x00, 0x0F,
  0xE0, 0x00, 0x03, 0xF8, 0x3E, 0x00, 0x03, 0xF8, 0x00, 0x03, 0xF8, 0x1F,
  0x00, 0x00, 0xFF, 0x00, 0x07, 0xF8, 0x1F, 0x80, 0x00, 0x7F, 0xE0, 0x1F,
  0xF8, 0x0F, 0x80, 0x00, 0x1F, 0xFF, 0xFF, 0xF0, 0x07, 0xC0, 0x00, 0x07,
  0xFF, 0xFF, 0xF0, 0x07, 0xE0, 0x00, 0x00, 0xFF, 0xFF, 0xE0, 0x03, 0xE0,
  0x00, 0x00, 0x3F, 0xFF, 0xC0, 0x01, 0xF0, 0x00, 0x00, 0x03, 0xFE, 0x00,
  0x01, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x0E, 0x00, 0x01, 0xFF, 0xC0,
  0x00, 0x00, 0x0F, 0xE0, 0x0F, 0xFF, 0x80, 0x00, 0x00, 0x07, 0xFF, 0xFF,
  0xFF, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xFE, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x3F, 0xFF, 0x00, 0x0F, 0xFF, 0xE0,
  0x03, 0xFF, 0xFE, 0x00, 0xFF, 0xFF, 0xC0, 0x1F, 0xFF, 0xF8, 0x07, 0xFF,
  0xFF, 0x00, 0xFF, 0xFF, 0xE0, 0x1F, 0xFF, 0xFC, 0x03, 0xFF, 0xFF, 0x00,
  0x7F, 0xFF, 0xE0, 0x0F, 0xFF, 0xF8, 0x00, 0xFF, 0xFE, 0x00, 0x1F, 0xFF,
  0x80, 0x01, 0xFF, 0xE0, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0,
  0x00, 0x07, 0xFF, 0x80, 0x01, 0xFF, 0xF8, 0x00, 0x7F, 0xFF, 0x00, 0x1F,
  0xFF, 0xF0, 0x07, 0xFF, 0xFE, 0x00, 0xFF, 0xFF, 0xC0, 0x3F, 0xFF, 0xF8,
  0x07, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xE0, 0x1F, 0xFF, 0xF8, 0x03, 0xFF,
  0xFF, 0x00, 0x7F, 0xFF, 0xC0, 0x07, 0xFF, 0xF0, 0x00, 0xFF, 0xFC, 0x00,
  0x0F, 0xFF, 0x00, 0x00, 0x7F, 0x80, 0x00 };

const GFXglyph FreeMonoOblique66pt7bGlyphs[] PROGMEM = {
  {     0,  53,  82,  77,   20,  -79 },   // 0x30 '0'
  {   544,  48,  79,  77,   15,  -78 },   // 0x31 '1'
  {  1018,  62,  80,  77,   11,  -79 },   // 0x32 '2'
  {  1638,  60,  82,  77,   14,  -79 },   // 0x33 '3'
  {  2253,  52,  78,  77,   18,  -77 },   // 0x34 '4'
  {  2760,  61,  80,  77,   14,  -77 },   // 0x35 '5'
  {  3370,  57,  82,  77,   24,  -79 },   // 0x36 '6'
  {  3955,  50,  78,  77,   28,  -77 },   // 0x37 '7'
  {  4443,  56,  82,  77,   18,  -79 },   // 0x38 '8'
  {  5017,  57,  82,  77,   19,  -79 },   // 0x39 '9'
  {  5602,  27,  56,  77,   31,  -53 } }; // 0x3A ':'

const GFXfont FreeMonoOblique66pt7b PROGMEM = {
  (uint8_t  *)FreeMonoOblique66pt7bBitmaps,
  (GFXglyph *)FreeMonoOblique66pt7bGlyphs,
  0x30, 0x3A, 129 };

// Approx. 5875 bytes

#endif // FreeMonoOblique66pt7b_H
