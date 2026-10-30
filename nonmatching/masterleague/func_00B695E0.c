/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern void * func_00228A80(void);
s32 func_00224BC0(u8, s32);                         /* extern */
s32 func_00970870(s16);                             /* extern */
s16 func_00AF52B0(s32, s32);                        /* extern */
s32 func_00AF5400(s16);                             /* extern */
M2C_UNK func_00B69370(u8, s32, M2C_UNK);            /* extern */
s32 func_00B694C0(s32);                             /* extern */
extern void *D_003EAEE8;

void func_00B695E0(void) {
    u8 spA0;
    s16 *var_s3;
    s16 temp_s0;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_a0;
    s32 var_s0;
    s32 var_s5;
    s32 var_s6;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_s2;
    void *temp_v0;
    void *temp_v0_4;
    void *temp_v0_7;
    void *var_s4;
    void *var_v1;

    temp_s2 = D_003EAEE8;
    if (temp_s2 != NULL) {
        temp_v0 = func_00228A80();
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_s2, s8 *, 4) = 0;
            spA0 = func_00225820();
            var_a0 = 0;
            var_v1 = temp_s2;
            do {
                M2C_FIELD(var_v1, s16 *, 0xC) = 0;
                var_a0 += 8;
                M2C_FIELD(var_v1, s16 *, 0x1A4) = 0;
                M2C_FIELD(var_v1, s16 *, 0x33C) = 0;
                M2C_FIELD(var_v1, s16 *, 0x4D4) = 0;
                M2C_FIELD(var_v1, s16 *, 0x66C) = 0;
                M2C_FIELD(var_v1, s16 *, 0x804) = 0;
                M2C_FIELD(var_v1, s16 *, 0x99C) = 0;
                M2C_FIELD(var_v1, s16 *, 0xB34) = 0;
                var_v1 += 0xCC0;
            } while (var_a0 < 0x20);
            M2C_FIELD(temp_s2, u8 *, 0x330C) = 0U;
            var_s6 = 0;
loop_5:
            if (var_s6 < 0x20) {
                temp_s0 = func_00224BC0(spA0, var_s6 & 0xFF) & 0xFFFF;
                if ((temp_s0 != 0) && (temp_v0_2 = func_00970870(temp_s0), (temp_v0_2 != 0))) {
                    temp_v0_3 = func_00AF5400(temp_s0);
                    if (temp_v0_3 != 0xFFFF) {
                        var_s5 = 0;
                        var_s3 = temp_v0 + (temp_v0_3 * 0x32) + 0xA690;
                        temp_v0_4 = temp_s2 + (M2C_FIELD(temp_s2, u8 *, 0x330C) * 0x198);
                        temp_s1 = temp_v0_4 + 0xC;
                        M2C_FIELD(temp_v0_4, s16 *, 0xC) = temp_s0;
                        var_s4 = temp_s1;
                        do {
                            M2C_FIELD(var_s4, s16 *, 4) = 0;
                            temp_v0_5 = *var_s3;
                            temp_s0_2 = var_s4 + 4;
                            M2C_FIELD(var_s4, s16 *, 6) = temp_v0_5;
                            M2C_FIELD(var_s4, s16 *, 8) = temp_v0_5;
                            temp_v0_6 = func_00AF52B0(temp_v0_2, var_s5 & 0xFF);
                            M2C_FIELD(temp_s0_2, s16 *, 6) = temp_v0_6;
                            var_s5 += 1;
                            M2C_FIELD(temp_s0_2, s16 *, 8) = temp_v0_6;
                            var_s4 += 0x10;
                            M2C_FIELD(temp_s0_2, s32 *, 0xC) = 1;
                            var_s3 += 2;
                        } while (var_s5 < 0x17);
                        M2C_FIELD(temp_s1, s32 *, 0x178) = 0;
                        M2C_FIELD(temp_s1, s32 *, 0x17C) = 0;
                        M2C_FIELD(temp_s1, s32 *, 0x180) = 0;
                        M2C_FIELD(temp_s1, s32 *, 0x184) = 0;
                        M2C_FIELD(temp_s1, s32 *, 0x174) = 0;
                        M2C_FIELD(temp_s1, s32 *, 0x188) = 0;
                        M2C_FIELD(temp_s1, s32 *, 0x18C) = 0;
                        M2C_FIELD(temp_s1, s32 *, 0x190) = 0;
                        M2C_FIELD(temp_s2, u8 *, 0x330C) = (u8) (M2C_FIELD(temp_s2, u8 *, 0x330C) + 1);
                        goto block_12;
                    }
                } else {
block_12:
                    var_s6 += 1;
                    if (var_s6 >= 0x20) {
                        goto block_13;
                    }
                    goto loop_5;
                }
            } else {
block_13:
                M2C_FIELD(temp_s2, u8 *, 0x330D) = 0U;
                M2C_FIELD(temp_s2, s32 *, 0x3310) = 0;
                var_s0 = 0;
                M2C_FIELD(temp_s2, s32 *, 0x3314) = 0;
                do {
                    temp_v1 = func_00B694C0(var_s0) & 0xFF;
                    if (temp_v1 < 0x17) {
                        temp_v0_7 = temp_s2 + (temp_v1 * 0x24);
                        M2C_FIELD(temp_v0_7, s32 *, 0x3318) = 0;
                        M2C_FIELD(temp_v0_7, s32 *, 0x331C) = 0;
                        M2C_FIELD(temp_v0_7, s32 *, 0x3320) = 0;
                        M2C_FIELD(temp_v0_7, s32 *, 0x3324) = 0;
                        M2C_FIELD(temp_v0_7, s32 *, 0x3328) = 0;
                        func_00B69370(M2C_FIELD(temp_s2, u8 *, 0x330D), var_s0, 1);
                    }
                    var_s0 += 1;
                } while (var_s0 < 0x17);
                M2C_FIELD(temp_s2, s8 *, 0x3654) = 0;
                M2C_FIELD(temp_s2, s16 *, 0x3656) = 0;
                M2C_FIELD(temp_s2, s32 *, 0x3658) = 0;
                M2C_FIELD(temp_s2, s16 *, 0x365C) = 0;
                M2C_FIELD(temp_s2, s16 *, 0x365E) = 0;
            }
        }
    }
}
