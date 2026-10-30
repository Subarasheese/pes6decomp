/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001F08B0(M2C_UNK);                         /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_008172E0(M2C_UNK, s32, M2C_UNK);           /* extern */
s32 func_0085AD80();                                /* extern */
s32 func_00AE4660();                                /* extern */
M2C_UNK func_00AECBA0(s32, s32);                    /* extern */
M2C_UNK func_00AECD10(s32);                         /* extern */

s32 func_00AE62D0(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_v0;

    var_s0 = 1;
    temp_v0 = func_008172E0(0, func_00AE4660(), 0);
    switch (temp_v0) {                              /* irregular */
    case 1:
        break;
    case -1:
        var_v0 = 1;
block_19:
        M2C_FIELD(arg0, s32 *, 0x10) = var_v0;
        break;
    case 0:
        temp_v0_2 = M2C_FIELD(arg0, s32 *, 0xC) + 1;
        M2C_FIELD(arg0, s32 *, 0xC) = temp_v0_2;
        if (temp_v0_2 < 0x708) {
            if (!(arg1 & 0x1000)) {
                var_s0 = 0;
                if (func_0085AD80() != 0) {
                    func_00AECBA0(M2C_FIELD(arg0, s32 *, 0x14), func_001F08B0(0x2C00D3));
                    func_00AECD10(M2C_FIELD(arg0, s32 *, 0x14));
                }
            } else {
                func_0026E840(0x84008401);
                var_v0 = 4;
                goto block_19;
            }
        } else {
            var_v0 = 3;
            goto block_19;
        }
        break;
    default:
        var_v0 = 2;
        goto block_19;
    }
    return var_s0;
}
