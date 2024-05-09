#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"

enum layer_names {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST,
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
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

// ┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
// │ Q  │ W  │ E  │ R  │ T  │ Y  │ U  │ I  │ O  │ P  │
// ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
// │ A  │ S  │ D  │ F  │ G  │ H  │ J  │ K  │ L  │ ;  │
// ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
// │ Z  │ X  │ C  │ V  │ B  │ N  │ M  │ ,  │ .  │ /  │
// ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
// │    │    │BOOT│ LOW│SPC │BSP │RAIS│RGB │    │    │
// └────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘

    [_QWERTY] = LAYOUT_ortho_4x10(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        LGUI_A,  LALT_S,  LSFT_D,  LCTL_F,  KC_G,    KC_H,    RCTL_J,  RSFT_K,  LALT_L,  RGUI_SCLN,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
        KC_NO,   KC_NO,   QK_BOOT, LOWER,   KC_SPC,  KC_BSPC, RAISE,   MO(4),   KC_NO,   KC_NO
    ),

// ┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
// │ESC │ `  │INS │PGUP│HOME│ CW │ [{ │ ]} │ \| │ '" │
// ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
// │ATAB│ASTB│DEL │PGDN│END │PSCR│OSMC│OSMS│OSMA│OSMG│
// ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
// │STAB│TAB │PRV │PLAY│NEXT│    │VOLD│MUTE│VOLU│    │
// ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
// │    │    │BOOT│ LOW│SPC │BSP │RAIS│RGB │    │    │
// └────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘

    [_LOWER] = LAYOUT_ortho_4x10(
        KC_ESC,  KC_GRV,  KC_INS,  KC_PGUP, KC_HOME, CW_TOGG, KC_LBRC, KC_RBRC, KC_BSLS, KC_QUOT,
        LALT(KC_TAB), LSA(KC_TAB), KC_DEL, KC_PGDN, KC_END, KC_PSCR, OSM(MOD_LCTL), OSM(MOD_LSFT), OSM(MOD_LALT), OSM(MOD_LGUI),
        LSFT(KC_TAB),   KC_TAB,   KC_MPRV, KC_MPLY, KC_MNXT, KC_NO,   KC_VOLD, KC_MUTE, KC_VOLU, KC_NO,
        KC_NO,   KC_NO,   QK_BOOT, _______,   KC_NO,  KC_ENT,   _______,   QK_BOOT, KC_NO,   KC_NO
    ),

// ┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
// │WHL │ WHD│WHU │WHR │BTN3│    │ 7  │ 8  │ 9  │ =+ │
// ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
// │MSL │MSD │MSU │MSR |BTN1│    │ 4  │ 5  │ 6  │ -_ │
// ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
// │LEFT│DOWN│ UP │RIGT│BTN2│ 0  │ 1  │ 2  │ 3  │    │
// ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
// │    │    │    │    │STDL│    │    │    │    │    │
// └────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘

    [_RAISE] = LAYOUT_ortho_4x10(
        KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_BTN3,          KC_NO,   KC_7,    KC_8,    KC_9,    KC_EQL,
        KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN1,          KC_NO,   KC_4,    KC_5,    KC_6,    KC_MINS,
        KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_BTN2,          KC_0,    KC_1,    KC_2,    KC_3,    KC_NO,
        KC_NO,   KC_NO,   KC_NO,   _______,   LSFT_T(KC_DEL),   KC_NO,   _______,   KC_NO,   KC_NO,   KC_NO
    ),

// ┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
// │ F1 │ F2 │ F3 │ F4 │    │    │CPSN│WAKE│SLEP|BOOT│
// ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
// │ F5 │ F6 │ F7 | F8 |    │    │    │BRIU│TSKM│CADL│
// ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
// │ F9 │ F10│ F11│ F12│    │    │    │BRID│ASPC│GUI.│
// ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
// │    │    │    │    │    │    │    │    │    │    │
// └────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘

    [_ADJUST] = LAYOUT_ortho_4x10(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_NO,   KC_NO,   CPSN,   KC_WAKE, KC_SLEP,        QK_BOOT,
        KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_NO,   KC_NO,   KC_NO,   KC_BRIU, TSKMGR,         CALTDEL,
        KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,   KC_NO,   KC_NO,   KC_BRID, LALT(KC_SPC),   LGUI(KC_DOT),
        KC_NO,   KC_NO,   KC_NO,   _______,   KC_NO,   KC_NO,   _______,   KC_NO, KC_NO,          KC_NO
    ),

// ┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
// │I/0 │ MOD│HUI |SAI │VAI │SPI │ MP │ MB │ MR | MSW│
// ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
// │    │RMOD│HUD |SAD |VAD │SPD │ MSN│ MK │ MX │ MG │
// ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
// │    │    │    │    │    │    │    │    │    │ MT │
// ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
// │    │    │    │    │    │    │    │    │    │    │
// └────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘

    [4] = LAYOUT_ortho_4x10(
        RGB_TOG,    RGB_MOD,    RGB_HUI,    RGB_SAI,    RGB_VAI,    RGB_SPI,    RGB_M_P,    RGB_M_B,    RGB_M_R,    RGB_M_SW,
        KC_NO,      RGB_RMOD,   RGB_HUD,    RGB_SAD,    RGB_VAD,    RGB_SPD,    RGB_M_SN,   RGB_M_K,    RGB_M_X,    RGB_M_G,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      RGB_M_T,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO
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
        #ifdef AUDIO_ENABLE
          PLAY_SONG(tone_qwerty);
        #endif
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
