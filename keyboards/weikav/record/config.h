/* Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// #define MATRIX_UNSELECT_DRIVE_HIGH

/* key matrix size */
#define RGB_MATRIX_LED_COUNT 66

// @TODO
// #define SN32_RGB_MATRIX_ROW_PINS { 00, 01, 02, 03, 04, 05, 06, 07, 08, 09, 10, 11, 12, 13, 14, 15, 16 }

/* Configure the effects:                                              */
#define RGB_MATRIX_TYPING_HEATMAP_DECREASE_DELAY_MS 50

/* Configure transistor logic for RGB matrix */
#define SN32_PWM_OUTPUT_ACTIVE_LEVEL SN32_PWM_OUTPUT_ACTIVE_HIGH
#define SN32_RGB_OUTPUT_ACTIVE_LEVEL SN32_RGB_OUTPUT_ACTIVE_LOW