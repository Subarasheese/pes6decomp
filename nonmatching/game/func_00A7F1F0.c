/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002AE630(s32);
extern u32 func_00288670(u32, u32);
extern s32 func_002AE670(s32);
s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_00A1FE80(s32, M2C_UNK);                    /* extern */
s32 func_00BBB780(s64);                             /* extern */
s32 func_00BBB8C0(s32);                             /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E19[];
extern char D_005926D8[];
extern char Pes6MatchSquads[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44], gap at: 0x8. */
s32 func_00A7F1F0(void *arg0) {
    f32 temp_f20;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;

    temp_v1 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
    var_v0 = temp_v1 >> 6;
    if (temp_v1 < 0) {
        var_v0 = (s32) (temp_v1 + 0x3F) >> 6;
    }
    var_s1 = func_00A1FE80(M2C_FIELD(arg0, s32 *, 0x1C) + 0x200 + var_v0, 0x1100);
    temp_a0 = func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF;
    if (M2C_FIELD(arg0, s32 *, 0x1C) < M2C_FIELD(Pes6Ball_Current, s32 *, 0x50)) {
        temp_s0 = temp_a0 & 0xFFFF;
        if (temp_s0 < 0x29) {
            if (temp_s0 >= 0x11) {
                if (func_00BBB780((s64) ((func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x80) & 0x7F, 0x28U) - 0x32) << 0x30) >> 0x30) & 0xFF) {
                    temp_v1_2 = (0x28 - temp_s0) * M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
                    var_v0_2 = temp_v1_2 >> 8;
                    if (temp_v1_2 < 0) {
                        var_v0_2 = (s32) (temp_v1_2 + 0xFF) >> 8;
                    }
                } else {
                    temp_v1_3 = 0x28 - temp_s0;
                    temp_v0 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
                    var_v0_2 = ((temp_v1_3 * temp_v0) / 192) + ((u32) (temp_v1_3 * temp_v0) >> 0x1F);
                }
            } else if (func_00BBB780((s64) ((func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x80) & 0x7F, 0x28U) - 0x32) << 0x30) >> 0x30) & 0xFF) {
                temp_v1_4 = 0x18 - temp_s0;
                temp_v0_2 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
                var_v0_2 = ((temp_v1_4 * temp_v0_2) / 192) + ((u32) (temp_v1_4 * temp_v0_2) >> 0x1F);
            } else {
                temp_v1_5 = 0x28 - temp_s0;
                temp_v0_3 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
                var_v0_2 = ((temp_v1_5 * temp_v0_3) / 192) + ((u32) (temp_v1_5 * temp_v0_3) >> 0x1F);
            }
            var_s1 += var_v0_2;
        }
    }
    temp_f20 = (*(f32 *)D_005926D8);
    if (temp_f20 <= (f32) func_002AE670(0x40)) {
        func_002AE630((s32) temp_f20);
        func_002AE670(0x28);
    }
    if ((M2C_FIELD(arg0, u8 *, 0) != (*(u8 *)D_00591E19)) && !(func_00BBB780((s64) (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x80) & 0x7F, 0x28U) << 0x30) >> 0x30) & 0xFF)) {
        var_v0_3 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x30);
        if (var_v0_3 <= 0) {
            var_s0 = -var_v0_3;
        } else {
            var_s0 = var_v0_3;
        }
        if (var_v0_3 <= 0) {
            var_v0_3 = -var_v0_3;
        }
        var_a0 = var_v0_3 >> 3;
        if (var_v0_3 < 0) {
            var_a0 = (s32) (var_v0_3 + 7) >> 3;
        }
        temp_v0_4 = func_00BBB8C0(var_a0);
        var_v1 = var_s0 >> 4;
        if (var_s0 < 0) {
            var_v1 = (s32) (var_s0 + 0xF) >> 4;
        }
        var_s1 += temp_v0_4 + var_v1;
    }
    return var_s1;
}
