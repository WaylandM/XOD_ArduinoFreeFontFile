#ifndef FreeSerifItalic54pt7b_H
#define FreeSerifItalic54pt7b_H

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

const uint8_t FreeSerifItalic54pt7bBitmaps[] PROGMEM = {
  0x00, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x7F, 0x03, 0xF8,
  0x00, 0x00, 0x00, 0xFE, 0x00, 0x7E, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x1F,
  0x80, 0x00, 0x00, 0xFC, 0x00, 0x07, 0xC0, 0x00, 0x01, 0xFC, 0x00, 0x03,
  0xF0, 0x00, 0x01, 0xFC, 0x00, 0x00, 0xF8, 0x00, 0x01, 0xFE, 0x00, 0x00,
  0x7E, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x3F, 0x00, 0x00, 0xFE, 0x00, 0x00,
  0x0F, 0xC0, 0x00, 0xFF, 0x00, 0x00, 0x07, 0xE0, 0x00, 0xFF, 0x00, 0x00,
  0x03, 0xF0, 0x00, 0x7F, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x7F, 0x80, 0x00,
  0x00, 0xFE, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x7F, 0x00, 0x3F, 0xC0, 0x00,
  0x00, 0x3F, 0x80, 0x3F, 0xC0, 0x00, 0x00, 0x1F, 0xC0, 0x3F, 0xE0, 0x00,
  0x00, 0x0F, 0xF0, 0x1F, 0xF0, 0x00, 0x00, 0x07, 0xF8, 0x1F, 0xF0, 0x00,
  0x00, 0x03, 0xFC, 0x0F, 0xF8, 0x00, 0x00, 0x01, 0xFE, 0x07, 0xF8, 0x00,
  0x00, 0x00, 0xFF, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x7F, 0x83, 0xFE, 0x00,
  0x00, 0x00, 0x7F, 0xC3, 0xFF, 0x00, 0x00, 0x00, 0x3F, 0xE1, 0xFF, 0x00,
  0x00, 0x00, 0x1F, 0xF0, 0xFF, 0x80, 0x00, 0x00, 0x0F, 0xF8, 0xFF, 0xC0,
  0x00, 0x00, 0x07, 0xFC, 0x7F, 0xC0, 0x00, 0x00, 0x03, 0xFE, 0x3F, 0xE0,
  0x00, 0x00, 0x01, 0xFF, 0x3F, 0xF0, 0x00, 0x00, 0x01, 0xFF, 0x9F, 0xF8,
  0x00, 0x00, 0x00, 0xFF, 0xCF, 0xF8, 0x00, 0x00, 0x00, 0x7F, 0xC7, 0xFC,
  0x00, 0x00, 0x00, 0x3F, 0xE7, 0xFE, 0x00, 0x00, 0x00, 0x1F, 0xF3, 0xFF,
  0x00, 0x00, 0x00, 0x1F, 0xF9, 0xFF, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0xFF,
  0x80, 0x00, 0x00, 0x07, 0xFC, 0x7F, 0xC0, 0x00, 0x00, 0x03, 0xFE, 0x7F,
  0xE0, 0x00, 0x00, 0x03, 0xFF, 0x3F, 0xF0, 0x00, 0x00, 0x01, 0xFF, 0x9F,
  0xF0, 0x00, 0x00, 0x00, 0xFF, 0x8F, 0xF8, 0x00, 0x00, 0x00, 0x7F, 0xC7,
  0xFC, 0x00, 0x00, 0x00, 0x7F, 0xE3, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0xE1,
  0xFF, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0xFF, 0x80, 0x00, 0x00, 0x1F, 0xF0,
  0x7F, 0x80, 0x00, 0x00, 0x0F, 0xF8, 0x3F, 0xC0, 0x00, 0x00, 0x07, 0xFC,
  0x1F, 0xE0, 0x00, 0x00, 0x07, 0xFC, 0x0F, 0xF0, 0x00, 0x00, 0x03, 0xFE,
  0x07, 0xF8, 0x00, 0x00, 0x03, 0xFE, 0x03, 0xFC, 0x00, 0x00, 0x01, 0xFF,
  0x01, 0xFE, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x7F, 0x00, 0x00, 0x00, 0xFF,
  0x00, 0x3F, 0x80, 0x00, 0x00, 0x7F, 0x80, 0x1F, 0xC0, 0x00, 0x00, 0x7F,
  0x80, 0x0F, 0xE0, 0x00, 0x00, 0x7F, 0x80, 0x03, 0xF0, 0x00, 0x00, 0x3F,
  0xC0, 0x01, 0xFC, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0xFE, 0x00, 0x00, 0x3F,
  0xC0, 0x00, 0x3F, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x1F, 0xC0, 0x00, 0x1F,
  0xC0, 0x00, 0x07, 0xE0, 0x00, 0x1F, 0xC0, 0x00, 0x01, 0xF8, 0x00, 0x1F,
  0xC0, 0x00, 0x00, 0xFC, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x3F, 0x80, 0x3F,
  0xC0, 0x00, 0x00, 0x0F, 0xE0, 0x7F, 0x80, 0x00, 0x00, 0x03, 0xFF, 0xFF,
  0x80, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00,
  0x0F, 0xF0, 0x00, 0x00, 0x07, 0xFF, 0xC0, 0x00, 0x03, 0xFF, 0xFF, 0x00,
  0x00, 0x7F, 0xFF, 0xFC, 0x00, 0x01, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x03,
  0xFF, 0x80, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00,
  0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x07,
  0xFC, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00,
  0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x3F,
  0xC0, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00,
  0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x03, 0xFE,
  0x00, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00,
  0x01, 0xFF, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x1F, 0xF0,
  0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00,
  0x0F, 0xF8, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x01, 0xFF, 0x00,
  0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00,
  0x7F, 0x80, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x00,
  0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x07,
  0xFC, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00,
  0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x3F,
  0xE0, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00,
  0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x03, 0xFE,
  0x00, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00,
  0x01, 0xFF, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x1F, 0xF0,
  0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00,
  0x0F, 0xF8, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0xFF, 0x00,
  0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00,
  0x7F, 0xC0, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x00,
  0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00, 0x0F,
  0xFE, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x1F, 0xFF, 0xF8, 0x00,
  0x0F, 0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0xC0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xF0, 0x00, 0x00, 0x00,
  0x7F, 0xFF, 0xF8, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x0F,
  0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0xFF,
  0xFF, 0xFF, 0xF8, 0x00, 0x03, 0xFC, 0x07, 0xFF, 0xF8, 0x00, 0x0F, 0xC0,
  0x01, 0xFF, 0xF8, 0x00, 0x3F, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x78, 0x00,
  0x00, 0xFF, 0xF0, 0x01, 0xE0, 0x00, 0x00, 0xFF, 0xE0, 0x03, 0x80, 0x00,
  0x00, 0xFF, 0xC0, 0x0E, 0x00, 0x00, 0x01, 0xFF, 0xC0, 0x1C, 0x00, 0x00,
  0x01, 0xFF, 0x80, 0x70, 0x00, 0x00, 0x03, 0xFF, 0x00, 0xC0, 0x00, 0x00,
  0x03, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00,
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x80,
  0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00,
  0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x03,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00,
  0x00, 0x00, 0x80, 0x00, 0x7C, 0x00, 0x00, 0x01, 0x80, 0x01, 0xF0, 0x00,
  0x00, 0x07, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x0C, 0x00, 0x1F, 0x00, 0x00,
  0x00, 0x38, 0x00, 0x7C, 0x00, 0x00, 0x00, 0xF0, 0x01, 0xF0, 0x00, 0x00,
  0x0F, 0xC0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF,
  0xFE, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFC, 0x01, 0xFF, 0xFF, 0xFF, 0xFF,
  0xF8, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xC0, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x00, 0x03, 0xFF,
  0xFE, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xFF,
  0xFF, 0x00, 0x00, 0x01, 0xF8, 0x1F, 0xFE, 0x00, 0x00, 0x07, 0x80, 0x0F,
  0xFE, 0x00, 0x00, 0x1E, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x78, 0x00, 0x0F,
  0xFC, 0x00, 0x00, 0xE0, 0x00, 0x0F, 0xF8, 0x00, 0x03, 0x80, 0x00, 0x1F,
  0xF8, 0x00, 0x06, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0x80, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x80,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00,
  0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xC0, 0x00, 0x00, 0x00,
  0x7F, 0xFF, 0xE0, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x0F,
  0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xE0, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x00, 0x00,
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x03,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x1F, 0x00, 0x00, 0x03, 0xE0, 0x00,
  0x7F, 0x80, 0x00, 0x07, 0xC0, 0x01, 0xFF, 0xC0, 0x00, 0x1F, 0x00, 0x03,
  0xFF, 0xE0, 0x00, 0xF8, 0x00, 0x07, 0xFF, 0xE0, 0x03, 0xE0, 0x00, 0x0F,
  0xFF, 0xF8, 0x1F, 0x80, 0x00, 0x0F, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x0F,
  0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x0F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x03,
  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x03,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7B, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x1E, 0x7F, 0x80, 0x00, 0x00, 0x00, 0x07, 0x8F, 0xE0, 0x00,
  0x00, 0x00, 0x01, 0xE3, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x78, 0x7F, 0x80,
  0x00, 0x00, 0x00, 0x1E, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x07, 0x83, 0xFC,
  0x00, 0x00, 0x00, 0x01, 0xE0, 0x7F, 0x80, 0x00, 0x00, 0x00, 0x78, 0x0F,
  0xF0, 0x00, 0x00, 0x00, 0x1E, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x07, 0xC0,
  0x7F, 0x80, 0x00, 0x00, 0x01, 0xF0, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x7C,
  0x01, 0xFE, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x07,
  0xC0, 0x0F, 0xF0, 0x00, 0x00, 0x01, 0xF0, 0x01, 0xFE, 0x00, 0x00, 0x00,
  0x7C, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x1F, 0x00, 0x0F, 0xF0, 0x00, 0x00,
  0x07, 0xC0, 0x01, 0xFE, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x3F, 0xC0, 0x00,
  0x00, 0x7C, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x1F, 0x00, 0x01, 0xFE, 0x00,
  0x00, 0x07, 0xC0, 0x00, 0x3F, 0xC0, 0x00, 0x01, 0xF0, 0x00, 0x07, 0xF8,
  0x00, 0x00, 0x7C, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x3F,
  0xC0, 0x00, 0x03, 0xC0, 0x00, 0x07, 0xF8, 0x00, 0x00, 0xF0, 0x00, 0x00,
  0xFE, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x0F, 0x00, 0x00,
  0x07, 0xF8, 0x00, 0x03, 0xE0, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xF8, 0x00,
  0x00, 0x3F, 0xC0, 0x00, 0x3E, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x0F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xC1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x3F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC1,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x1F, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x03,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF,
  0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x3F,
  0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x03,
  0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00,
  0x7F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xF0, 0x00,
  0x00, 0x00, 0x03, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF,
  0xC0, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x07, 0xFF,
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xE0, 0x00, 0x07, 0x80, 0x00, 0x01, 0xF0, 0x00, 0x07,
  0xF8, 0x00, 0x01, 0xF8, 0x00, 0x01, 0xFF, 0x80, 0x00, 0xFC, 0x00, 0x00,
  0x7F, 0xF8, 0x00, 0xFE, 0x00, 0x00, 0x1F, 0xFF, 0x80, 0xFF, 0x00, 0x00,
  0x07, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
  0x00, 0x3F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF,
  0x80, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0xFE, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0xCF,
  0xFF, 0xF0, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x03, 0xFF,
  0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x3F, 0xFF, 0x80, 0xFF, 0xF0, 0x00, 0x07,
  0xFF, 0xE0, 0x01, 0xFF, 0x80, 0x00, 0x7F, 0xF8, 0x00, 0x0F, 0xFC, 0x00,
  0x0F, 0xFF, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0xFF, 0xE0, 0x00, 0x03, 0xFE,
  0x00, 0x1F, 0xFC, 0x00, 0x00, 0x1F, 0xF0, 0x01, 0xFF, 0x80, 0x00, 0x01,
  0xFF, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x0F, 0xF8, 0x03, 0xFF, 0x00, 0x00,
  0x00, 0xFF, 0x80, 0x3F, 0xF0, 0x00, 0x00, 0x07, 0xF8, 0x03, 0xFE, 0x00,
  0x00, 0x00, 0x7F, 0xC0, 0x7F, 0xE0, 0x00, 0x00, 0x07, 0xFC, 0x07, 0xFE,
  0x00, 0x00, 0x00, 0x7F, 0xC0, 0x7F, 0xC0, 0x00, 0x00, 0x07, 0xFC, 0x07,
  0xFC, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x7F, 0xC0, 0x00, 0x00, 0x07, 0xFC,
  0x0F, 0xFC, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0xFF, 0x80, 0x00, 0x00, 0x07,
  0xFC, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0xFF, 0x80, 0x00, 0x00,
  0x0F, 0xFC, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0xFF, 0x80, 0x00,
  0x00, 0x0F, 0xF8, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0xFF, 0x80, 0xFF, 0x00,
  0x00, 0x00, 0x0F, 0xF8, 0x0F, 0xF0, 0x00, 0x00, 0x01, 0xFF, 0x80, 0xFF,
  0x00, 0x00, 0x00, 0x1F, 0xF0, 0x0F, 0xF0, 0x00, 0x00, 0x01, 0xFF, 0x00,
  0xFF, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x0F, 0xF0, 0x00, 0x00, 0x03, 0xFE,
  0x00, 0x7F, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x07, 0xF0, 0x00, 0x00, 0x07,
  0xFC, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x03, 0xF0, 0x00, 0x00,
  0x07, 0xF8, 0x00, 0x3F, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x03, 0xF8, 0x00,
  0x00, 0x0F, 0xF0, 0x00, 0x1F, 0x80, 0x00, 0x01, 0xFE, 0x00, 0x00, 0xF8,
  0x00, 0x00, 0x3F, 0xC0, 0x00, 0x0F, 0xC0, 0x00, 0x07, 0xF8, 0x00, 0x00,
  0x7C, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x1F, 0xE0, 0x00,
  0x00, 0x1F, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x7F, 0x00,
  0x00, 0x00, 0x03, 0xE0, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x7F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xC0, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xE0, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x3F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xF0, 0x1F, 0xC0, 0x00, 0x00, 0x03, 0xF0, 0x1F, 0x00,
  0x00, 0x00, 0x01, 0xF8, 0x0F, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x0E, 0x00,
  0x00, 0x00, 0x01, 0xF8, 0x0E, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x06, 0x00,
  0x00, 0x00, 0x00, 0xFC, 0x06, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0x80, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x03,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x03,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x00,
  0x00, 0x00, 0x03, 0xF8, 0x0F, 0xE0, 0x00, 0x00, 0x07, 0xF0, 0x01, 0xFC,
  0x00, 0x00, 0x07, 0xF0, 0x00, 0x3F, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x0F,
  0xC0, 0x00, 0x07, 0xF0, 0x00, 0x03, 0xF0, 0x00, 0x07, 0xF0, 0x00, 0x01,
  0xFC, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x7F, 0x00, 0x03, 0xFC, 0x00, 0x00,
  0x3F, 0x80, 0x01, 0xFC, 0x00, 0x00, 0x0F, 0xC0, 0x01, 0xFE, 0x00, 0x00,
  0x07, 0xF0, 0x00, 0xFF, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x7F, 0x80, 0x00,
  0x01, 0xFC, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0xFE, 0x00, 0x1F, 0xE0, 0x00,
  0x00, 0x7F, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x3F, 0x80, 0x07, 0xFC, 0x00,
  0x00, 0x1F, 0xC0, 0x03, 0xFE, 0x00, 0x00, 0x1F, 0xC0, 0x01, 0xFF, 0x00,
  0x00, 0x0F, 0xE0, 0x00, 0x7F, 0xC0, 0x00, 0x07, 0xF0, 0x00, 0x3F, 0xF0,
  0x00, 0x07, 0xF0, 0x00, 0x1F, 0xFC, 0x00, 0x07, 0xF0, 0x00, 0x07, 0xFE,
  0x00, 0x03, 0xF8, 0x00, 0x03, 0xFF, 0x80, 0x03, 0xF8, 0x00, 0x00, 0xFF,
  0xE0, 0x07, 0xF0, 0x00, 0x00, 0x3F, 0xF8, 0x07, 0xF0, 0x00, 0x00, 0x1F,
  0xFE, 0x0F, 0xE0, 0x00, 0x00, 0x07, 0xFF, 0x9F, 0xC0, 0x00, 0x00, 0x01,
  0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x80, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x00, 0x00,
  0x3F, 0x9F, 0xFE, 0x00, 0x00, 0x00, 0x7F, 0x07, 0xFF, 0x80, 0x00, 0x00,
  0xFE, 0x01, 0xFF, 0xE0, 0x00, 0x00, 0xFE, 0x00, 0xFF, 0xF0, 0x00, 0x01,
  0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x01, 0xFC, 0x00, 0x0F, 0xFF, 0x00, 0x01,
  0xFC, 0x00, 0x03, 0xFF, 0x80, 0x01, 0xFC, 0x00, 0x00, 0xFF, 0xE0, 0x01,
  0xFC, 0x00, 0x00, 0x3F, 0xF8, 0x01, 0xFC, 0x00, 0x00, 0x0F, 0xFC, 0x00,
  0xFE, 0x00, 0x00, 0x03, 0xFF, 0x00, 0xFE, 0x00, 0x00, 0x01, 0xFF, 0x80,
  0xFF, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x7F, 0x00, 0x00, 0x00, 0x1F, 0xE0,
  0x3F, 0x80, 0x00, 0x00, 0x0F, 0xF8, 0x3F, 0xC0, 0x00, 0x00, 0x07, 0xFC,
  0x1F, 0xC0, 0x00, 0x00, 0x01, 0xFE, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0xFF,
  0x07, 0xF0, 0x00, 0x00, 0x00, 0x7F, 0x83, 0xF8, 0x00, 0x00, 0x00, 0x3F,
  0xC1, 0xFC, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0xFE, 0x00, 0x00, 0x00, 0x0F,
  0xF0, 0x7F, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x3F, 0x80, 0x00, 0x00, 0x03,
  0xF8, 0x0F, 0xE0, 0x00, 0x00, 0x03, 0xFC, 0x07, 0xF0, 0x00, 0x00, 0x01,
  0xFC, 0x03, 0xF8, 0x00, 0x00, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0x00, 0x00,
  0xFE, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x1F, 0xC0, 0x00, 0x00,
  0x7F, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x7F, 0x00, 0x01, 0xFC, 0x00, 0x00,
  0x7F, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x0F, 0xE0, 0x00,
  0xFE, 0x00, 0x00, 0x03, 0xFE, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x3F, 0xFF,
  0xF8, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0xFF, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x1F, 0x00, 0x00, 0x00,
  0x7F, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x7C, 0x00, 0x00,
  0x1F, 0x80, 0x00, 0x0F, 0x80, 0x00, 0x0F, 0xC0, 0x00, 0x03, 0xF0, 0x00,
  0x07, 0xE0, 0x00, 0x00, 0x7C, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x1F, 0x80,
  0x01, 0xFC, 0x00, 0x00, 0x07, 0xF0, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFC,
  0x00, 0x3F, 0x80, 0x00, 0x00, 0x3F, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x0F,
  0xE0, 0x0F, 0xF8, 0x00, 0x00, 0x03, 0xF8, 0x03, 0xFC, 0x00, 0x00, 0x00,
  0xFE, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x7F, 0xC0, 0x00, 0x00,
  0x0F, 0xF0, 0x1F, 0xE0, 0x00, 0x00, 0x03, 0xFC, 0x0F, 0xF8, 0x00, 0x00,
  0x00, 0xFF, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0xFF, 0x80, 0x00,
  0x00, 0x0F, 0xF0, 0x7F, 0xC0, 0x00, 0x00, 0x03, 0xFC, 0x1F, 0xF0, 0x00,
  0x00, 0x01, 0xFF, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x7F, 0xC1, 0xFF, 0x00,
  0x00, 0x00, 0x1F, 0xF0, 0x7F, 0xC0, 0x00, 0x00, 0x07, 0xFC, 0x1F, 0xF0,
  0x00, 0x00, 0x01, 0xFF, 0x07, 0xFC, 0x00, 0x00, 0x00, 0xFF, 0xC1, 0xFF,
  0x00, 0x00, 0x00, 0x3F, 0xE0, 0x7F, 0xC0, 0x00, 0x00, 0x0F, 0xF8, 0x1F,
  0xF0, 0x00, 0x00, 0x07, 0xFE, 0x07, 0xFC, 0x00, 0x00, 0x01, 0xFF, 0x80,
  0xFF, 0x80, 0x00, 0x00, 0x7F, 0xE0, 0x3F, 0xE0, 0x00, 0x00, 0x3F, 0xF0,
  0x0F, 0xF8, 0x00, 0x00, 0x0F, 0xFC, 0x03, 0xFF, 0x00, 0x00, 0x07, 0xFF,
  0x00, 0x7F, 0xC0, 0x00, 0x03, 0xFF, 0x80, 0x1F, 0xF8, 0x00, 0x01, 0xFF,
  0xE0, 0x03, 0xFF, 0x00, 0x01, 0xFF, 0xF8, 0x00, 0x7F, 0xE0, 0x00, 0xFF,
  0xFC, 0x00, 0x1F, 0xFE, 0x01, 0xFF, 0xFF, 0x00, 0x03, 0xFF, 0xFF, 0xFD,
  0xFF, 0x80, 0x00, 0x7F, 0xFF, 0xFC, 0xFF, 0xE0, 0x00, 0x0F, 0xFF, 0xFC,
  0x3F, 0xF0, 0x00, 0x00, 0xFF, 0xFC, 0x1F, 0xFC, 0x00, 0x00, 0x07, 0xF8,
  0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00,
  0x00, 0x01, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
  0x80, 0x01, 0xFC, 0x00, 0x3F, 0xE0, 0x03, 0xFE, 0x00, 0x7F, 0xF0, 0x07,
  0xFF, 0x00, 0x7F, 0xF0, 0x07, 0xFF, 0x00, 0x7F, 0xF0, 0x03, 0xFE, 0x00,
  0x1F, 0xC0, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x01, 0xF0, 0x00, 0x3F, 0x80, 0x07, 0xFC, 0x00, 0x7F, 0xC0, 0x0F,
  0xFE, 0x00, 0xFF, 0xE0, 0x0F, 0xFE, 0x00, 0xFF, 0xE0, 0x0F, 0xFE, 0x00,
  0x7F, 0xC0, 0x03, 0xF8, 0x00, 0x1F, 0x00, 0x00 };

