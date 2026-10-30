/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001A4728();                                /* extern */
M2C_UNK func_001A4778();                            /* extern */
s32 func_001A5AF8(s32, s32);                        /* extern */

s32 func_001A5B48(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s2;

    temp_s2 = func_001A4728();
    temp_s0 = func_001A5AF8(arg0, arg1);
    if (temp_s2 != 0) {
        func_001A4778();
    }
    return temp_s0;
}
