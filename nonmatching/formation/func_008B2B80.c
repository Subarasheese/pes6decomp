/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_001C7F58(s32, s32);                    /* extern */
M2C_UNK func_002C9E10();                            /* extern */

void func_008B2B80(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
    case 0:
        func_001C7F58(arg0, func_001F08B0(0x3F0000));
        return;
    case 9:
        func_001C7F58(arg0, func_001F08B0(0x3D0020));
        return;
    default:
        func_002C9E10();
        return;
    }
}
