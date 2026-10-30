/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00B044D0(s32, s32);
extern f32 func_00AB4270(void *);
extern s32 func_00B04470(s32, s32, s32);
extern s32 func_00A08690(void *);
extern s32 func_009B30B0(s32, s32);
extern s32 func_009F4C40(s32, f32);
M2C_UNK func_009B3500(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00A19D40(void *, s32, M2C_UNK, s16, s32, s32, f32); /* extern */
s32 func_00AB3590(void *, M2C_UNK);                 /* extern */
extern s32 Pes6Ball_Current;
extern char D_00591E70[];
extern char D_0059226E[];
extern char Pes6MatchSquads[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68, 0x6c, 0x70, 0x74, 0x78, 0x7c, 0x80, 0x84, 0x88, 0x8c, 0x90, 0x94, 0x98, 0x9c, 0xa0, 0xa4], gap at: 0x8. */
s32 func_00A94120(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 temp_f0;
    s16 var_s1;
    s32 temp_a0;
    s32 temp_fp;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;

    temp_f0 = func_00AB4270(arg0);
    temp_fp = func_009F4C40(0xC, temp_f0);
    temp_v0 = func_009B30B0(arg1, arg2) & 0xFFFF;
    temp_v0_2 = temp_v0 << 8;
    var_s4 = temp_v0_2 >> 6;
    if (temp_v0 & 0x800000) {
        var_s4 = (s32) (temp_v0_2 + 0x3F) >> 6;
    }
    temp_s3 = temp_fp * 4;
    temp_a0 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
    if (M2C_FIELD((temp_s3 + Pes6Ball_Current), f32 *, 0x7FC) < (f32) (((temp_a0 * -0x60) / 183) + ((u32) (temp_a0 * -0x60) >> 0x1F))) {
        var_s2 = 0xFF;
        func_009B3500(arg0, 0xFF, 0);
        if (!(M2C_FIELD((temp_s3 + Pes6Ball_Current), f32 *, 0x7FC) <= (*(f32 *)D_00591E70))) {
            var_s2 = 0x100;
        }
        temp_v1 = var_s4 * (func_00B044D0(var_s2, 0x5A) & 0xFFFF);
        var_v0 = temp_v1 >> 8;
        if (temp_v1 < 0) {
            var_v0 = (s32) (temp_v1 + 0xFF) >> 8;
        }
        (*(s16 *)D_0059226E) = (arg2 & 0xFFFF) + ((var_v0 & 0xFFFF) * ((arg3 != 0) ? -1 : 1));
        return var_s2;
    }
    if (arg4 < 0x01900000) {
        var_s3 = 0x227;
        temp_v1_2 = var_s4 * (func_00B044D0(0x227, 0x5A) & 0xFFFF);
        var_v0_2 = temp_v1_2 >> 8;
        if (temp_v1_2 < 0) {
            var_v0_2 = (s32) (temp_v1_2 + 0xFF) >> 8;
        }
        var_v0_3 = (arg2 & 0xFFFF) + ((var_v0_2 & 0xFFFF) * ((arg3 != 0) ? -1 : 1));
        goto block_23;
    }
    if (((0x1300 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < M2C_FIELD(arg0, s32 *, 0x1C)) && ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), (s32) M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) < 0x21) && ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), arg2) & 0xFFFF) < 0x21)) {
        var_s3 = 0xC;
        temp_v1_3 = var_s4 * (func_00B044D0(0xC, 0x5A) & 0xFFFF);
        var_v0_4 = temp_v1_3 >> 8;
        if (temp_v1_3 < 0) {
            var_v0_4 = (s32) (temp_v1_3 + 0xFF) >> 8;
        }
        var_s5 = arg2 & 0xFFFF;
        var_s1 = (var_s5 + ((var_v0_4 & 0xFFFF) * ((arg3 != 0) ? -1 : 1))) & 0xFFFF;
        if (arg4 < 0x06400000) {
            var_s3 = 0x226;
            temp_v1_4 = var_s4 * (func_00B044D0(0x226, 0x5A) & 0xFFFF);
            var_v0_5 = temp_v1_4 >> 8;
            if (temp_v1_4 < 0) {
                var_v0_5 = (s32) (temp_v1_4 + 0xFF) >> 8;
            }
            var_v0_6 = var_s5 + ((var_v0_5 & 0xFFFF) * ((arg3 != 0) ? -1 : 1));
            goto block_17;
        }
    } else {
        var_s3 = 0xA;
        temp_v1_5 = var_s4 * (func_00B04470(0xA, 0x24, 0x5A) & 0xFFFF);
        var_v0_7 = temp_v1_5 >> 8;
        if (temp_v1_5 < 0) {
            var_v0_7 = (s32) (temp_v1_5 + 0xFF) >> 8;
        }
        var_s5 = arg2 & 0xFFFF;
        var_v0_6 = var_s5 + ((var_v0_7 & 0xFFFF) * ((arg3 != 0) ? -1 : 1));
block_17:
        var_s1 = var_v0_6 & 0xFFFF;
    }
    if (func_00A19D40(arg0, var_s3, 0, var_s1, arg3 & 0xFF, temp_fp, temp_f0) == 0) {
        if (((func_009B30B0(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) < 0x11) && (func_00A08690(arg0) != 0)) {
            var_s3 = 0x18B;
            temp_s0 = (((M2C_FIELD(arg0, u16 *, 0x26) - M2C_FIELD(arg0, u16 *, 0x28)) + 0x10000) & 0xFFFF) < 0x8001;
            var_v0_3 = M2C_FIELD(arg0, u16 *, 0x26) + ((func_00B044D0(0x18B, 0x5A) & 0xFFFF) * ((temp_s0 != 0) ? -1 : 1));
        } else {
            var_s3 = 0xE2;
            var_v0_3 = var_s5 + ((func_00AB3590(arg0, 0xE2) & 0xFFFF) * ((arg3 != 0) ? -1 : 1));
        }
block_23:
        var_s1 = var_v0_3 & 0xFFFF;
    }
    (*(s16 *)D_0059226E) = var_s1;
    return var_s3;
}
