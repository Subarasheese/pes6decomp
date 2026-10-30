/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0098F7E0();                                /* extern */
s32 func_009909D0(void *, M2C_UNK);                 /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
s32 func_009B34C0(void *, f32, f32, f32, f32);      /* extern */
extern s32 D_003E7A08;
extern char Pes6MatchPlayers[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68, 0x6c, 0x70, 0x74, 0x78, 0x7c, 0x80, 0x84, 0x88, 0x8c, 0x90, 0x94], gap at: 0x8. */
s32 func_00993230(void *arg0, s32 arg1) {
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f20;
    s32 temp_s6;
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s3;
    s32 var_s7;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 var_s2;
    u8 var_s5;
    void *temp_a0;
    void *temp_s0;

    if (func_0098F7E0() == 0) {
        temp_s6 = arg1 & 0xFF;
        temp_f20 = (f32) M2C_FIELD(arg0, s16 *, 0x14);
        if (temp_s6 != 0xFF) {
            var_a0 = temp_s6 % 23;
        } else {
            var_a0 = 1;
        }
        temp_s0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
        if ((u32) M2C_FIELD(temp_s0, u32 *, 0x11C) >= (u32) M2C_FIELD(arg0, u32 *, 0x124)) {
            if ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x2A), M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0) * 2) + arg0), u16 *, 0x128)) & 0xFFFF) >= 0x6000) {
                if ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x2A), M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) < 0x2801) {
                    if (!((M2C_FIELD(arg0, f32 *, 0xE0) * temp_f20) < (M2C_FIELD(temp_s0, f32 *, 0xE0) * temp_f20))) {
                        if (func_009909D0(arg0, 0x40000) == 0) {
                            var_s1 = 0;
                            var_s7 = 0;
                            var_s2 = 0;
                            var_s5 = 0;
                            var_s3 = 0;
                            var_s0 = 0;
loop_19:
                            temp_a0 = D_003E7A08 + var_s0;
                            if ((M2C_FIELD(temp_a0, u8 *, 8) == M2C_FIELD(arg0, u8 *, 0)) && (M2C_FIELD(temp_a0, s32 *, 4) == 4)) {
                                temp_v1 = M2C_FIELD(temp_a0, u8 *, 0x2C);
                                if (((u64) ((s64) temp_v1 << 0x3C) >> 0x3F) != 0) {
                                    var_s5 = M2C_FIELD(temp_a0, u8 *, 0x25);
                                    var_s1 = 1;
                                } else if (((u64) ((s64) temp_v1 << 0x3B) >> 0x3F) != 0) {
                                    var_s5 = M2C_FIELD(temp_a0, u8 *, 0x25);
                                    var_s1 = 1;
                                    var_s7 = 1;
                                } else if (M2C_FIELD(temp_a0, u8 *, 0x25) == temp_s6) {
                                    temp_f12 = M2C_FIELD(temp_a0, f32 *, 0x10);
                                    temp_f14 = (f32) M2C_FIELD(temp_a0, s16 *, 0x28);
                                    if (!((temp_f14 * temp_f20) <= (temp_f12 * temp_f20)) && ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x2A), func_009B34C0(temp_a0, temp_f12, M2C_FIELD(temp_a0, f32 *, 0x18), temp_f14, (f32) M2C_FIELD(temp_a0, s16 *, 0x2A)) & 0xFFFF) & 0xFFFF) < 0x3D00)) {
                                        temp_v1_2 = M2C_FIELD((D_003E7A08 + var_s0), u8 *, 0x25);
                                        if ((u32) M2C_FIELD((arg0 + (temp_v1_2 * 4)), u32 *, 0x158) < 0x240000U) {
                                            var_s2 = temp_v1_2;
                                        }
                                    }
                                }
                                var_s3 += 1;
                                var_s0 += 0x40;
                                if (var_s3 < 0xA) {
                                    goto loop_19;
                                }
                            }
                            if (var_s2 != 0) {
                                if (var_s5 != 0) {
                                    if ((var_s2 != var_s5) && (var_s7 == 0)) {
                                        return 2;
                                    }
                                    goto block_40;
                                }
                                if (var_s1 == 0) {
                                    return 1;
                                }
                                goto block_40;
                            }
                            goto block_40;
                        }
                        goto block_40;
                    }
                    goto block_40;
                }
                goto block_40;
            }
            goto block_40;
        }
        goto block_40;
    }
block_40:
    return 0;
}
