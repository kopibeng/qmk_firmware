# XT-8K

![XT-8K](KLE LINK)

A QMK-powered, VIA-enabled 87/92-key TKL PCB with support for ANSI/ISO layouts, split Backspace, split Right Shift and 6.25U/7U bottom row.

* Keyboard Maintainer: kopibeng
* Hardware Supported: TKL keyboard that supports a.87 form factor PCB, and F1-8K
* Hardware Availability: N/A

Make example for this keyboard (after setting up your build environment):

    make kopibeng/xt8k:default
    
See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

* Physical reset button: Press the RESET switch on top side of PCB.
* Bootmagic reset: Unplug keyboard, hold down ESC key and plug in the keyboard.
* Keycode reset: Press the RESET keycode (default: MO(1) + R keys) in layout if available.
