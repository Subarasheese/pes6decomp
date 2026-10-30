/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002397F0(s32, s32);
extern s32 func_00230380(void);
extern s32 func_0022C140(s32);
extern u8 func_00239BE0(u8);
s32 func_00230410();                                /* extern */
M2C_UNK func_0094B120();                            /* extern */

void func_0099EA10(s32 arg0) {
    s32 temp_v0;
    u8 temp_a1;

    temp_v0 = func_0022C140(arg0);
    if (temp_v0 != 0) {
        temp_a1 = M2C_FIELD(temp_v0, u8 *, 1);
        if (((s32) temp_a1 < (func_00239BE0(M2C_FIELD(temp_v0, u8 *, 9)) & 0xFF)) && (func_002397F0(arg0, (s32) temp_a1) != 0)) {
            M2C_FIELD(temp_v0, u8 *, 1) = (u8) (M2C_FIELD(temp_v0, u8 *, 1) + 1);
            if ((func_00230410() == 0) && (func_00230380() == 0)) {
                func_0094B120();
            }
        }
    }
}
