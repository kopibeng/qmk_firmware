# XT ALICE

![XT ALICE](https://i.imgur.com/oRp4lRih.jpg)

A QMK-powered, VIA-enabled PCB with support for split-ergo layout.

* Keyboard Maintainer: kopibeng
* Hardware Supported: TGR ALICE
* Hardware Availability: N/A

Make example for this keyboard (after setting up your build environment):

    make kopibeng/xtalice:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

* Physical reset: Short the RESET jumper on PCB.
* Bootmagic reset: Unplug keyboard, hold down top left key and plug in the keyboard.
* Keycode reset: Press the `QK_BOOT` keycode (default: MO(1) + top left key) in layout if available.