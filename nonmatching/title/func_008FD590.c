/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00901800[];

s32 func_008FD590(u32 *arg0, s32 *arg1, u64 arg2) {
    M2C_UNK *var_v1;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a6;
    s32 var_v0;
    s32 var_v0_3;
    s64 temp_t9;
    s64 temp_v0;
    s64 var_v0_2;
    u32 var_a5;
    u64 temp_a3;
    u64 temp_a4;
    u64 temp_a4_2;
    u64 temp_a7;
    u64 temp_v0_2;

    var_v1 = ((void *)D_00901800);
    var_a6 = 0;
    var_a5 = 0;
    temp_a7 = 0xFFFF << 0x18;
    temp_t9 = 0xFFF8 << 0x18;
loop_1:
    temp_a3 = M2C_FIELD(var_v1, u64 *, 8);
    if (temp_a3 != temp_a7) {
        if (temp_a7 >= temp_a3) {
            if (temp_a3 == (0xFF00 << 0x18)) {
                temp_a4 = M2C_FIELD(var_v1, u64 *, 0);
                temp_v0 = 0xE000 << 0x18;
                if (temp_a4 == temp_v0) {
                    var_a3 = arg2 & (0xF000 << 0x18);
                    var_v0 = 0xF;
                } else {
                    var_a3 = arg2 & temp_a3;
                    if (temp_a4 == (0xC000 << 0x18)) {
                        var_a3 = arg2 & temp_v0;
                        var_v0 = 0x1F;
                    } else {
                        var_v0 = 0;
                    }
                }
                if (var_a3 == temp_a4) {
                    var_v0_2 = (arg2 >> 0x20) & var_v0;
                    goto block_30;
                }
            }
        } else if ((temp_a3 == (-1U >> 0x18)) && ((arg2 & ((u64) (-1 << 0x28) >> 0x18)) == M2C_FIELD(var_v1, u64 *, 0))) {
            *arg0 = var_a5;
            var_a6 = 1;
            *arg1 = (s32) ((s64) ((arg2 & 0xFFFF) << 0x20) >> 0x20);
        }
    } else {
        temp_a4_2 = M2C_FIELD(var_v1, u64 *, 0);
        temp_v0_2 = 0xBD88 << 0x18;
        if (temp_a4_2 != temp_v0_2) {
            if (temp_v0_2 >= temp_a4_2) {
                var_a3_2 = arg2 & (0xFFE0 << 0x18);
                if (temp_a4_2 != (0xBD20 << 0x18)) {
                    var_a3_2 = arg2 & temp_a7;
                    if (temp_a4_2 != (0xBD80 << 0x18)) {
                        var_v0_3 = 0;
                    } else {
                        goto block_19;
                    }
                } else {
                    var_v0_3 = 0x1F;
                }
            } else {
                var_a3_2 = arg2 & temp_t9;
                if (temp_a4_2 != (0xBD90 << 0x18)) {
                    var_a3_2 = arg2 & temp_a7;
                    if (temp_a4_2 != (0xBDA0 << 0x18)) {
                        var_v0_3 = 0;
                    } else {
                        goto block_19;
                    }
                } else {
                    goto block_20;
                }
            }
        } else {
block_19:
            var_a3_2 = arg2 & temp_t9;
block_20:
            var_v0_3 = 7;
        }
        if (var_a3_2 == temp_a4_2) {
            var_v0_2 = (arg2 >> 0x18) & var_v0_3;
block_30:
            *arg0 = var_a5;
            var_a6 = 1;
            *arg1 = (s32) ((s64) (var_v0_2 << 0x20) >> 0x20);
        }
    }
    var_a5 += 1;
    var_v1 += 0x10;
    if ((var_a5 < 0xAU) && (var_a6 == 0)) {
        goto loop_1;
    }
    return var_a6;
}
