/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
extern void func_001F3CA0(void *);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_008BB690(s32, void *, void *, s32);    /* extern */
s32 func_008D90A0(u8);                              /* extern */
M2C_UNK func_008DA080(void *, void *, u8, s32 *, void *, M2C_UNK, M2C_UNK **); /* extern */
M2C_UNK func_008DC610(void *, M2C_UNK);             /* extern */
M2C_UNK func_008DC8A0();                            /* extern */
extern char D_008EDBA0[];
extern char D_008EDBBA[];

s32 func_008DCE30(void *arg0, u8 arg1) {
    u8 spAF;
    M2C_UNK *spB0;
    s32 spB4;
    s32 spB8;
    s32 spBC;
    M2C_UNK *spC0;
    M2C_UNK *spC4;
    s32 spC8;
    s32 spCC;
    M2C_UNK *var_v0_2;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_s0;
    s32 var_s3;
    s32 var_s5;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_3;
    s32 var_v1;
    u8 temp_s0;
    u8 temp_s0_2;
    u8 temp_s1;
    u8 temp_s2;
    u8 temp_v0;
    u8 temp_v1;
    void *temp_s2_2;
    void *temp_s3;
    void *var_s1;
    void *var_s2;
    void *var_s4;
    void *var_s7;
    void *var_v1_2;

    spAF = arg1;
    if (arg0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(arg0, u8 *, 0) == 0) {
        return 0;
    }
    func_008DC8A0();
    temp_v1 = M2C_FIELD((((s32) M2C_FIELD(arg0, u8 *, 1) % (s32) M2C_FIELD(arg0, u8 *, 2)) + arg0), u8 *, 0x19);
    if (temp_v1 != 0) {
        if (temp_v1 != 0xD) {
            var_v1 = 0;
        } else {
            goto block_8;
        }
    } else {
block_8:
        var_v1 = 1;
    }
    if ((var_v1 != 0) && (M2C_FIELD(arg0, u8 *, 0xE4) == 0)) {
        func_001F3D10(M2C_FIELD(arg0, s32 *, 0xF0), 1U);
        var_s6 = 0;
        var_s4 = arg0;
        do {
            var_a0 = 6;
            var_a1 = 0;
            var_v1_2 = var_s4;
loop_13:
            if ((M2C_FIELD(var_v1_2, f32 *, 0x24) == M2C_FIELD(var_v1_2, f32 *, 0x84)) && (M2C_FIELD(var_v1_2, f32 *, 0x28) == M2C_FIELD(var_v1_2, f32 *, 0x88))) {
                var_a0 -= 1;
            } else {
                M2C_FIELD(var_v1_2, f32 *, 0x24) = (f32) M2C_FIELD(var_v1_2, f32 *, 0x84);
                M2C_FIELD(var_v1_2, f32 *, 0x28) = (f32) M2C_FIELD(var_v1_2, f32 *, 0x88);
            }
            var_a1 += 1;
            var_v1_2 += 8;
            if (var_a1 < 6) {
                goto loop_13;
            }
            if (var_a0 != 0) {
                var_s0 = 0;
                var_s3 = 2;
                var_s7 = var_s4;
                do {
                    var_s5 = 0;
                    var_s2 = var_s4 + 0x24;
                    var_s1 = var_s7;
loop_21:
                    func_008BB690(M2C_FIELD(var_s1, s32 *, 0xF8), var_s2, (((s32) (var_s5 + 1) % 6) * 8) + var_s4 + 0x24, var_s3 & 0xFFFF);
                    var_s5 += 1;
                    var_s2 += 8;
                    var_s1 += 4;
                    if (var_s5 < 6) {
                        goto loop_21;
                    }
                    var_s0 += 1;
                    var_s3 += 4;
                    var_s7 += 0x18;
                } while (var_s0 < 2);
            }
            var_s6 += 1;
            var_s4 += 0x30;
        } while (var_s6 < 2);
        M2C_FIELD(arg0, u8 *, 0xE4) = 1U;
    } else if (!(var_v1 & 0xFF) && (M2C_FIELD(arg0, u8 *, 0xE4) == 1)) {
        func_001F3D10(M2C_FIELD(arg0, s32 *, 0xF0), 0U);
        M2C_FIELD(arg0, u8 *, 0xE4) = 0U;
    }
    temp_v1_2 = func_008D90A0(spAF) & 0x600;
    switch (temp_v1_2) {                            /* switch 1; irregular */
    case 0x200:                                     /* switch 1 */
        temp_v0 = M2C_FIELD(arg0, u8 *, 1);
        if (temp_v0 == 0) {
            M2C_FIELD(arg0, u8 *, 1) = (u8) (M2C_FIELD(arg0, u8 *, 2) - 1);
        } else {
            M2C_FIELD(arg0, u8 *, 1) = (u8) (temp_v0 - 1);
        }
block_43:
        func_001F3CA0(M2C_FIELD(arg0, void **, 0xEC));
        temp_s1 = M2C_FIELD(arg0, u8 *, 3);
        if (!(temp_s1 & 1)) {
            temp_s3 = M2C_FIELD(arg0, void **, 0xEC);
            temp_s2 = M2C_FIELD(arg0, u8 *, 4);
            temp_s0 = M2C_FIELD((((s32) M2C_FIELD(arg0, u8 *, 1) % (s32) M2C_FIELD(arg0, u8 *, 2)) + arg0), u8 *, 0x19);
            func_001F3CA0(temp_s3);
            switch (temp_s0) {                      /* switch 2; irregular */
            case 1:                                 /* switch 2 */
                if (!(temp_s1 & 4)) {
                    spB8 = 1;
                } else {
                    var_v0 = 2;
block_70:
                    spB8 = var_v0;
                }
                break;
            case 0:                                 /* switch 2 */
                spB8 = 0;
                break;
            default:                                /* switch 2 */
                var_v0 = 3;
                goto block_70;
            }
            spBC = 5;
            spB4 = 0;
            switch (temp_s0) {                      /* switch 3; irregular */
            case 0:                                 /* switch 3 */
                var_v0_2 = ((void *)D_008EDBA0);
                break;
            case 1:                                 /* switch 3 */
                var_v0_2 = ((void *)D_008EDBBA);
                break;
            default:                                /* switch 3 */
                var_v0_2 = ((void *)D_008EDBA0) + (temp_s0 * 0x1A);
                break;
            }
            spB0 = var_v0_2;
            func_008DA080(arg0, temp_s3, temp_s2, &spB8, arg0 + 0x160, 0x19, &spB0);
        } else {
            temp_s2_2 = M2C_FIELD(arg0, void **, 0xEC);
            temp_s0_2 = M2C_FIELD((((s32) M2C_FIELD(arg0, u8 *, 1) % (s32) M2C_FIELD(arg0, u8 *, 2)) + arg0), u8 *, 0x19);
            func_001F3CA0(temp_s2_2);
            if (temp_s0_2 == 0xD) {
                spC8 = 0;
                if (temp_s1 & 4) {
                    var_v0_3 = 2;
                } else {
                    var_v0_3 = 1;
                }
            } else {
                var_v0_3 = 5;
                spC8 = 4;
            }
            spCC = var_v0_3;
            if (temp_s0_2 != 0xD) {
                spC4 = NULL;
                spC0 = ((void *)D_008EDBA0) + (temp_s0_2 * 0x1A);
            } else {
                spC0 = ((void *)D_008EDBA0);
                spC4 = ((void *)D_008EDBBA);
            }
            func_008DA080(arg0, temp_s2_2, 0U, &spC8, arg0 + 0x160, 0x19, &spC0);
        }
        func_008DC610(arg0, 0);
        func_008DC610(arg0, 1);
        if ((s32) M2C_FIELD(arg0, u8 *, 2) >= 2) {
            func_0026E840(0x8400F803);
        }
        return 3;
    case 0x400:                                     /* switch 1 */
        M2C_FIELD(arg0, u8 *, 1) = (u8) ((s32) (M2C_FIELD(arg0, u8 *, 1) + 1) % (s32) M2C_FIELD(arg0, u8 *, 2));
        goto block_43;
    default:                                        /* switch 1 */
        return 0;
    }
}
