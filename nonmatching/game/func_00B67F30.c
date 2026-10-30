/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591E4D[];

void func_00B67F30(void **arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    s16 var_a0;
    s16 var_v1;
    u16 temp_a1;
    u16 temp_a1_2;
    u16 temp_a1_3;
    u16 temp_a1_4;
    u16 temp_a1_5;
    u16 temp_v1;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_v1_2;

    temp_a2 = *arg0;
    if (M2C_FIELD(temp_a2, u8 *, 0) != (*(u8 *)D_00591E4D)) {
        temp_f1 = M2C_FIELD(temp_a2, f32 *, 0xE0);
        if (temp_f1 < 11929.0f) {
            if (temp_f1 <= -11929.0f) {
                temp_a1 = M2C_FIELD(temp_a2, u16 *, 0x26);
                if (((s32) temp_a1 >= 0x4000) && ((s32) temp_a1 < 0xC001)) {
                    M2C_FIELD(temp_a2, s16 *, 0x2C) = 0;
                }
            }
        } else {
            temp_a1_2 = M2C_FIELD(temp_a2, u16 *, 0x26);
            if (((s32) temp_a1_2 < 0x4001) || ((s32) temp_a1_2 >= 0xC000)) {
                M2C_FIELD(temp_a2, s16 *, 0x2C) = 0x8000;
            }
        }
        temp_a2_2 = *arg0;
        temp_f1_2 = M2C_FIELD(temp_a2_2, f32 *, 0xE8);
        if (temp_f1_2 < 7193.0f) {
            if (temp_f1_2 <= -7193.0f) {
                temp_v1 = M2C_FIELD(temp_a2_2, u16 *, 0x26);
                if (((s32) temp_v1 >= 0) && ((s32) temp_v1 < 0x8001)) {
                    var_v1 = 0xC000;
                    goto block_11;
                }
            }
        } else {
            temp_a1_3 = M2C_FIELD(temp_a2_2, u16 *, 0x26);
            if (((s32) temp_a1_3 >= 0x8000) && ((s32) temp_a1_3 < 0x10001)) {
                var_v1 = 0x4000;
block_11:
                M2C_FIELD(temp_a2_2, s16 *, 0x2C) = var_v1;
            }
        }
        temp_v1_2 = *arg0;
        temp_f2 = M2C_FIELD(temp_v1_2, f32 *, 0xE0);
        if (temp_f2 < 11929.0f) {
            goto block_13;
        }
        if (!(M2C_FIELD(temp_v1_2, f32 *, 0xE8) < 7193.0f)) {
            temp_a1_4 = M2C_FIELD(temp_v1_2, u16 *, 0x26);
            if (((s32) temp_a1_4 < 0x4001) || ((s32) temp_a1_4 >= 0x8000)) {
                var_a0 = 0x6000;
                goto block_19;
            }
        } else {
block_13:
            if (temp_f2 < 11929.0f) {
                goto block_14;
            }
            if (M2C_FIELD(temp_v1_2, f32 *, 0xE8) <= -7193.0f) {
                temp_a1_5 = M2C_FIELD(temp_v1_2, u16 *, 0x26);
                if (((s32) temp_a1_5 < 0x8001) || ((s32) temp_a1_5 >= 0xC000)) {
                    var_a0 = 0xA000;
                    goto block_19;
                }
            } else {
block_14:
                if (!(temp_f2 <= -11929.0f)) {
                    goto block_15;
                }
                if (!(M2C_FIELD(temp_v1_2, f32 *, 0xE8) < 7193.0f)) {
                    if ((s32) M2C_FIELD(temp_v1_2, u16 *, 0x26) >= 0x4000) {
                        var_a0 = 0x2000;
                        goto block_19;
                    }
                } else {
block_15:
                    if ((temp_f2 <= -11929.0f) && (M2C_FIELD(temp_v1_2, f32 *, 0xE8) <= -7193.0f) && ((s32) M2C_FIELD(temp_v1_2, u16 *, 0x26) < 0xC001)) {
                        var_a0 = 0xE000;
block_19:
                        M2C_FIELD(temp_v1_2, s16 *, 0x2C) = var_a0;
                    }
                }
            }
        }
    }
}
