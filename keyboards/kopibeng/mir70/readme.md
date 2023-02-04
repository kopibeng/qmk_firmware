# MIR70

![MIR70](https://i.imgur.com/5BzAgPgl.png)

A QMK-powered, VIA-enabled 65% PCB with support for ANSI layout, split Backspace and 6.25U bottom row.

* Keyboard Maintainer: kopibeng
* Hardware Supported: KLC-Playground
* Hardware Availability: https://klc-playground.com/

Make example for this keyboard (after setting up your build environment):

    make kopibeng/mir70:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

* Physical reset: Short the RESET jumper on PCB.
* Bootmagic reset: Unplug keyboard, hold down ESC key and plug in the keyboard.
* Keycode reset: Press the `QK_BOOT` keycode (default: MO(1) + Home keys) in layout if available.
