// oled_images/image1.c
#include "quantum.h"

void render_image1(void) {
static const unsigned char PROGMEM font[] = {
    0x3F, 0x3F, 0x3F, 0x1F, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x07,
    0x0F, 0xC7, 0xC7, 0xC7, 0x87, 0x0F,
    0x1F, 0x3F, 0x3F, 0x3F, 0x0F, 0x0F,
    0x07, 0x87, 0xC7, 0xCE, 0x86, 0x00,
    0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0,
    0x00, 0x10, 0x38, 0xFC, 0xFC, 0xF8,
    0xF0, 0xF0, 0xF0, 0xF0, 0x30, 0x31,
    0x81, 0xC1, 0xE1, 0xF1, 0xF1, 0xC0,
    0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x18, 0x3E, 0x3F, 0x7F, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xFC,
    0xF8, 0x30, 0x30, 0x10, 0x00, 0x07,
    0x07, 0x0F, 0x43, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x1F, 0x1F,
    0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xF8,
    0xF0, 0x30, 0x30, 0x38, 0x38, 0x30,
    0xC0, 0xC0, 0xE7, 0xFF, 0xFF, 0xFF,
    0x7F, 0x3F, 0x3F, 0x1F, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x07, 0x07, 0x87,
    0xC7, 0xCF, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x80, 0xC0, 0xE0, 0xE0, 0xFE,
    0xFC, 0xF8, 0x80, 0x00, 0x00, 0x01,
    0xFF, 0xFF, 0xFE, 0xFE, 0x00, 0x00,
    0x00, 0x8F, 0x9F, 0x9F, 0x9F, 0x9F,
    0x9F, 0xE0, 0xE0, 0xC0, 0x80, 0x08,
    0x1C, 0x1D, 0x00, 0x00, 0x00, 0x0F,
    0x0F, 0x07, 0xE3, 0xF1, 0xF8, 0xFC,
    0xFE, 0xFF, 0x7F, 0x7F, 0x3F, 0x1F,
    0x1F, 0x63, 0x63, 0x78, 0x78, 0x7C,
    0x1E, 0x1E, 0x1C, 0x18, 0x18, 0x18,
    0x00, 0xE0, 0xE0, 0xC0, 0xC0, 0xC0,
    0xC1, 0xE1, 0xE0, 0xE0, 0x80, 0x80,
    0xF4, 0xFE, 0xFC, 0xF8, 0xF8, 0xF8,
    0xF8, 0xE2, 0xE2, 0xC2, 0x0E, 0x0E,
    0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F,
    0x87, 0xC0, 0xE0, 0xE0, 0xE0, 0xC0,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x80, 0xE0, 0xF0, 0xF8, 0xF8, 0xFC,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
    0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0x3F, 0x1F, 0xCF, 0xCF, 0xF0,
    0xF0, 0xF0, 0xF1, 0xF3, 0xF3, 0xF3,
    0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x03, 0x01, 0x00, 0x00, 0x00, 0x80,
    0xC0, 0xF0, 0xF0, 0xF0, 0xF1, 0x71,
    0x31, 0x31, 0x01, 0x81, 0xC0, 0xE0,
    0xF0, 0xF0, 0xF0, 0xF8, 0xFC, 0xFC,
    0xFC, 0xF8, 0xE0, 0x00, 0x00, 0x00,
    0x00, 0xF0, 0x80, 0x03, 0x07, 0x1F,
    0x1F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0x00, 0x00, 0x00, 0x8F,
    0x8F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFE, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
    0xFC, 0xFC, 0xFC, 0xFE, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0x80, 0x00, 0x00, 0x00, 0x81,
    0xC1, 0xE1, 0xE1, 0xFE, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFE, 0xFE, 0xFE, 0xFE,
    0xFF, 0xFF, 0x7F, 0x1F, 0x1F, 0x01,
    0x00, 0x00, 0xC0, 0xC0, 0xE6, 0xE7,
    0xFF, 0xFF, 0x1F, 0x1F, 0x0F, 0x07,
    0x87, 0x87, 0xC7, 0x87, 0x1F, 0x1F,
    0xC0, 0xE0, 0xE0, 0xFF, 0xFF, 0xFE,
    0xFC, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8,
    0xF8, 0xF8, 0x00, 0x00, 0x00, 0x1E,
    0x3F, 0xFF, 0xFF, 0xFE, 0xFE, 0xF9,
    0xF9, 0x83, 0x07, 0x07, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF,
};

    oled_write_raw_P(my_logo, sizeof(my_logo));
}
