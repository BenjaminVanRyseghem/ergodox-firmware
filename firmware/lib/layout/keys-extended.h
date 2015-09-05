/* ----------------------------------------------------------------------------
 * Copyright (c) 2013 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (see "doc/licenses/MIT.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */


#ifndef ERGODOX_FIRMWARE__FIRMWARE__LIB__LAYOUT__KEYS_EXTENDED__H
#define ERGODOX_FIRMWARE__FIRMWARE__LIB__LAYOUT__KEYS_EXTENDED__H
// ----------------------------------------------------------------------------
// ----------------------------------------------------------------------------


#include "../../../firmware/lib/usb/usage-page/keyboard.h"

// ----------------------------------------------------------------------------

#ifndef KEYS__DEFAULT
    #error "You must define `KEYS__DEFAULT`"
#endif

// ----------------------------------------------------------------------------

// letters
KEYS__DEFAULT(    F13,            KEYBOARD__F13                        );
KEYS__DEFAULT(    F14,            KEYBOARD__F14                        );
KEYS__DEFAULT(    F15,            KEYBOARD__F15                        );
KEYS__DEFAULT(    F16,            KEYBOARD__F16                        );
KEYS__DEFAULT(    F17,            KEYBOARD__F17                        );
KEYS__DEFAULT(    F18,            KEYBOARD__F18                        );
KEYS__DEFAULT(    F19,            KEYBOARD__F19                        );
KEYS__DEFAULT(    F20,            KEYBOARD__F20                        );
KEYS__DEFAULT(    F21,            KEYBOARD__F21                        );
KEYS__DEFAULT(    F22,            KEYBOARD__F22                        );
KEYS__DEFAULT(    F23,            KEYBOARD__F23                        );
KEYS__DEFAULT(    F24,            KEYBOARD__F24                        );
KEYS__DEFAULT(    exec,           KEYBOARD__Execute                    );
KEYS__DEFAULT(    help,           KEYBOARD__Help                       );
KEYS__DEFAULT(    menu,           KEYBOARD__Menu                       );
KEYS__DEFAULT(    select,         KEYBOARD__Select                     );
KEYS__DEFAULT(    stop,           KEYBOARD__Stop                       );
KEYS__DEFAULT(    again,          KEYBOARD__Again                      );
KEYS__DEFAULT(    undo,           KEYBOARD__Undo                       );
KEYS__DEFAULT(    cut,            KEYBOARD__Cut                        );
KEYS__DEFAULT(    copy,           KEYBOARD__Copy                       );
KEYS__DEFAULT(    paste,          KEYBOARD__Paste                      );
KEYS__DEFAULT(    find,           KEYBOARD__Find                       );
KEYS__DEFAULT(    lockCapsLock,   KEYBOARD__LockingCapsLock            );
KEYS__DEFAULT(    lockNumLock,    KEYBOARD__LockingNumLock             );
KEYS__DEFAULT(    lockScrollLock, KEYBOARD__LockingScrollLock          );
KEYS__DEFAULT(    kpComma,        KEYPAD__Comma                        );
KEYS__DEFAULT(    kpEqual,        KEYPAD__EqualSign                    );

KEYS__DEFAULT(    int1,           KEYBOARD__International1             );
KEYS__DEFAULT(    int2,           KEYBOARD__International2             );
KEYS__DEFAULT(    int3,           KEYBOARD__International3             );
KEYS__DEFAULT(    int4,           KEYBOARD__International4             );
KEYS__DEFAULT(    int5,           KEYBOARD__International5             );
KEYS__DEFAULT(    int6,           KEYBOARD__International6             );
KEYS__DEFAULT(    int7,           KEYBOARD__International7             );
KEYS__DEFAULT(    int8,           KEYBOARD__International8             );
KEYS__DEFAULT(    int9,           KEYBOARD__International9             );
KEYS__DEFAULT(    lang1,          KEYBOARD__LANG1                      );
KEYS__DEFAULT(    lang2,          KEYBOARD__LANG2                      );
KEYS__DEFAULT(    lang3,          KEYBOARD__LANG3                      );
KEYS__DEFAULT(    lang4,          KEYBOARD__LANG4                      );
KEYS__DEFAULT(    lang5,          KEYBOARD__LANG5                      );
KEYS__DEFAULT(    lang6,          KEYBOARD__LANG6                      );
KEYS__DEFAULT(    lang7,          KEYBOARD__LANG7                      );
KEYS__DEFAULT(    lang8,          KEYBOARD__LANG8                      );
KEYS__DEFAULT(    lang9,          KEYBOARD__LANG9                      );
KEYS__DEFAULT(    altErase,       KEYBOARD__AlternateErase             );
KEYS__DEFAULT(    sysreqAttention,KEYBOARD__SysReq_Attention           );
KEYS__DEFAULT(    cancel,         KEYBOARD__Cancel                     );
KEYS__DEFAULT(    clear,          KEYBOARD__Clear                      );
KEYS__DEFAULT(    prior,          KEYBOARD__Prior                      );
KEYS__DEFAULT(    ret,            KEYBOARD__Return                     );
KEYS__DEFAULT(    separator,      KEYBOARD__Separator                  );
KEYS__DEFAULT(    out,            KEYBOARD__Out                        );
KEYS__DEFAULT(    oper,           KEYBOARD__Oper                       );
KEYS__DEFAULT(    clearAgain,     KEYBOARD__Clear_Again                );
KEYS__DEFAULT(    crSelProps,     KEYBOARD__CrSel_Props                );
KEYS__DEFAULT(    exSel,          KEYBOARD__ExSel                      );

