/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00223C10(void);
extern s32 func_002260F0(s32);
s32 func_00224D90(s32, u8);                         /* extern */
s32 func_0028F780(s32, u8);                         /* extern */
s32 func_00970870(s32);                             /* extern */

void func_00B1C9A0(s32 arg0) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 var_a0;
    s32 var_a1;
    s32 var_s3;
    s32 var_s4;
    s32 var_s6;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 temp_s1_2;
    u8 temp_s2;
    u8 var_s2;
    void *temp_s1;

    temp_v0 = func_002260F0(arg0);
    if (temp_v0 != 0) {
        var_s6 = 0;
        do {
            temp_s1 = temp_v0 + var_s6;
            temp_s2 = M2C_FIELD(temp_s1, u8 *, 0x4A6);
            temp_v0_2 = func_00223C10();
            if ((temp_v0_2 != NULL) && (((temp_s2 & 0xFF) >= 0x20) || !(func_00224D90(arg0, temp_s2) & 0xFFFF) || ((u32) ((*temp_v0_2 & 0xF) - 8) < 3U))) {
                temp_s1_2 = M2C_FIELD(temp_s1, u8 *, 0xD6);
                var_s3 = -1;
                var_s2 = 0xFF;
                if ((s32) temp_s1_2 < 0x29) {
                    var_s4 = 0;
                    do {
                        temp_s0 = func_00224D90(arg0, var_s4 & 0xFF) & 0xFFFF;
                        temp_v0_3 = func_00223C10();
                        if ((temp_v0_3 != NULL) && (temp_s0 & 0xFFFF)) {
                            temp_a0 = *temp_v0_3 & 0xF;
                            if ((temp_a0 != 8) && (temp_a0 != 9) && (temp_a0 != 0xA)) {
                                temp_v0_4 = func_002260F0(arg0);
                                if (temp_v0_4 == 0) {
                                    var_a0 = 0;
                                } else {
                                    var_a1 = 0;
loop_17:
                                    if ((var_s4 & 0xFF) == M2C_FIELD((temp_v0_4 + var_a1), u8 *, 0x4A6)) {
                                        var_a0 = 0;
                                    } else {
                                        var_a1 += 1;
                                        if (var_a1 >= 0xB) {
                                            var_a0 = 1;
                                        } else {
                                            goto loop_17;
                                        }
                                    }
                                }
                                if (var_a0 == 1) {
                                    temp_v0_5 = func_00970870(temp_s0);
                                    if (temp_v0_5 != 0) {
                                        temp_v0_6 = func_0028F780(temp_v0_5, temp_s1_2);
                                        if (var_s3 < temp_v0_6) {
                                            var_s3 = temp_v0_6;
                                            var_s2 = var_s4 & 0xFF;
                                        }
                                    }
                                }
                            }
                        }
                        var_s4 += 1;
                    } while (var_s4 < 0x20);
                    M2C_FIELD(temp_s1, u8 *, 0x4A6) = var_s2;
                }
            }
            var_s6 += 1;
        } while (var_s6 < 0xB);
    }
}
