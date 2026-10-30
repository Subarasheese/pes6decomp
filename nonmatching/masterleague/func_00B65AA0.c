/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E9170(int, int);
extern u32 func_00B64F60(void);
M2C_UNK func_00955FB0();                            /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
s64 func_00B64FF0();                                /* extern */

s32 func_00B65AA0(void) {
    u32 temp_v0;

    temp_v0 = func_00B64F60();
    if (temp_v0 == 0) {

    } else if (((s64) (func_00B64FF0() << 0x38) >> 0x38) == 1) {
        if (M2C_FIELD(temp_v0, s32 *, 0) == 1) {
            M2C_FIELD(temp_v0, s8 *, 0x69C) = 6;
            func_002E9170(1, 1);
            func_00958000(0x80);
            func_00955FB0();
        }
    }
    return 0;
}
