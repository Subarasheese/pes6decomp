/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001F4660(M2C_UNK arg0, void *arg1, void *arg2) {
    s32 var_a1;
    s32 var_a3;
    s32 var_v1;
    s32 var_v1_2;
    u8 temp_a0;
    u8 temp_a0_2;

    M2C_FIELD(arg2, s32 *, 4) = 5;
    M2C_FIELD(arg2, u8 *, 0xC) = (u8) (M2C_FIELD(arg2, u8 *, 0xC) + 2);
    M2C_FIELD(arg2, u8 *, 0xD) = (u8) M2C_FIELD(arg2, u8 *, 0xC);
    temp_a0 = M2C_FIELD(arg1, u8 *, 0);
    var_a3 = 0;
    if (((s32) temp_a0 >= 0x30) && ((s32) temp_a0 < 0x3A)) {
        var_v1 = temp_a0 - 0x30;
        goto block_6;
    }
    if (((s32) temp_a0 >= 0x61) && ((s32) temp_a0 < 0x67)) {
        var_v1 = temp_a0 - 0x57;
block_6:
        var_a3 = var_v1 & 0xFF;
    }
    temp_a0_2 = M2C_FIELD(arg1, u8 *, 1);
    var_a1 = 0;
    if (((s32) temp_a0_2 >= 0x30) && ((s32) temp_a0_2 < 0x3A)) {
        var_v1_2 = temp_a0_2 - 0x30;
        goto block_13;
    }
    if (((s32) temp_a0_2 >= 0x61) && ((s32) temp_a0_2 < 0x67)) {
        var_v1_2 = temp_a0_2 - 0x57;
block_13:
        var_a1 = var_v1_2 & 0xFF;
    }
    M2C_FIELD(arg2, s8 *, 0x15) = (s8) (((var_a3 & 0xFF) * 0x10) | (var_a1 & 0xFF));
}
