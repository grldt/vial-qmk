#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6227
#define PRODUCT_ID      0x6065
#define DEVICE_VER      0x0001
#define MANUFACTURER    grldtmk
#define PRODUCT         R-6X
#define DESCRIPTION     60%/65% hybrid keyboard with pro micro

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

// python3 util/vial_generate_keyboard_uid.py
#define VIAL_KEYBOARD_UID {0xA3, 0xB1, 0xBB, 0xBC, 0x72, 0xB0, 0x55, 0xA5}

#define MATRIX_ROW_PINS { D1, D4, F6, B1, B2, D0, C6, F7, B3, B6 }
#define MATRIX_COL_PINS { D2, D3, F5, F4, B4, E6, D7 }

// #define DIODE_DIRECTION ROW2COL
#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
#define RGB_DI_PIN B5
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 16
