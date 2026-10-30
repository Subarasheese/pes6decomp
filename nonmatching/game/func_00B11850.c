/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern f32 func_00AB4270(void *);
extern u32 func_00208310(s32);
extern s32 func_009B30B0(s32, s32);
extern s32 func_00AB3B70(void *, s32, s32);
extern s32 func_009F42B0(void *, s32);
extern s32 func_009F4240(void *, s32);
extern f32 func_00AB3C60(void *, s32);
extern s32 func_009B32D0(s32, s32, s32);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, s32, s32);            /* extern */
s32 func_0099DFF0(void *);                          /* extern */
M2C_UNK func_009B3500(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00A9D570(void *);                      /* extern */
M2C_UNK func_00AADED0(void *, u16, M2C_UNK, s32);   /* extern */
M2C_UNK func_00AF8180(void *, u16);                 /* extern */
s32 func_00B0B6B0(void *, s32, u16, s32, s8, s32, s32, M2C_UNK, f32, s64); /* extern */
extern void *D_003E74CC;
extern s32 Pes6Ball_Current;
extern char D_00591E70[];
extern char D_00591E7C[];

s32 func_00B11850(void *arg0, s32 arg1, s32 arg2, s32 arg3, s8 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0, s32 arg_sp8) {
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 temp_f22;
    f32 temp_f22_2;
    s16 var_v0_7;
    s32 temp_a0;
    s32 temp_s2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v1;
    s32 var_v1_2;
    s8 var_s1;
    u16 temp_v1;
    u16 var_s2;

    var_s1 = arg4;
    temp_f20 = func_00AB4270(arg0);
    if ((arg1 & 0xFFFF) == 0x343) {
        if ((*(s32 *)D_00591E7C) != 0) {
            if (arg_sp8 == 0) {
                if ((func_009B30B0((M2C_FIELD(arg0, u16 *, 0x26) + (((var_s1 != 0) ? -1 : 1) * 0x3000)) & 0xFFFF, arg3) & 0xFFFF) >= 0x29) {
                    if ((func_009B30B0(arg2, (s32) M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) >= 0x19) {
                        var_s3 = 0x354;
                        temp_s2 = ((s32) (M2C_FIELD(func_00208310(0x354), u16 *, 8) * 0x3FFC) / (s32) M2C_FIELD(D_003E74CC, s32 *, 0x3D28)) & 0xFFFF;
                        var_v0 = (func_009B32D0(func_0099DFF0(arg0), (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x800) & 0xFFFF) - (((temp_s2 & 0xFFFF) * ((var_s1 != 0) ? -1 : 1)) & 0xFFFF);
                        goto block_36;
                    }
                    var_s2 = M2C_FIELD(arg0, u16 *, 0x26);
                    var_s3 = 0x353;
                } else {
                    if (func_009F42B0(arg0, (s32) M2C_FIELD(((arg5 * 4) + Pes6Ball_Current), f32 *, 0x7FC)) >= -0xF0) {
                        var_s3 = 0x34C;
                        var_s1 ^= 1;
                        var_v0 = func_009B32D0(arg3, (s32) M2C_FIELD(arg0, u16 *, 0x26), ((s32) (M2C_FIELD(func_00208310(0x34C), u16 *, 8) * 0x7FF8) / (s32) M2C_FIELD(D_003E74CC, s32 *, 0x3D08)) & 0xFFFF);
                    } else {
                        var_s3 = 0x35E;
                        var_v0 = M2C_FIELD(arg0, u16 *, 0x26) + (((var_s1 != 0) ? -1 : 1) << 0xB);
                    }
                    goto block_36;
                }
            } else {
                goto block_5;
            }
        } else {
block_5:
            var_s2 = M2C_FIELD(arg0, u16 *, 0x26);
            var_s3 = 0x35A;
        }
    } else if (((*(s32 *)D_00591E7C) != 0) && (arg_sp8 == 0)) {
        if ((func_009B30B0(arg2, (s32) M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) >= 0x19) {
            temp_f22 = M2C_FIELD(((arg5 * 4) + Pes6Ball_Current), f32 *, 0x7FC);
            func_009B3500(arg0, 0x358, 0);
            temp_f21 = (*(f32 *)D_00591E70);
            func_009B3500(arg0, 0x356, 0);
            var_v1 = (s32) (temp_f22 - (*(f32 *)D_00591E70));
            if (var_v1 <= 0) {
                var_v1 = -var_v1;
            }
            var_v0_2 = (s32) (temp_f22 - temp_f21);
            if (var_v0_2 <= 0) {
                var_v0_2 = -var_v0_2;
            }
            if (var_v1 < var_v0_2) {
                var_v0_3 = 0x356;
            } else {
                var_v0_3 = 0x358;
            }
            var_s3 = var_v0_3 & 0xFFFF;
            var_v0 = M2C_FIELD(arg0, u16 *, 0x26) - (((var_s1 != 0) ? -1 : 1) * 0x2800);
block_36:
            var_s2 = var_v0 & 0xFFFF;
        } else {
            if (func_009F4240(arg0, (s32) M2C_FIELD(((arg5 * 4) + Pes6Ball_Current), f32 *, 0x7FC)) >= -0x6F) {
                var_s3 = 0x355;
            } else {
                var_s3 = 0x357;
            }
            var_s2 = M2C_FIELD(arg0, u16 *, 0x26);
        }
    } else {
        temp_f22_2 = M2C_FIELD(((arg5 * 4) + Pes6Ball_Current), f32 *, 0x7FC);
        func_009B3500(arg0, 0x35C, 0);
        temp_f21_2 = (*(f32 *)D_00591E70);
        func_009B3500(arg0, 0x35B, 0);
        var_v1_2 = (s32) (temp_f22_2 - (*(f32 *)D_00591E70));
        if (var_v1_2 <= 0) {
            var_v1_2 = -var_v1_2;
        }
        var_v0_4 = (s32) (temp_f22_2 - temp_f21_2);
        if (var_v0_4 <= 0) {
            var_v0_4 = -var_v0_4;
        }
        if (var_v1_2 < var_v0_4) {
            var_v0_5 = 0x35B;
        } else {
            var_v0_5 = 0x35C;
        }
        var_s2 = M2C_FIELD(arg0, u16 *, 0x26);
        var_s3 = var_v0_5 & 0xFFFF;
    }
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (func_00B0B6B0(arg0, var_s3, var_s2, ((temp_a0 * 9) / 10) + ((u32) (temp_a0 * 9) >> 0x1F), var_s1, arg7, arg5, 0, temp_f20, (s64) arg_sp0) != 0) {
        func_00AF8180(arg0, var_s2);
        func_00209A00(M2C_FIELD(arg0, void **, 4), var_s3, arg7 & 0xFFFF);
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x28) = func_00AB3C60(arg0, arg5);
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = var_s1;
        M2C_FIELD(arg0, u16 *, 0x2C) = var_s2;
        M2C_FIELD(arg0, s16 *, 0x38) = func_00AB3B70(arg0, (s32) var_s2, arg5);
        func_00AADED0(arg0, var_s2, 0, arg5);
        func_00A9D570(arg0);
        func_00207390(M2C_FIELD(arg0, void **, 4), 3);
        M2C_FIELD(arg0, s8 *, 0x66) = 3;
        M2C_FIELD(arg0, s8 *, 0x16) = 0xE;
        var_v0_6 = arg6 - M2C_FIELD(arg0, s32 *, 0x1C);
        if (var_v0_6 <= 0) {
            var_v0_6 = -var_v0_6;
        }
        M2C_FIELD(arg0, s32 *, 0x90) = var_v0_6;
        temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
        switch (temp_v1) {                          /* irregular */
        case 0x34C:
            var_v0_7 = 0x12;
            break;
        default:
            var_v0_7 = 0x11;
            break;
        case 0x356:
        case 0x358:
        case 0x354:
        case 0x353:
        case 0x35E:
        case 0x355:
        case 0x357:
            var_v0_7 = 8;
            break;
        }
        M2C_FIELD(arg0, s16 *, 0x18) = var_v0_7;
        return 1;
    }
    return 0;
}
