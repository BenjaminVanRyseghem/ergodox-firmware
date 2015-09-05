/* ----------------------------------------------------------------------------
 * Copyright (c) 2013, 2014 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (see "doc/licenses/MIT.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */

/**                                                                 description
 * My QWERTY layout, at the moment.  I imagine this will evolve over time.
 * Once I'm done with the Arensito layout, it may disappear altogether.
 *
 * Implements the "layout" section of '.../firmware/keyboard.h'
 */


#include "./fragments/includes.part.h"
#include "./fragments/macros.part.h"
#include "./fragments/types.part.h"
#include "./fragments/variables.part.h"


// ----------------------------------------------------------------------------
// keys
// ----------------------------------------------------------------------------

#include "./fragments/keys.part.h"


// ----------------------------------------------------------------------------
// LED control
// ----------------------------------------------------------------------------

#include "./fragments/led-control.part.h"


// ----------------------------------------------------------------------------
// matrix control
// ----------------------------------------------------------------------------

#include "./fragments/matrix-control.part.h"


// ----------------------------------------------------------------------------
// layout
// ----------------------------------------------------------------------------

static layout_t layout PROGMEM = {
// ............................................................................

    MATRIX_LAYER(  // layer 0 : default
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
      F1,        F2,        F3,        F4,        F5,        F6,
       1,         2,         3,         4,         5,         6,
   brktL,         q,         w,         e,         r,         t,
    caps,         a,         s,         d,         f,         g,
  shiftL,         z,         x,         c,         v,         b,
            bkslash,     ctrlL,      guiL,      altL,
                                                  bs,      home,       end,
                                               space,       tab,     pageU,
                                                                     pageD,
// middle part .... ......... ......... ......... ......... ......... .........
lpupo2l2,       num,       kp7,       kp8,       kp9,     kpDiv,     prScr,
 volumeU,       esc,       kp4,       kp5,       kp6,     kpMul,     pause,
 volumeD,     grave,       kp1,       kp2,       kp3,     kpSub,     prScr,
    mute,   kpEqual,       kp0,     kpDec,   kpEnter,     kpAdd,      help,
// right hand ..... ......... ......... ......... ......... ......... .........
                 F7,       F8,       F9,      F10,      F11,      F12,
                  7,        8,        9,        0,     dash,    equal,
                  y,        u,        i,        o,        p,    brktR,
                  h,        j,        k,        l,  semicol,    quote,
                  n,        m,    comma,   period,    slash,   shiftR,
                         altR, lpupo1l1,     guiR,    ctrlR,
   arrowL,   arrowR,      del,
   arrowU,    enter,    space,
   arrowD                   ),

// ............................................................................

    MATRIX_LAYER(  // layer 1 : number pad
/// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,    transp,    transp,    transp,    transp,    transp,
  transp,       kp7,       kp8,       kp9,     kpDiv,    transp,
  transp,       kp4,       kp5,       kp6,     kpMul,    transp,
  transp,       kp1,       kp2,       kp3,     kpSub,    transp,
  transp,       kp0,     kpDec,   kpEnter,     kpAdd,    transp,
             transp,    transp,    transp,    transp,
                                              transp,    transp,    transp,
                                              transp,    transp,    transp,
                                                                    transp,
// middle part .... ......... ......... ......... ......... ......... .........
  transp,    transp,    transp,    transp,    transp,    transp,    transp,
  transp,    lpo2l2,    transp,    transp,    transp,    transp,    transp,
  transp,    transp,    transp,    transp,    transp,    transp,    transp,
  transp,    transp,    transp,    transp,    transp,    transp,    transp,
// right hand ..... ......... ......... ......... ......... ......... .........
             transp,    transp,    transp,    transp,    transp,    transp,
             transp,    transp,    transp,    transp,    transp,    transp,
             transp,    transp,    transp,    transp,    transp,    transp,
             transp,    transp,    transp,    transp,    transp,    transp,
             transp,    transp,    transp,    transp,    transp,    transp,
                        transp,    transp,    transp,    transp,
    home,       end,    transp,
    pageU,    transp,    transp,
    pageD                     ),

// ............................................................................

    MATRIX_LAYER(  // layer 2 : keyboard functions
/// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
     nop,       nop,       nop,       nop,       nop,       nop,
     nop,       nop,       nop,       nop,       nop,       nop,
     nop,       nop,       nop,       nop,       nop,       nop,
     nop,       nop,       nop,       nop,       nop,       nop,
     nop,       nop,       nop,       nop,       nop,       nop,
                nop,       nop,       nop,       nop,
                                                 nop,       nop,       nop,
                                                 nop,       nop,       nop,
                                                                       nop,
// middle part .... ......... ......... ......... ......... ......... .........
     nop,       nop,       nop,       nop,       nop,       nop,       nop,
     nop,       nop,       nop,       nop,       nop,       nop,       nop,
     nop,       nop,       nop,       nop,       nop,       nop,       nop,
     nop,       nop,       nop,       nop,       nop,       nop,     btldr,
// right hand ..... ......... ......... ......... ......... ......... .........
                nop,       nop,       nop,  dmp_sram,  dmp_prog,  dmp_eepr,
                nop,       nop,       nop,       nop,       nop,       nop,
                nop,       nop,       nop,       nop,       nop,       nop,
                nop,       nop,       nop,       nop,       nop,       nop,
                nop,       nop,       nop,       nop,       nop,       nop,
                           nop,       nop,       nop,       nop,
     nop,       nop,       nop,
     nop,       nop,       nop,
     nop                     ),

// ............................................................................
};

