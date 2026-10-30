/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
extern s32 func_002082F0(s32);
M2C_UNK func_00207390(M2C_UNK);                     /* extern */
s32 func_002082C0(u16);                             /* extern */
extern f32 *D_003E74CC;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68, 0x6c, 0x70, 0x74, 0x78, 0x7c, 0x80, 0x84, 0x88, 0x8c, 0x90, 0x94, 0x98, 0x9c, 0xa0, 0xa4], gap at: 0x8. */
void func_00208970(void *arg0, u16 arg1, f32 fparg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f6;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f0_5;
    f32 var_f0_6;
    f32 var_f20;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_4;
    s32 temp_fp;
    s32 temp_s2;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a0;
    s32 var_a0_2;
    u16 temp_a0_3;
    u16 temp_a0_5;
    u16 temp_a0_6;
    u16 temp_a0_7;
    u16 temp_a0_8;
    u16 temp_v1;
    u8 temp_s0;

    temp_s2 = arg1 & 0xFFFF;
    if (M2C_FIELD(arg0, u16 *, 0x30) != temp_s2) {
        func_00207390(3);
        temp_s0 = M2C_FIELD(&D_003E74CC[temp_s2], u8 *, 0x2FD8);
        temp_s6 = func_002082F0((s32) M2C_FIELD(arg0, u16 *, 0x30));
        temp_s7 = func_002082C0(M2C_FIELD(arg0, u16 *, 0x30));
        temp_fp = temp_s7 - temp_s6;
        temp_s5 = func_002082F0(temp_s2);
        temp_v0 = func_002082C0((u16) temp_s2);
        temp_a0 = temp_v0 - temp_s5;
        if ((temp_s2 != 0x40C) && (temp_s2 != 0x40B) && (temp_s2 != 0x40A) && (temp_s2 != 0x409) && (temp_s2 != 0x486) && (temp_s2 != 0x487) && (temp_s2 != 0x408) && (temp_s2 != 0x38C) && (temp_s2 != 0x393) && (temp_s2 != 0xBF) && (temp_s2 != 0x2B8) && (temp_s2 != 0x2BF) && (temp_s2 != 0x2BE) && (temp_s2 != 0x2BD) && (temp_s2 != 0x2C0) && (temp_s2 != 0x22) && (temp_s2 != 0x23) && (temp_s2 != 0x21) && (temp_s2 != 0x16) && (temp_s2 != 0x17) && (temp_s2 != 0x15) && (temp_s2 != 0xBE) && (temp_s2 != 0x14) && (temp_s2 != 0x27) && (temp_s2 != 0x2A) && (temp_s2 != 0x232) && (temp_s2 != 0x22B) && (temp_s2 != 0x22A) && (temp_s2 != 0x28A) && (temp_s2 != 0x11) && (temp_s2 != 0xC5) && (temp_s2 != 0xC4) && (temp_s2 != 0xC3) && (temp_s2 != 0xC2) && (temp_s2 != 0xC6) && (temp_s2 != 0xC7) && (temp_s2 != 0xB6) && (temp_s2 != 0x2D) && (temp_s2 != 0x2B) && (temp_s2 != 0x2B4) && (temp_s2 != 0x26) && (temp_s2 != 0x34) && (temp_s2 != 0x33)) {
            temp_f2 = (f32) temp_s5;
            if (M2C_FIELD(arg0, u16 *, 0x30) != temp_s2) {
                M2C_FIELD(arg0, s8 *, 0x50) = 1;
            }
            M2C_FIELD(arg0, f32 *, 0x28) = (f32) *D_003E74CC;
            M2C_FIELD(arg0, u16 *, 0x30) = arg1;
            if (!(temp_f2 >= 2.1474836e9f)) {
                var_a0 = (s32) temp_f2;
            } else {
                var_a0 = (s32) (temp_f2 - 2.1474836e9f) | 0x80000000;
            }
            temp_a0_2 = var_a0 & 0xFFFF;
            if (temp_a0_2 >= 0) {
                var_f0 = (f32) temp_a0_2;
            } else {
                var_f0 = 2.0f * (f32) (((u32) temp_a0_2 >> 1) | (temp_a0_2 & 1));
            }
            M2C_FIELD(arg0, f32 *, 0x38) = var_f0;
            M2C_FIELD(arg0, s16 *, 0x34) = 0;
            M2C_FIELD(arg0, u32 *, 4) = func_00208310(arg1 & 0xFFFF);
            temp_a0_3 = M2C_FIELD(arg0, u16 *, 0x30);
            if ((s32) temp_a0_3 < 0x59A) {
                goto block_131;
            }
            if (M2C_FIELD(&D_003E74CC[temp_s2], s32 *, 0x178C) != 0) {
block_131:
                temp_f1 = M2C_FIELD(arg0, f32 *, 0x38);
                if (!(temp_f1 <= (f32) M2C_FIELD(&D_003E74CC[temp_a0_3 & 0xFFFF], s32 *, 0x2FD8)) || (temp_f1 < 0.0f)) {
                    M2C_FIELD(arg0, f32 *, 0x38) = 0.0f;
                }
            }
        } else {
            temp_v1 = M2C_FIELD(arg0, u16 *, 0x30);
            if ((temp_v1 != 0x40C) && (temp_v1 != 0x40B) && (temp_v1 != 0x40A) && (temp_v1 != 0x409) && (temp_v1 != 0x486) && (temp_v1 != 0x487) && (temp_v1 != 0x408) && (temp_v1 != 0x38C) && (temp_v1 != 0x393) && (temp_v1 != 0xBF) && (temp_v1 != 0x2B8) && (temp_v1 != 0x2BF) && (temp_v1 != 0x2BE) && (temp_v1 != 0x2BD) && (temp_v1 != 0x2C0) && (temp_v1 != 0x22) && (temp_v1 != 0x23) && (temp_v1 != 0x21) && (temp_v1 != 0x16) && (temp_v1 != 0x17) && (temp_v1 != 0x15) && (temp_v1 != 0xBE) && (temp_v1 != 0x14) && (temp_v1 != 0x27) && (temp_v1 != 0x2A) && (temp_v1 != 0x232) && (temp_v1 != 0x22B) && (temp_v1 != 0x22A) && (temp_v1 != 0x28A) && (temp_v1 != 0x11) && (temp_v1 != 0xC5) && (temp_v1 != 0xC4) && (temp_v1 != 0xC3) && (temp_v1 != 0xC2) && (temp_v1 != 0xC6) && (temp_v1 != 0xC7) && (temp_v1 != 0xB6) && (temp_v1 != 0x2D) && (temp_v1 != 0x2B) && (temp_v1 != 0x2B4) && (temp_v1 != 0x26) && (temp_v1 != 0x34) && (temp_v1 != 0x33)) {
                temp_f20 = (f32) temp_s5;
                if (temp_v1 != temp_s2) {
                    M2C_FIELD(arg0, s8 *, 0x50) = 1;
                }
                M2C_FIELD(arg0, f32 *, 0x28) = (f32) *D_003E74CC;
                M2C_FIELD(arg0, u16 *, 0x30) = arg1;
                if (!(temp_f20 >= 2.1474836e9f)) {
                    var_a0_2 = (s32) temp_f20;
                } else {
                    var_a0_2 = (s32) (temp_f20 - 2.1474836e9f) | 0x80000000;
                }
                temp_a0_4 = var_a0_2 & 0xFFFF;
                if (temp_a0_4 >= 0) {
                    var_f0_2 = (f32) temp_a0_4;
                } else {
                    var_f0_2 = 2.0f * (f32) (((u32) temp_a0_4 >> 1) | (temp_a0_4 & 1));
                }
                M2C_FIELD(arg0, f32 *, 0x38) = var_f0_2;
                M2C_FIELD(arg0, s16 *, 0x34) = 0;
                M2C_FIELD(arg0, u32 *, 4) = func_00208310(arg1 & 0xFFFF);
                temp_a0_5 = M2C_FIELD(arg0, u16 *, 0x30);
                if ((s32) temp_a0_5 < 0x59A) {
                    goto block_120;
                }
                if (M2C_FIELD(&D_003E74CC[temp_s2], s32 *, 0x178C) != 0) {
block_120:
                    temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x38);
                    if (!(temp_f1_2 <= (f32) M2C_FIELD(&D_003E74CC[temp_a0_5 & 0xFFFF], s32 *, 0x2FD8)) || (temp_f1_2 < 0.0f)) {
                        M2C_FIELD(arg0, f32 *, 0x38) = 0.0f;
                    }
                }
            } else {
                temp_f6 = (f32) temp_s6;
                if (!(fparg0 < temp_f6)) {
                    if (!(fparg0 <= (f32) temp_s7)) {
                        if (temp_v1 != temp_s2) {
                            M2C_FIELD(arg0, s8 *, 0x50) = 1;
                        }
                        temp_v0_2 = temp_v0 & 0xFFFF;
                        M2C_FIELD(arg0, f32 *, 0x28) = (f32) *D_003E74CC;
                        M2C_FIELD(arg0, u16 *, 0x30) = arg1;
                        if (temp_v0_2 >= 0) {
                            var_f0_3 = (f32) temp_v0_2;
                        } else {
                            var_f0_3 = 2.0f * (f32) (((u32) temp_v0_2 >> 1) | (temp_v0_2 & 1));
                        }
                        M2C_FIELD(arg0, f32 *, 0x38) = var_f0_3;
                        M2C_FIELD(arg0, s16 *, 0x34) = 0;
                        M2C_FIELD(arg0, u32 *, 4) = func_00208310(arg1 & 0xFFFF);
                        temp_a0_6 = M2C_FIELD(arg0, u16 *, 0x30);
                        if ((s32) temp_a0_6 < 0x59A) {
                            goto block_96;
                        }
                        if (M2C_FIELD(&D_003E74CC[temp_s2], s32 *, 0x178C) != 0) {
block_96:
                            temp_f1_3 = M2C_FIELD(arg0, f32 *, 0x38);
                            if (!(temp_f1_3 <= (f32) M2C_FIELD(&D_003E74CC[temp_a0_6 & 0xFFFF], s32 *, 0x2FD8)) || (temp_f1_3 < 0.0f)) {
                                M2C_FIELD(arg0, f32 *, 0x38) = 0.0f;
                            }
                        }
                    } else {
                        var_f20 = (((f32) temp_a0 * ((100.0f * (M2C_FIELD(arg0, f32 *, 0x38) - temp_f6)) / (f32) temp_fp)) / 100.0f) + (0.5f + (f32) temp_s5);
                        if ((s32) temp_s0 >= 0) {
                            var_f0_4 = (f32) temp_s0;
                        } else {
                            var_f0_4 = 2.0f * (f32) ((temp_s0 >> 1) | (temp_s0 & 1));
                        }
                        if (!(var_f20 < var_f0_4)) {
                            if ((s32) temp_s0 >= 0) {
                                var_f0_5 = (f32) temp_s0;
                            } else {
                                var_f0_5 = 2.0f * (f32) ((temp_s0 >> 1) | (temp_s0 & 1));
                            }
                            var_f20 = (var_f20 - var_f0_5) + (f32) temp_s5;
                        }
                        if (temp_v1 != temp_s2) {
                            M2C_FIELD(arg0, s8 *, 0x50) = 1;
                        }
                        M2C_FIELD(arg0, f32 *, 0x28) = (f32) *D_003E74CC;
                        M2C_FIELD(arg0, u16 *, 0x30) = arg1;
                        M2C_FIELD(arg0, f32 *, 0x38) = 0.0f;
                        M2C_FIELD(arg0, s16 *, 0x34) = 0;
                        M2C_FIELD(arg0, u32 *, 4) = func_00208310(arg1 & 0xFFFF);
                        temp_a0_7 = M2C_FIELD(arg0, u16 *, 0x30);
                        if ((s32) temp_a0_7 < 0x59A) {
                            goto block_109;
                        }
                        if (M2C_FIELD(&D_003E74CC[temp_s2], s32 *, 0x178C) != 0) {
block_109:
                            temp_f1_4 = M2C_FIELD(arg0, f32 *, 0x38);
                            if (!(temp_f1_4 <= (f32) M2C_FIELD(&D_003E74CC[temp_a0_7 & 0xFFFF], s32 *, 0x2FD8)) || (temp_f1_4 < 0.0f)) {
                                M2C_FIELD(arg0, f32 *, 0x38) = 0.0f;
                            }
                        }
                        M2C_FIELD(arg0, f32 *, 0x38) = var_f20;
                    }
                } else {
                    if (temp_v1 != temp_s2) {
                        M2C_FIELD(arg0, s8 *, 0x50) = 1;
                    }
                    temp_v0_3 = temp_s5 & 0xFFFF;
                    M2C_FIELD(arg0, f32 *, 0x28) = (f32) *D_003E74CC;
                    M2C_FIELD(arg0, u16 *, 0x30) = arg1;
                    if (temp_v0_3 >= 0) {
                        var_f0_6 = (f32) temp_v0_3;
                    } else {
                        var_f0_6 = 2.0f * (f32) (((u32) temp_v0_3 >> 1) | (temp_v0_3 & 1));
                    }
                    M2C_FIELD(arg0, f32 *, 0x38) = var_f0_6;
                    M2C_FIELD(arg0, s16 *, 0x34) = 0;
                    M2C_FIELD(arg0, u32 *, 4) = func_00208310(arg1 & 0xFFFF);
                    temp_a0_8 = M2C_FIELD(arg0, u16 *, 0x30);
                    if ((s32) temp_a0_8 < 0x59A) {
                        goto block_139;
                    }
                    if (M2C_FIELD(&D_003E74CC[temp_s2], s32 *, 0x178C) != 0) {
block_139:
                        temp_f1_5 = M2C_FIELD(arg0, f32 *, 0x38);
                        if (!(temp_f1_5 <= (f32) M2C_FIELD(&D_003E74CC[temp_a0_8 & 0xFFFF], s32 *, 0x2FD8)) || (temp_f1_5 < 0.0f)) {
                            M2C_FIELD(arg0, f32 *, 0x38) = 0.0f;
                        }
                    }
                }
            }
        }
    }
}
