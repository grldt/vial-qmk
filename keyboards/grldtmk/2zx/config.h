#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6227
#define PRODUCT_ID      0x0002
#define DEVICE_VER      0x0001
#define MANUFACTURER    grldt
#define PRODUCT         2zx
#define DESCRIPTION     2 keys macropad for osu!

/* VIAL UID */


/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 2

/* Keyboard Matrix Assignments */
#define DIRECT_PINS { \
    { D1, D0 } \
}
