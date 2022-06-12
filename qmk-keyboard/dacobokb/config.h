// Copyright 2022 Anton Fedorov (@datacompboy)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

// #define LEFT

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


// Left half should have two fake columns to make left & right matrix equals
#define MATRIX_COL_PINS       { GP0,  GP1,  GP2,  GP3,  GP4,  GP5,  GP6,  GP7,  GP7,  GP7 }
#define MATRIX_ROW_PINS       { GP10, GP11, GP12, GP13, GP14, GP15 }

#define MATRIX_COL_PINS_RIGHT { GP16, GP3,  GP2,  GP17, GP18, GP20, GP21, GP22, GP27, GP28 }
#define MATRIX_ROW_PINS_RIGHT { GP26, GP19, GP4,  GP13, GP14, GP15 }

#define SPLIT_USB_DETECT
#define SPLIT_LAYER_STATE_ENABLE
#define SERIAL_USART_FULL_DUPLEX
#define HAL_USE_SIO  TRUE
