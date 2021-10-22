#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6227
#define PRODUCT_ID      0x0006
#define DEVICE_VER      0x0001
#define MANUFACTURER    grldt
#define PRODUCT         6e
#define DESCRIPTION     6 keys macropad with rotary encoder

/* VIAL UID */
#define VIAL_KEYBOARD_UID {0xE7, 0x01, 0x1C, 0xE9, 0x73, 0xC6, 0x2E, 0x12}

// #define USE_I2C
#define SOFT_SERIAL_PIN D1
#define SPLIT_HAND_PIN D3

/* key matrix size */
#define MATRIX_ROWS 1*2
#define MATRIX_COLS 1

/* Keyboard Matrix Assignments */
// #define MATRIX_ROW_PINS { F6, F7 }
// #define MATRIX_COL_PINS { D1, D0, B1 }
// #define UNUSED_PINS
#define DIRECT_PINS { \
    { D7 } \
}

#define DIRECT_PINS_RIGHT { \
    { B2 } \
}

// #define DIODE_DIRECTION COL2ROW

// #define ENCODERS_PAD_A { F5 }
// #define ENCODERS_PAD_B { F4 }
