#pragma once

#define EE_HANDS
#define SPLIT_USB_DETECT 

#define VIAL_KEYBOARD_UID {0x07, 0xF7, 0x29, 0x09, 0x30, 0xB5, 0xA4, 0xDC}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}
//#define QUICK_TAP_TERM 0
//#define TAPPING_TERM 100

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_SNAKE
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_RGB_TEST
    #define RGBLIGHT_EFFECT_ALTERNATING
    #define RGBLIGHT_EFFECT_TWINKLE
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

#define DEBOUNCE 10  // Increase debounce time slightly to improve stability
#define OLED_BRIGHTNESS 120  // Adjust to a lower brightness (default is often 255)
#define OLED_TIMEOUT 30000   // Turn off OLED after 30 seconds of inactivity