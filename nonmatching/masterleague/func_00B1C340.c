/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
extern void * func_00223C10(void);
s32 func_00224D90(s32, u8);                         /* extern */
extern char D_00B8C440[];

void func_00B1C340(s32 arg0) {
    s32 temp_a2;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a4;
    s32 var_s1;
    s32 var_s3;
    s32 var_v1;
    u8 *temp_s5_2;
    u8 *var_a1;
    u8 temp_a2_2;
    u8 temp_a3;
    u8 temp_a3_2;
    u8 temp_a3_3;
    u8 temp_a3_4;
    u8 temp_a3_5;
    u8 temp_a3_6;
    u8 temp_a3_7;
    u8 temp_a3_8;
    u8 temp_s5;
    void *temp_a3_9;
    void *temp_v1_2;

    temp_v0 = func_002260F0(arg0);
    if (temp_v0 != 0) {
        var_a3 = 0;
        var_a2 = 0xB;
        var_a1 = ((void *)D_00B8C440) + ((arg0 & 0xFF) * 0xB);
loop_2:
        if (*var_a1 != 0xFF) {
            var_a3 += 1;
            var_a2 = (var_a2 + 1) & 0xFF;
            var_a1 += 1;
            if (var_a3 >= 0xB) {

            } else {
                goto loop_2;
            }
        }
        var_s3 = var_a2 & 0xFF;
        if (var_s3 < 0x20) {
            temp_s2 = var_s3;
            do {
                var_s1 = temp_s2;
                if (temp_s2 < 0x20) {
                    do {
                        temp_s5 = M2C_FIELD((temp_v0 + var_s1), u8 *, 0x4B1);
                        temp_s5_2 = func_00223C10();
                        temp_v1 = func_00224D90(arg0, temp_s5) & 0xFFFF;
                        if ((temp_s5_2 != NULL) && (temp_v1 & 0xFFFF) && ((u32) ((*temp_s5_2 & 0xF) - 8) < 3U)) {
                            var_a0 = var_s1;
                            if (var_s1 < 0x1F) {
                                temp_a2 = 0x1F - var_s1;
                                if (temp_a2 >= 9) {
                                    var_a4 = 0;
                                    var_a1_2 = 0;
                                    var_v1 = 0;
                                    if ((var_s1 < 0x20) && (var_s1 < 0x7FFFFFFF)) {
                                        var_v1 = 1;
                                    }
                                    if ((var_v1 != 0) && (var_s1 != 0x80000000)) {
                                        var_a1_2 = 1;
                                    }
                                    if (var_a1_2 != 0) {
                                        var_a3_2 = 1;
                                        if (!(-var_s1 & 0x80000000) && (temp_a2 & 0x80000000)) {
                                            var_a3_2 = 0;
                                        }
                                        if (var_a3_2 != 0) {
                                            var_a4 = 1;
                                        }
                                    }
                                    if (var_a4 != 0) {
                                        do {
                                            temp_v1_2 = temp_v0 + var_a0;
                                            temp_a3 = M2C_FIELD(temp_v1_2, u8 *, 0x4B1);
                                            var_a0 += 8;
                                            M2C_FIELD(temp_v1_2, u8 *, 0x4B1) = (u8) M2C_FIELD(temp_v1_2, u8 *, 0x4B2);
                                            M2C_FIELD(temp_v1_2, u8 *, 0x4B2) = temp_a3;
                                            temp_a3_2 = M2C_FIELD(temp_v1_2, u8 *, 0x4B2);
                                            M2C_FIELD(temp_v1_2, u8 *, 0x4B2) = (u8) M2C_FIELD(temp_v1_2, u8 *, 0x4B3);
                                            M2C_FIELD(temp_v1_2, u8 *, 0x4B3) = temp_a3_2;
                                            temp_a3_3 = M2C_FIELD(temp_v1_2, u8 *, 0x4B3);
                                            M2C_FIELD(temp_v1_2, u8 *, 0x4B3) = (u8) M2C_FIELD(temp_v1_2, u8 *, 0x4B4);
                                            M2C_FIELD(temp_v1_2, u8 *, 0x4B4) = temp_a3_3;
                                            temp_a3_4 = M2C_FIELD(temp_v1_2, u8 *, 0x4B4);
                                            M2C_FIELD(temp_v1_2, u8 *, 0x4B4) = (u8) M2C_FIELD(temp_v1_2, u8 *, 0x4B5);
                                            M2C_FIELD(temp_v1_2, u8 *, 0x4B5) = temp_a3_4;
                                            temp_a3_5 = M2C_FIELD(temp_v1_2, u8 *, 0x4B5);
                                            M2C_FIELD(temp_v1_2, u8 *, 0x4B5) = (u8) M2C_FIELD(temp_v1_2, u8 *, 0x4B6);
                                            M2C_FIELD(temp_v1_2, u8 *, 0x4B6) = temp_a3_5;
                                            temp_a3_6 = M2C_FIELD(temp_v1_2, u8 *, 0x4B6);
                                            M2C_FIELD(temp_v1_2, u8 *, 0x4B6) = (u8) M2C_FIELD(temp_v1_2, u8 *, 0x4B7);
                                            M2C_FIELD(temp_v1_2, u8 *, 0x4B7) = temp_a3_6;
                                            temp_a3_7 = M2C_FIELD(temp_v1_2, u8 *, 0x4B7);
                                            M2C_FIELD(temp_v1_2, u8 *, 0x4B7) = (u8) M2C_FIELD(temp_v1_2, u8 *, 0x4B8);
                                            M2C_FIELD(temp_v1_2, u8 *, 0x4B8) = temp_a3_7;
                                            temp_a3_8 = M2C_FIELD(temp_v1_2, u8 *, 0x4B8);
                                            M2C_FIELD(temp_v1_2, u8 *, 0x4B8) = (u8) M2C_FIELD(temp_v1_2, u8 *, 0x4B9);
                                            M2C_FIELD(temp_v1_2, u8 *, 0x4B9) = temp_a3_8;
                                        } while (var_a0 < 0x17);
                                    }
                                }
                                if (var_a0 < 0x1F) {
                                    do {
                                        temp_a3_9 = temp_v0 + var_a0;
                                        temp_a2_2 = M2C_FIELD(temp_a3_9, u8 *, 0x4B1);
                                        var_a0 += 1;
                                        M2C_FIELD(temp_a3_9, u8 *, 0x4B1) = (u8) M2C_FIELD(temp_a3_9, u8 *, 0x4B2);
                                        M2C_FIELD(temp_a3_9, u8 *, 0x4B2) = temp_a2_2;
                                    } while (var_a0 < 0x1F);
                                }
                            }
                        }
                        var_s1 += 1;
                    } while (var_s1 < 0x20);
                }
                var_s3 += 1;
            } while (var_s3 < 0x20);
        }
    }
}
