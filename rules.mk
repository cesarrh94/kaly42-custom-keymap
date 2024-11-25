# Configuration to Flash Blackpill Controller with QMK
BOOTLOADER = stm32-dfu
BOARD = GENERIC_STM32_F411XE
SERIAL_DRIVER = usart

LTO_ENABLE = yes            # Enable Link Time Optimization
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Enable Mouse keys
EXTRAKEY_ENABLE = yes       # Enable Audio Control and System Control (Media Keys)
CONSOLE_ENABLE = no         # Console for Debug
COMMAND_ENABLE = no         # Commands for Debug and Configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
SWAP_HANDS_ENABLE = no      # Enable One-Hand Typing
