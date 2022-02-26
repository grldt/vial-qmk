#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6227
#define PRODUCT_ID      0x0465
#define DEVICE_VER      0x0001
#define MANUFACTURER    grldtmk
#define PRODUCT         RS-F
#define DESCRIPTION     65% Hotswap keyboard with pro micro support

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

#define VIAL_KEYBOARD_UID {0x62, 0x4A, 0xD8, 0xDF, 0x6A, 0xD9, 0xF3, 0x59}

// wiring of each half
#define MATRIX_ROW_PINS { D0, C6, E6, B5, F4, D1, D4, D7, B4, D2 }
#define MATRIX_COL_PINS { F5, F6, F7, B1, B3, B2, B6 }

// #define DIODE_DIRECTION ROW2COL
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
