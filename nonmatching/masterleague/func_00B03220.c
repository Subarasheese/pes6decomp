/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
extern s32 func_00151EA0(s32);
extern u16 func_00224BC0(s32, s32);
extern u8 func_00225820(void);
extern u8 func_00226E70(void);
extern s32 func_00B04A90(s32);
extern void * func_00223E00(s32);
s32 func_00224D90(s32, s32);                        /* extern */
s32 func_00938F10(s32);                             /* extern */
s32 func_0096E890(s32);                             /* extern */
void *func_00970870(s32);                           /* extern */
s32 func_00984740(s32);                             /* extern */
s32 func_009847F0(u8);                              /* extern */
M2C_UNK func_00B1A210(s32);                         /* extern */

void func_00B03220(void) {
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s4;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a2;
    s32 var_fp;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s3_4;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s4_3;
    s32 var_s4_4;
    s32 var_s4_5;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s64 temp_s3;
    s64 var_s1_3;
    u64 temp_a0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;

    if (func_00226E70() != 0) {
        var_s1 = 1;
        do {
            temp_s2 = var_s1 & 0xFFFF;
            if (temp_s2 == 0) {
                var_s0 = 0;
            } else {
                temp_v0 = func_00970870(var_s1);
                if (temp_v0 == NULL) {
                    var_s0 = 0;
                } else {
                    var_s0 = (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0x3D) << 0x3A) >> 0x3B) + 0xF) & 0xFF;
                }
            }
            if (func_0096E890(var_s1) != 1) {
                var_s4 = 0x39;
loop_9:
                var_s3 = 0;
loop_10:
                if (temp_s2 == (Pes6Team_GetPlayerId(var_s4, var_s3 & 0xFF, 0) & 0xFFFF)) {
                    var_v0 = var_s4 & 0xFFFF;
                } else {
                    var_s3 += 1;
                    if (var_s3 >= 0x17) {
                        var_s4 = (var_s4 + 1) & 0xFFFF;
                        if (var_s4 >= 0x40) {
                            var_v0 = 0xFFFF & 0xFFFF;
                        } else {
                            goto loop_9;
                        }
                    } else {
                        goto loop_10;
                    }
                }
                if ((var_v0 & 0xFFFF) != 0xFFFF) {
                    goto block_17;
                }
                goto block_50;
            }
