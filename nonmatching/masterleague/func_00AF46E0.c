/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern u8 func_002243B0(s32, s32);
extern void * func_00228A80(void);
void *func_00224520(s32, s32);                      /* extern */
s32 func_00224BC0(s32, s32, s32, s32);              /* extern */
s32 func_0094B400(s32, s32);                        /* extern */
s32 func_00970770(s32, void *, void *, s16, M2C_UNK, void *, s32, s16); /* extern */
s32 func_00970870(s32);                             /* extern */
M2C_UNK func_00AF54A0(s32, s32, s32);               /* extern */
extern char D_00B8C040[];

void func_00AF46E0(void) {
    s16 *temp_a0;
    s16 *temp_a1;
    s16 *temp_a2_2;
    s16 *temp_a3;
    s16 *temp_a7;
    s16 *temp_v0_6;
    s16 *temp_v1_3;
    s16 temp_a3_3;
    s16 temp_a7_2;
    s32 temp_a2;
    s32 temp_a6;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_s4;
    s32 temp_v0_5;
    s32 temp_v1_2;
    s32 var_a3;
    s32 var_s3;
    s32 var_s6;
    u16 *var_a0;
    u32 var_a2;
    void *temp_a2_3;
    void *temp_a3_2;
    void *temp_a5;
    void *temp_s0;
    void *temp_s1;
    void *temp_s5;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v1;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        temp_s2 = func_00225820() & 0xFF;
        var_s3 = 0;
        do {
            temp_a2 = var_s3 & 0xFF;
            var_a3 = 0;
            temp_s1 = ((void *)D_00B8C040) + (temp_a2 * 0x17);
loop_3:
            temp_v1 = temp_s1 + (var_a3 & 0xFF);
            M2C_FIELD(temp_v1, s8 *, 0) = 0;
            M2C_FIELD(temp_v1, s8 *, 1) = 0;
            var_a3 = (var_a3 + 7) & 0xFF;
            M2C_FIELD(temp_v1, s8 *, 2) = 0;
            M2C_FIELD(temp_v1, s8 *, 3) = 0;
            M2C_FIELD(temp_v1, s8 *, 4) = 0;
            M2C_FIELD(temp_v1, s8 *, 5) = 0;
            M2C_FIELD(temp_v1, s8 *, 6) = 0;
            if (var_a3 < 0x10) {
                goto loop_3;
            }
            temp_s0 = ((void *)D_00B8C040) + (temp_a2 * 0x17);
            temp_v0_2 = temp_s0 + var_a3;
            M2C_FIELD(temp_v0_2, s8 *, 0) = 0;
            M2C_FIELD(temp_v0_2, s8 *, 1) = 0;
            temp_s4 = func_00224BC0(temp_s2, var_s3, temp_a2, var_a3) & 0xFFFF;
            if ((temp_s4 != 0) && !(func_0094B400(temp_s4, temp_s2) & 0xFF)) {
                temp_v0_3 = func_00224520(temp_s2, func_002243B0(temp_s2, var_s3) & 0xFF);
                if ((temp_v0_3 != NULL) && ((s32) M2C_FIELD(temp_v0_3, u8 *, 2) < 0x23)) {
                    temp_v0_4 = func_00228A80();
                    if (temp_v0_4 == NULL) {
                        var_a2 = 0xFFFF;
                    } else {
                        var_a2 = 0;
                        var_a0 = temp_v0_4 + 0xA68C;
loop_12:
                        if (*var_a0 == temp_s4) {
                            if (M2C_FIELD((temp_v0_4 + (var_a2 * 0x32)), u8 *, 0xA68E) != 0) {

                            } else {
                                var_a2 = 0xFFFF;
                            }
                        } else {
                            var_a2 += 1;
                            var_a0 += 0x32;
                            if (var_a2 >= 0x25U) {
                                var_a2 = 0xFFFF;
                            } else {
                                goto loop_12;
                            }
                        }
                    }
                    if (var_a2 != 0xFFFF) {
                        var_s6 = 0;
                        temp_s5 = temp_v0 + (var_a2 * 0x32);
                        do {
                            temp_v1_2 = var_s6 & 0xFF;
                            temp_v0_5 = temp_v1_2 * 2;
                            temp_a5 = temp_s1 + temp_v1_2;
                            temp_a7 = temp_s5 + 0xA690 + temp_v0_5;
                            temp_a3 = temp_s5 + 0xA692 + temp_v0_5;
                            temp_a2_2 = temp_s5 + 0xA694 + temp_v0_5;
                            temp_a1 = temp_s5 + 0xA696 + temp_v0_5;
                            temp_a0 = temp_s5 + 0xA698 + temp_v0_5;
                            temp_v1_3 = temp_s5 + 0xA69A + temp_v0_5;
                            temp_v0_6 = temp_s5 + 0xA69C + temp_v0_5;
                            *temp_a7 += 2;
                            var_s6 = (var_s6 + 7) & 0xFF;
                            M2C_FIELD(temp_a5, s8 *, 0) = 2;
                            temp_a6 = var_s6 < 0x10;
                            temp_a7_2 = *temp_a3 + 2;
                            *temp_a3 = temp_a7_2;
                            M2C_FIELD(temp_a5, s8 *, 1) = 2;
                            *temp_a2_2 += 2;
                            M2C_FIELD(temp_a5, s8 *, 2) = 2;
                            *temp_a1 += 2;
                            M2C_FIELD(temp_a5, s8 *, 3) = 2;
                            *temp_a0 += 2;
                            M2C_FIELD(temp_a5, s8 *, 4) = 2;
                            *temp_v1_3 += 2;
                            M2C_FIELD(temp_a5, s8 *, 5) = 2;
                            *temp_v0_6 += 2;
                            M2C_FIELD(temp_a5, s8 *, 6) = 2;
                        } while (temp_a6 != 0);
                        temp_a3_2 = temp_s5 + (var_s6 * 2);
                        temp_a2_3 = temp_s0 + var_s6;
                        temp_a3_3 = M2C_FIELD(temp_a3_2, s16 *, 0xA690) + 2;
                        M2C_FIELD(temp_a3_2, s16 *, 0xA690) = temp_a3_3;
                        M2C_FIELD(temp_a2_3, s8 *, 0) = 2;
                        M2C_FIELD(temp_a3_2, s16 *, 0xA692) = (s16) (M2C_FIELD(temp_a3_2, s16 *, 0xA692) + 2);
                        M2C_FIELD(temp_a2_3, s8 *, 1) = 2;
                        temp_s0_2 = func_00970770(temp_s4, temp_a3_2 + 0x10000, temp_a2_3, temp_a3_3, 2, temp_a5, temp_a6, temp_a7_2);
                        func_00AF54A0(temp_s0_2, func_00970870(temp_s4), temp_s4);
                    }
                }
            }
            var_s3 = (var_s3 + 1) & 0xFF;
        } while (var_s3 < 0x20);
    }
}
