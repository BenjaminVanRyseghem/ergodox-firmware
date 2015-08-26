/* ----------------------------------------------------------------------------
 * Copyright (c) 2012, 2013 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (see "doc/licenses/MIT.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */

/**                                                                 description
 * Implements the "basic" section of "../key-functions.h"
 */


#include <stdbool.h>
#include <stdint.h>
#include "../../../../firmware/lib/usb.h"
#include "../../../../firmware/lib/usb/usage-page/keyboard.h"
#include "../key-functions.h"

// ----------------------------------------------------------------------------

void mediakey_functions__press(uint8_t keycode) {
    usb__kb__set_mediakey(true, keycode);
}

void mediakey_functions__release(uint8_t keycode) {
    usb__kb__set_mediakey(false, keycode);
}
