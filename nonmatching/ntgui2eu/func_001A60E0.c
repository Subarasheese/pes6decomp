/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001A4728();                                /* extern */
M2C_UNK func_001A4778();                            /* extern */
s32 func_001A5FE8(s32, s32, s32, s32);              /* extern */

s32 func_001A60E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_s4;

    temp_s4 = func_001A4728();
    temp_s0 = func_001A5FE8(arg0, arg1, arg2, arg3);
    if (temp_s4 != 0) {
        func_001A4778();
    }
    return temp_s0;
}
