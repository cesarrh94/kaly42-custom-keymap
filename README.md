# kaly42-custom-keymap
This is my own keymap for the Kaly42 keyboard that uses QMK Firmware.

How to use my keymap:

1. Install QMK for your OS
2. Run the command "qmk setup" to download/clone qmk_firmware repository
3. Clone this repo inside the qmk_firmware repository previsouly downloaded on the following path: ~/qmk_firmware/keyboards/kaly/kaly42/keymaps
5. To compile the firmware run this command: qmk compile -kb kaly/kaly42 -km kaly42-custom-keymap
6. To flash the firmware run this command: qmk flash -kb kaly/kaly42 -km kaly42-custom-keymap

And that's all,

Thanks you for your support.


NOTE: I will continue making new iterations of this keymap on the future by adding home row mods, decreasing the layers to 1 or maybe adding the miryoku layout.
