/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0063A820();                                /* extern */
s32 func_0063A9F0(s32);                             /* extern */

s32 func_00643A00(void *arg0, s32 arg1) {
    if (arg1 != 0x80000000) {
        if (arg1 != 0x40000000) {
            if (!(arg1 & 0x10000000)) {
                if (!(arg1 & 0x08000000)) {
                    if (M2C_FIELD(arg0, u8 *, 0x4C) != 0) {
                        return 0xF7;
                    }
                    goto block_26;
                }
                return 0xF3;
            }
            if (arg1 & 0x200000) {
                return 0xF4;
            }
            if (func_0063A820() == 0) {
                return func_0063A9F0(arg1);
            }
            return 0xF5;
        }
        if (M2C_FIELD(arg0, u8 *, 0x4F) == 1) {
            return 0xFB;
        }
block_26:
        return 0xF6;
    }
    return 0xF7;
}
