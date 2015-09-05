/* ----------------------------------------------------------------------------
 * Copyright (c) 2015 Benjamin Van Ryseghem <benjamin@vanryseghem.com>
 * Released under The MIT License (see "doc/licenses/MIT.md")
 * Project located at <https://github.com/BenjaminVanRyseghem/ergodox-firmware>
 * ------------------------------------------------------------------------- */

/**                                                                 description
 * Partial key descriptions for the "Boot Keyboard Required" keys (see
 * <../../../firmware/lib/usb/usage-page/keyboard.h>).
 *
 * This header is meant to be included, not as an interface to anything, but in
 * order to centralize a bit of code that would otherwise be duplicated by most
 * layouts.
 *
 * The list comes from `/System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/HIToolbox.framework/Versions/A/Headers/Events.h`,
 *
 *
 * Prefixes: `keys__`, [none]
 *
 * Usage:
 * - `#define` `KEYS__DEFAULT` and `KEYS__SHIFTED` before `#include`ing.
 *   - These macros should probably do what their names imply (i.e. define a
 *     "default" or "shifted" key, respectively, whatever that means to the
 *     implementing layout), but in a practical sense they can be used however
 *     one wants.  They're simply a really convenient way to generate almost
 *     the same bit of code for a lot of (key_name, key_code) pairs.
 */


#ifndef ERGODOX_FIRMWARE__FIRMWARE__LIB__LAYOUT__KEYS_MAC__H
#define ERGODOX_FIRMWARE__FIRMWARE__LIB__LAYOUT__KEYS_MAC__H
// ----------------------------------------------------------------------------
// ----------------------------------------------------------------------------


#include "../../../firmware/lib/usb/usage-page/keyboard.h"

// ----------------------------------------------------------------------------

#ifndef KEYS__DEFAULT
    #error "You must define `KEYS__DEFAULT`"
#endif
#ifndef KEYS__SHIFTED
    #error "You must define `KEYS__SHIFTED`"
#endif

// ----------------------------------------------------------------------------

// letters
KEYS__DEFAULT(    kpEqual,        KEYPAD__Equal                        );
KEYS__DEFAULT(    F13,            KEYBOARD__F13                        );
KEYS__DEFAULT(    F14,            KEYBOARD__F14                        );
KEYS__DEFAULT(    F14,            KEYBOARD__F14                        );
KEYS__DEFAULT(    F15,            KEYBOARD__F15                        );
KEYS__DEFAULT(    F16,            KEYBOARD__F16                        );
KEYS__DEFAULT(    F17,            KEYBOARD__F17                        );
KEYS__DEFAULT(    F18,            KEYBOARD__F18                        );
KEYS__DEFAULT(    F19,            KEYBOARD__F19                        );


// ----------------------------------------------------------------------------
// ----------------------------------------------------------------------------
#endif  // ERGODOX_FIRMWARE__FIRMWARE__LIB__LAYOUT__KEYS__H

