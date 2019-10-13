#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6464
#define DEVICE_VER      0x0001
/* in python2: list(u"whatever".encode('utf-16-le')) */
/*   at most 32 characters or the ugly hack in usb_main.c works */

#define MANUFACTURER "QMK"
#define USBSTR_MANUFACTURER    'T', '\x00', 'M', '\x00', 'K', '\x00', ' ', '\x00', '\xc6', '\x00'
#define PRODUCT "G84-4100"
#define USBSTR_PRODUCT         'C', '\x00', 'h', '\x00', 'i', '\x00', 'b', '\x00', 'i', '\x00', 'O', '\x00', 'S', '\x00', ' ', '\x00', 'Q', '\x00', 'M', '\x00', 'K', '\x00'
#define DESCRIPTION "QMK keyboard firmware with ChibiOS"

/* key matrix size */
#define MATRIX_ROWS 16
#define MATRIX_COLS 8

#define MATRIX_ROW_PINS { A4, B3, A5, A15, A6, C15, A7, A10, B0, A9, B10, A8, B15, B14, B13, B12 }
#define MATRIX_COL_PINS { A0, B9, A1, B8, A2, B5, A3, B4 }

#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM (200)

// Iso fix for Space Cadet, comment for ANSI layouts
#define LSPO_KEY KC_8
#define RSPC_KEY KC_9

#define DEBOUNCE    5

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
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
