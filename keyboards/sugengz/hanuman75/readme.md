# Hanuman75

![Hanuman 75](image_URL)

A Ortholinear 84keys keyboard with optional 2 encoder and/or 2 units spacebar

* Keyboard Maintainer: [sugengz.mmxxii](https://github.com/sugengz)
* Hardware Supported: Hanuman PCB ver1, atmega32a
* Hardware Availability: [Github](https://github.com/sugengz)

Make example for this keyboard (after setting up your build environment):

    make hanuman75:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the Escape key at (0,0) in the matrix (second switch from the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press hold both the RESET button and the BOOT button, relased the RESET then the BOOT button
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available