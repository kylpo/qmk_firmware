/*
Copyright 2019 Ethan Durrant (emdarcher)

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
#define VENDOR_ID           0xFEED
#define PRODUCT_ID          0x0000
#define DEVICE_VER          0x0003
#define MANUFACTURER        emdarcher
#define PRODUCT             Navi10
#define DESCRIPTION         A simple and fun navigation cluster macropad with exposed components.

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 3

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS \
    { B6, B2, B3, B4 }
#define MATRIX_COL_PINS \
    { D4, E6, B1 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Mouse stuff */
/* from https://www.reddit.com/r/olkb/comments/72u8ou/qmk_mouse_keys_rock/ */
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_MAX_SPEED 5
#define MOUSEKEY_WHEEL_DELAY 0

/* Comment below to re-enable acceleration mode */
/* #define MK_3_SPEED
#define MK_MOMENTARY_ACCEL */


