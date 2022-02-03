#ifndef FreeSansBold16pt7b_H
#define FreeSansBold16pt7b_H

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

const uint8_t FreeSansBold16pt7bBitmaps[] PROGMEM = {
  0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDC, 0xE7, 0x39, 0xCE, 0x00,
  0x3F, 0xFF, 0xFC, 0xF9, 0xFF, 0x9F, 0xF9, 0xFF, 0x9F, 0xF9, 0xF7, 0x0E,
  0x70, 0xE7, 0x0E, 0x03, 0x8E, 0x03, 0xC7, 0x01, 0xC3, 0x80, 0xE3, 0xC0,
  0x71, 0xE3, 0xFF, 0xFD, 0xFF, 0xFE, 0xFF, 0xFF, 0x0E, 0x3C, 0x07, 0x1E,
  0x03, 0x8E, 0x03, 0xC7, 0x01, 0xC3, 0x87, 0xFF, 0xFB, 0xFF, 0xFD, 0xFF,
  0xFE, 0x3C, 0x70, 0x1C, 0x38, 0x0E, 0x3C, 0x07, 0x1E, 0x03, 0x8E, 0x03,
  0xC7, 0x00, 0x00, 0xC0, 0x03, 0xFC, 0x07, 0xFF, 0x87, 0xFF, 0xE3, 0xCD,
  0xF3, 0xC6, 0x7D, 0xE3, 0x3E, 0xF1, 0x80, 0x7C, 0xC0, 0x1F, 0xE0, 0x0F,
  0xF8, 0x03, 0xFF, 0x80, 0x7F, 0xE0, 0x07, 0xF8, 0x03, 0x7E, 0x01, 0x9F,
  0xF8, 0xCF, 0xFC, 0x67, 0xFF, 0x33, 0xEF, 0xDB, 0xE3, 0xFF, 0xF0, 0xFF,
  0xF0, 0x1F, 0xC0, 0x01, 0x80, 0x00, 0xC0, 0x00, 0x60, 0x00, 0x1F, 0x00,
  0x70, 0x0F, 0xE0, 0x18, 0x07, 0xFC, 0x0E, 0x03, 0xC7, 0x83, 0x00, 0xE0,
  0xE1, 0xC0, 0x38, 0x38, 0xE0, 0x0E, 0x0E, 0x38, 0x03, 0xC7, 0x9C, 0x00,
  0x7F, 0xC6, 0x00, 0x0F, 0xE3, 0x80, 0x01, 0xF0, 0xC0, 0x00, 0x00, 0x71,
  0xF8, 0x00, 0x18, 0xFF, 0x00, 0x0E, 0x7F, 0xE0, 0x03, 0x3C, 0x3C, 0x01,
  0xCE, 0x07, 0x00, 0x63, 0x81, 0xC0, 0x30, 0xE0, 0x70, 0x1C, 0x3C, 0x3C,
  0x06, 0x07, 0xFE, 0x03, 0x80, 0xFF, 0x00, 0xC0, 0x1F, 0x00, 0x01, 0xE0,
  0x00, 0xFE, 0x00, 0x3F, 0xE0, 0x0F, 0x9C, 0x01, 0xF3, 0x80, 0x3E, 0x70,
  0x07, 0xFE, 0x00, 0x7F, 0x80, 0x07, 0xE0, 0x00, 0xF8, 0x00, 0x7F, 0x8E,
  0x1F, 0xF9, 0xC7, 0xC7, 0x79, 0xF0, 0xFF, 0x3E, 0x0F, 0xC7, 0xC1, 0xF8,
  0xFC, 0x1E, 0x1F, 0xC7, 0xE1, 0xFF, 0xFE, 0x1F, 0xFF, 0xC1, 0xFF, 0x7C,
  0x0F, 0xC7, 0xC0, 0xFF, 0xFF, 0xFF, 0xB9, 0xCE, 0x07, 0x0F, 0x0E, 0x1E,
  0x1C, 0x3C, 0x38, 0x78, 0x78, 0x78, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
  0xF0, 0xF0, 0xF0, 0x78, 0x78, 0x78, 0x38, 0x3C, 0x1C, 0x1E, 0x0E, 0x0F,
  0x07, 0xE0, 0xF0, 0x70, 0x78, 0x38, 0x3C, 0x1C, 0x1E, 0x1E, 0x1E, 0x0F,
  0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x1E, 0x1E, 0x1E, 0x1C,
  0x3C, 0x38, 0x78, 0x70, 0xF0, 0xE0, 0x0C, 0x03, 0x00, 0xC3, 0xFF, 0xFF,
  0xC7, 0x81, 0xE0, 0xFC, 0x73, 0x88, 0x40, 0x03, 0x80, 0x07, 0x00, 0x0E,
  0x00, 0x1C, 0x00, 0x38, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
  0x07, 0x00, 0x0E, 0x00, 0x1C, 0x00, 0x38, 0x00, 0x70, 0x00, 0xFF, 0xFF,
  0xF1, 0x8C, 0xEE, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x03,
  0x03, 0x06, 0x06, 0x06, 0x0E, 0x0C, 0x0C, 0x0C, 0x18, 0x18, 0x18, 0x18,
  0x30, 0x30, 0x30, 0x70, 0x60, 0x60, 0x60, 0xC0, 0xC0, 0x07, 0xE0, 0x1F,
  0xF8, 0x3F, 0xFC, 0x7F, 0xFE, 0x7E, 0x7E, 0x7C, 0x3E, 0xF8, 0x1F, 0xF8,
  0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8,
  0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0x7C, 0x3E, 0x7C, 0x3E, 0x7F, 0xFC, 0x3F,
  0xFC, 0x1F, 0xF8, 0x07, 0xE0, 0x03, 0x83, 0xC1, 0xE3, 0xFF, 0xFF, 0xFF,
  0xFE, 0x1F, 0x0F, 0x87, 0xC3, 0xE1, 0xF0, 0xF8, 0x7C, 0x3E, 0x1F, 0x0F,
  0x87, 0xC3, 0xE1, 0xF0, 0xF8, 0x7C, 0x07, 0xE0, 0x1F, 0xF8, 0x3F, 0xFC,
  0x7F, 0xFE, 0xFC, 0x3F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0x00, 0x1F,
  0x00, 0x3F, 0x00, 0x3E, 0x00, 0x7C, 0x01, 0xF8, 0x03, 0xF0, 0x07, 0xC0,
  0x0F, 0x80, 0x1E, 0x00, 0x1C, 0x00, 0x3F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF,
  0x3F, 0xFF, 0x0F, 0xE0, 0x3F, 0xF8, 0x7F, 0xFC, 0x7F, 0xFC, 0xFC, 0x7E,
  0xF8, 0x3E, 0xF8, 0x3E, 0x00, 0x3E, 0x00, 0x7C, 0x01, 0xF8, 0x01, 0xF8,
  0x01, 0xFC, 0x00, 0x3E, 0x00, 0x1F, 0x00, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F,
  0xFC, 0x3F, 0x7F, 0xFE, 0x7F, 0xFC, 0x1F, 0xF8, 0x0F, 0xE0, 0x00, 0xF8,
  0x07, 0xE0, 0x3F, 0x80, 0xFE, 0x07, 0xF8, 0x1B, 0xE0, 0xEF, 0x83, 0x3E,
  0x1C, 0xF8, 0x63, 0xE3, 0x0F, 0x9C, 0x3E, 0x60, 0xFB, 0x83, 0xEF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x0F, 0x80, 0x3E, 0x00, 0xF8, 0x03,
  0xE0, 0x3F, 0xFE, 0x3F, 0xFE, 0x3F, 0xFE, 0x3F, 0xFE, 0x38, 0x00, 0x78,
  0x00, 0x7B, 0xE0, 0x77, 0xF8, 0x7F, 0xFC, 0x7F, 0xFE, 0x78, 0x7E, 0x00,
  0x3F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0xF0, 0x3F, 0xF8,
  0x7E, 0x7F, 0xFE, 0x7F, 0xFC, 0x3F, 0xF8, 0x0F, 0xC0, 0x07, 0xF0, 0x1F,
  0xFC, 0x3F, 0xFC, 0x3F, 0xFE, 0x7E, 0x3E, 0x7C, 0x00, 0x78, 0x00, 0xF8,
  0x00, 0xF9, 0xF0, 0xFF, 0xFC, 0xFF, 0xFE, 0xFC, 0x3E, 0xFC, 0x1F, 0xF8,
  0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0x78, 0x3F, 0x7C, 0x3E, 0x7F, 0xFE, 0x3F,
  0xFC, 0x1F, 0xF8, 0x07, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xF0, 0x03, 0xC0, 0x0F, 0x80, 0x1E, 0x00, 0x78, 0x01, 0xF0, 0x03, 0xC0,
  0x0F, 0x80, 0x1E, 0x00, 0x7C, 0x00, 0xF8, 0x01, 0xE0, 0x07, 0xC0, 0x0F,
  0x80, 0x1F, 0x00, 0x3C, 0x00, 0xF8, 0x01, 0xF0, 0x03, 0xE0, 0x00, 0x07,
  0xC0, 0x1F, 0xF0, 0x3F, 0xF8, 0x3F, 0xF8, 0x7C, 0x3C, 0x78, 0x1C, 0x78,
  0x1C, 0x78, 0x1C, 0x3C, 0x38, 0x1F, 0xF8, 0x0F, 0xF0, 0x3F, 0xFC, 0x7C,
  0x3E, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xFC, 0x3F, 0x7F,
  0xFE, 0x3F, 0xFC, 0x1F, 0xF8, 0x07, 0xE0, 0x07, 0xE0, 0x1F, 0xF8, 0x3F,
  0xFC, 0x7F, 0xFE, 0x7C, 0x3E, 0xF8, 0x1E, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8,
  0x1F, 0xF8, 0x1F, 0xFC, 0x3F, 0x7F, 0xFF, 0x3F, 0xFF, 0x1F, 0xDF, 0x0F,
  0x9F, 0x00, 0x1E, 0x00, 0x3E, 0xFC, 0x7E, 0x7F, 0xFC, 0x7F, 0xFC, 0x3F,
  0xF0, 0x0F, 0xE0, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0x18,
  0xCF, 0xEE, 0x00, 0x00, 0x02, 0x00, 0x3C, 0x01, 0xF8, 0x1F, 0xF1, 0xFF,
  0x0F, 0xF0, 0x3F, 0x00, 0x78, 0x00, 0xFE, 0x00, 0xFF, 0x00, 0x7F, 0xC0,
  0x1F, 0xF0, 0x07, 0xE0, 0x03, 0xC0, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xC0, 0x01, 0xE0, 0x03, 0xF8, 0x07, 0xFE,
  0x01, 0xFF, 0x00, 0x7F, 0xC0, 0x1F, 0x80, 0x07, 0x00, 0x7E, 0x07, 0xFC,
  0x7F, 0xC3, 0xFE, 0x0F, 0xE0, 0x1E, 0x00, 0x30, 0x00, 0x00, 0x0F, 0xE0,
  0x3F, 0xF8, 0x7F, 0xFC, 0x7F, 0xFE, 0xFC, 0x7E, 0xF8, 0x3F, 0xF8, 0x1F,
  0xF8, 0x1F, 0x00, 0x1F, 0x00, 0x3F, 0x00, 0x7E, 0x00, 0xFC, 0x01, 0xF8,
  0x03, 0xF0, 0x07, 0xC0, 0x07, 0x80, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xC0, 0x07, 0xC0, 0x07, 0xC0, 0x07, 0xC0, 0x00, 0x1F, 0xE0, 0x00,
  0x0F, 0xFF, 0xC0, 0x01, 0xFF, 0xFE, 0x00, 0x7E, 0x03, 0xF8, 0x0F, 0x80,
  0x0F, 0xC1, 0xF0, 0x00, 0x3C, 0x3C, 0x00, 0x01, 0xE3, 0x80, 0xF9, 0x8E,
  0x78, 0x3F, 0xF8, 0xF7, 0x07, 0x8F, 0x87, 0x70, 0x70, 0x78, 0x7E, 0x0E,
  0x07, 0x07, 0xE0, 0xC0, 0x70, 0x7E, 0x1C, 0x07, 0x07, 0xE1, 0xC0, 0xE0,
  0xFE, 0x1C, 0x0E, 0x0E, 0xE1, 0xC1, 0xE1, 0xEF, 0x1E, 0x3E, 0x3C, 0x70,
  0xFF, 0xFF, 0x87, 0x8F, 0xF7, 0xF0, 0x7C, 0x3C, 0x3E, 0x03, 0xE0, 0x00,
  0x00, 0x1F, 0x00, 0x00, 0x00, 0xFC, 0x03, 0x00, 0x07, 0xFF, 0xF8, 0x00,
  0x1F, 0xFF, 0x80, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0xFC, 0x00, 0x07, 0xE0,
  0x00, 0x7F, 0x00, 0x03, 0xFC, 0x00, 0x1F, 0xE0, 0x01, 0xFF, 0x00, 0x0F,
  0x7C, 0x00, 0x79, 0xE0, 0x07, 0xCF, 0x00, 0x3C, 0x7C, 0x01, 0xE1, 0xE0,
  0x1F, 0x0F, 0x00, 0xF0, 0x7C, 0x07, 0x81, 0xE0, 0x7F, 0xFF, 0x03, 0xFF,
  0xFC, 0x1F, 0xFF, 0xE1, 0xFF, 0xFF, 0x0F, 0x00, 0x7C, 0x78, 0x03, 0xE7,
  0xC0, 0x0F, 0x3E, 0x00, 0x7F, 0xE0, 0x03, 0xE0, 0xFF, 0xFC, 0x1F, 0xFF,
  0xE3, 0xFF, 0xFE, 0x7F, 0xFF, 0xCF, 0x80, 0xFD, 0xF0, 0x0F, 0xBE, 0x01,
  0xF7, 0xC0, 0x3E, 0xF8, 0x0F, 0x9F, 0xFF, 0xE3, 0xFF, 0xF8, 0x7F, 0xFF,
  0x8F, 0xFF, 0xF9, 0xF0, 0x0F, 0xBE, 0x00, 0xFF, 0xC0, 0x1F, 0xF8, 0x03,
  0xFF, 0x00, 0x7F, 0xE0, 0x1F, 0xFF, 0xFF, 0xEF, 0xFF, 0xF9, 0xFF, 0xFE,
  0x3F, 0xFF, 0x00, 0x01, 0xFE, 0x00, 0x3F, 0xFC, 0x03, 0xFF, 0xF0, 0x3F,
  0xFF, 0xC3, 0xF8, 0x7F, 0x3F, 0x00, 0xF9, 0xF0, 0x07, 0xFF, 0x80, 0x1F,
  0xF8, 0x00, 0x07, 0xC0, 0x00, 0x3E, 0x00, 0x01, 0xF0, 0x00, 0x0F, 0x80,
  0x00, 0x7C, 0x00, 0x03, 0xE0, 0x00, 0x1F, 0x80, 0x1F, 0x7C, 0x00, 0xFB,
  0xF0, 0x0F, 0xCF, 0xC1, 0xFC, 0x3F, 0xFF, 0xC1, 0xFF, 0xFC, 0x03, 0xFF,
  0xC0, 0x07, 0xF8, 0x00, 0xFF, 0xF8, 0x0F, 0xFF, 0xF0, 0xFF, 0xFF, 0x8F,
  0xFF, 0xFC, 0xF8, 0x0F, 0xCF, 0x80, 0x7E, 0xF8, 0x03, 0xEF, 0x80, 0x3F,
  0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01,
  0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x3F, 0xF8, 0x03, 0xEF, 0x80,
  0x7E, 0xF8, 0x0F, 0xCF, 0xFF, 0xFC, 0xFF, 0xFF, 0x8F, 0xFF, 0xF0, 0xFF,
  0xFC, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00,
  0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xFF, 0xFE, 0xFF, 0xFE,
  0xFF, 0xFE, 0xFF, 0xFE, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00,
  0xF8, 0x00, 0xF8, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0x00, 0x3E,
  0x00, 0x7C, 0x00, 0xF8, 0x01, 0xFF, 0xFB, 0xFF, 0xF7, 0xFF, 0xEF, 0xFF,
  0xDF, 0x00, 0x3E, 0x00, 0x7C, 0x00, 0xF8, 0x01, 0xF0, 0x03, 0xE0, 0x07,
  0xC0, 0x0F, 0x80, 0x1F, 0x00, 0x3E, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x3F,
  0xFC, 0x03, 0xFF, 0xF8, 0x3F, 0xFF, 0xE3, 0xF8, 0x3F, 0x3F, 0x00, 0xFD,
  0xF0, 0x03, 0xFF, 0x80, 0x00, 0xF8, 0x00, 0x07, 0xC0, 0x00, 0x3E, 0x03,
  0xFF, 0xF0, 0x1F, 0xFF, 0x80, 0xFF, 0xFC, 0x07, 0xFF, 0xF0, 0x01, 0xEF,
  0x80, 0x0F, 0x7E, 0x00, 0xF9, 0xF0, 0x0F, 0xCF, 0xE0, 0xFE, 0x3F, 0xFF,
  0xF0, 0xFF, 0xFB, 0x83, 0xFF, 0x9C, 0x07, 0xF0, 0xE0, 0xF8, 0x03, 0xFF,
  0x00, 0x7F, 0xE0, 0x0F, 0xFC, 0x01, 0xFF, 0x80, 0x3F, 0xF0, 0x07, 0xFE,
  0x00, 0xFF, 0xC0, 0x1F, 0xF8, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x07, 0xFE, 0x00, 0xFF, 0xC0, 0x1F, 0xF8,
  0x03, 0xFF, 0x00, 0x7F, 0xE0, 0x0F, 0xFC, 0x01, 0xFF, 0x80, 0x3F, 0xF0,
  0x07, 0xFE, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x3E, 0x00, 0x7C, 0x00,
  0xF8, 0x01, 0xF0, 0x03, 0xE0, 0x07, 0xC0, 0x0F, 0x80, 0x1F, 0x00, 0x3E,
  0x00, 0x7C, 0x00, 0xF8, 0x01, 0xF0, 0x03, 0xE0, 0x07, 0xFE, 0x0F, 0xFC,
  0x1F, 0xF8, 0x3F, 0xF0, 0x7F, 0xF1, 0xFB, 0xFF, 0xE7, 0xFF, 0xC7, 0xFF,
  0x03, 0xF8, 0x00, 0xF8, 0x07, 0xEF, 0x80, 0x7C, 0xF8, 0x0F, 0x8F, 0x81,
  0xF0, 0xF8, 0x3E, 0x0F, 0x87, 0xC0, 0xF8, 0xF8, 0x0F, 0x9F, 0x80, 0xFB,
  0xF0, 0x0F, 0xBE, 0x00, 0xFF, 0xE0, 0x0F, 0xFF, 0x00, 0xFF, 0xF0, 0x0F,
  0xEF, 0x80, 0xFC, 0x7C, 0x0F, 0x87, 0xE0, 0xF8, 0x3E, 0x0F, 0x81, 0xF0,
  0xF8, 0x1F, 0x8F, 0x80, 0xFC, 0xF8, 0x07, 0xCF, 0x80, 0x3E, 0xF8, 0x03,
  0xF0, 0xF8, 0x01, 0xF0, 0x03, 0xE0, 0x07, 0xC0, 0x0F, 0x80, 0x1F, 0x00,
  0x3E, 0x00, 0x7C, 0x00, 0xF8, 0x01, 0xF0, 0x03, 0xE0, 0x07, 0xC0, 0x0F,
  0x80, 0x1F, 0x00, 0x3E, 0x00, 0x7C, 0x00, 0xF8, 0x01, 0xF0, 0x03, 0xE0,
  0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFE, 0x00, 0xFF,
  0xFE, 0x01, 0xFF, 0xFC, 0x03, 0xFF, 0xF8, 0x0F, 0xFF, 0xF0, 0x1F, 0xFF,
  0xF0, 0x3F, 0xFF, 0xE0, 0x7F, 0xFD, 0xC1, 0xFF, 0xFB, 0x83, 0xBF, 0xF7,
  0x87, 0x7F, 0xEF, 0x0E, 0xFF, 0xCE, 0x1D, 0xFF, 0x9C, 0x73, 0xFF, 0x38,
  0xE7, 0xFE, 0x79, 0xCF, 0xFC, 0xF3, 0x9F, 0xF8, 0xEE, 0x3F, 0xF1, 0xDC,
  0x7F, 0xE3, 0xF8, 0xFF, 0xC7, 0xF1, 0xFF, 0x87, 0xE3, 0xFF, 0x0F, 0x87,
  0xFE, 0x1F, 0x0F, 0x80, 0xF8, 0x03, 0xFF, 0x80, 0x7F, 0xF8, 0x0F, 0xFF,
  0x01, 0xFF, 0xF0, 0x3F, 0xFE, 0x07, 0xFF, 0xE0, 0xFF, 0xFC, 0x1F, 0xFB,
  0xC3, 0xFF, 0x7C, 0x7F, 0xE7, 0x8F, 0xFC, 0xF9, 0xFF, 0x8F, 0x3F, 0xF0,
  0xF7, 0xFE, 0x1E, 0xFF, 0xC1, 0xFF, 0xF8, 0x3F, 0xFF, 0x03, 0xFF, 0xE0,
  0x7F, 0xFC, 0x07, 0xFF, 0x80, 0x7F, 0xF0, 0x0F, 0xFE, 0x00, 0xF8, 0x01,
  0xFE, 0x00, 0x1F, 0xFE, 0x00, 0xFF, 0xFC, 0x07, 0xFF, 0xF8, 0x3F, 0x87,
  0xF1, 0xF8, 0x07, 0xE7, 0xC0, 0x0F, 0x9F, 0x00, 0x3E, 0xF8, 0x00, 0x7F,
  0xE0, 0x01, 0xFF, 0x80, 0x07, 0xFE, 0x00, 0x1F, 0xF8, 0x00, 0x7F, 0xE0,
  0x01, 0xFF, 0x80, 0x07, 0xDF, 0x00, 0x3E, 0x7C, 0x00, 0xF9, 0xF8, 0x07,
  0xE3, 0xF8, 0x7F, 0x07, 0xFF, 0xF8, 0x0F, 0xFF, 0xC0, 0x1F, 0xFE, 0x00,
  0x1F, 0xE0, 0x00, 0xFF, 0xFC, 0x3F, 0xFF, 0xCF, 0xFF, 0xFB, 0xFF, 0xFE,
  0xF8, 0x0F, 0xFE, 0x01, 0xFF, 0x80, 0x7F, 0xE0, 0x1F, 0xF8, 0x07, 0xFE,
  0x01, 0xFF, 0x80, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0x3F, 0xFF, 0x8F, 0xFF,
  0xC3, 0xE0, 0x00, 0xF8, 0x00, 0x3E, 0x00, 0x0F, 0x80, 0x03, 0xE0, 0x00,
  0xF8, 0x00, 0x3E, 0x00, 0x0F, 0x80, 0x00, 0x01, 0xFE, 0x00, 0x1F, 0xFE,
  0x00, 0xFF, 0xFC, 0x07, 0xFF, 0xF8, 0x3F, 0x87, 0xF1, 0xF8, 0x07, 0xE7,
  0xC0, 0x0F, 0x9F, 0x00, 0x3E, 0xF8, 0x00, 0x7F, 0xE0, 0x01, 0xFF, 0x80,
  0x07, 0xFE, 0x00, 0x1F, 0xF8, 0x00, 0x7F, 0xE0, 0x01, 0xFF, 0x80, 0x47,
  0xDF, 0x03, 0xBE, 0x7C, 0x0F, 0xF9, 0xF8, 0x1F, 0xC3, 0xF8, 0x7F, 0x07,
  0xFF, 0xFC, 0x0F, 0xFF, 0xF8, 0x1F, 0xFF, 0xF0, 0x1F, 0xC3, 0x80, 0x00,
  0x04, 0xFF, 0xFF, 0x0F, 0xFF, 0xF8, 0xFF, 0xFF, 0xCF, 0xFF, 0xFC, 0xF8,
  0x07, 0xEF, 0x80, 0x3E, 0xF8, 0x03, 0xEF, 0x80, 0x3E, 0xF8, 0x03, 0xEF,
  0x80, 0x7C, 0xFF, 0xFF, 0x8F, 0xFF, 0xF0, 0xFF, 0xFF, 0x0F, 0xFF, 0xF8,
  0xF8, 0x0F, 0xCF, 0x80, 0x7C, 0xF8, 0x07, 0xCF, 0x80, 0x7C, 0xF8, 0x07,
  0xCF, 0x80, 0x7C, 0xF8, 0x07, 0xCF, 0x80, 0x7E, 0xF8, 0x03, 0xF0, 0x07,
  0xF0, 0x07, 0xFF, 0x07, 0xFF, 0xE1, 0xFF, 0xFC, 0xFC, 0x1F, 0xBE, 0x03,
  0xEF, 0x80, 0xFB, 0xE0, 0x00, 0xFC, 0x00, 0x3F, 0xC0, 0x07, 0xFF, 0x80,
  0xFF, 0xFC, 0x0F, 0xFF, 0x80, 0x3F, 0xF0, 0x00, 0xFC, 0x00, 0x1F, 0xF8,
  0x07, 0xFE, 0x01, 0xF7, 0xC0, 0xF9, 0xFF, 0xFE, 0x3F, 0xFF, 0x07, 0xFF,
  0x80, 0x7F, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
  0x3E, 0x00, 0x1F, 0x00, 0x0F, 0x80, 0x07, 0xC0, 0x03, 0xE0, 0x01, 0xF0,
  0x00, 0xF8, 0x00, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x00, 0x0F, 0x80, 0x07,
  0xC0, 0x03, 0xE0, 0x01, 0xF0, 0x00, 0xF8, 0x00, 0x7C, 0x00, 0x3E, 0x00,
  0x1F, 0x00, 0x0F, 0x80, 0xF8, 0x03, 0xFF, 0x00, 0x7F, 0xE0, 0x0F, 0xFC,
  0x01, 0xFF, 0x80, 0x3F, 0xF0, 0x07, 0xFE, 0x00, 0xFF, 0xC0, 0x1F, 0xF8,
  0x03, 0xFF, 0x00, 0x7F, 0xE0, 0x0F, 0xFC, 0x01, 0xFF, 0x80, 0x3F, 0xF0,
  0x07, 0xFE, 0x00, 0xFF, 0xC0, 0x1F, 0xF8, 0x03, 0xFF, 0x80, 0xFD, 0xF8,
  0x3F, 0x3F, 0xFF, 0xE3, 0xFF, 0xF8, 0x3F, 0xFE, 0x00, 0xFE, 0x00, 0xF0,
  0x03, 0xFF, 0x00, 0x7B, 0xE0, 0x0F, 0x3C, 0x03, 0xE7, 0xC0, 0x78, 0xF8,
  0x0F, 0x0F, 0x03, 0xE1, 0xE0, 0x78, 0x3E, 0x0F, 0x03, 0xC1, 0xE0, 0x78,
  0x78, 0x0F, 0x8F, 0x00, 0xF1, 0xE0, 0x1E, 0x78, 0x03, 0xEF, 0x00, 0x3D,
  0xE0, 0x07, 0xB8, 0x00, 0xFF, 0x00, 0x0F, 0xE0, 0x01, 0xF8, 0x00, 0x3F,
  0x00, 0x03, 0xE0, 0x00, 0x78, 0x00, 0xF8, 0x1F, 0x01, 0xFF, 0x81, 0xF0,
  0x1F, 0xF8, 0x1F, 0x81, 0xE7, 0x81, 0xF8, 0x3E, 0x78, 0x1F, 0x83, 0xE7,
  0xC3, 0xB8, 0x3E, 0x7C, 0x3B, 0x83, 0xC3, 0xC3, 0xBC, 0x3C, 0x3C, 0x39,
  0xC7, 0xC3, 0xC3, 0x9C, 0x78, 0x3E, 0x71, 0xC7, 0x81, 0xE7, 0x1C, 0x78,
  0x1E, 0x71, 0xE7, 0x81, 0xE7, 0x0E, 0xF0, 0x0E, 0x70, 0xEF, 0x00, 0xFE,
  0x0E, 0xF0, 0x0F, 0xE0, 0xFF, 0x00, 0xFE, 0x0F, 0xE0, 0x07, 0xE0, 0x7E,
  0x00, 0x7E, 0x07, 0xE0, 0x07, 0xC0, 0x7C, 0x00, 0x3C, 0x07, 0xC0, 0x03,
  0xC0, 0x3C, 0x00, 0xFC, 0x07, 0xEF, 0x80, 0xF9, 0xF8, 0x3E, 0x1F, 0x07,
  0xC1, 0xF1, 0xF0, 0x3E, 0x3E, 0x03, 0xEF, 0x80, 0x7F, 0xE0, 0x07, 0xFC,
  0x00, 0x7F, 0x00, 0x0F, 0xC0, 0x00, 0xF8, 0x00, 0x3F, 0x80, 0x07, 0xF0,
  0x01, 0xFF, 0x00, 0x7D, 0xF0, 0x0F, 0xBE, 0x03, 0xE3, 0xE0, 0xFC, 0x7C,
  0x1F, 0x07, 0xC7, 0xC0, 0xFC, 0xF8, 0x0F, 0xBE, 0x01, 0xF8, 0x7C, 0x01,
  0xF7, 0xC0, 0x3E, 0x3E, 0x03, 0xE3, 0xE0, 0x7C, 0x1F, 0x07, 0xC1, 0xF0,
  0x78, 0x0F, 0x8F, 0x80, 0xF8, 0xF0, 0x07, 0xDF, 0x00, 0x7D, 0xE0, 0x03,
  0xFE, 0x00, 0x3F, 0xC0, 0x01, 0xFC, 0x00, 0x1F, 0x80, 0x00, 0xF8, 0x00,
  0x0F, 0x80, 0x00, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0xF8, 0x00, 0x0F, 0x80,
  0x00, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0xF8, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x01, 0xF8, 0x01, 0xF8, 0x00, 0xF8, 0x00,
  0xF8, 0x00, 0xF8, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0x7C, 0x00, 0x7C, 0x00,
  0x7E, 0x00, 0x7E, 0x00, 0x3E, 0x00, 0x3E, 0x00, 0x3F, 0x00, 0x3F, 0x00,
  0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF,
  0xCF, 0x9F, 0x3E, 0x7C, 0xF9, 0xF3, 0xE7, 0xCF, 0x9F, 0x3E, 0x7C, 0xF9,
  0xF3, 0xE7, 0xCF, 0x9F, 0x3E, 0x7C, 0xF9, 0xF3, 0xFF, 0xFF, 0xE0, 0xC0,
  0x70, 0x18, 0x0C, 0x06, 0x01, 0x80, 0xC0, 0x60, 0x18, 0x0C, 0x06, 0x01,
  0x80, 0xC0, 0x60, 0x18, 0x0C, 0x06, 0x03, 0x80, 0xC0, 0x60, 0x38, 0x0C,
  0xFF, 0xFF, 0xF9, 0xF3, 0xE7, 0xCF, 0x9F, 0x3E, 0x7C, 0xF9, 0xF3, 0xE7,
  0xCF, 0x9F, 0x3E, 0x7C, 0xF9, 0xF3, 0xE7, 0xCF, 0x9F, 0x3E, 0x7F, 0xFF,
  0xFF, 0xE0, 0x07, 0x80, 0x1E, 0x00, 0xFC, 0x03, 0xF0, 0x1F, 0xE0, 0x77,
  0x81, 0xCE, 0x0F, 0x3C, 0x38, 0x71, 0xE1, 0xE7, 0x87, 0x9C, 0x0E, 0xF0,
  0x3F, 0x80, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xF1, 0xE3, 0x86, 0x1C,
  0x0F, 0xE0, 0x3F, 0xF8, 0x7F, 0xFC, 0x7F, 0xFE, 0xF8, 0x3E, 0x00, 0x3E,
  0x00, 0x7E, 0x0F, 0xFE, 0x3F, 0xFE, 0x7E, 0x3E, 0xF8, 0x3E, 0xF8, 0x3E,
  0xFC, 0x7E, 0xFF, 0xFE, 0x7F, 0xFE, 0x7F, 0xBF, 0x1F, 0x3F, 0xF8, 0x00,
  0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x00, 0x0F, 0x80, 0x07, 0xC0, 0x03, 0xE7,
  0xC1, 0xF7, 0xF8, 0xFF, 0xFE, 0x7F, 0xFF, 0xBF, 0x8F, 0xDF, 0x83, 0xFF,
  0x80, 0xFF, 0xC0, 0x7F, 0xE0, 0x3F, 0xF0, 0x1F, 0xF8, 0x0F, 0xFE, 0x0F,
  0xFF, 0x8F, 0xDF, 0xFF, 0xEF, 0xFF, 0xE7, 0xDF, 0xE3, 0xE7, 0xC0, 0x07,
  0xF0, 0x1F, 0xFC, 0x3F, 0xFE, 0x7F, 0xFE, 0x7E, 0x1F, 0xFC, 0x1F, 0xF8,
  0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xFC, 0x1F, 0x7E,
  0x1E, 0x7F, 0xFE, 0x3F, 0xFC, 0x1F, 0xF8, 0x07, 0xF0, 0x00, 0x0F, 0x80,
  0x07, 0xC0, 0x03, 0xE0, 0x01, 0xF0, 0x00, 0xF8, 0x00, 0x7C, 0x1F, 0x3E,
  0x3F, 0xDF, 0x3F, 0xFF, 0xBF, 0xFF, 0xDF, 0x8F, 0xFF, 0x83, 0xFF, 0x80,
  0xFF, 0xC0, 0x7F, 0xE0, 0x3F, 0xF0, 0x1F, 0xF8, 0x0F, 0xFE, 0x0F, 0xDF,
  0x8F, 0xEF, 0xFF, 0xF3, 0xFF, 0xF8, 0xFF, 0x7C, 0x1F, 0x3E, 0x07, 0xC0,
  0x1F, 0xF0, 0x3F, 0xF8, 0x7E, 0x3C, 0x7C, 0x1C, 0xF8, 0x1E, 0xF8, 0x0E,
  0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0xFE, 0xF8, 0x00, 0xF8, 0x00, 0x7C, 0x0F,
  0x7C, 0x1E, 0x3F, 0xFE, 0x1F, 0xF8, 0x07, 0xF0, 0x1F, 0x3F, 0x7F, 0x7C,
  0x7C, 0x7C, 0xFE, 0xFE, 0xFE, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C,
  0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x07, 0xCF, 0x8F, 0xF7, 0xCF,
  0xFF, 0xEF, 0xFF, 0xF7, 0xE3, 0xFF, 0xE0, 0xFF, 0xE0, 0x3F, 0xF0, 0x1F,
  0xF8, 0x0F, 0xFC, 0x07, 0xFE, 0x03, 0xFF, 0x83, 0xF7, 0xE3, 0xFB, 0xFF,
  0xFC, 0xFF, 0xFE, 0x3F, 0xDF, 0x07, 0xCF, 0x80, 0x07, 0xC0, 0x03, 0xE0,
  0x03, 0xFF, 0xC3, 0xF3, 0xFF, 0xF8, 0xFF, 0xF8, 0x1F, 0xE0, 0xF8, 0x01,
  0xF0, 0x03, 0xE0, 0x07, 0xC0, 0x0F, 0x80, 0x1F, 0x00, 0x3E, 0x7C, 0x7D,
  0xFC, 0xFF, 0xFD, 0xFF, 0xFF, 0xF1, 0xFF, 0xC1, 0xFF, 0x83, 0xFF, 0x07,
  0xFE, 0x0F, 0xFC, 0x1F, 0xF8, 0x3F, 0xF0, 0x7F, 0xE0, 0xFF, 0xC1, 0xFF,
  0x83, 0xFF, 0x07, 0xFE, 0x0F, 0x80, 0xFF, 0xFF, 0xF0, 0x03, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x3E, 0x7C, 0xF9,
  0xF0, 0x00, 0x0F, 0x9F, 0x3E, 0x7C, 0xF9, 0xF3, 0xE7, 0xCF, 0x9F, 0x3E,
  0x7C, 0xF9, 0xF3, 0xE7, 0xCF, 0x9F, 0x3E, 0x7F, 0xFF, 0xFF, 0xDF, 0x00,
  0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00,
  0xF8, 0x3E, 0xF8, 0x7C, 0xF8, 0xF8, 0xF8, 0xF0, 0xF9, 0xE0, 0xFB, 0xE0,
  0xFF, 0xC0, 0xFF, 0xC0, 0xFF, 0xE0, 0xFF, 0xE0, 0xFD, 0xF0, 0xF8, 0xF8,
  0xF8, 0xF8, 0xF8, 0x7C, 0xF8, 0x7C, 0xF8, 0x3E, 0xF8, 0x3F, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xE0, 0xF9, 0xF0, 0xF8, 0xFB, 0xFD, 0xFE, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF,
  0xFF, 0xFC, 0x7F, 0x3F, 0xF8, 0x3E, 0x1F, 0xF8, 0x3E, 0x1F, 0xF8, 0x3E,
  0x1F, 0xF8, 0x3E, 0x1F, 0xF8, 0x3E, 0x1F, 0xF8, 0x3E, 0x1F, 0xF8, 0x3E,
  0x1F, 0xF8, 0x3E, 0x1F, 0xF8, 0x3E, 0x1F, 0xF8, 0x3E, 0x1F, 0xF8, 0x3E,
  0x1F, 0xF8, 0x3E, 0x1F, 0xF9, 0xF8, 0xFB, 0xFC, 0xFF, 0xFE, 0xFF, 0xFF,
  0xFC, 0x3F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F,
  0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F,
  0xF8, 0x1F, 0x07, 0xF0, 0x0F, 0xFE, 0x0F, 0xFF, 0x8F, 0xFF, 0xE7, 0xE3,
  0xF7, 0xE0, 0xFF, 0xE0, 0x3F, 0xF0, 0x1F, 0xF8, 0x0F, 0xFC, 0x07, 0xFE,
  0x03, 0xFF, 0x83, 0xF7, 0xE3, 0xF3, 0xFF, 0xF8, 0xFF, 0xF8, 0x3F, 0xF8,
  0x07, 0xF0, 0x00, 0xF9, 0xF0, 0x7D, 0xFE, 0x3F, 0xFF, 0x9F, 0xFF, 0xEF,
  0xE3, 0xF7, 0xE0, 0xFB, 0xE0, 0x3F, 0xF0, 0x1F, 0xF8, 0x0F, 0xFC, 0x07,
  0xFE, 0x03, 0xFF, 0x83, 0xFF, 0xE3, 0xF7, 0xFF, 0xF3, 0xFF, 0xF9, 0xF7,
  0xF8, 0xF9, 0xF0, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x00, 0x0F, 0x80, 0x07,
  0xC0, 0x03, 0xE0, 0x01, 0xF0, 0x00, 0x07, 0xCF, 0x8F, 0xF7, 0xCF, 0xFF,
  0xEF, 0xFF, 0xF7, 0xE3, 0xFF, 0xE0, 0xFF, 0xE0, 0x3F, 0xF0, 0x1F, 0xF8,
  0x0F, 0xFC, 0x07, 0xFE, 0x03, 0xFF, 0x83, 0xF7, 0xE3, 0xFB, 0xFF, 0xFC,
  0xFF, 0xFE, 0x3F, 0xDF, 0x07, 0xCF, 0x80, 0x07, 0xC0, 0x03, 0xE0, 0x01,
  0xF0, 0x00, 0xF8, 0x00, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0xF8, 0xFE, 0xFF,
  0xFF, 0xFF, 0xFE, 0x3F, 0x0F, 0x83, 0xE0, 0xF8, 0x3E, 0x0F, 0x83, 0xE0,
  0xF8, 0x3E, 0x0F, 0x83, 0xE0, 0xF8, 0x00, 0x0F, 0xE0, 0x7F, 0xF1, 0xFF,
  0xF7, 0xE3, 0xEF, 0x83, 0xDF, 0x00, 0x3F, 0x80, 0x7F, 0xE0, 0x7F, 0xF8,
  0x3F, 0xF8, 0x0F, 0xF8, 0x03, 0xFF, 0x03, 0xFF, 0x0F, 0xDF, 0xFF, 0x1F,
  0xFC, 0x0F, 0xE0, 0x7C, 0xF9, 0xF3, 0xEF, 0xFF, 0xFF, 0xBE, 0x7C, 0xF9,
  0xF3, 0xE7, 0xCF, 0x9F, 0x3E, 0x7C, 0xF9, 0xF9, 0xF1, 0xE0, 0xF8, 0x1F,
  0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F,
  0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xFC, 0x3F,
  0xFF, 0xFF, 0x7F, 0xFF, 0x3F, 0xDF, 0x1F, 0x9F, 0xF8, 0x0F, 0x78, 0x1F,
  0x7C, 0x1F, 0x3C, 0x1E, 0x3C, 0x1E, 0x3C, 0x3E, 0x1E, 0x3C, 0x1E, 0x3C,
  0x1E, 0x3C, 0x0F, 0x78, 0x0F, 0x78, 0x0F, 0x78, 0x07, 0xF0, 0x07, 0xF0,
  0x07, 0xF0, 0x03, 0xE0, 0x03, 0xE0, 0xF8, 0x3C, 0x1F, 0x78, 0x3E, 0x1E,
  0x78, 0x7E, 0x1E, 0x7C, 0x7E, 0x1E, 0x7C, 0x7E, 0x3E, 0x3C, 0x7E, 0x3C,
  0x3C, 0x7F, 0x3C, 0x3C, 0xF7, 0x3C, 0x1E, 0xE7, 0x38, 0x1E, 0xE7, 0x78,
  0x1E, 0xE7, 0x78, 0x1E, 0xE7, 0xF8, 0x0F, 0xC3, 0xF0, 0x0F, 0xC3, 0xF0,
  0x0F, 0xC3, 0xF0, 0x07, 0xC3, 0xF0, 0x07, 0xC1, 0xE0, 0x7C, 0x1F, 0x1F,
  0x1F, 0x0F, 0x8F, 0x83, 0xEF, 0x81, 0xF7, 0xC0, 0x7F, 0xC0, 0x1F, 0xC0,
  0x0F, 0xE0, 0x03, 0xE0, 0x03, 0xF8, 0x01, 0xFC, 0x01, 0xFF, 0x01, 0xF7,
  0xC0, 0xFB, 0xE0, 0xF8, 0xF8, 0xFC, 0x3E, 0x7C, 0x1F, 0x00, 0xF8, 0x0F,
  0xBE, 0x07, 0x9F, 0x03, 0xC7, 0x83, 0xE3, 0xC1, 0xE1, 0xF0, 0xF0, 0x78,
  0xF8, 0x3C, 0x78, 0x1F, 0x3C, 0x07, 0x9E, 0x03, 0xDE, 0x01, 0xEF, 0x00,
  0x7F, 0x80, 0x3F, 0x80, 0x1F, 0xC0, 0x07, 0xC0, 0x03, 0xE0, 0x01, 0xF0,
  0x00, 0x70, 0x00, 0x78, 0x00, 0x7C, 0x00, 0xFC, 0x00, 0x7E, 0x00, 0x3C,
  0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xF8, 0x07, 0xC0,
  0x3E, 0x01, 0xF0, 0x0F, 0x80, 0x7E, 0x03, 0xF0, 0x1F, 0x80, 0xFC, 0x03,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x07, 0x87, 0xC7, 0xE3, 0x81,
  0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x07, 0x03, 0x83, 0xC7, 0xC3, 0xC1,
  0xF0, 0x1C, 0x0E, 0x07, 0x03, 0x81, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E,
  0x07, 0xE1, 0xF0, 0x78, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
  0xF0, 0x7C, 0x3F, 0x03, 0x81, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x07,
  0x03, 0x81, 0xC0, 0x7C, 0x1E, 0x1F, 0x1E, 0x0E, 0x07, 0x03, 0x81, 0xC0,
  0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x3F, 0x1F, 0x0F, 0x00, 0x3C, 0x03, 0xF0,
  0xF1, 0xC7, 0x87, 0xE0, 0x1E, 0x00 };

