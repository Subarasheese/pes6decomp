/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009A84E0(void);
M2C_UNK func_00212E00(s32, s32);                    /* extern */
M2C_UNK func_009A3C80();                            /* extern */
s32 func_009A48B0(s32, s32);                        /* extern */
M2C_UNK func_009A4DB0(M2C_UNK);                     /* extern */
void *func_009A6000(s32, s32);                      /* extern */
s32 func_009A63F0(s32, s32);                        /* extern */
s32 func_009A79E0(s32, s32);                        /* extern */

void func_009A4650(s32 arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s1;
    s32 temp_s6;
    s32 temp_v0_6;
    s32 var_s0;
    s32 var_s4;
    s32 var_s4_2;
    u32 temp_v0;
    u32 temp_v0_3;
    u32 temp_v0_5;
    u32 temp_v0_7;
    u32 temp_v0_8;
    void *temp_v0_2;
    void *temp_v0_4;
    void *var_s3;

    temp_v0 = func_009A84E0();
    if ((temp_v0 != 0) && (M2C_FIELD(temp_v0, s32 *, 4) == 0)) {
        var_s4 = 0;
loop_3:
        temp_v0_2 = func_009A6000(arg0, var_s4);
        if (M2C_FIELD(temp_v0_2, s32 *, 4) >= 0x15) {
            var_s4 += 1;
            if (var_s4 < 5) {
                goto loop_3;
            }
        }
        if (var_s4 != 5) {
            M2C_FIELD(temp_v0, s32 *, 0xC) = (s32) M2C_FIELD(temp_v0_2, s32 *, 4);
            func_009A4DB0(1);
            M2C_FIELD(M2C_FIELD(temp_v0, void **, 8), s32 *, 0x14) = (s32) M2C_FIELD(temp_v0_2, u8 *, 0);
            temp_s0 = M2C_FIELD(M2C_FIELD(temp_v0, void **, 8), s32 *, 0x14);
            temp_v0_3 = func_009A84E0();
            if (temp_v0_3 != 0) {
                func_00212E00(M2C_FIELD(M2C_FIELD(temp_v0_3, void **, 8), s32 *, 8), temp_s0);
            }
            var_s4_2 = var_s4 + 1;
            if (var_s4_2 < 5) {
                var_s3 = temp_v0 + (var_s4_2 * 4);
                do {
                    temp_v0_4 = func_009A6000(arg0, var_s4_2);
                    if (M2C_FIELD(temp_v0_4, s32 *, 4) < 0x15) {
                        M2C_FIELD(var_s3, s32 *, 0xC) = (s32) M2C_FIELD(temp_v0, s32 *, 0xC);
                        temp_s6 = M2C_FIELD(M2C_FIELD(temp_v0, void **, 8), s32 *, 0x14);
                        temp_v0_5 = func_009A84E0();
                        if (temp_v0_5 != 0) {
                            temp_v0_6 = func_009A48B0(M2C_FIELD(temp_v0_5, s32 *, 0xC), temp_s6);
                            if (temp_v0_6 != 0) {
                                M2C_FIELD(temp_v0_5, s32 *, 8) = func_009A79E0(M2C_FIELD(temp_v0_5, s32 *, 8), temp_v0_6);
                                M2C_FIELD(temp_v0_5, u8 *, 0) = (u8) (M2C_FIELD(temp_v0_5, u8 *, 0) + 1);
                            }
                        }
                        M2C_FIELD(temp_v0, s32 *, 0xC) = (s32) M2C_FIELD(temp_v0_4, s32 *, 4);
                        M2C_FIELD(M2C_FIELD(temp_v0, void **, 8), s32 *, 0x14) = (s32) M2C_FIELD(temp_v0_4, u8 *, 0);
                        temp_s0_2 = M2C_FIELD(M2C_FIELD(temp_v0, void **, 8), s32 *, 0x14);
                        temp_v0_7 = func_009A84E0();
                        if (temp_v0_7 != 0) {
                            func_00212E00(M2C_FIELD(M2C_FIELD(temp_v0_7, void **, 8), s32 *, 8), temp_s0_2);
                        }
                    }
                    var_s4_2 += 1;
                    var_s3 += 4;
                } while (var_s4_2 < 5);
            }
            if (func_009A63F0(M2C_FIELD(temp_v0, s32 *, 0xC), M2C_FIELD(M2C_FIELD(temp_v0, void **, 8), s32 *, 0x14)) == 0) {
                var_s0 = 0;
                if (M2C_FIELD(M2C_FIELD(temp_v0, void **, 8), s32 *, 0x10) > 0) {
loop_22:
                    temp_s1 = var_s0 & 0xFF;
                    if (func_009A63F0(M2C_FIELD(temp_v0, s32 *, 0xC), temp_s1) != 1) {
                        var_s0 = (var_s0 + 1) & 0xFF;
                        if (var_s0 < M2C_FIELD(M2C_FIELD(temp_v0, void **, 8), s32 *, 0x10)) {
                            goto loop_22;
                        }
                    } else {
                        M2C_FIELD(M2C_FIELD(temp_v0, void **, 8), s32 *, 0x14) = temp_s1;
                        temp_s0_3 = M2C_FIELD(M2C_FIELD(temp_v0, void **, 8), s32 *, 0x14);
                        temp_v0_8 = func_009A84E0();
                        if (temp_v0_8 != 0) {
                            func_00212E00(M2C_FIELD(M2C_FIELD(temp_v0_8, void **, 8), s32 *, 8), temp_s0_3);
                        }
                    }
                }
            }
            func_009A3C80();
        } else {
            func_009A4DB0(0);
        }
    }
}
