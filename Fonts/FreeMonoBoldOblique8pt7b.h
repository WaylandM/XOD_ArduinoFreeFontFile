#ifndef FreeMonoBoldOblique8pt7b_H
#define FreeMonoBoldOblique8pt7b_H

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

const uint8_t FreeMonoBoldOblique8pt7bBitmaps[] PROGMEM = {
  0x00, 0x6D, 0xBD, 0xB0, 0xD8, 0xDE, 0xE7, 0x29, 0x00, 0x1A, 0x16, 0x36,
  0x7F, 0x7F, 0x2C, 0xFE, 0xFE, 0x58, 0xD8, 0xD8, 0x06, 0x03, 0x07, 0xE6,
  0x23, 0x01, 0xF0, 0x3C, 0x86, 0x63, 0x3F, 0x06, 0x03, 0x01, 0x00, 0x38,
  0x64, 0x44, 0x48, 0x3E, 0x70, 0x9E, 0x22, 0x22, 0x1C, 0x0E, 0x1E, 0x30,
  0x30, 0x78, 0xFF, 0xCE, 0xFE, 0x7E, 0xFA, 0x80, 0x13, 0x66, 0x4C, 0xCC,
  0xCC, 0xE6, 0x67, 0x33, 0x33, 0x33, 0x66, 0x4C, 0x18, 0x23, 0x7F, 0xE7,
  0x9B, 0x22, 0x00, 0x08, 0x08, 0x18, 0xFF, 0xFF, 0x10, 0x10, 0x30, 0x30,
  0x36, 0x4C, 0x80, 0xFF, 0xFF, 0xF0, 0x00, 0xC0, 0x60, 0x10, 0x0C, 0x06,
  0x01, 0x00, 0xC0, 0x60, 0x30, 0x0C, 0x06, 0x03, 0x00, 0x80, 0x00, 0x1E,
  0x3F, 0x23, 0x63, 0x43, 0xC2, 0xC2, 0xC6, 0xC6, 0xFC, 0x78, 0x0E, 0x78,
  0x90, 0x60, 0xC1, 0x02, 0x0C, 0x7E, 0xFC, 0x07, 0x07, 0xC6, 0x62, 0x30,
  0x38, 0x38, 0x38, 0x78, 0x70, 0x7F, 0xBF, 0x80, 0x1E, 0x3F, 0x03, 0x03,
  0x1E, 0x1C, 0x06, 0x06, 0x0E, 0xFC, 0xF8, 0x06, 0x1C, 0x59, 0x24, 0x5F,
  0xFF, 0x9E, 0x3C, 0x7E, 0x7E, 0x60, 0x7C, 0x7E, 0xC6, 0x06, 0x0E, 0xFC,
  0xF8, 0x07, 0x8F, 0xCE, 0x0E, 0x07, 0xE7, 0xFB, 0x8D, 0x86, 0xC7, 0x7F,
  0x1F, 0x00, 0xFE, 0xFE, 0x06, 0x04, 0x0C, 0x08, 0x18, 0x30, 0x30, 0x60,
  0x1E, 0x3F, 0x63, 0x63, 0x66, 0x3C, 0x7C, 0xC6, 0xC6, 0xFC, 0x78, 0x1E,
  0x3F, 0x73, 0x63, 0x67, 0x7F, 0x3E, 0x06, 0x1C, 0xF8, 0xF0, 0x6C, 0x01,
  0xB0, 0x18, 0xC0, 0x00, 0x19, 0x88, 0xC4, 0x00, 0x03, 0x0E, 0x38, 0xE0,
  0x78, 0x1C, 0x06, 0x7F, 0xBF, 0xC0, 0x1F, 0xFF, 0xF0, 0x20, 0x1C, 0x03,
  0x80, 0xF0, 0xE3, 0xC3, 0x00, 0x7B, 0xF8, 0xC3, 0x3B, 0xCC, 0x00, 0xC3,
  0x00, 0x1E, 0x3F, 0x33, 0x63, 0x4E, 0xDE, 0xB6, 0xB4, 0xBC, 0xDE, 0xC0,
  0xF8, 0x70, 0x1F, 0x07, 0xC0, 0x70, 0x3C, 0x19, 0x86, 0x63, 0xF8, 0xFE,
  0xF3, 0xFC, 0xF0, 0x3F, 0x8F, 0xF1, 0x8C, 0x43, 0x1F, 0x8F, 0xE3, 0x0C,
  0xC3, 0x7F, 0xBF, 0xC0, 0x1F, 0xCF, 0xF7, 0x19, 0x86, 0xC0, 0x30, 0x0C,
  0x03, 0x8C, 0x7F, 0x0F, 0x00, 0x3F, 0x0F, 0xE1, 0x1C, 0x43, 0x30, 0xCC,
  0x32, 0x1C, 0x86, 0x7F, 0x3F, 0x80, 0x3F, 0xCF, 0xF1, 0x0C, 0x58, 0x3E,
  0x0F, 0x03, 0x40, 0x82, 0xFF, 0xBF, 0xE0, 0x3F, 0xCF, 0xF1, 0x0C, 0x48,
  0x3E, 0x0F, 0x82, 0x40, 0x80, 0xFC, 0x3E, 0x00, 0x0F, 0x4F, 0xF7, 0x09,
  0x80, 0xC0, 0x31, 0xEC, 0xFB, 0x04, 0xFF, 0x0F, 0x80, 0x3D, 0xCF, 0x71,
  0x08, 0x42, 0x3F, 0x8F, 0xE2, 0x10, 0x84, 0xF7, 0xBD, 0xE0, 0x3F, 0x9F,
  0x83, 0x01, 0x00, 0x80, 0xC0, 0x60, 0x30, 0xFE, 0x7F, 0x00, 0x0F, 0xE1,
  0xF8, 0x04, 0x00, 0x80, 0x30, 0x06, 0x10, 0xC6, 0x30, 0xFE, 0x0F, 0x00,
  0x3C, 0xE7, 0xBC, 0x46, 0x0B, 0x83, 0xE0, 0x7E, 0x08, 0xC1, 0x18, 0xF9,
  0xDE, 0x38, 0x3F, 0x0F, 0x80, 0x80, 0x60, 0x18, 0x06, 0x01, 0x0C, 0x42,
  0x7F, 0xBF, 0xE0, 0x38, 0x73, 0x8E, 0x39, 0xC3, 0x9C, 0x2F, 0xC2, 0xEC,
  0x6E, 0xC6, 0x08, 0xF3, 0xCF, 0x3C, 0x39, 0xE7, 0x3C, 0x73, 0x0E, 0x63,
  0xEC, 0x6D, 0x09, 0xA1, 0x1C, 0x7B, 0x9E, 0x30, 0x1E, 0x1F, 0x9C, 0xEC,
  0x3C, 0x1E, 0x0F, 0x0D, 0xCE, 0x7E, 0x1E, 0x00, 0x3F, 0x8F, 0xF1, 0x8C,
  0x43, 0x11, 0xCF, 0xE3, 0xF0, 0xC0, 0x7C, 0x3F, 0x00, 0x1E, 0x1F, 0x9C,
  0xEC, 0x3C, 0x1E, 0x0F, 0x0D, 0xCE, 0x7E, 0x1E, 0x1F, 0x9F, 0xC0, 0x3F,
  0x87, 0xF8, 0x43, 0x08, 0xE3, 0xF8, 0x7E, 0x08, 0xC1, 0x0C, 0xF9, 0xFE,
  0x1C, 0x1D, 0x9F, 0xD8, 0xCC, 0x07, 0x01, 0xF1, 0x19, 0x8C, 0xFC, 0x5C,
  0x00, 0x7F, 0xBF, 0xF2, 0x79, 0x21, 0x80, 0xC0, 0x60, 0x20, 0x7C, 0x7E,
  0x00, 0xF3, 0xFC, 0xF6, 0x19, 0x04, 0x43, 0x30, 0xCC, 0x33, 0x98, 0xFE,
  0x1E, 0x00, 0xF3, 0xFC, 0xF4, 0x11, 0x8C, 0x66, 0x19, 0x82, 0xC0, 0xA0,
  0x38, 0x0C, 0x00, 0xF3, 0xFC, 0xF4, 0x1B, 0x34, 0xDD, 0x3F, 0xCF, 0xF3,
  0xB8, 0xCE, 0x31, 0x80, 0x39, 0xE7, 0x3C, 0x66, 0x07, 0x80, 0xE0, 0x1C,
  0x07, 0xC1, 0x98, 0xF3, 0x9E, 0xF0, 0x73, 0xF9, 0xD8, 0xC6, 0xC3, 0xC0,
  0xC0, 0x40, 0x20, 0xFC, 0x7E, 0x00, 0x3F, 0x9F, 0x88, 0xC0, 0xC0, 0xC0,
  0xC0, 0xC0, 0xC6, 0xFF, 0x7F, 0x00, 0x1E, 0x38, 0x41, 0x83, 0x06, 0x08,
  0x10, 0x60, 0xC1, 0xC3, 0x80, 0xC2, 0x18, 0xC6, 0x10, 0xC6, 0x30, 0x86,
  0x31, 0x00, 0x3C, 0xE0, 0x86, 0x18, 0x41, 0x0C, 0x30, 0xCE, 0x38, 0x10,
  0x71, 0xB6, 0x68, 0x40, 0x7F, 0xFF, 0xF0, 0xB4, 0x1E, 0x1F, 0x8F, 0xCF,
  0xEC, 0x27, 0xFD, 0xFE, 0x38, 0x0E, 0x01, 0x00, 0x5E, 0x3F, 0xCC, 0x32,
  0x0C, 0x87, 0xFF, 0xBF, 0xC0, 0x1E, 0xBF, 0xD8, 0x58, 0x0C, 0x07, 0xF1,
  0xF0, 0x01, 0x81, 0xC0, 0x63, 0xF7, 0xF7, 0x0B, 0x05, 0x86, 0xFF, 0xBD,
  0xC0, 0x1E, 0x7F, 0x61, 0xFF, 0xFF, 0xFE, 0x7C, 0x07, 0xC3, 0xF0, 0x80,
  0xFC, 0x3F, 0x06, 0x01, 0x00, 0x40, 0x7E, 0x3F, 0x80, 0x1D, 0xDF, 0xFE,
  0x33, 0x0C, 0xC3, 0x3F, 0x87, 0xA0, 0x18, 0x7C, 0x1E, 0x00, 0x70, 0x1C,
  0x03, 0x00, 0xBC, 0x3F, 0x98, 0x66, 0x11, 0x84, 0xE3, 0xF8, 0xF0, 0x04,
  0x0C, 0x00, 0x3C, 0x3C, 0x0C, 0x08, 0x18, 0xFF, 0xFF, 0x03, 0x02, 0x00,
  0x3F, 0x3F, 0x03, 0x02, 0x02, 0x06, 0x06, 0x04, 0xFC, 0xF8, 0x30, 0x38,
  0x0C, 0x06, 0xF3, 0x71, 0xE0, 0xE0, 0xD8, 0xEF, 0x67, 0x80, 0x1E, 0x1C,
  0x04, 0x0C, 0x0C, 0x08, 0x08, 0x18, 0xFF, 0xFF, 0x7E, 0xCF, 0xFC, 0x99,
  0xB2, 0x26, 0x45, 0xDD, 0xFB, 0xB8, 0x7F, 0x1F, 0xE6, 0x19, 0x84, 0x61,
  0x38, 0xFE, 0x3C, 0x1E, 0x3F, 0xF8, 0x78, 0x3C, 0x3F, 0xF8, 0xF0, 0x3B,
  0xC7, 0xFC, 0x61, 0x88, 0x31, 0x8E, 0x7F, 0x8D, 0xE1, 0x80, 0x78, 0x1F,
  0x00, 0x3D, 0xDF, 0xFE, 0x13, 0x04, 0xC3, 0x3F, 0xC7, 0xA0, 0x18, 0x1F,
  0x07, 0xC0, 0x7B, 0xBF, 0xCE, 0x06, 0x03, 0x07, 0xF3, 0xF0, 0x3E, 0xFD,
  0x89, 0xFC, 0x7F, 0xFE, 0x00, 0x10, 0x30, 0x30, 0xFE, 0xFE, 0x20, 0x60,
  0x60, 0x7F, 0x3E, 0xF7, 0xFB, 0x98, 0x4C, 0x66, 0x33, 0xF8, 0xEC, 0xF7,
  0xFD, 0xE6, 0x30, 0x98, 0x3C, 0x0E, 0x03, 0x80, 0xF1, 0xFC, 0x76, 0xD9,
  0xF4, 0x7F, 0x1D, 0x86, 0x60, 0x3D, 0xCE, 0x71, 0xF0, 0x38, 0x1F, 0x0C,
  0xEF, 0x78, 0x39, 0xCE, 0x73, 0x18, 0x4C, 0x1E, 0x07, 0x01, 0x80, 0x60,
  0xF8, 0x3E, 0x00, 0x3F, 0x9F, 0xC9, 0x83, 0x83, 0x03, 0xFB, 0xFC, 0x19,
  0xCC, 0x62, 0x73, 0x8C, 0x63, 0x18, 0xC0, 0x13, 0x32, 0x26, 0x66, 0x4C,
  0xCC, 0x18, 0x61, 0x86, 0x18, 0x71, 0xC4, 0x30, 0xCE, 0x38, 0x70, 0xF8,
  0x1F, 0x0E };

