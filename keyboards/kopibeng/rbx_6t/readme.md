# RBx_6T

![RBx_6T](https://i.imgur.com/GaiWL5mh.png)

A QMK-powered, VIA-enabled 60% PCB with support for ANSI/ISO layout, split Backspace, split Right Shift, stepped Caps Lock and 7U bottom row.

* Keyboard Maintainer: kopibeng
* Hardware Supported: RBx 6T
* Hardware Availability: https://www.rebultkeyboards.com

Make example for this keyboard (after setting up your build environment):

    make kopibeng/rbx_6t:default

Flashing example for this keyboard:

    make kopibeng/rbx_6t:default:flash


See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

* Physical reset button: Short the RESET jumper on PCB.
* Bootmagic reset: Unplug keyboard, hold down ESC key and plug in the keyboard.
* Keycode reset: Press the `QK_BOOT` keycode (default: MO(1) + R key) in layout if available.