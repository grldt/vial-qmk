#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6227
#define PRODUCT_ID      0x12FB
#define DEVICE_VER      0x0001
#define MANUFACTURER    grldt
#define PRODUCT         FBomb
#define DESCRIPTION     12 Keys scuffed macropad for iamELVN

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 12

#define VIAL_KEYBOARD_UID {0x82, 0x4E, 0x2B, 0xF4, 0x44, 0xD3, 0x76, 0x2B}

/* Keyboard Matrix Assignments */
// #define MATRIX_ROW_PINS {D1, D0, D4}
// #define MATRIX_COL_PINS {F4, F5, F6, F7}

#define DIRECT_PINS { \
    { D1, D0, D4, C6, D7, E6, B4, B5, B6, B2, B3, B1 } \
}

#define DIODE_DIRECTION COL2ROW
