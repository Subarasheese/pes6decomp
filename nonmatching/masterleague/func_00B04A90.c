/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003E77B0;

s32 func_00B04A90(s32 arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;

    temp_v1 = arg0 & 0xFFFF;
    if (temp_v1 < 0x1155) {
        return 1;
    }
    if (temp_v1 < 0x11F5) {
        temp_v1_2 = (temp_v1 - 0x1155) & 0xFFFF;
        if (temp_v1_2 >= 0x20) {
            if (temp_v1_2 >= 0x40) {
                if (temp_v1_2 >= 0x60) {
                    if (temp_v1_2 >= 0x80) {
                        if (temp_v1_2 >= 0xA0) {
                            return 0;
                        }
                        var_v0 = M2C_FIELD(D_003E77B0, s32 *, 0x584) & (1 << (((s32) (temp_v1_2 - 0x80) % 32) & 0xFFFF));
                        goto block_27;
                    }
                    var_v0 = M2C_FIELD(D_003E77B0, s32 *, 0x40) & (1 << (((s32) (temp_v1_2 - 0x60) % 32) & 0xFFFF));
                    goto block_27;
                }
                var_v0 = M2C_FIELD(D_003E77B0, s32 *, 0x3C) & (1 << (((s32) (temp_v1_2 - 0x40) % 32) & 0xFFFF));
                goto block_27;
            }
            var_v0 = M2C_FIELD(D_003E77B0, s32 *, 0x38) & (1 << (((s32) (temp_v1_2 - 0x20) % 32) & 0xFFFF));
            goto block_27;
        }
        var_v0 = M2C_FIELD(D_003E77B0, s32 *, 0x34) & (1 << ((temp_v1_2 % 32) & 0xFFFF));
block_27:
        return var_v0 != 0;
    }
    return 1;
}