const GFXglyph FreeSansBold16pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,   9,    0,    0 },   // 0x20 ' '
  {     1,   5,  22,  10,    3,  -21 },   // 0x21 '!'
  {    15,  12,   8,  15,    2,  -22 },   // 0x22 '"'
  {    27,  17,  22,  17,    0,  -20 },   // 0x23 '#'
  {    74,  17,  26,  17,    0,  -22 },   // 0x24 '$'
  {   130,  26,  22,  28,    1,  -21 },   // 0x25 '%'
  {   202,  19,  22,  22,    2,  -21 },   // 0x26 '&'
  {   255,   5,   8,   8,    2,  -22 },   // 0x27 '''
  {   260,   8,  29,  10,    1,  -22 },   // 0x28 '('
  {   289,   8,  29,  10,    1,  -22 },   // 0x29 ')'
  {   318,  10,  10,  12,    1,  -22 },   // 0x2A '*'
  {   331,  15,  14,  18,    1,  -13 },   // 0x2B '+'
  {   358,   5,   9,   8,    2,   -3 },   // 0x2C ','
  {   364,   8,   4,  10,    1,   -9 },   // 0x2D '-'
  {   368,   5,   4,   8,    2,   -3 },   // 0x2E '.'
  {   371,   8,  22,   9,    0,  -21 },   // 0x2F '/'
  {   393,  16,  22,  17,    1,  -21 },   // 0x30 '0'
  {   437,   9,  22,  17,    3,  -21 },   // 0x31 '1'
  {   462,  16,  22,  17,    1,  -21 },   // 0x32 '2'
  {   506,  16,  22,  17,    1,  -21 },   // 0x33 '3'
  {   550,  14,  22,  17,    2,  -21 },   // 0x34 '4'
  {   589,  16,  22,  17,    1,  -21 },   // 0x35 '5'
  {   633,  16,  22,  17,    1,  -21 },   // 0x36 '6'
  {   677,  15,  22,  17,    1,  -21 },   // 0x37 '7'
  {   719,  16,  22,  17,    1,  -21 },   // 0x38 '8'
  {   763,  16,  22,  17,    1,  -21 },   // 0x39 '9'
  {   807,   5,  16,   8,    2,  -15 },   // 0x3A ':'
  {   817,   5,  21,   8,    2,  -15 },   // 0x3B ';'
  {   831,  15,  15,  18,    1,  -14 },   // 0x3C '<'
  {   860,  15,  11,  18,    2,  -12 },   // 0x3D '='
  {   881,  15,  15,  18,    1,  -14 },   // 0x3E '>'
  {   910,  16,  23,  19,    2,  -22 },   // 0x3F '?'
  {   956,  28,  27,  30,    1,  -22 },   // 0x40 '@'
  {  1051,  21,  23,  22,    0,  -22 },   // 0x41 'A'
  {  1112,  19,  23,  22,    2,  -22 },   // 0x42 'B'
  {  1167,  21,  23,  22,    1,  -22 },   // 0x43 'C'
  {  1228,  20,  23,  22,    2,  -22 },   // 0x44 'D'
  {  1286,  16,  23,  21,    2,  -22 },   // 0x45 'E'
  {  1332,  15,  23,  20,    2,  -22 },   // 0x46 'F'
  {  1376,  21,  23,  24,    1,  -22 },   // 0x47 'G'
  {  1437,  19,  23,  23,    2,  -22 },   // 0x48 'H'
  {  1492,   5,  23,  10,    2,  -22 },   // 0x49 'I'
  {  1507,  15,  23,  18,    1,  -22 },   // 0x4A 'J'
  {  1551,  20,  23,  23,    2,  -22 },   // 0x4B 'K'
  {  1609,  15,  23,  19,    2,  -22 },   // 0x4C 'L'
  {  1653,  23,  23,  27,    2,  -22 },   // 0x4D 'M'
  {  1720,  19,  23,  23,    2,  -22 },   // 0x4E 'N'
  {  1775,  22,  23,  24,    1,  -22 },   // 0x4F 'O'
  {  1839,  18,  23,  21,    2,  -22 },   // 0x50 'P'
  {  1891,  22,  24,  24,    1,  -22 },   // 0x51 'Q'
  {  1957,  20,  23,  22,    2,  -22 },   // 0x52 'R'
  {  2015,  18,  23,  21,    2,  -22 },   // 0x53 'S'
  {  2067,  17,  23,  20,    2,  -22 },   // 0x54 'T'
  {  2116,  19,  23,  23,    2,  -22 },   // 0x55 'U'
  {  2171,  19,  23,  21,    1,  -22 },   // 0x56 'V'
  {  2226,  28,  23,  30,    1,  -22 },   // 0x57 'W'
  {  2307,  19,  23,  21,    1,  -22 },   // 0x58 'X'
  {  2362,  20,  23,  20,    0,  -22 },   // 0x59 'Y'
  {  2420,  17,  23,  19,    1,  -22 },   // 0x5A 'Z'
  {  2469,   7,  29,  10,    2,  -22 },   // 0x5B '['
  {  2495,   9,  22,   9,    0,  -21 },   // 0x5C '\'
  {  2520,   7,  29,  10,    1,  -22 },   // 0x5D ']'
  {  2546,  14,  14,  18,    2,  -21 },   // 0x5E '^'
  {  2571,  19,   2,  17,   -1,    5 },   // 0x5F '_'
  {  2576,   6,   5,   8,    1,  -23 },   // 0x60 '`'
  {  2580,  16,  17,  18,    1,  -16 },   // 0x61 'a'
  {  2614,  17,  23,  19,    2,  -22 },   // 0x62 'b'
  {  2663,  16,  17,  17,    1,  -16 },   // 0x63 'c'
  {  2697,  17,  23,  19,    1,  -22 },   // 0x64 'd'
  {  2746,  16,  17,  18,    1,  -16 },   // 0x65 'e'
  {  2780,   8,  23,  11,    2,  -22 },   // 0x66 'f'
  {  2803,  17,  24,  19,    1,  -16 },   // 0x67 'g'
  {  2854,  15,  23,  19,    2,  -22 },   // 0x68 'h'
  {  2898,   5,  23,   9,    2,  -22 },   // 0x69 'i'
  {  2913,   7,  30,   9,    0,  -22 },   // 0x6A 'j'
  {  2940,  16,  23,  17,    2,  -22 },   // 0x6B 'k'
  {  2986,   5,  23,   8,    2,  -22 },   // 0x6C 'l'
  {  3001,  24,  17,  28,    2,  -16 },   // 0x6D 'm'
  {  3052,  16,  17,  19,    2,  -16 },   // 0x6E 'n'
  {  3086,  17,  17,  19,    1,  -16 },   // 0x6F 'o'
  {  3123,  17,  24,  19,    2,  -16 },   // 0x70 'p'
  {  3174,  17,  24,  19,    1,  -16 },   // 0x71 'q'
  {  3225,  10,  17,  12,    2,  -16 },   // 0x72 'r'
  {  3247,  15,  17,  17,    2,  -16 },   // 0x73 's'
  {  3279,   7,  21,  10,    2,  -20 },   // 0x74 't'
  {  3298,  16,  17,  19,    2,  -16 },   // 0x75 'u'
  {  3332,  16,  17,  17,    0,  -16 },   // 0x76 'v'
  {  3366,  24,  17,  24,    0,  -16 },   // 0x77 'w'
  {  3417,  17,  17,  17,    0,  -16 },   // 0x78 'x'
  {  3454,  17,  24,  17,    0,  -16 },   // 0x79 'y'
  {  3505,  14,  17,  16,    1,  -16 },   // 0x7A 'z'
  {  3535,   9,  29,  12,    1,  -22 },   // 0x7B '{'
  {  3568,   2,  29,   9,    3,  -22 },   // 0x7C '|'
  {  3576,   9,  29,  12,    2,  -22 },   // 0x7D '}'
  {  3609,  13,   5,  16,    1,   -8 } }; // 0x7E '~'

const GFXfont FreeSansBold16pt7b PROGMEM = {
  (uint8_t  *)FreeSansBold16pt7bBitmaps,
  (GFXglyph *)FreeSansBold16pt7bGlyphs,
  0x20, 0x7E, 38 };

// Approx. 4290 bytes

#endif // FreeSansBold16pt7b_H