const GFXglyph FreeMonoBoldOblique8pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,  10,    0,    0 },   // 0x20 ' '
  {     1,   3,  10,  10,    4,   -9 },   // 0x21 '!'
  {     5,   5,   5,  10,    4,   -9 },   // 0x22 '"'
  {     9,   8,  11,  10,    2,   -9 },   // 0x23 '#'
  {    20,   9,  13,  10,    1,  -10 },   // 0x24 '$'
  {    35,   8,  10,  10,    2,   -9 },   // 0x25 '%'
  {    45,   8,   9,  10,    2,   -8 },   // 0x26 '&'
  {    54,   2,   5,  10,    5,   -9 },   // 0x27 '''
  {    56,   4,  12,  10,    5,   -9 },   // 0x28 '('
  {    62,   4,  12,  10,    3,   -9 },   // 0x29 ')'
  {    68,   7,   7,  10,    3,   -9 },   // 0x2A '*'
  {    75,   8,   9,  10,    2,   -8 },   // 0x2B '+'
  {    84,   4,   5,  10,    2,   -1 },   // 0x2C ','
  {    87,   8,   2,  10,    2,   -5 },   // 0x2D '-'
  {    89,   2,   2,  10,    4,   -1 },   // 0x2E '.'
  {    90,  10,  13,  10,    1,  -10 },   // 0x2F '/'
  {   107,   8,  11,  10,    2,  -10 },   // 0x30 '0'
  {   118,   7,  10,  10,    1,   -9 },   // 0x31 '1'
  {   127,   9,  11,  10,    1,  -10 },   // 0x32 '2'
  {   140,   8,  11,  10,    3,  -10 },   // 0x33 '3'
  {   151,   7,   9,  10,    2,   -8 },   // 0x34 '4'
  {   159,   8,  10,  10,    3,   -9 },   // 0x35 '5'
  {   169,   9,  11,  10,    2,  -10 },   // 0x36 '6'
  {   182,   8,  10,  10,    3,   -9 },   // 0x37 '7'
  {   192,   8,  11,  10,    2,  -10 },   // 0x38 '8'
  {   203,   8,  11,  10,    2,  -10 },   // 0x39 '9'
  {   214,   3,   7,  10,    4,   -6 },   // 0x3A ':'
  {   217,   5,  10,  10,    1,   -6 },   // 0x3B ';'
  {   224,   8,   7,  10,    2,   -7 },   // 0x3C '<'
  {   231,   9,   5,  10,    1,   -6 },   // 0x3D '='
  {   237,   9,   7,  10,    1,   -7 },   // 0x3E '>'
  {   245,   6,  10,  10,    4,   -9 },   // 0x3F '?'
  {   253,   8,  13,  10,    2,  -10 },   // 0x40 '@'
  {   266,  10,  10,  10,    0,   -9 },   // 0x41 'A'
  {   279,  10,  10,  10,    0,   -9 },   // 0x42 'B'
  {   292,  10,  10,  10,    1,   -9 },   // 0x43 'C'
  {   305,  10,  10,  10,    0,   -9 },   // 0x44 'D'
  {   318,  10,  10,  10,    0,   -9 },   // 0x45 'E'
  {   331,  10,  10,  10,    0,   -9 },   // 0x46 'F'
  {   344,  10,  10,  10,    1,   -9 },   // 0x47 'G'
  {   357,  10,  10,  10,    0,   -9 },   // 0x48 'H'
  {   370,   9,  10,  10,    1,   -9 },   // 0x49 'I'
  {   382,  11,  10,  10,    0,   -9 },   // 0x4A 'J'
  {   396,  11,  10,  10,    0,   -9 },   // 0x4B 'K'
  {   410,  10,  10,  10,    0,   -9 },   // 0x4C 'L'
  {   423,  12,  10,  10,    0,   -9 },   // 0x4D 'M'
  {   438,  11,  10,  10,    0,   -9 },   // 0x4E 'N'
  {   452,   9,  10,  10,    1,   -9 },   // 0x4F 'O'
  {   464,  10,  10,  10,    0,   -9 },   // 0x50 'P'
  {   477,   9,  12,  10,    1,   -9 },   // 0x51 'Q'
  {   491,  11,  10,  10,    0,   -9 },   // 0x52 'R'
  {   505,   9,  10,  10,    2,   -9 },   // 0x53 'S'
  {   517,   9,  10,  10,    1,   -9 },   // 0x54 'T'
  {   529,  10,  10,  10,    1,   -9 },   // 0x55 'U'
  {   542,  10,  10,  10,    1,   -9 },   // 0x56 'V'
  {   555,  10,  10,  10,    1,   -9 },   // 0x57 'W'
  {   568,  11,  10,  10,    0,   -9 },   // 0x58 'X'
  {   582,   9,  10,  10,    1,   -9 },   // 0x59 'Y'
  {   594,   9,  10,  10,    1,   -9 },   // 0x5A 'Z'
  {   606,   7,  12,  10,    3,   -9 },   // 0x5B '['
  {   617,   5,  13,  10,    3,  -10 },   // 0x5C '\'
  {   626,   6,  12,  10,    2,   -9 },   // 0x5D ']'
  {   635,   7,   5,  10,    3,   -9 },   // 0x5E '^'
  {   640,  10,   2,  10,   -1,    2 },   // 0x5F '_'
  {   643,   2,   3,  10,    4,  -10 },   // 0x60 '`'
  {   644,   9,   7,  10,    1,   -6 },   // 0x61 'a'
  {   652,  10,  10,  10,    0,   -9 },   // 0x62 'b'
  {   665,   9,   7,  10,    1,   -6 },   // 0x63 'c'
  {   673,   9,  10,  10,    1,   -9 },   // 0x64 'd'
  {   685,   8,   7,  10,    1,   -6 },   // 0x65 'e'
  {   692,  10,  10,  10,    1,   -9 },   // 0x66 'f'
  {   705,  10,  10,  10,    1,   -6 },   // 0x67 'g'
  {   718,  10,  10,  10,    1,   -9 },   // 0x68 'h'
  {   731,   8,  10,  10,    1,   -9 },   // 0x69 'i'
  {   741,   8,  13,  10,    1,   -9 },   // 0x6A 'j'
  {   754,   9,  10,  10,    1,   -9 },   // 0x6B 'k'
  {   766,   8,  10,  10,    1,   -9 },   // 0x6C 'l'
  {   776,  11,   7,  10,    0,   -6 },   // 0x6D 'm'
  {   786,  10,   7,  10,    1,   -6 },   // 0x6E 'n'
  {   795,   9,   7,  10,    1,   -6 },   // 0x6F 'o'
  {   803,  11,  10,  10,   -1,   -6 },   // 0x70 'p'
  {   817,  10,  10,  10,    1,   -6 },   // 0x71 'q'
  {   830,   9,   7,  10,    1,   -6 },   // 0x72 'r'
  {   838,   7,   7,  10,    2,   -6 },   // 0x73 's'
  {   845,   8,  10,  10,    1,   -9 },   // 0x74 't'
  {   855,   9,   7,  10,    1,   -6 },   // 0x75 'u'
  {   863,  10,   7,  10,    1,   -6 },   // 0x76 'v'
  {   872,  10,   7,  10,    1,   -6 },   // 0x77 'w'
  {   881,  10,   7,  10,    0,   -6 },   // 0x78 'x'
  {   890,  10,  10,  10,    0,   -6 },   // 0x79 'y'
  {   903,   9,   7,  10,    1,   -6 },   // 0x7A 'z'
  {   911,   5,  12,  10,    3,   -9 },   // 0x7B '{'
  {   919,   4,  12,  10,    4,   -9 },   // 0x7C '|'
  {   925,   6,  12,  10,    2,   -9 },   // 0x7D '}'
  {   934,   8,   4,  10,    2,   -6 } }; // 0x7E '~'

const GFXfont FreeMonoBoldOblique8pt7b PROGMEM = {
  (uint8_t  *)FreeMonoBoldOblique8pt7bBitmaps,
  (GFXglyph *)FreeMonoBoldOblique8pt7bGlyphs,
  0x20, 0x7E, 16 };

// Approx. 1610 bytes

#endif // FreeMonoBoldOblique8pt7b_H
