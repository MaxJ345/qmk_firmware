// Reference: https://github.com/qmk/qmk_firmware/blob/master/docs/config_options.md

// TODO: Set the number of rows, number of columns, final pinouts, and unused pins once the PCB is completed.
// TODO: See here for tips on decreasing the firmware size: https://thomasbaart.nl/2018/12/01/reducing-firmware-size-in-qmk/
// TODO: Also see here for a list of features to disable: https://beta.docs.qmk.fm/developing-qmk/qmk-reference/getting_started_make_guide#rules-mk-options

#pragma once

// Key matrix size.
#define MATRIX_ROWS 12
#define MATRIX_COLS 9

// TODO: If there is significant input lag, consider setting the matrix delay to a lower value.
// #define MATRIX_IO_DELAY 30

// TODO: Test this setting. See if the polling rate for the device can be verified in the OS.
// #define USB_POLLING_INTERVAL_MS 10

// Keyboard matrix assignments.
#define MATRIX_ROW_PINS { F7, F6, F5, F4, F1, F0, D0, B7, B3, B2, B0, B1 }
#define MATRIX_COL_PINS { C7, C6, B6, B5, B4, D7, D6, D4, D5 }

// Define if matrix has ghost (lacks anti-ghosting diodes).
// #define MATRIX_HAS_GHOST

// Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap.
#undef LOCKING_SUPPORT_ENABLE
// Locking resynchronize hack.
#undef LOCKING_RESYNC_ENABLE

// If defined, GRAVE_ESC will always act as ESC when CTRL is held. This is useful for the Windows task manager shortcut (ctrl+shift+esc).
// #define GRAVE_ESC_CTRL_OVERRIDE

// Disable action features.
// #define NO_ACTION_LAYER
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT
