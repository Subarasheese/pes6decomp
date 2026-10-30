/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern u8 func_002243B0(s32, s32);
extern void * func_00223C10(void);
extern u32 func_00B5B230(void);
void *func_00223E00(s32);                           /* extern */
s32 func_00224BC0(u8, s32);                         /* extern */
s32 func_00970870(s32);                             /* extern */
M2C_UNK func_00973470(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
s32 func_00994750();                                /* extern */
void *func_00994C60(u8, s32);                       /* extern */
s32 func_00B5B410(s32, u8 *);                       /* extern */
s32 func_00B5B670(s32, u8 *);                       /* extern */
s32 func_00B5DC70(s32, s32, M2C_UNK, s32, u8, s32 *); /* extern */

void func_00B5D310(s32 *arg0, s32 *arg1) {
    s32 *spA4;
    s32 spA8;
    u8 spAF;
    s32 temp_a0_2;
    s32 temp_a0_4;
    s32 temp_a0_6;
    s32 temp_a0_8;
    s32 temp_a0_9;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s7;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_4;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s4;
    s32 var_s5;
    u16 temp_v1;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_4;
    u32 temp_v0_6;
    u32 temp_v0_8;
    u32 var_s1_3;
    u64 temp_v1_2;
    u8 *temp_v0_7;
    u8 temp_a0_10;
    void *temp_a0;
    void *temp_a0_3;
    void *temp_a0_5;
    void *temp_a0_7;
    void *temp_s1;
    void *temp_s6;
    void *temp_s6_2;
    void *temp_s6_3;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_9;

    spA4 = arg1;
    temp_v0 = func_00B5B230();
    if (temp_v0 != 0) {
        temp_s0 = func_00994750();
        var_s5 = 0;
        var_s4 = 0;
        var_s3 = 0;
        do {
            temp_v0_2 = func_00B5B230();
            if (temp_v0_2 != 0) {
                temp_s1 = temp_v0_2 + ((var_s3 & 0xFF) * 4);
                temp_a0 = M2C_FIELD(temp_s1, void **, 0x2CC);
                if (temp_a0 != NULL) {
                    func_001D7D60(temp_a0, 0);
                }
                temp_a0_2 = M2C_FIELD(temp_s1, s32 *, 0x41C);
                if (temp_a0_2 != 0) {
                    func_00973470(temp_a0_2, 0);
                }
            }
            var_s3 += 1;
        } while (var_s3 < 0x2A);
        var_s3_2 = 0;
        var_s1 = 0;
        if ((s32) M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x62E) + temp_s0), u8 *, 0x29AC) > 0) {
loop_9:
            if (var_s3_2 < M2C_FIELD(temp_v0, s16 *, 0x630)) {
                temp_v0_3 = func_00B5B670(var_s1 & 0xFFFF, &spAF);
                if (temp_v0_3 != 0) {
                    var_s5 += func_00B5DC70(var_s3_2 & 0xFF, var_s1 & 0xFF, 0, temp_v0_3, spAF, &spA8);
                    var_s4 += spA8;
                    temp_v0_4 = func_00B5B230();
                    if (temp_v0_4 != 0) {
                        temp_s6 = temp_v0_4 + ((var_s3_2 & 0xFF) * 4);
                        temp_a0_3 = M2C_FIELD(temp_s6, void **, 0x2CC);
                        if (temp_a0_3 != NULL) {
                            func_001D7D60(temp_a0_3, 1);
                        }
                        temp_a0_4 = M2C_FIELD(temp_s6, s32 *, 0x41C);
                        if (temp_a0_4 != 0) {
                            func_00973470(temp_a0_4, 1);
                        }
                    }
                    var_s3_2 += 1;
                }
                var_s1 += 1;
                if (var_s1 >= (s32) M2C_FIELD((temp_s0 + M2C_FIELD(temp_v0, u8 *, 0x62E)), u8 *, 0x29AC)) {

                } else {
                    goto loop_9;
                }
            }
        }
        var_s1_2 = 0;
        if ((s32) M2C_FIELD(((M2C_FIELD(temp_v0, u8 *, 0x62E) & 0xFF) + temp_s0), u8 *, 0x61944) > 0) {
loop_20:
            if (var_s3_2 < M2C_FIELD(temp_v0, s16 *, 0x630)) {
                temp_v0_5 = func_00B5B410(var_s1_2 & 0xFFFF, &spAF);
                if (temp_v0_5 != 0) {
                    var_s5 += func_00B5DC70(var_s3_2 & 0xFF, var_s1_2 & 0xFF, 1, temp_v0_5, spAF, &spA8);
                    var_s4 += spA8;
                    temp_v0_6 = func_00B5B230();
                    if (temp_v0_6 != 0) {
                        temp_s6_2 = temp_v0_6 + ((var_s3_2 & 0xFF) * 4);
                        temp_a0_5 = M2C_FIELD(temp_s6_2, void **, 0x2CC);
                        if (temp_a0_5 != NULL) {
                            func_001D7D60(temp_a0_5, 1);
                        }
                        temp_a0_6 = M2C_FIELD(temp_s6_2, s32 *, 0x41C);
                        if (temp_a0_6 != 0) {
                            func_00973470(temp_a0_6, 1);
                        }
                    }
                    var_s3_2 += 1;
                }
                var_s1_2 += 1;
                if (var_s1_2 >= (s32) M2C_FIELD((temp_s0 + M2C_FIELD(temp_v0, u8 *, 0x62E)), u8 *, 0x61944)) {

                } else {
                    goto loop_20;
                }
            }
        }
        var_s0 = 0;
        var_s1_3 = temp_v0;
loop_31:
        if (var_s3_2 < M2C_FIELD(temp_v0, s16 *, 0x630)) {
            temp_s7 = func_00224BC0(M2C_FIELD(temp_v0, u8 *, 0x62E), var_s0 & 0xFF) & 0xFFFF;
            if ((temp_s7 != 0) && ((func_002243B0((s32) M2C_FIELD(temp_v0, u8 *, 0x62E), var_s0 & 0xFF) & 0xFF) != 0xFF) && (func_00970870(temp_s7) != 0)) {
                temp_v0_7 = func_00223C10();
                if ((temp_v0_7 != NULL) && ((*temp_v0_7 & 0xF) == 3)) {
                    var_s5 += func_00B5DC70(var_s3_2 & 0xFF, var_s0 & 0xFF, 1, var_s1_3 + 0x640, 0xFFU, &spA8);
                    var_s4 += spA8;
                    temp_v0_8 = func_00B5B230();
                    if (temp_v0_8 != 0) {
                        temp_s6_3 = temp_v0_8 + ((var_s3_2 & 0xFF) * 4);
                        temp_a0_7 = M2C_FIELD(temp_s6_3, void **, 0x2CC);
                        if (temp_a0_7 != NULL) {
                            func_001D7D60(temp_a0_7, 1);
                        }
                        temp_a0_8 = M2C_FIELD(temp_s6_3, s32 *, 0x41C);
                        if (temp_a0_8 != 0) {
                            func_00973470(temp_a0_8, 1);
                        }
                    }
                    var_s3_2 += 1;
                }
            }
            var_s0 += 1;
            var_s1_3 += 0x10;
            if (var_s0 < 0x20) {
                goto loop_31;
            }
        }
        var_s1_4 = 0;
        do {
            temp_s0_2 = func_00224BC0(M2C_FIELD(temp_v0, u8 *, 0x62E), var_s1_4 & 0xFF) & 0xFFFF;
            if ((temp_s0_2 != 0) && ((func_002243B0((s32) M2C_FIELD(temp_v0, u8 *, 0x62E), var_s1_4 & 0xFF) & 0xFF) != 0xFF) && (func_00970870(temp_s0_2) != 0)) {
                temp_v0_9 = func_00223C10();
                if (temp_v0_9 != NULL) {
                    temp_v0_10 = func_00223E00(temp_s0_2);
                    if ((temp_v0_10 != NULL) && ((s32) ((u64) ((s64) M2C_FIELD(temp_v0_9, u8 *, 1) << 0x38) >> 0x3A) <= 0)) {
                        temp_a0_9 = M2C_FIELD(temp_v0_9, u8 *, 0) & 0xF;
                        if ((temp_a0_9 != 5) && (temp_a0_9 != 6) && (temp_a0_9 != 7) && ((M2C_FIELD(temp_v0_10, u8 *, 6) & 0x3F) != 3)) {
                            var_s3_3 = 0;
loop_56:
                            temp_v0_11 = func_00994C60(M2C_FIELD(temp_v0, u8 *, 0x62E), var_s3_3);
                            if ((temp_v0_11 != NULL) && (temp_v1 = M2C_FIELD(temp_v0_11, u16 *, 4), (temp_v1 != 0)) && (temp_v1 == (temp_s0_2 & 0xFFFF)) && (temp_a0_10 = M2C_FIELD(temp_v0_11, u8 *, 0), ((temp_a0_10 & 1) == 0)) && (((u64) ((s64) temp_a0_10 << 0x39) >> 0x3A) == 6) && (temp_v1_2 = (u64) ((s64) (u16) M2C_FIELD(temp_v0_11, u8 *, 0) << 0x35) >> 0x3C, (temp_v1_2 != 4))) {
                                if (temp_v1_2 == 6) {
                                    goto block_64;
                                }
                            } else {
block_64:
                                var_s3_3 += 1;
                                if (var_s3_3 < 0x25) {
                                    goto loop_56;
                                }
                            }
                            if (var_s3_3 >= 0x25) {
                                var_s4 -= M2C_FIELD(temp_v0_9, u16 *, 2);
                            }
                        }
                    }
                }
            }
            var_s1_4 += 1;
        } while (var_s1_4 < 0x20);
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x20), 0xE, var_s5);
        if (arg0 != NULL) {
            *arg0 = var_s5;
        }
        if (spA4 != NULL) {
            *spA4 = var_s4;
        }
    }
}
