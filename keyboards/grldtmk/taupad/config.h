#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6227
#define PRODUCT_ID      0x0747
#define DEVICE_VER      0x0001
#define MANUFACTURER    grldtmk
#define PRODUCT         tauPAD
#define DESCRIPTION     8 keys, hot-swappable macropad with RGB underglow

/* VIAL UID */
// python3 util/vial_generate_keyboard_uid.py
#define VIAL_KEYBOARD_UID {0x21, 0xBB, 0x69, 0x70, 0x8E, 0x9E, 0xBD, 0xE3}

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 4

/* Keyboard Matrix Assignments */
#define DIRECT_PINS { \
    { D1, D0, D4, C6 }, \
    { D7, E6, B4, B5 } \
}

#define RGB_DI_PIN B6
#ifdef RGB_DI_PIN
  #define RGBLED_NUM 6
  #define RGBLIGHT_HUE_STEP 16
  #define RGBLIGHT_SAT_STEP 16
  #define RGBLIGHT_VAL_STEP 16
  #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
  #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
// /*== all animations enable ==*/
  #define RGBLIGHT_ANIMATIONS
#endif
