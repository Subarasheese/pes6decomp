/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00905270(s32);                             /* extern */
s32 func_009909D0(s32, M2C_UNK);                    /* extern */
s32 func_009946A0(M2C_UNK);                         /* extern */
extern void *D_003E7A08;

void func_00994F80(s32 arg0, s8 arg1) {
    s8 var_a0;

    if (func_009946A0(0) == 0) {
        M2C_FIELD(D_003E7A08, s8 *, 0x28B) = 0;
        M2C_FIELD(D_003E7A08, s32 *, 0x284) = 5;
        M2C_FIELD(D_003E7A08, s8 *, 0x2A4) = arg1;
        if (func_00905270(arg0) != 0) {
            if (!(func_009909D0(arg0, 0x100000) & 0xFF)) {
                var_a0 = 2;
            } else {
                goto block_4;
            }
        } else {
block_4:
            var_a0 = 1;
        }
        M2C_FIELD(D_003E7A08, s8 *, 0x2A5) = var_a0;
    }
}
