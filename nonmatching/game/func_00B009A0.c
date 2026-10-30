/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009F4DC0(s32, f32);
extern s32 func_002AE670(s32);
extern f32 func_00AB4270(void *);
extern s32 func_009B30B0(s32, s32);
extern s32 func_00AB3B70(void *, s32, s32);
extern f32 func_00AB3C60(void *, s32);
extern s32 func_009B32D0(s32, s32, s32);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, s32, s32);            /* extern */
s32 func_0099DFF0(void *);                          /* extern */
M2C_UNK func_009B3500(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00A9D570(void *);                      /* extern */
M2C_UNK func_00AADED0(void *, s32, M2C_UNK, s32);   /* extern */
s32 func_00B0B6B0(void *, s32, s32, s32, s8, s32, s32, M2C_UNK, f32, s64); /* extern */
s32 func_00B0F640(void *, s32, s32);                /* extern */
s32 func_00B0F930(void *, s32);                     /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E4C[];
extern char D_00591E70[];
extern char D_005926D8[];
extern char D_005926DE[];
extern char D_005926E0[];
extern char D_005926F4[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68, 0x6c, 0x70, 0x74, 0x78, 0x7c, 0x80, 0x84, 0x88, 0x8c, 0x90, 0x94], gap at: 0x18. */
s32 func_00B009A0(void *arg0, s32 arg1, s32 arg2) {
    f32 temp_f20;
    f32 var_f0;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s3;
    s32 var_v0;
    s8 temp_s6;

    if ((*(u8 *)D_00591E4C) == 0) {
        if ((s32) (*(u8 *)D_005926F4) >= 0) {
            var_f0 = (f32) (*(u8 *)D_005926F4);
        } else {
            var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_005926F4) >> 1) | ((*(u8 *)D_005926F4) & 1));
        }
        if ((*(f32 *)D_005926D8) <= var_f0) {
            return 0;
        }
        goto block_6;
    }
block_6:
    temp_v1 = M2C_FIELD(arg0, s32 *, 0xB0);
    if ((temp_v1 & 0x200) && !(temp_v1 & 0x800)) {
        return 0;
    }
    if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E4C)) {
        return 0;
    }
    if (M2C_FIELD(arg0, u16 *, 0x1A) == 0xFF) {
        temp_f20 = func_00AB4270(arg0);
        temp_s5 = func_009B32D0(func_0099DFF0(arg0), arg1, 0x800) & 0xFFFF;
        if (func_00B0F640(arg0, temp_s5, arg2) != 0) {
            if ((M2C_FIELD(arg0, s32 *, 0x58) < M2C_FIELD(((func_002AE670(6) * 4) + Pes6Ball_Current), s32 *, 0xFC)) && ((func_009B30B0((s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), temp_s5) & 0xFFFF) < 0x11)) {
                return 0;
            }
            if ((func_009B30B0(temp_s5, (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x39) {
                var_v0 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x30);
                if (var_v0 <= 0) {
                    var_v0 = -var_v0;
                }
                if (var_v0 >= 0xBC1) {
                    return 0;
                }
                goto block_26;
            }
block_26:
            temp_a1 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
            if ((M2C_FIELD(arg0, s32 *, 0x1C) < temp_a1) && ((0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < temp_a1) && ((func_009B30B0(temp_s5, (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x11)) {
                return 0;
            }
            func_009B3500(arg0, 0x337, 0);
            var_s3 = 0;
            temp_s6 = (((M2C_FIELD(arg0, u16 *, 0x10C) - (temp_s5 & 0xFFFF)) + 0x10000) & 0xFFFF) < 0x8001;
            if ((s32) (*(u8 *)D_005926E0) >= 0) {
loop_31:
                temp_v0 = func_009F4DC0(0xA - var_s3, temp_f20);
                temp_s0 = temp_v0 * 4;
                if (!(M2C_FIELD((Pes6Ball_Current + temp_s0), f32 *, 0x7FC) < ((*(f32 *)D_00591E70) - 32.0f))) {
                    temp_s2 = func_00B0F930(arg0, temp_v0) & 0xFFFF;
                    if (temp_s2 == 0x338) {
                        func_009B3500(arg0, 0x338, 0);
                        if (!(M2C_FIELD((Pes6Ball_Current + temp_s0), f32 *, 0x7FC) < ((*(f32 *)D_00591E70) - 32.0f))) {
                            goto block_40;
                        }
                        goto block_35;
                    }
block_40:
                    temp_a0 = M2C_FIELD(arg0, s32 *, 0x1C);
                    if (func_00B0B6B0(arg0, temp_s2, temp_s5, ((temp_a0 * 0x5F) / 100) + ((u32) (temp_a0 * 0x5F) >> 0x1F), temp_s6, var_s3, temp_v0, 0xA, temp_f20, 1) != 0) {
                        func_00209A00(M2C_FIELD(arg0, void **, 4), temp_s2, var_s3 & 0xFFFF);
                        M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x28) = func_00AB3C60(arg0, temp_v0);
                        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = temp_s6;
                        M2C_FIELD(arg0, s16 *, 0x2C) = (s16) temp_s5;
                        func_00AADED0(arg0, temp_s5, 0, temp_v0);
                        func_00A9D570(arg0);
                        M2C_FIELD(arg0, s8 *, 0x16) = 0xE;
                        M2C_FIELD(arg0, s16 *, 0x18) = 0xA0;
                        M2C_FIELD(arg0, s16 *, 0x38) = func_00AB3B70(arg0, temp_s5, temp_v0);
                        func_00207390(M2C_FIELD(arg0, void **, 4), 3);
                        M2C_FIELD(arg0, s8 *, 0x66) = 3;
                        return 1;
                    }
                    goto block_35;
                }
block_35:
                var_s3 += (*(u8 *)D_005926DE);
                if ((s32) (*(u8 *)D_005926E0) < var_s3) {
                    goto block_20;
                }
                goto loop_31;
            }
            goto block_20;
        }
block_20:
        return 0;
    }
    return 0;
}
