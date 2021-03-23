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

#include "../../inc/MarlinConfig.h"

#include "../../feature/servostepper.h"

#if AXIS_DRIVER_TYPE_Z(SERVOSTEPPER)
    extern ServoStepper stepperZ;
    #define Z_ENABLE_INIT() NOOP
    #define Z_DIR_INIT() NOOP
    #define Z_STEP_INIT() NOOP
    #define Z_STEP_WRITE(STATE) stepperZ.doStep(STATE)
    #define Z_STEP_READ() NOOP
    #define Z_DIR_WRITE(STATE) stepperZ.setDir(STATE)
    #define Z_DIR_READ(STATE) stepperZ.getDir()
    #define Z_ENABLE_WRITE(STATE) stepperZ.enable((STATE)==Z_ENABLE_ON)
    #define Z_ENABLE_READ() stepperZ.isEnabled()
#endif
