# Reference: https://github.com/qmk/qmk_firmware/blob/master/docs/config_options.md

# MCU options.
ARCH = AVR8
F_CPU = 8000000
F_USB = $(F_CPU)

# Bootloader selection
#BOOTLOADER = atmel-dfu
#BOOTLOADER = qmk-dfu
#BOOTLOADER = lufa-dfu

# Build options.
EXTRAKEY_ENABLE = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
SLEEP_LED_ENABLE = no
# TODO: If this doesn't work, see here for troubleshooting: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
# You may need to include "#define FORCE_NKRO" in the config.h file.
# If you have issues testing it, see here: https://docs.qmk.fm/#/getting_started_make_guide
NKRO_ENABLE = yes
BACKLIGHT_ENABLE = no
RGBLIGHT_ENABLE = no
AUDIO_ENABLE = no

# TODO: Consider using Link Time Optimization (see LTO_ENABLE in https://docs.qmk.fm/#/config_options for more details) if the firmware size needs to be decreased.