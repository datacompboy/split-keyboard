# dacobokb

![dacobokb](https://github.com/datacompboy/split-keyboard/raw/main/raw-board.jpg)

*Split keyboard with duplicated middle row, "qwerty/tyuiop" layout.*

* Keyboard Maintainer: [Anton Fedorov](https://github.com/datacompboy)
* Hardware Supported: RP2040 MCU, PCB & case at https://github.com/datacompboy/split-keyboard
* Hardware Availability: DIY

Build left and right firmwares with:

    make dacobokb:left
    make dacobokb:right

By copying file `dacobokb_left.uf2` to the left half, `dacobokb_right.uf2` to the right half.

See the [full building manual](https://github.com/datacompboy/split-keyboard/blob/main/how-to-make/building.md)
to learn how to do your own asymmetric split keyboard.
