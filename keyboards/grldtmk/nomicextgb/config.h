/*
Copyright 2021 Gerald Stephanus

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
#define PRODUCT_ID      0xE069
#define DEVICE_VER      0x0001
#define MANUFACTURER    grldtmk
#define PRODUCT         Nomic-Ext
#define DESCRIPTION     Arisu layout keyboard with pro micro

/* vial uid: python3 util/vial_generate_keyboard_uid.py */
#define VIAL_KEYBOARD_UID {0x06, 0x4E, 0x4C, 0xE5, 0xAF, 0x9D, 0x1B, 0x15}

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

/* key matrix pins */
#define MATRIX_ROW_PINS { B4, E6, F4, F5, F6, F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS { D7, C6, D4, D0, D1, D2, D3 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define RGB_DI_PIN B5
#ifdef RGB_DI_PIN
  #define RGBLED_NUM 20
  #define RGBLIGHT_HUE_STEP 16
  #define RGBLIGHT_SAT_STEP 16
  #define RGBLIGHT_VAL_STEP 16
  #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
  #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
// /*== all animations enable ==*/
  #define RGBLIGHT_ANIMATIONS
#endif
