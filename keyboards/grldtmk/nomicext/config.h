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
#define PRODUCT_ID      0xE007
#define DEVICE_VER      0x0001
#define MANUFACTURER    grldtmk
#define PRODUCT         Nomic-Ext
#define DESCRIPTION     Arisu layout keyboard with pro micro

/* vial uid: python3 util/vial_generate_keyboard_uid.py */
#define VIAL_KEYBOARD_UID {0x5C, 0x31, 0x9F, 0x30, 0x04, 0xE6, 0x59, 0x5C}

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 8

/* key matrix pins */
#define MATRIX_ROW_PINS { F5, F7, B3, B6, B5, F4, F6, B1, B2, B4 }
#define MATRIX_COL_PINS { D3, D2, D1, D0, D4, C6, D7, E6 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW
