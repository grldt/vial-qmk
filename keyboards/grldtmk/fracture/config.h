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
#define PRODUCT_ID      0x1279
#define DEVICE_VER      0x0001
#define MANUFACTURER    grldtmk
#define PRODUCT         Fracture
#define DESCRIPTION     40 percent ergo keyboard with encoder on double B

/* vial uid python3 util/vial_generate_keyboard_uid.py */
#define VIAL_KEYBOARD_UID {0xA3, 0x75, 0x6A, 0xB7, 0xA5, 0x50, 0xC8, 0xC5}

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 7

/* key matrix pins */
#define MATRIX_ROW_PINS { F7, B1, B3, B2, D4, C6, D7, E6 }
#define MATRIX_COL_PINS { F4, F5, F6, D0, D1, D2, D3 }

#define ENCODERS_PAD_A { B4 }
#define ENCODERS_PAD_B { B5 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* ws2812 RGB LED */
#define RGB_DI_PIN B6
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 12
