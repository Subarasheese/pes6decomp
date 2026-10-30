/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
s32 func_00BDD1F0(s32);                             /* extern */
s32 func_00BDD230();                                /* extern */
s32 func_00BFE4A0();                                /* extern */
M2C_UNK func_00BFE520(s32);                         /* extern */

s32 func_00BDF2B0(void *arg0) {
    s32 var_s0;
    s8 temp_v0;

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s8 *, 0x10) <= 0) {
            return 0;
        }
        if (func_00BFE4A0() == 1) {
            goto block_19;
        }
        if (arg0 != NULL) {
            temp_v0 = M2C_FIELD(arg0, s8 *, 0x10);
            if (temp_v0 > 0) {
                var_s0 = M2C_FIELD(arg0, s8 *, 0x11) + ((temp_v0 - 1) * 5) + (M2C_FIELD(arg0, s16 *, 8) * 0xF);
            } else {
                goto block_9;
            }
        } else {
block_9:
            var_s0 = func_00BDD230() & 0xFFFF;
        }
        if (var_s0 < (func_00BDD230() & 0xFFFF)) {
            if (func_00BCF3A0(0x08000000) != 1) {
                return 1;
            }
            func_00BFE520(func_00BDD1F0(var_s0) & 0xFFFF);
            func_0026E840(0x84028400);
            goto block_19;
        }
        goto block_19;
    }
block_19:
    return 0;
}
