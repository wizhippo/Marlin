/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Melzi pin assignments
 */

#define BOARD_INFO_NAME "Melzi (Tronxy)"

#if HAS_MARLINUI_U8GLIB
  #ifndef BOARD_ST7920_DELAY_1
    #define BOARD_ST7920_DELAY_1 DELAY_NS(0)
  #endif
  #ifndef BOARD_ST7920_DELAY_2
    #define BOARD_ST7920_DELAY_2 DELAY_NS(125)
  #endif
  #ifndef BOARD_ST7920_DELAY_3
    #define BOARD_ST7920_DELAY_3 DELAY_NS(0)
  #endif
#endif

#include "pins_MELZI.h"

#undef Z_ENABLE_PIN
#undef LCD_PINS_RS
#undef LCD_PINS_ENABLE
#undef LCD_PINS_D4
#undef LCD_PINS_D5
#undef LCD_PINS_D6
#undef LCD_PINS_D7
#undef BTN_EN1
#undef BTN_EN2
#undef BTN_ENC
#undef LCD_SDSS

#define Z_ENABLE_PIN                          14
// #define LCD_PINS_RS                           30
// #define LCD_PINS_ENABLE                       28
// #define LCD_PINS_D4                           16
// #define LCD_PINS_D5                           17
// #define LCD_PINS_D6                           27
// #define LCD_PINS_D7                           29
// #define BTN_EN1                               10
// #define BTN_EN2                               11
// #define BTN_ENC                               26

#undef HEATER_0
#undef HEATER_0_PIN
#undef HEATER_BED
#undef HEATER_BED_PIN

#define SERVO0_PIN                            27

// SWAP X AN Z
#undef X_STEP_PIN
#undef X_DIR_PIN
#undef Y_STEP_PIN
#undef Y_DIR_PIN
#undef Z_STEP_PIN
#undef Z_DIR_PIN
#undef E0_ENABLE_PIN
#undef E0_STEP_PIN
#undef E0_DIR_PIN

#define X_STEP_PIN                            22
#define X_DIR_PIN                             23

#define Y_STEP_PIN                             3
#define Y_DIR_PIN                              2
#define Y2_ENABLE_PIN                         14
#define Y2_STEP_PIN                            1
#define Y2_DIR_PIN                             0

#define Z_STEP_PIN                            15
#define Z_DIR_PIN                             21

#undef SERVO_X_INDEX
#undef SERVO_Y_INDEX
#undef SERVO_Z_INDEX

#define SERVO_X_INDEX 2
#define SERVO_Y_INDEX 1
#define SERVO_Z_INDEX 0
