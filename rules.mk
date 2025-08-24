# MCU and Bootloader
PLATFORM = avr
MCU = atmega32u4
BOOTLOADER = atmel-dfu



# Features
VIA_ENABLE = yes
LTO_ENABLE = yes  # Link Time Optimization, helps reduce firmware size
ENCODER_ENABLE = yes


# Optional: Enable console or debug printing (useful for troubleshooting)
# CONSOLE_ENABLE = yes
# EXTRAKEY_ENABLE = yes  # For media keys, volume, etc.
