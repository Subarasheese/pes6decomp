/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B30B0(s32, s32);
extern s32 func_002AE670(s32);
extern s32 func_009B3480(void *, f32, f32);
extern s32 func_009B33A0(void *, s32, s32);
f32 func_001CD9E0(f32);                             /* extern */
extern void *Pes6Ball_Current;

s32 func_00A11780(void *arg0, s32 arg1) {
    f32 var_f12;
    s32 temp_f0;
    s32 temp_fp;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_s5;
    s32 temp_s7;
    s32 temp_v0;
    s32 temp_v0_4;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_s2;
    s32 var_s3;
    s32 var_s6;
    s32 var_s6_2;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_s0;
    u16 temp_v1;
    u32 temp_s0_3;
    u32 temp_s1;
    u32 temp_v0_3;
    void *temp_v0_2;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
    var_s3 = arg1;
    if ((temp_v1 != 1) && (temp_v1 != 0xB7) && (temp_v1 != 2) && (temp_v1 != 0x114)) {
        temp_s0 = M2C_FIELD(arg0, u16 *, 0x10C);
        temp_s2 = func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x28), (s32) temp_s0) & 0xFFFF;
        temp_v0 = func_009B33A0(arg0, (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x47C), (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0xB7C));
        if (temp_v0 < 0) {
            var_f12 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
        } else {
            var_f12 = (f32) temp_v0;
        }
        temp_f0 = (s32) func_001CD9E0(var_f12);
        temp_s1 = ((temp_f0 * 8) / 10) + ((u32) (temp_f0 * 8) >> 0x1F);
        var_s6 = 0x20;
        if (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) != 1) {
            var_s6 = 0x28;
        }
        var_a0 = func_009B30B0((s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), var_s3) & 0xFFFF;
        if (temp_s1 < 0x300U) {
            temp_v1_2 = ((u32) (0x300 - temp_s1) >> 4) & 0xFFFF;
            if ((var_a0 & 0xFFFF) < temp_v1_2) {
                var_a0 = 0;
            } else {
                var_a0 = (var_a0 - temp_v1_2) & 0xFFFF;
            }
        }
        temp_v1_3 = temp_s2 & 0xFFFF;
        if ((temp_s1 < (u32) (temp_v1_3 * 8)) && (temp_v1_3 >= 0x20) && ((var_a0 & 0xFFFF) < 0x11)) {
            temp_s5 = func_009B30B0((s32) temp_s0, (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF;
            temp_s0_2 = func_002AE670(8);
            if (((func_009B30B0(var_s3, (s32) M2C_FIELD(arg0, u16 *, 0x32)) & 0xFFFF) < 0x19) && ((func_009B30B0(var_s3, (s32) M2C_FIELD(arg0, u16 *, 0x32)) & 0xFFFF) >= 4)) {
                var_s2 = var_s3 & 0xFFFF;
                var_v1 = ((var_s2 - M2C_FIELD(arg0, u16 *, 0x32)) + 0x10000) & 0xFFFF;
            } else {
                temp_v0_2 = (temp_s0_2 * 4) + Pes6Ball_Current;
                var_s2 = var_s3 & 0xFFFF;
                var_v1 = (((func_009B3480(arg0, M2C_FIELD(temp_v0_2, f32 *, 0x47C), M2C_FIELD(temp_v0_2, f32 *, 0xB7C)) & 0xFFFF) - var_s2) + 0x10000) & 0xFFFF;
            }
            temp_s0_3 = temp_s5 & 0xFFFF;
            temp_v0_3 = temp_s0_3 * 4;
            var_v1_2 = ((temp_s0_3 * 2) + 0x400) & 0xFFFF;
            if (temp_s1 < temp_v0_3) {
                var_v1_2 = (var_v1_2 + ((temp_v0_3 - temp_s1) & 0xFFFF)) & 0xFFFF;
            }
            temp_s7 = (var_v1 < 0x8001) & 0xFFFF;
            temp_v0_4 = (var_v1_2 & 0xFFFF) * var_s6;
            var_s6_2 = temp_v0_4 >> 4;
            if (temp_v0_4 < 0) {
                var_s6_2 = (s32) (temp_v0_4 + 0xF) >> 4;
            }
            temp_fp = func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x28), var_s3) & 0xFFFF;
            if (temp_fp >= (func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x28), (var_s2 + (((temp_s7 != 0) ? -1 : 1) * var_s6_2)) & 0xFFFF) & 0xFFFF)) {
                if (((u32) ((temp_s1 >> 4) + 0x28) < temp_s0_3) || (((s32) temp_s0_3 >= 9) && ((M2C_FIELD(arg0, s32 *, 0x1C) + 0x800) >= M2C_FIELD(Pes6Ball_Current, s32 *, 0x50)))) {
                    goto block_39;
                }
                goto block_42;
            }
            if ((u32) ((temp_s1 >> 4) + 0x30) >= temp_s0_3) {
                if ((s32) temp_s0_3 >= 0x11) {
                    if ((M2C_FIELD(arg0, s32 *, 0x1C) + 0x400) < M2C_FIELD(Pes6Ball_Current, s32 *, 0x50)) {
                        goto block_41;
                    }
                    goto block_39;
                }
block_41:
                return var_s3;
            }
block_39:
            M2C_FIELD(arg0, s8 *, 0x66) = 0;
            var_s3 = (var_s3 + ((((temp_s7 != 0) ? -1 : 1) * var_s6_2) & 0xFFFF)) & 0xFFFF;
            goto block_40;
        }
block_40:
        goto block_42;
    }
block_42:
    return var_s3;
}
