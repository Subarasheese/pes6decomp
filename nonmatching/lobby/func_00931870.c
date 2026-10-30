/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00824910();                                /* extern */
M2C_UNK func_0082C690(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0082C840(M2C_UNK);                     /* extern */
M2C_UNK func_0082C920(M2C_UNK);                     /* extern */
s32 func_00930580(s32, s32, M2C_UNK, s32);          /* extern */

s32 func_00931870(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_00930580(arg0, arg1, 0x50C, func_00824910());
    switch (temp_v0) {                              /* irregular */
    case 4:
        func_0082C920(0x15);
        func_0082C840(0x11);
        func_0082C690(0x11, 0);
        return 1;
    case 0:
        return 0;
    default:
    case 3:
    case 2:
    case 1:
        func_0082C920(0x15);
        func_0082C840(0x11);
        func_0082C690(0x11, 0);
        return -1;
    }
}
