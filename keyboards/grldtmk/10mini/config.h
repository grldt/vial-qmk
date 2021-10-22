#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6227
#define PRODUCT_ID      0x1001
#define DEVICE_VER      0x0001
#define MANUFACTURER    grldt
#define PRODUCT         10mini
#define DESCRIPTION     10 keys macropad

/* VIAL UID */
// python3 util/vial_generate_keyboard_uid.py
#define VIAL_KEYBOARD_UID {0x5E, 0xEA, 0x56, 0xB8, 0x1D, 0xC2, 0xB8, 0xE3}

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 5

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS { D4, D0 }
#define MATRIX_COL_PINS { F7, F6, F5, F4, C6 }

#define DIODE_DIRECTION COL2ROW
// #define DIODE_DIRECTION EITHERWAY