block_17:
            if (func_0096E890(var_s1) == 1) {
                var_v0_2 = func_00B04A90(var_s1);
            } else {
                var_s4_2 = 0x39;
loop_21:
                var_s3_2 = 0;
loop_22:
                if (temp_s2 == (Pes6Team_GetPlayerId(var_s4_2, var_s3_2 & 0xFF, 0) & 0xFFFF)) {
                    var_v0_3 = var_s4_2 & 0xFFFF;
                } else {
                    var_s3_2 += 1;
                    if (var_s3_2 >= 0x17) {
                        var_s4_2 = (var_s4_2 + 1) & 0xFFFF;
                        if (var_s4_2 >= 0x40) {
                            var_v0_3 = 0xFFFF & 0xFFFF;
                        } else {
                            goto loop_21;
                        }
                    } else {
                        goto loop_22;
                    }
                }
                if ((var_v0_3 & 0xFFFF) != 0xFFFF) {
                    var_s4_3 = 0x39;
loop_30:
                    var_s3_3 = 0;
loop_31:
                    if (temp_s2 == (Pes6Team_GetPlayerId(var_s4_3, var_s3_3 & 0xFF, 0) & 0xFFFF)) {
                        var_a0 = var_s4_3 & 0xFFFF;
                    } else {
                        var_s3_3 += 1;
                        if (var_s3_3 >= 0x17) {
                            var_s4_3 = (var_s4_3 + 1) & 0xFFFF;
                            if (var_s4_3 >= 0x40) {
                                var_a0 = 0xFFFF & 0xFFFF;
                            } else {
                                goto loop_30;
                            }
                        } else {
                            goto loop_31;
                        }
                    }
                    if ((var_a0 & 0xFFFF) == 0xFFFF) {
                        var_v1 = 1;
                    } else {
                        var_v1 = 1;
                        if (func_00984740(var_a0) == 1) {

                        } else {
                            var_v1 = 0;
                        }
                    }
                    var_v0_2 = var_v1;
                } else {
                    var_v0_2 = 1;
                }
            }
            if (var_v0_2 == 1) {
                temp_v0_2 = func_00223E00(var_s1);
                if (temp_v0_2 != NULL) {
                    if (!(M2C_FIELD(temp_v0_2, u8 *, 6) & 0x3F)) {
                        if ((var_s0 & 0xFF) >= 0x2E) {
                            goto block_50;
                        }
                    } else {
block_50:
                        if (temp_s2 != 0) {
                            temp_s0 = var_s0 & 0xFF;
                            if ((temp_s0 >= 0x24) && ((func_00938F10(var_s1) & 0xFF) == 0xFF)) {
                                var_s0_2 = ((temp_s0 - 0x23) * 0x14) & 0xFF;
                                if (temp_s0 >= 0x2E) {
                                    var_s0_2 = 0xFF & 0xFF;
                                }
                                if ((func_00151EA0(0x64) & 0xFFFF) < (var_s0_2 & 0xFF)) {
                                    temp_v0_3 = func_00223E00(var_s1);
                                    if (temp_v0_3 != NULL) {
                                        M2C_FIELD(temp_v0_3, u8 *, 6) = (u8) ((M2C_FIELD(temp_v0_3, u8 *, 6) & ~0x3F) | 3);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            var_s1 = (var_s1 + 1) & 0xFFFF;
        } while (var_s1 < 0x12B0);
        var_fp = 0;
        do {
            if ((var_fp & 0xFF) >= 0x50) {
                var_v0_4 = 0;
            } else {
                var_s1_2 = 0;
                var_s0_3 = 0;
                do {
                    if (func_00224BC0(var_fp & 0xFF, var_s1_2 & 0xFF) & 0xFFFF) {
                        var_s0_3 = (var_s0_3 + 1) & 0xFF;
                    }
                    var_s1_2 += 1;
                } while (var_s1_2 < 0x20);
                var_v0_4 = var_s0_3 & 0xFF;
            }
            if ((var_v0_4 & 0xFF) >= 0x12) {
                var_s1_3 = 2;
                var_s3_4 = 0;
            } else {
                var_s1_3 = 1;
                var_s3_4 = 1;
            }
            var_s4_4 = 0;
loop_72:
            temp_s2_2 = func_00224D90(var_fp & 0xFF, var_s4_4 & 0xFF) & 0xFFFF;
            if (temp_s2_2 == 0) {
                var_v0_5 = 0;
            } else {
                temp_v0_4 = func_00970870(temp_s2_2);
                if (temp_v0_4 == NULL) {
                    var_v0_5 = 0;
                } else {
                    var_v0_5 = (((u64) ((s64) M2C_FIELD(temp_v0_4, u8 *, 0x3D) << 0x3A) >> 0x3B) + 0xF) & 0xFF;
                }
            }
            if ((var_v0_5 & 0xFF) >= 0x2E) {
                temp_v0_5 = func_00223E00(temp_s2_2);
                if (temp_v0_5 != NULL) {
                    func_00B1A210(temp_s2_2);
                    var_s1_3 = (s64) ((var_s1_3 - 1) << 0x38) >> 0x38;
                    M2C_FIELD(temp_v0_5, u8 *, 6) = (u8) ((M2C_FIELD(temp_v0_5, u8 *, 6) & ~0x3F) | 3);
                }
            }
            var_s4_4 = (var_s4_4 + 1) & 0xFFFF;
            if (var_s4_4 < 0x20) {
                goto loop_72;
            }
            var_s5 = 0;
loop_82:
            temp_s0_2 = func_00224D90(var_fp & 0xFF, var_s5 & 0xFF) & 0xFFFF;
            if (temp_s0_2 == 0) {
                var_v1_2 = 0;
            } else {
                temp_v0_6 = func_00970870(temp_s0_2);
                if (temp_v0_6 == NULL) {
                    var_v1_2 = 0;
                } else {
                    var_v1_2 = (((u64) ((s64) M2C_FIELD(temp_v0_6, u8 *, 0x3D) << 0x3A) >> 0x3B) + 0xF) & 0xFF;
                }
            }
            if (temp_s0_2 != 0) {
                temp_s4 = var_v1_2 & 0xFF;
                if ((temp_s4 >= 0x24) && (temp_s4 < 0x2E)) {
                    temp_s3 = (s64) (var_s1_3 << 0x38) >> 0x38;
                    if (temp_s3 > 0) {
                        temp_v0_7 = func_00223E00(temp_s0_2);
                        if (temp_v0_7 != NULL) {
                            if ((var_fp & 0xFFFF) == (func_00225820() & 0xFF)) {
                                temp_a0 = (u64) ((s64) M2C_FIELD(temp_v0_7, u8 *, 5) << 0x38) >> 0x3A;
                                temp_a1 = func_009847F0(func_00225820()) & 0xFF;
                                if ((temp_a0 != 0) && (temp_a1 != 0)) {
                                    var_v1_3 = ((s32) (temp_a0 * 0x64) / temp_a1) & 0xFF;
                                } else {
                                    var_v1_3 = 0;
                                }
                                temp_v1 = var_v1_3 & 0xFF;
                                if (temp_v1 >= 0x33) {
                                    var_a2 = 0x28;
                                } else if (temp_v1 >= 0x1A) {
                                    var_a2 = 0x19;
                                } else {
                                    var_a2 = 0xA;
                                }
                                temp_a0_2 = ((temp_s4 - 0x23) * 0x14) & 0xFF;
                                if ((var_a2 & 0xFF) >= temp_a0_2) {
                                    var_s4_5 = 0;
                                } else {
                                    var_s4_5 = (temp_a0_2 - var_a2) & 0xFF;
                                }
                            } else if ((temp_s4 < 0x29) && ((var_s3_4 & 0xFF) == 1)) {
                                var_s4_5 = 0;
                            } else {
                                var_s4_5 = ((temp_s4 - 0x23) * 0x14) & 0xFF;
                            }
                            if ((temp_s3 > 0) && ((func_00151EA0(0x64) & 0xFFFF) < (var_s4_5 & 0xFF))) {
                                func_00B1A210(temp_s0_2);
                                var_s1_3 = (s64) ((var_s1_3 - 1) << 0x38) >> 0x38;
                                M2C_FIELD(temp_v0_7, u8 *, 6) = (u8) ((M2C_FIELD(temp_v0_7, u8 *, 6) & ~0x3F) | 3);
                            }
                        }
                    }
                }
            }
            var_s5 = (var_s5 + 1) & 0xFFFF;
            if (var_s5 < 0x20) {
                goto loop_82;
            }
            var_fp = (var_fp + 1) & 0xFFFF;
        } while (var_fp < 0x48);
    }
}
