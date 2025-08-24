# gb_macropad

A 3x4 macropad with 2 rotary encoders, built by Glassboard Product Development.

Contributors:
Quinlan Walinder - PCB Design and Firmware
Colin Ternus - PCB Schematic and Mechanical Design
Sean Kleinschmidt - Wallet


* Keyboard Maintainer: [quinlanwalinder-gb](https://github.com/quinlanwalinder-gb)
* Hardware Supported: ATmega32u4
* Layout: 3x4 matrix + 2 encoders

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
