#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6227
#define PRODUCT_ID      0x0088
#define DEVICE_VER      0x0001
#define MANUFACTURER    grldt
#define PRODUCT         8f
#define DESCRIPTION     8 keys, reversible, hot-swappable macropad with two rotary encoder and OLED display support

/* VIAL UID */
#define VIAL_KEYBOARD_UID {0x12, 0xBB, 0xE0, 0x2C, 0xFD, 0x5B, 0x61, 0xE0}

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 4

/* Keyboard Matrix Assignments */
#define DIRECT_PINS { \
    { B6, B2, B3, B1 }, \
    { F7, F6, F5, F4 } \
}

#define ENCODERS_PAD_A { B4, D7 }
#define ENCODERS_PAD_B { B5, E6 }

#define RGB_DI_PIN D3
#ifdef RGB_DI_PIN
  #define RGBLED_NUM 2
  #define RGBLIGHT_HUE_STEP 16
  #define RGBLIGHT_SAT_STEP 16
  #define RGBLIGHT_VAL_STEP 16
  #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
  #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
// /*== all animations enable ==*/
  #define RGBLIGHT_ANIMATIONS
#endif
