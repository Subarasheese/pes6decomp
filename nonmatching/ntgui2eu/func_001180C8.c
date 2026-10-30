/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern u16 D_006024D8;
extern s32 D_006024DC;
extern s32 D_006024E0;
extern s32 D_006024E4;

u16 func_001180C8(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_v0;
    u16 temp_a1;
    u16 var_a2;

    temp_a1 = arg1 & 0xFFFF;
    var_a2 = 0;
    if (temp_a1 != 0) {
        if (temp_a1 == D_006024D8) {
            if ((D_006024E0 <= 0) || (temp_v0 = D_006024E0 - 1, D_006024E0 = temp_v0, (temp_v0 <= 0))) {
                if (D_006024DC != 0) {
                    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0xFC) + 1;
                    M2C_FIELD(arg0, s32 *, 0xFC) = temp_v0_2;
                    if (temp_v0_2 >= 0xC9) {
                        M2C_FIELD(arg0, s32 *, 0xFC) = 0xC8;
                    }
                } else {
                    D_006024DC = 1;
                }
            }
        } else {
            goto block_9;
        }
    } else {
block_9:
        D_006024DC = 0;
        D_006024E0 = 0x1E;
        M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    }
    if (D_006024DC != 0) {
        temp_v0_3 = D_006024E4 - 1;
        D_006024E4 = temp_v0_3;
        if (temp_v0_3 <= 0) {
            temp_a0 = M2C_FIELD(arg0, s32 *, 0xFC);
            if (temp_a0 >= 0x32) {
                if (temp_a0 >= 0x64) {
                    var_v0 = 1;
                    if (temp_a0 >= 0x96) {
                        var_a2 = temp_a1;
                        if (temp_a0 < 0xC8) {
                            var_v0 = 1;
                            goto block_23;
                        }
                    } else {
                        goto block_23;
                    }
                } else {
                    var_v0 = 2;
                    goto block_23;
                }
            } else {
                var_v0 = 4;
block_23:
                D_006024E4 = var_v0;
                var_a2 = temp_a1;
            }
        }
    }
    D_006024D8 = temp_a1;
    return var_a2;
}
