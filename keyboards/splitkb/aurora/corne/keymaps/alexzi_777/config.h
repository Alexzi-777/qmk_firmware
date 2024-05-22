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
#define COMBO_TERM 30
#define DEBOUNCE 10

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

