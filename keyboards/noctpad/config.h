// Copyright 2024 sgilissen (@sgilissen)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 6

#define OLED_DISPLAY_128X64
#define I2C_DRIVER I2CD0
#define I2C1_SDA_PIN GP4
#define I2C1_SCL_PIN GP5
