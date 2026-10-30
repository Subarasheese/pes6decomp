/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF4F0(void *, s8);
extern u16 func_00CEAD10(void);
extern s32 func_002630F0(void);
s32 func_008256C0();                                /* extern */
s32 func_00CE7830();                                /* extern */
s32 func_00CE7A40(s32 *, M2C_UNK32);                /* extern */
f32 func_00CEA6A0(M2C_UNK *);                       /* extern */
extern char D_00CF9BE0[];
extern char D_00CF9BE4[];
extern char D_00CF9BE8[];
extern char D_00CF9BEC[];
extern char D_00CF9BF0[];
extern char D_00CF9BF4[];
extern char D_00CF9BF8[];
extern char D_00CF9BFC[];
extern char D_00CFF3A0[];
extern void **D_00CFF3EC;
extern char D_00CFF400[];
extern char D_00CFF420[];
extern char D_00CFF4C4[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68, 0x6c, 0x70, 0x74, 0x78, 0x7c, 0x80, 0x84, 0x88, 0x8c, 0x90, 0x94, 0x98, 0x9c, 0xa0, 0xa4], gap at: 0x8. */
void func_00CE67B0(void) {
    M2C_UNK32 *spB0;
    M2C_UNK32 spC0;
    f32 spC4;
    f32 spC8;
    f32 spCC;
    M2C_UNK32 spD0;
    f32 spD4;
    f32 spD8;
    f32 spDC;
    s32 spEC;
    M2C_UNK32 *var_s6;
    M2C_UNK32 *var_s6_2;
    M2C_UNK32 *var_s6_3;
    M2C_UNK32 *var_v0;
    f32 temp_f20;
    s16 *var_s2;
    s16 *var_s3_2;
    s16 *var_s3_3;
    s32 var_fp;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    void *var_s7;
    void *var_s7_2;
    void *var_s7_3;

    func_00CEAD10();
    spEC = 0;
    spC0 = (*(M2C_UNK32 *)D_00CF9BE0);
    spC4 = (*(f32 *)D_00CF9BE4);
    spC8 = (*(f32 *)D_00CF9BE8);
    spCC = (*(f32 *)D_00CF9BEC);
    spD0 = (*(M2C_UNK32 *)D_00CF9BF0);
    spD4 = (*(f32 *)D_00CF9BF4);
    spD8 = (*(f32 *)D_00CF9BF8);
    spDC = (*(f32 *)D_00CF9BFC);
    if (func_002630F0() == 0) {
        var_v0 = &spD0;
    } else if ((func_008256C0() != 7) && (func_008256C0() != 5)) {
        var_v0 = &spD0;
    } else {
        var_v0 = &spC0;
    }
    spB0 = var_v0;
    temp_f20 = func_00CEA6A0(((void *)D_00CFF420));
    var_fp = (s32) (temp_f20 * (f32) (func_00CE7830() - 0xE));
    func_00CE7A40(&spEC, *var_v0);
    if (spEC > 0) {
        (*(s32 *)D_00CFF4C4) = 0;
        func_001DF4F0(*M2C_FIELD(((void *)D_00CFF400), void ***, 0), 0);
        func_001DF4F0(*D_00CFF3EC, 0);
    }
    var_s5 = 1;
    var_s4 = 1;
    if (var_fp <= 0) {

    } else {
        var_fp -= 1;
    }
    if (var_fp > 1) {
        var_s2 = ((void *)D_00CFF3A0) + (1 * 2);
        var_s7 = ((void *)D_00CFF3A0) + (1 * 4);
        var_s3 = 1 * 4;
        var_s6 = &spB0[1];
        do {
            func_001DF4F0(*(M2C_FIELD(((void *)D_00CFF400), void ***, 0) + var_s3), 0);
            func_001DF4F0(*(D_00CFF3EC + var_s3), 0);
            if ((*var_s2 == 0x24) && (var_s4 < 4)) {
                if (func_00CE7A40(&spEC, *var_s6) > 0) {
                    M2C_FIELD(var_s7, s32 *, 0x124) = var_s5;
                }
                var_s6 += 4;
                var_s7 += 4;
                var_s4 += 1;
            }
            func_001DF4F0(*(M2C_FIELD(((void *)D_00CFF400), void ***, 0) + var_s3), 0);
            func_001DF4F0(*(D_00CFF3EC + var_s3), 0);
            var_s5 += 1;
            var_s3 += 4;
            var_s2 += 2;
        } while (var_s5 < var_fp);
    }
    var_s3_2 = ((void *)D_00CFF3A0) + (var_s5 * 2);
    var_s7_2 = ((void *)D_00CFF3A0) + (var_s4 * 4);
    var_s2_2 = var_s5 * 4;
    var_s6_2 = &spB0[var_s4];
loop_30:
    if (var_s5 < (var_fp + 0x11)) {
        if (var_s5 < M2C_FIELD(((void *)D_00CFF400), s32 *, 4)) {
            if (*var_s3_2 == 0x24) {
                if (var_s4 < 4) {
                    if (func_00CE7A40(&spEC, *var_s6_2) > 0) {
                        func_001DF4F0(*(M2C_FIELD(((void *)D_00CFF400), void ***, 0) + var_s2_2), 0);
                        func_001DF4F0(*(D_00CFF3EC + var_s2_2), 0);
                        M2C_FIELD(var_s7_2, s32 *, 0x124) = var_s5;
                    }
                    var_s6_2 += 4;
                    var_s7_2 += 4;
                    var_s4 += 1;
                } else {
                    func_001DF4F0(*(M2C_FIELD(((void *)D_00CFF400), void ***, 0) + var_s2_2), 0);
                    func_001DF4F0(*(D_00CFF3EC + var_s2_2), 0);
                }
            } else {
                func_001DF4F0(*(M2C_FIELD(((void *)D_00CFF400), void ***, 0) + var_s2_2), 1);
                func_001DF4F0(*(D_00CFF3EC + var_s2_2), 1);
            }
            var_s3_2 += 2;
            var_s2_2 += 4;
            var_s5 += 1;
            goto loop_30;
        }
    }
    if (var_s5 < M2C_FIELD(((void *)D_00CFF400), s32 *, 4)) {
        var_s3_3 = ((void *)D_00CFF3A0) + (var_s5 * 2);
        var_s7_3 = ((void *)D_00CFF3A0) + (var_s4 * 4);
        var_s2_3 = var_s5 * 4;
        var_s6_3 = &spB0[var_s4];
        do {
            if (*var_s3_3 == 0x24) {
                if (var_s4 < 4) {
                    if (func_00CE7A40(&spEC, *var_s6_3) > 0) {
                        func_001DF4F0(*(M2C_FIELD(((void *)D_00CFF400), void ***, 0) + var_s2_3), 0);
                        func_001DF4F0(*(D_00CFF3EC + var_s2_3), 0);
                        M2C_FIELD(var_s7_3, s32 *, 0x124) = var_s5;
                    }
                    var_s6_3 += 4;
                    var_s7_3 += 4;
                    var_s4 += 1;
                } else {
                    func_001DF4F0(*(M2C_FIELD(((void *)D_00CFF400), void ***, 0) + var_s2_3), 0);
                    func_001DF4F0(*(D_00CFF3EC + var_s2_3), 0);
                }
            }
            func_001DF4F0(*(M2C_FIELD(((void *)D_00CFF400), void ***, 0) + var_s2_3), 0);
            func_001DF4F0(*(D_00CFF3EC + var_s2_3), 0);
            var_s5 += 1;
            var_s3_3 += 2;
            var_s2_3 += 4;
        } while (var_s5 < M2C_FIELD(((void *)D_00CFF400), s32 *, 4));
    }
}
