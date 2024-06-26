#include QMK_KEYBOARD_H
#include "i2c_master.h"
#include "g/keymap_combo.h"
#include <stdio.h>
#ifdef OLED_ENABLE
#include "cat.c"
#endif


enum layer_names {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST,
    _RGBz,
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
  RGBz,
};

// Defines for task manager and such
#define CALTDEL LCTL(LALT(KC_DEL))
#define TSKMGR LCTL(LSFT(KC_ESC))
#define CPSN LCTL(KC_PSCR)

// Defines for the keymap home row mods
#define LGUI_A LGUI_T(KC_A)
#define LALT_S LALT_T(KC_S)
#define LSFT_D LSFT_T(KC_D)
#define LCTL_F LCTL_T(KC_F)
#define RCTL_J RCTL_T(KC_J)
#define RSFT_K RSFT_T(KC_K)
#define LALT_L LALT_T(KC_L)
#define RGUI_SCLN RGUI_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT_split_3x6_3(
    // +-------+-------+-------+-------+-------+-------+    +-------+-------+-------+-------+-------+-------+
        KC_NO,    KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,         KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,    KC_NO,
    // +-------+-------+-------+-------+-------+-------+    +-------+-------+-------+-------+-------+-------+
        KC_NO,    LGUI_A, LALT_S, LSFT_D, LCTL_F, KC_G,         KC_H,   RCTL_J, RSFT_K, LALT_L, RGUI_SCLN,KC_NO,
    // +-------+-------+-------+-------+-------+-------+    +-------+-------+-------+-------+-------+-------+
        KC_NO,    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,         KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH, KC_NO,
    // +-------+-------+-------+-------+-------+-------+    +-------+-------+-------+-------+-------+-------+
                                  QK_BOOT, LOWER,  KC_SPC,     KC_BSPC, RAISE,  OSL(4)
    //                             +-------+-------+-------+    +-------+-------+-------+
    ),

    [_LOWER] = LAYOUT_split_3x6_3(
    // +-------+-------+-------+-------+-------+-------+    +-------+-------+-------+-------+-------+-------+
        KC_NO, KC_ESC,  KC_VOLU,KC_PSCR,KC_SCRL,KC_PAUS,     KC_NO,  KC_NO,  KC_LBRC,KC_RBRC,KC_UNDS, KC_NO,
    // +-------+-------+-------+-------+-------+-------+    +-------+-------+-------+-------+-------+-------+
        KC_NO, KC_GRV,  KC_MUTE, KC_INS,KC_PGUP,KC_HOME,     KC_NO,   LALT(KC_ESC), LSA(KC_ESC), LSFT(KC_TAB), KC_TAB, KC_NO,
    // +-------+-------+-------+-------+-------+-------+    +-------+-------+-------+-------+-------+-------+
        KC_BSLS,KC_NO,  KC_VOLD, KC_DEL, KC_PGDN, KC_END,     KC_NO,   S(C(KC_TAB)),   LCTL(KC_TAB),   LSA(KC_TAB), LALT(KC_TAB), KC_NO,
    // +-------+-------+-------+-------+-------+-------+    +-------+-------+-------+-------+-------+-------+
                                  QK_BOOT, KC_TRNS, KC_NO,      KC_ENT,  KC_TRNS, QK_BOOT
    //                             +-------+-------+-------+    +-------+-------+-------+
    ),

    [_RAISE] = LAYOUT_split_3x6_3(
    // +-------+-------+-------+-------+-------+-------+    +-------+-------+-------+-------+-------+-------+
        KC_NO,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_BTN3,    KC_NO,   KC_7,    KC_8,    KC_9,    KC_PMNS, KC_NO,
    // +-------+-------+-------+-------+-------+-------+    +-------+-------+-------+-------+-------+-------+
        KC_NO,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN1,    KC_PAST, KC_4,    KC_5,    KC_6,    KC_PPLS, KC_NO,
    // +-------+-------+-------+-------+-------+-------+    +-------+-------+-------+-------+-------+-------+
        KC_NO,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_BTN2,    KC_0,    KC_1,    KC_2,    KC_3,    KC_EQL, KC_NO,
    // +-------+-------+-------+-------+-------+-------+    +-------+-------+-------+-------+-------+-------+
                                  QK_BOOT, KC_TRNS, LSFT_T(KC_DEL), KC_NO,   KC_TRNS, QK_BOOT
    //                             +-------+-------+-------+    +-------+-------+-------+
    ),

    [_ADJUST] = LAYOUT_split_3x6_3(
    // +-------+-------+-------+-------+-------+-------+    +-------+-------+-------+-------+-------+-------+
        KC_NO,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    // +-------+-------+-------+-------+-------+-------+    +-------+-------+-------+-------+-------+-------+
        KC_NO,    KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_NO,    KC_NO,   KC_NO,   TSKMGR,  CALTDEL, KC_NO,   KC_NO,
    // +-------+-------+-------+-------+-------+-------+    +-------+-------+-------+-------+-------+-------+
        KC_NO,    KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,    KC_NO,   CPSN,    CW_TOGG, LALT(KC_SPC), LGUI(KC_DOT), KC_NO,
    // +-------+-------+-------+-------+-------+-------+    +-------+-------+-------+-------+-------+-------+
                                  QK_BOOT, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, QK_BOOT
    //                             +-------+-------+-------+    +-------+-------+-------+
    ),

    [_RGBz] = LAYOUT_split_3x6_3(
    // +-------+-------+-------+-------+-------+-------+    +-------+-------+-------+-------+-------+-------+
        KC_NO,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,    RGB_SPI, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, KC_NO,
    // +-------+-------+-------+-------+-------+-------+    +-------+-------+-------+-------+-------+-------+
        KC_NO,    KC_NO,   RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD,    RGB_SPD, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, KC_NO,
    // +-------+-------+-------+-------+-------+-------+    +-------+-------+-------+-------+-------+-------+
        KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   RGB_M_T, KC_NO,
    // +-------+-------+-------+-------+-------+-------+    +-------+-------+-------+-------+-------+-------+
                                  KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO
    //                             +-------+-------+-------+    +-------+-------+-------+
    )
};


void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        persistent_default_layer_set(1UL<<_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}

__attribute__((weak))


//////////////
// ENCODERS //
//////////////

 
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { // First encoder
        if (layer_state_is(_RAISE)) {
            register_code(KC_LALT);
            tap_code(clockwise ? KC_WH_U : KC_WH_D); // Reversed directions
            unregister_code(KC_LALT);
        } else {
            tap_code(clockwise ? KC_WH_U : KC_WH_D); // Reversed directions
        }
        return false;
    } else if (index == 1) { // Second encoder
        if (layer_state_is(_LOWER)) {
            tap_code16(clockwise ? S(A(KC_ESC)) : A(KC_ESC)); // Reversed directions
        } else {
            register_code(KC_LSFT);
            tap_code(clockwise ? KC_LEFT : KC_RGHT); // Reversed directions
            unregister_code(KC_LSFT);
        }
        return false;
    }
    return true;
}

#ifdef OLED_ENABLE // OLED

void matrix_scan_user(void) {
    // Call your OLED update function
    #ifdef OLED_ENABLE
    oled_task_user();
    #endif
}


#endif // OLED