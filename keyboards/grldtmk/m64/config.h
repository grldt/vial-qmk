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
#define PRODUCT_ID      0x4D64
#define DEVICE_VER      0x0001
#define MANUFACTURER    grldtmk
#define PRODUCT         M-64
#define DESCRIPTION     Split Macropad with rotary encoder support

/* vial uid python3 util/vial_generate_keyboard_uid.py */
#define VIAL_KEYBOARD_UID {0x49, 0xD4, 0xC5, 0xF1, 0x1F, 0xCB, 0x45, 0xCC}

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 5

/* key matrix pins */
#define MATRIX_ROW_PINS { E6, B4 }
#define MATRIX_COL_PINS { D1, D0, D4, F4, F5 }

#define ENCODERS_PAD_A { D7, F6 }
#define ENCODERS_PAD_B { C6, F7 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define RGB_DI_PIN B5
#ifdef RGB_DI_PIN
  #define RGBLED_NUM 8
  #define RGBLIGHT_HUE_STEP 16
  #define RGBLIGHT_SAT_STEP 16
  #define RGBLIGHT_VAL_STEP 16
  #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
  #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
// /*== all animations enable ==*/
  #define RGBLIGHT_ANIMATIONS
#endif
