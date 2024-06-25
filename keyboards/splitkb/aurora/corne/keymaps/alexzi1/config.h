#pragma once

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#undef LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#undef LOCKING_RESYNC_ENABLE

/* Enables This makes it easier for fast typists to use dual-function keys */
#undef PERMISSIVE_HOLD

#ifdef RGBLIGHT_ENABLE

#define RGBLIGHT_EFFECT_TWINKLE

#endif

#define COMBO_VARIABLE_LEN
#define COMBO_TERM 200
#define COMBO_HOLD_TERM 200
#define DEBOUNCE 5

#define TAPPING_TERM 200


// OLED code
#define BONGO_CAT
