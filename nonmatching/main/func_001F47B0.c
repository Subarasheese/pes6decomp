/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void func_001F47B0(M2C_UNK arg0, void *arg1, void *arg2) {
    s32 var_a1;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a3_3;
    s32 var_a3_4;
    s32 var_a4;
    s32 var_a4_2;
    s32 var_a4_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 temp_a0_4;
    u8 temp_a0_5;
    u8 temp_a0_6;
    u8 temp_a0_7;
    u8 temp_a0_8;

    M2C_FIELD(arg2, s32 *, 4) = 3;
    M2C_FIELD(arg2, u8 *, 0xC) = (u8) (M2C_FIELD(arg2, u8 *, 0xC) + 8);
    M2C_FIELD(arg2, u8 *, 0xD) = (u8) M2C_FIELD(arg2, u8 *, 0xC);
    temp_a0 = M2C_FIELD(arg1, u8 *, 0);
    var_a4 = 0;
    if (((s32) temp_a0 >= 0x30) && ((s32) temp_a0 < 0x3A)) {
        var_v1 = temp_a0 - 0x30;
        goto block_6;
    }
    if (((s32) temp_a0 >= 0x61) && ((s32) temp_a0 < 0x67)) {
        var_v1 = temp_a0 - 0x57;
block_6:
        var_a4 = var_v1 & 0xFF;
    }
    temp_a0_2 = M2C_FIELD(arg1, u8 *, 1);
    var_a3 = 0;
    if (((s32) temp_a0_2 >= 0x30) && ((s32) temp_a0_2 < 0x3A)) {
        var_v1_2 = temp_a0_2 - 0x30;
        goto block_13;
    }
    if (((s32) temp_a0_2 >= 0x61) && ((s32) temp_a0_2 < 0x67)) {
        var_v1_2 = temp_a0_2 - 0x57;
block_13:
        var_a3 = var_v1_2 & 0xFF;
    }
    M2C_FIELD(arg2, s8 *, 0x17) = (s8) (((var_a4 & 0xFF) * 0x10) | (var_a3 & 0xFF));
    temp_a0_3 = M2C_FIELD(arg1, u8 *, 2);
    var_a4_2 = 0;
    if (((s32) temp_a0_3 >= 0x30) && ((s32) temp_a0_3 < 0x3A)) {
        var_v1_3 = temp_a0_3 - 0x30;
        goto block_20;
    }
    if (((s32) temp_a0_3 >= 0x61) && ((s32) temp_a0_3 < 0x67)) {
        var_v1_3 = temp_a0_3 - 0x57;
block_20:
        var_a4_2 = var_v1_3 & 0xFF;
    }
    temp_a0_4 = M2C_FIELD(arg1, u8 *, 3);
    var_a3_2 = 0;
    if (((s32) temp_a0_4 >= 0x30) && ((s32) temp_a0_4 < 0x3A)) {
        var_v1_4 = temp_a0_4 - 0x30;
        goto block_27;
    }
    if (((s32) temp_a0_4 >= 0x61) && ((s32) temp_a0_4 < 0x67)) {
        var_v1_4 = temp_a0_4 - 0x57;
block_27:
        var_a3_2 = var_v1_4 & 0xFF;
    }
    M2C_FIELD(arg2, s8 *, 0x18) = (s8) (((var_a4_2 & 0xFF) * 0x10) | (var_a3_2 & 0xFF));
    temp_a0_5 = M2C_FIELD(arg1, u8 *, 4);
    var_a4_3 = 0;
    if (((s32) temp_a0_5 >= 0x30) && ((s32) temp_a0_5 < 0x3A)) {
        var_v1_5 = temp_a0_5 - 0x30;
        goto block_34;
    }
    if (((s32) temp_a0_5 >= 0x61) && ((s32) temp_a0_5 < 0x67)) {
        var_v1_5 = temp_a0_5 - 0x57;
block_34:
        var_a4_3 = var_v1_5 & 0xFF;
    }
    temp_a0_6 = M2C_FIELD(arg1, u8 *, 5);
    var_a3_3 = 0;
    if (((s32) temp_a0_6 >= 0x30) && ((s32) temp_a0_6 < 0x3A)) {
        var_v1_6 = temp_a0_6 - 0x30;
        goto block_41;
    }
    if (((s32) temp_a0_6 >= 0x61) && ((s32) temp_a0_6 < 0x67)) {
        var_v1_6 = temp_a0_6 - 0x57;
block_41:
        var_a3_3 = var_v1_6 & 0xFF;
    }
    M2C_FIELD(arg2, s8 *, 0x19) = (s8) (((var_a4_3 & 0xFF) * 0x10) | (var_a3_3 & 0xFF));
    temp_a0_7 = M2C_FIELD(arg1, u8 *, 6);
    var_a3_4 = 0;
    if (((s32) temp_a0_7 >= 0x30) && ((s32) temp_a0_7 < 0x3A)) {
        var_v1_7 = temp_a0_7 - 0x30;
        goto block_48;
    }
    if (((s32) temp_a0_7 >= 0x61) && ((s32) temp_a0_7 < 0x67)) {
        var_v1_7 = temp_a0_7 - 0x57;
block_48:
        var_a3_4 = var_v1_7 & 0xFF;
    }
    temp_a0_8 = M2C_FIELD(arg1, u8 *, 7);
    var_a1 = 0;
    if (((s32) temp_a0_8 >= 0x30) && ((s32) temp_a0_8 < 0x3A)) {
        var_v1_8 = temp_a0_8 - 0x30;
        goto block_55;
    }
    if (((s32) temp_a0_8 >= 0x61) && ((s32) temp_a0_8 < 0x67)) {
        var_v1_8 = temp_a0_8 - 0x57;
block_55:
        var_a1 = var_v1_8 & 0xFF;
    }
    M2C_FIELD(arg2, s8 *, 0x1A) = (s8) (((var_a3_4 & 0xFF) * 0x10) | (var_a1 & 0xFF));
    M2C_FIELD(arg2, s8 *, 0xE) = 1;
}
