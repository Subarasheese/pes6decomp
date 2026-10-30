/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s8 func_00C90160(s8);                               /* extern */
extern u8 D_003EA89C;
extern char D_00591A90[];
extern char Pes6MatchSquads[];
extern char D_00CCD88D[];

void func_00C8D120(void *arg0, s8 arg1) {
    s32 temp_a7;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_s3_3;
    s32 temp_t0;
    s32 temp_t8;
    s32 temp_t9;
    s32 temp_t9_10;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a2;
    s32 var_s2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s4_3;
    s32 var_s4_4;
    s32 var_s5;
    s32 var_t2;
    s32 var_t3;
    s32 var_t3_2;
    s32 var_t8;
    s32 var_t9;
    s8 var_a3;
    u8 temp_s2;
    u8 temp_t3;
    u8 temp_t8_2;
    u8 temp_t8_3;
    u8 temp_t8_4;
    u8 temp_t8_5;
    u8 temp_t8_6;
    u8 temp_t8_7;
    u8 temp_t8_8;
    u8 temp_t8_9;
    u8 temp_t9_2;
    u8 temp_t9_3;
    u8 temp_t9_4;
    u8 temp_t9_5;
    u8 temp_t9_6;
    u8 temp_t9_7;
    u8 temp_t9_8;
    u8 temp_t9_9;
    u8 var_t0;
    u8 var_t1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a5;
    void *temp_a6;
    void *temp_s3_2;
    void *temp_t8_10;
    void *var_a0_3;
    void *var_t1;
    void *var_t2_2;

    M2C_FIELD(arg0, s8 *, 5) = func_00C90160(arg1);
    M2C_FIELD(arg0, s8 *, 3) = 0;
    M2C_FIELD(arg0, s8 *, 2) = 0xFF;
    M2C_FIELD(arg0, s8 *, 0) = arg1;
    if ((s32) D_003EA89C < 0xB) {
        temp_t0 = arg1 * 0x8B;
        var_t8 = 0xA;
        var_t2 = 0;
        temp_a6 = ((void *)D_00591A90) + temp_t0;
        var_t1 = temp_a6 + 0xA;
        do {
            if (M2C_FIELD((((void *)Pes6MatchSquads) + (arg1 * 0x6900) + (M2C_FIELD((temp_a6 + M2C_FIELD(var_t1, u8 *, 0x27)), u8 *, 7) * 0x348)), u8 *, 0xD4) == 0) {
                temp_a7 = 0xA - var_t2;
                var_t3 = var_t8;
                if (var_t8 < temp_a7) {
                    temp_t9 = temp_a7 - var_t8;
                    if (temp_t9 >= 9) {
                        var_a0 = 0;
                        var_s4 = 0;
                        var_s3 = 0;
                        var_s2 = 0;
                        if ((temp_a7 >= var_t8) && (temp_a7 < 0x7FFFFFFF)) {
                            var_s2 = 1;
                        }
                        if ((var_s2 != 0) && (var_t8 < 0x7FFFFFFF)) {
                            var_s3 = 1;
                        }
                        if ((var_s3 != 0) && (var_t8 != 0x80000000)) {
                            var_s4 = 1;
                        }
                        if (var_s4 != 0) {
                            temp_s3 = temp_a7 & 0x80000000;
                            var_s4_2 = 1;
                            if ((temp_s3 == (-var_t8 & 0x80000000)) && (temp_s3 != (temp_t9 & 0x80000000))) {
                                var_s4_2 = 0;
                            }
                            if (var_s4_2 != 0) {
                                var_a0 = 1;
                            }
                        }
                        if (var_a0 != 0) {
                            do {
                                temp_a0 = temp_a6 + var_t3;
                                temp_t9_2 = M2C_FIELD(temp_a0, u8 *, 0x27);
                                var_t3 += 8;
                                M2C_FIELD(temp_a0, u8 *, 0x27) = (u8) M2C_FIELD(temp_a0, u8 *, 0x28);
                                M2C_FIELD(temp_a0, u8 *, 0x28) = temp_t9_2;
                                temp_t9_3 = M2C_FIELD(temp_a0, u8 *, 0x28);
                                M2C_FIELD(temp_a0, u8 *, 0x28) = (u8) M2C_FIELD(temp_a0, u8 *, 0x29);
                                M2C_FIELD(temp_a0, u8 *, 0x29) = temp_t9_3;
                                temp_t9_4 = M2C_FIELD(temp_a0, u8 *, 0x29);
                                M2C_FIELD(temp_a0, u8 *, 0x29) = (u8) M2C_FIELD(temp_a0, u8 *, 0x2A);
                                M2C_FIELD(temp_a0, u8 *, 0x2A) = temp_t9_4;
                                temp_t9_5 = M2C_FIELD(temp_a0, u8 *, 0x2A);
                                M2C_FIELD(temp_a0, u8 *, 0x2A) = (u8) M2C_FIELD(temp_a0, u8 *, 0x2B);
                                M2C_FIELD(temp_a0, u8 *, 0x2B) = temp_t9_5;
                                temp_t9_6 = M2C_FIELD(temp_a0, u8 *, 0x2B);
                                M2C_FIELD(temp_a0, u8 *, 0x2B) = (u8) M2C_FIELD(temp_a0, u8 *, 0x2C);
                                M2C_FIELD(temp_a0, u8 *, 0x2C) = temp_t9_6;
                                temp_t9_7 = M2C_FIELD(temp_a0, u8 *, 0x2C);
                                M2C_FIELD(temp_a0, u8 *, 0x2C) = (u8) M2C_FIELD(temp_a0, u8 *, 0x2D);
                                M2C_FIELD(temp_a0, u8 *, 0x2D) = temp_t9_7;
                                temp_t9_8 = M2C_FIELD(temp_a0, u8 *, 0x2D);
                                M2C_FIELD(temp_a0, u8 *, 0x2D) = (u8) M2C_FIELD(temp_a0, u8 *, 0x2E);
                                M2C_FIELD(temp_a0, u8 *, 0x2E) = temp_t9_8;
                                temp_t9_9 = M2C_FIELD(temp_a0, u8 *, 0x2E);
                                M2C_FIELD(temp_a0, u8 *, 0x2E) = (u8) M2C_FIELD(temp_a0, u8 *, 0x2F);
                                M2C_FIELD(temp_a0, u8 *, 0x2F) = temp_t9_9;
                            } while (var_t3 < (temp_a7 - 8));
                        }
                    }
                    if (var_t3 < temp_a7) {
                        do {
                            temp_s3_2 = temp_a6 + var_t3;
                            temp_s2 = M2C_FIELD(temp_s3_2, u8 *, 0x27);
                            var_t3 += 1;
                            M2C_FIELD(temp_s3_2, u8 *, 0x27) = (u8) M2C_FIELD(temp_s3_2, u8 *, 0x28);
                            M2C_FIELD(temp_s3_2, u8 *, 0x28) = temp_s2;
                        } while (var_t3 < temp_a7);
                    }
                }
                var_t2 += 1;
            }
            var_t8 -= 1;
            var_t1 -= 1;
        } while (var_t8 >= 0);
        var_t1_2 = D_003EA89C;
        if ((s32) D_003EA89C < 0xB) {
            var_t2_2 = temp_a6 + D_003EA89C;
            temp_a5 = ((void *)D_00591A90) + temp_t0;
            do {
                if (M2C_FIELD(var_t2_2, u8 *, 0x27) == 0) {
                    temp_t8 = (s32) var_t1_2 < (s32) D_003EA89C;
                    var_t0 = var_t1_2;
                    if (temp_t8 == 0) {
                        temp_s3_3 = var_t1_2 - D_003EA89C;
                        temp_s2_2 = temp_s3_3 + 1;
                        if (temp_s2_2 >= 9) {
                            var_t3_2 = 0;
                            var_a0_2 = 0;
                            var_s5 = 0;
                            var_t9 = 0;
                            var_s4_3 = 0;
                            if ((temp_t8 == 0) && ((s32) D_003EA89C >= 0x80000001)) {
                                var_s4_3 = 1;
                            }
                            if ((var_s4_3 != 0) && ((s32) var_t1_2 >= 0x80000001)) {
                                var_t9 = 1;
                            }
                            if ((var_t9 != 0) && (D_003EA89C != 0x80000000)) {
                                var_s5 = 1;
                            }
                            if (var_s5 != 0) {
                                temp_t9_10 = var_t1_2 & 0x80000000;
                                var_s4_4 = 1;
                                if ((temp_t9_10 == (-(s32) D_003EA89C & 0x80000000)) && (temp_t9_10 != (temp_s3_3 & 0x80000000))) {
                                    var_s4_4 = 0;
                                }
                                if (var_s4_4 != 0) {
                                    var_a0_2 = 1;
                                }
                            }
                            if (var_a0_2 != 0) {
                                var_s3_2 = 1;
                                if (!(temp_s3_3 & 0x80000000) && (temp_s2_2 & 0x80000000)) {
                                    var_s3_2 = 0;
                                }
                                if (var_s3_2 != 0) {
                                    var_t3_2 = 1;
                                }
                            }
                            if (var_t3_2 != 0) {
                                do {
                                    temp_a0_2 = temp_a5 + var_t0;
                                    temp_t8_2 = M2C_FIELD(temp_a0_2, u8 *, 0x27);
                                    var_t0 -= 8;
                                    M2C_FIELD(temp_a0_2, u8 *, 0x27) = (u8) M2C_FIELD(temp_a0_2, u8 *, 0x26);
                                    M2C_FIELD(temp_a0_2, u8 *, 0x26) = temp_t8_2;
                                    temp_t8_3 = M2C_FIELD(temp_a0_2, u8 *, 0x26);
                                    M2C_FIELD(temp_a0_2, u8 *, 0x26) = (u8) M2C_FIELD(temp_a0_2, u8 *, 0x25);
                                    M2C_FIELD(temp_a0_2, u8 *, 0x25) = temp_t8_3;
                                    temp_t8_4 = M2C_FIELD(temp_a0_2, u8 *, 0x25);
                                    M2C_FIELD(temp_a0_2, u8 *, 0x25) = (u8) M2C_FIELD(temp_a0_2, u8 *, 0x24);
                                    M2C_FIELD(temp_a0_2, u8 *, 0x24) = temp_t8_4;
                                    temp_t8_5 = M2C_FIELD(temp_a0_2, u8 *, 0x24);
                                    M2C_FIELD(temp_a0_2, u8 *, 0x24) = (u8) M2C_FIELD(temp_a0_2, u8 *, 0x23);
                                    M2C_FIELD(temp_a0_2, u8 *, 0x23) = temp_t8_5;
                                    temp_t8_6 = M2C_FIELD(temp_a0_2, u8 *, 0x23);
                                    M2C_FIELD(temp_a0_2, u8 *, 0x23) = (u8) M2C_FIELD(temp_a0_2, u8 *, 0x22);
                                    M2C_FIELD(temp_a0_2, u8 *, 0x22) = temp_t8_6;
                                    temp_t8_7 = M2C_FIELD(temp_a0_2, u8 *, 0x22);
                                    M2C_FIELD(temp_a0_2, u8 *, 0x22) = (u8) M2C_FIELD(temp_a0_2, u8 *, 0x21);
                                    M2C_FIELD(temp_a0_2, u8 *, 0x21) = temp_t8_7;
                                    temp_t8_8 = M2C_FIELD(temp_a0_2, u8 *, 0x21);
                                    M2C_FIELD(temp_a0_2, u8 *, 0x21) = (u8) M2C_FIELD(temp_a0_2, u8 *, 0x20);
                                    M2C_FIELD(temp_a0_2, u8 *, 0x20) = temp_t8_8;
                                    temp_t8_9 = M2C_FIELD(temp_a0_2, u8 *, 0x20);
                                    M2C_FIELD(temp_a0_2, u8 *, 0x20) = (u8) M2C_FIELD(temp_a0_2, u8 *, 0x1F);
                                    M2C_FIELD(temp_a0_2, u8 *, 0x1F) = temp_t8_9;
                                } while ((s32) var_t0 >= (D_003EA89C + 8));
                            }
                        }
                        if ((s32) var_t0 >= (s32) D_003EA89C) {
                            do {
                                temp_t8_10 = temp_a5 + var_t0;
                                temp_t3 = M2C_FIELD(temp_t8_10, u8 *, 0x27);
                                var_t0 -= 1;
                                M2C_FIELD(temp_t8_10, u8 *, 0x27) = (u8) M2C_FIELD(temp_t8_10, u8 *, 0x26);
                                M2C_FIELD(temp_t8_10, u8 *, 0x26) = temp_t3;
                            } while ((s32) var_t0 >= (s32) D_003EA89C);
                        }
                    }
                }
                var_t1_2 += 1;
                var_t2_2 += 1;
            } while ((s32) var_t1_2 < 0xB);
        }
    }
    if ((*(u8 *)D_00CCD88D) == 0) {
        M2C_FIELD(arg0, s8 *, 6) = 0xB;
        return;
    }
    var_a3 = 0x20;
    var_a2 = 0;
    var_a0_3 = ((void *)Pes6MatchSquads) + (arg1 * 0x6900);
    do {
        if (M2C_FIELD(var_a0_3, u8 *, 0x14) != 0) {
            var_a3 -= 1;
        }
        var_a2 += 1;
        var_a0_3 += 0x348;
    } while (var_a2 < 0x20);
    M2C_FIELD(arg0, s8 *, 6) = var_a3;
}
