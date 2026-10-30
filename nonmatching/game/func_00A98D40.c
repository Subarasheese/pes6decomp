/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A1FE80(s32, M2C_UNK);                    /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E19[];

s32 func_00A98D40(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u16 temp_v1;

    temp_s0 = arg1 & 0xFFFF;
    if ((temp_s0 < 0x11) && (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x1B01)) {
        return M2C_FIELD(arg0, s32 *, 0x58);
    }
    if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E19)) {
        temp_v1 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x84);
        if ((temp_v1 != 0) && (temp_v1 != 0xB) && (temp_v1 != 0xF)) {
            goto block_9;
        }
        temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x58);
        return ((temp_a0_3 * 0x61) / 100) + ((u32) (temp_a0_3 * 0x61) >> 0x1F);
    }
block_9:
    if ((temp_s0 < 0x29) && !(M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) <= -160.0f)) {
        var_v0_2 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x30);
        if (var_v0_2 <= 0) {
            var_v0_2 = -var_v0_2;
        }
        if (var_v0_2 < 0xEB0) {
            temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x58);
            return ((temp_a0_2 * 0x61) / 100) + ((u32) (temp_a0_2 * 0x61) >> 0x1F);
        }
        goto block_15;
    }
block_15:
    if (temp_s0 < 0x11) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x58);
        return ((temp_a0 * 0x61) / 100) + ((u32) (temp_a0 * 0x61) >> 0x1F);
    }
    if (temp_s0 < 0x71) {
        temp_a0_4 = M2C_FIELD(arg0, s32 *, 0x1C);
        var_v0 = func_00A1FE80(((temp_a0_4 * 0x61) / 100) + ((u32) (temp_a0_4 * 0x61) >> 0x1F), 0x1900);
    } else {
        temp_a0_5 = M2C_FIELD(arg0, s32 *, 0x58);
        var_v0 = ((temp_a0_5 * 0x61) / 100) + ((u32) (temp_a0_5 * 0x61) >> 0x1F);
    }
    if (temp_s0 >= 0x61) {
        temp_a0_6 = temp_s0 - 0x60;
        var_v1 = temp_a0_6 >> 1;
        if (temp_a0_6 < 0) {
            var_v1 = (s32) (temp_a0_6 + 1) >> 1;
        }
        return (s32) (var_v0 << 6) / (s32) ((var_v1 + 0x40) & 0xFFFF);
    }
    return var_v0;
}
