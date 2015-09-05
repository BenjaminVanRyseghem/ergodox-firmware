/* ----------------------------------------------------------------------------
 * Copyright (c) 2013 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (see "doc/licenses/MIT.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */


#ifndef ERGODOX_FIRMWARE__FIRMWARE__LIB__LAYOUT__KEYS_MEDIA__H
#define ERGODOX_FIRMWARE__FIRMWARE__LIB__LAYOUT__KEYS_MEDIA__H
// ----------------------------------------------------------------------------
// ----------------------------------------------------------------------------


#include "../../../firmware/lib/usb/usage-page/keyboard.h"

// ----------------------------------------------------------------------------

#ifndef KEYS__MEDIA
    #error "You must define `KEYS__MEDIA`"
#endif

// ----------------------------------------------------------------------------

// letters
KEYS__MEDIA(    audioMute,      AUDIO_MUTE                              );
KEYS__MEDIA(    audioVolU,      AUDIO_VOL_UP                            );
KEYS__MEDIA(    audioVolD,      AUDIO_VOL_DOWN                          );
KEYS__MEDIA(    tpNextTrack,    TRANSPORT_NEXT_TRACK                    );
KEYS__MEDIA(    tpPrevTrack,    TRANSPORT_PREV_TRACK                    );
KEYS__MEDIA(    tpStop,         TRANSPORT_STOP                          );
KEYS__MEDIA(    tpPlayPause,    TRANSPORT_PLAY_PAUSE                    );

// ----------------------------------------------------------------------------
// ----------------------------------------------------------------------------
#endif  // ERGODOX_FIRMWARE__FIRMWARE__LIB__LAYOUT__KEYS_MEDIA__H