KEYS__DEFAULT(    kpZero,         KEYPAD__00                           );
KEYS__DEFAULT(    kpZeroZero,     KEYPAD__000                          );

KEYS__DEFAULT(    thousandSep,    KEYBOARD__ThousandsSeparator         );
KEYS__DEFAULT(    decimalSep,     KEYBOARD__DecimalSeparator           );
KEYS__DEFAULT(    currencyUnit,   KEYBOARD__CurrencyUnit               );
KEYS__DEFAULT(    currencySubUnit,KEYBOARD__CurrencySubunit            );

KEYS__DEFAULT(    kpParenL,       KEYPAD__LeftParenthesis              );
KEYS__DEFAULT(    kpParenR,       KEYPAD__RightParenthesis             );
KEYS__DEFAULT(    kpBraceL,       KEYPAD__LeftBrace                    );
KEYS__DEFAULT(    kpBraceR,       KEYPAD__RightBrace                   );

KEYS__DEFAULT(    kpTab,          KEYPAD__Tab                          );
KEYS__DEFAULT(    kpBackspace,    KEYPAD__Backspace                    );
KEYS__DEFAULT(    kpA,            KEYPAD__A                            );
KEYS__DEFAULT(    kpB,            KEYPAD__B                            );
KEYS__DEFAULT(    kpC,            KEYPAD__C                            );
KEYS__DEFAULT(    kpD,            KEYPAD__D                            );
KEYS__DEFAULT(    kpE,            KEYPAD__E                            );
KEYS__DEFAULT(    kpF,            KEYPAD__F                            );
KEYS__DEFAULT(    kpXOR,          KEYPAD__XOR                          );
KEYS__DEFAULT(    kpCaret,        KEYPAD__Caret                        );
KEYS__DEFAULT(    kpPercent,      KEYPAD__Percent                      );
KEYS__DEFAULT(    kpLessThan,     KEYPAD__LessThan                     );
KEYS__DEFAULT(    kpGreaterThan,  KEYPAD__GreaterThan                  );
KEYS__DEFAULT(    kpAmp,          KEYPAD__Ampersand                    );
KEYS__DEFAULT(    kpAmpAmp,       KEYPAD__AmpersandAmpersand           );
KEYS__DEFAULT(    kpPipe,         KEYPAD__Pipe                         );
KEYS__DEFAULT(    kpPipePipe,     KEYPAD__PipePipe                     );
KEYS__DEFAULT(    kpColon,        KEYPAD__Colon                        );
KEYS__DEFAULT(    kpPound,        KEYPAD__Pound                        );
KEYS__DEFAULT(    kpSpace,        KEYPAD__Space                        );
KEYS__DEFAULT(    kpAt,           KEYPAD__At                           );
KEYS__DEFAULT(    kpExclamation,  KEYPAD__Exclamation                  );
KEYS__DEFAULT(    kpMemStore,     KEYPAD__MemoryStore                  );
KEYS__DEFAULT(    kpMemRecall,    KEYPAD__MemoryRecall                 );
KEYS__DEFAULT(    kpMemClear,     KEYPAD__MemoryClear                  );
KEYS__DEFAULT(    kpMemAdd,       KEYPAD__MemoryAdd                    );
KEYS__DEFAULT(    kpMemSubtract,  KEYPAD__MemorySubtract               );
KEYS__DEFAULT(    kpMemMultiply,  KEYPAD__MemoryMultiply               );
KEYS__DEFAULT(    kpMemDivide,    KEYPAD__MemoryDivide                 );
KEYS__DEFAULT(    kpPlusMinus,    KEYPAD__PlusMinus                    );
KEYS__DEFAULT(    kpClear,        KEYPAD__Clear                        );
KEYS__DEFAULT(    kpClearEntry,   KEYPAD__ClearEntry                   );
KEYS__DEFAULT(    kpBinary,       KEYPAD__Binary                       );
KEYS__DEFAULT(    kpOctal,        KEYPAD__Octal                        );
KEYS__DEFAULT(    kpDecimal,      KEYPAD__Decimal                      );
KEYS__DEFAULT(    kpHexaDecimal,  KEYPAD__Hexadecimal                  );


// ----------------------------------------------------------------------------
// ----------------------------------------------------------------------------
#endif  // ERGODOX_FIRMWARE__FIRMWARE__LIB__LAYOUT__KEYS_EXTENDED__H

