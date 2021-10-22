/*
Copyright 2018 Danny Nguyen <danny@keeb.io>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6227
#define PRODUCT_ID      0x0046
#define DEVICE_VER      0x0001
#define MANUFACTURER    grldtmk
#define PRODUCT         46h
#define DESCRIPTION     40 percent keyboard with rotary encoder support

#define VIAL_KEYBOARD_UID {0x6A, 0x44, 0x8D, 0x1F, 0xEB, 0xB1, 0x96, 0x1B}

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

/* key matrix pins */
#define MATRIX_ROW_PINS {F4, F5, F6, F7, B1, B3, B2, B6}
#define MATRIX_COL_PINS {D1, D0, D4, C6, D7, E6}

#define ENCODERS_PAD_A { B4 }
#define ENCODERS_PAD_B { B5 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

#define TAPPING_TERM 200

// #define RGB_DI_PIN D3
// #ifdef RGB_DI_PIN
//   #define RGBLED_NUM 8
//   #define RGBLIGHT_HUE_STEP 16
//   #define RGBLIGHT_SAT_STEP 16
//   #define RGBLIGHT_VAL_STEP 16
//   #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
//   #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
// // /*== all animations enable ==*/
//   #define RGBLIGHT_ANIMATIONS
// #endif
