// Copyright 2024 Alex McKinney (@Alex McKinney)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#undef LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#undef LOCKING_RESYNC_ENABLE

/* Enables This makes it easier for fast typists to use dual-function keys */
#undef PERMISSIVE_HOLD
#define DIODE_DIRECTION COL2ROW

#define WS2812_DI_PIN GP18
#define RGBLIGHT_LED_COUNT 44

#define RGBLIGHT_LED_MAP { 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_GRB
// #define WS2812_LED_COUNT 44

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

#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17
#define RGBLIGHT_LIMIT_VAL 255

#define COMBO_VARIABLE_LEN
#define COMBO_TERM 50
