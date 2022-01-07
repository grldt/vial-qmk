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
#define PRODUCT_ID      0xC040
#define DEVICE_VER      0x0001
#define MANUFACTURER    grldtmk
#define PRODUCT         chz40
#define DESCRIPTION     40 percent keyboard with RGB Light Bar

// vial uid: python3 util/vial_generate_keyboard_uid.py
#define VIAL_KEYBOARD_UID {0x20, 0xE1, 0x73, 0xF7, 0x1C, 0x56, 0xEA, 0x0D}

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

/* key matrix pins */
#define MATRIX_ROW_PINS { B5, B4, E6, D7, C6, D4, D0, D1 }
#define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define RGB_DI_PIN F4
#ifdef RGB_DI_PIN
  #define RGBLED_NUM 5
  #define RGBLIGHT_HUE_STEP 16
  #define RGBLIGHT_SAT_STEP 16
  #define RGBLIGHT_VAL_STEP 16
  #define RGBLIGHT_LIMIT_VAL 255  /* The maximum brightness level */
  #define RGBLIGHT_SLEEP          /* If defined, the RGB lighting will be switched off when the host goes to sleep */
  #define RGBLIGHT_ANIMATIONS     /* all animations enable */
#endif
