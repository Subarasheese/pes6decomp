/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002AE630(s32);
extern u32 func_00288670(u32, u32);
extern s32 func_002AE670(s32);
s32 func_00A13E50(s32, M2C_UNK, s32);               /* extern */
s32 func_00BBB780(s64);                             /* extern */
s32 func_00BBB8C0(s32);                             /* extern */
extern void *Pes6Ball_Current;
extern char D_005926D8[];
extern char Pes6MatchSquads[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54], gap at: 0x8. */
s32 func_00AA24E0(void *arg0, s32 arg1, s32 arg2) {
    f32 temp_f1;
    f32 temp_f20;
    s32 temp_a1;
    s32 temp_a2_2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s3_3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    u16 temp_v1;
    u8 temp_a2;
    void *temp_a0;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
    var_s0_2 = arg2;
    switch (temp_v1) {                              /* irregular */
    case 0x36A:
    case 0x11E:
    case 0x396:
    case 0x37A:
        var_s0_2 = 2;
        break;
    case 0x1EC:
    case 0x1EF:
    case 0x362:
        var_s0_2 = 6;
        break;
    case 0x369:
        if (!((*(f32 *)D_005926D8) < (f32) func_002AE670(0x30)) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) < 0x3000)) {
            temp_f1 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x30);
            if (!(temp_f1 <= 0.0f) && (temp_f1 < 12032.0f)) {
                var_s0_2 = 4;
            }
        }
        break;
    }
    var_a0 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x30);
    if (var_a0 <= 0) {
        var_a0 = -var_a0;
    }
    if ((M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) + var_a0) >= 0x3401) {
        temp_a2 = M2C_FIELD(arg0, u8 *, 0x12);
        temp_a2_2 = temp_a2 * 0x69;
        temp_a0 = (M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a2 * 0x6900));
        if ((M2C_FIELD(temp_a0, u8 *, 0xAC) & 0x7F) < 0x5F) {
            temp_a1 = ((u64) ((s64) M2C_FIELD(temp_a0, u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
            if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) < (f32) (((temp_a1 * -0x30) / 183) + ((u32) (temp_a1 * -0x30) >> 0x1F)))) {
                var_v0 = func_00A13E50(var_s0_2, 5, temp_a2_2);
            } else {
                var_v0 = func_00A13E50(var_s0_2, 4, temp_a2_2);
            }
            var_s0_2 = var_v0;
        }
    }
    var_s0 = var_s0_2 << 8;
    temp_v1_2 = (0x63 - func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x80) & 0x7F, 0x28U)) + 0x63;
    var_v0_2 = temp_v1_2 >> 1;
    if (temp_v1_2 < 0) {
        var_v0_2 = (s32) (temp_v1_2 + 1) >> 1;
    }
    temp_s3_2 = ((var_v0_2 * arg1) / 198) + ((u32) (var_v0_2 * arg1) >> 0x1F);
    var_a0_2 = temp_s3_2 >> 1;
    if (temp_s3_2 < 0) {
        var_a0_2 = (s32) (temp_s3_2 + 1) >> 1;
    }
    temp_v0 = func_00BBB8C0(var_a0_2);
    var_v1 = temp_s3_2 >> 2;
    if (temp_s3_2 < 0) {
        var_v1 = (s32) (temp_s3_2 + 3) >> 2;
    }
    temp_s3_3 = var_v1 + temp_v0 + func_00BBB8C0(((arg1 * 2) / 10) + ((u32) (arg1 * 2) >> 0x1F));
    temp_v0_2 = (0x63 - func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x80) & 0x7F, 0x28U)) + 1;
    temp_s3 = temp_s3_3 + (((arg1 * temp_v0_2) / 100) + ((u32) (arg1 * temp_v0_2) >> 0x1F));
    if (M2C_FIELD(arg0, u8 *, 0x25) != 0) {
        var_s0 = ((var_s0_2 * 0x700) / 10) + ((u32) (var_s0_2 * 0x700) >> 0x1F);
    }
    temp_s1 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
    if (((func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x80) & 0x7F, 0x28U) * 0x1E) + 0x4000) < temp_s1) {
        temp_v1_3 = temp_s1 - 0x3C00;
        var_v0_3 = temp_v1_3 >> 8;
        if (temp_v1_3 < 0) {
            var_v0_3 = (s32) (temp_v1_3 + 0xFF) >> 8;
        }
        if ((*(f32 *)D_005926D8) < (f32) func_002AE670(var_v0_3 + 0x30)) {
            if (!((*(f32 *)D_005926D8) < (f32) func_002AE670(0x30)) && !(M2C_FIELD(Pes6Ball_Current, f32 *, 0x30) <= 3008.0f) && (func_00BBB780((s64) ((func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x80) & 0x7F, 0x28U) - 0x46) << 0x30) >> 0x30) != 0)) {
                var_s0 = ((var_s0 * 7) / 10) + ((u32) (var_s0 * 7) >> 0x1F);
            } else {
                temp_f20 = (*(f32 *)D_005926D8);
                if (!(temp_f20 < (f32) func_002AE670(0x28)) && (temp_s0 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50), ((((func_002AE630((s32) temp_f20) << 7) + 0x5000) < temp_s0) == 0))) {
                    var_s0 = func_00BBB8C0(0x80) + 0x1C0;
                } else {
                    var_s0 = func_00BBB8C0(0x30) + 0x110;
                }
            }
        }
    }
    if (var_s0 < 0x140) {
        var_s0 = 0x140;
    }
    return (s32) (temp_s3 << 8) / var_s0;
}