const GFXglyph FreeSerifItalic54pt7bGlyphs[] PROGMEM = {
  {     0,  49,  73,  53,    3,  -71 },   // 0x30 '0'
  {   448,  38,  72,  53,    5,  -71 },   // 0x31 '1'
  {   790,  47,  71,  53,    1,  -70 },   // 0x32 '2'
  {  1208,  47,  73,  53,    2,  -71 },   // 0x33 '3'
  {  1637,  51,  72,  53,    0,  -71 },   // 0x34 '4'
  {  2096,  50,  71,  53,    1,  -69 },   // 0x35 '5'
  {  2540,  52,  74,  53,    3,  -72 },   // 0x36 '6'
  {  3021,  49,  71,  53,    8,  -69 },   // 0x37 '7'
  {  3456,  49,  72,  53,    3,  -70 },   // 0x38 '8'
  {  3897,  50,  73,  53,    2,  -70 },   // 0x39 '9'
  {  4354,  20,  47,  26,    5,  -45 } }; // 0x3A ':'

const GFXfont FreeSerifItalic54pt7b PROGMEM = {
  (uint8_t  *)FreeSerifItalic54pt7bBitmaps,
  (GFXglyph *)FreeSerifItalic54pt7bGlyphs,
  0x30, 0x3A, 127 };

// Approx. 4556 bytes

#endif // FreeSerifItalic54pt7b_H
