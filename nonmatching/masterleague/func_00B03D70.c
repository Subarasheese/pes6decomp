/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00238330(s32);
extern u8 func_00225820(void);
extern s32 func_002383D0(s32);
extern s32 func_00226000(void);
void *func_00223E00(s32);                           /* extern */
s32 func_00224BC0(s32, s32);                        /* extern */
void *func_00970870(s32);                           /* extern */
s32 func_00B04420(s32, s32);                        /* extern */
s32 func_00B2A340(s32, M2C_UNK);                    /* extern */
s32 func_00B2A400(s32, M2C_UNK);                    /* extern */

void func_00B03D70(void) {
    s32 temp_a0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s4;
    s32 temp_s4_2;
    s32 temp_s5;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s3;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s4_3;
    s8 temp_a1;
    s8 temp_a1_2;
    s8 var_v0;
    s8 var_v0_2;
    s8 var_v1;
    s8 var_v1_2;
    u8 temp_a0;
    u8 temp_a0_3;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;

    var_s0 = 0;
loop_1:
    temp_s1 = func_002383D0(var_s0) & 0xFF;
    if ((temp_s1 == (func_002383D0(func_00225820()) & 0xFF)) && (temp_s1_2 = func_00238330(var_s0) & 0xFF, (temp_s1_2 == (func_00238330(func_00225820()) & 0xFF)))) {
        var_s4 = 0;
loop_4:
        temp_s5 = func_00224BC0(var_s0, var_s4) & 0xFFFF;
        if (temp_s5 != 0) {
            temp_v0 = func_00223E00(temp_s5);
            if (temp_v0 != NULL) {
                temp_s1_3 = func_00B2A400(temp_s5, 0x1C) & 0xFFFF;
                temp_s2 = (temp_s1_3 + (func_00B2A340(temp_s5, 0x1C) & 0xFFFF)) & 0xFFFF;
                temp_s1_4 = func_00B04420(var_s0, temp_s5) & 0xFF;
                if ((temp_s5 != M2C_FIELD(func_00226000(), u16 *, 0xCC)) && (temp_s5 != M2C_FIELD(func_00226000(), u16 *, 0xCE))) {
                    if (temp_s5 == M2C_FIELD(func_00226000(), u16 *, 0xD0)) {
                        goto block_10;
                    }
                    temp_v1 = temp_s2 & 0xFFFF;
                    if ((temp_v1 >= 0x19) && !(temp_s1_4 & 0xFF)) {
                        var_v0 = (M2C_FIELD(temp_v0, s8 *, 0xA) & ~0xF) | 6;
                    } else if ((temp_v1 >= 0xF) && !(temp_s1_4 & 0xFF)) {
                        var_v0 = (M2C_FIELD(temp_v0, s8 *, 0xA) & ~0xF) | 5;
                    } else if ((temp_v1 >= 0xA) && !(temp_s1_4 & 0xFF)) {
                        var_v0 = (M2C_FIELD(temp_v0, s8 *, 0xA) & ~0xF) | 4;
                    } else if ((temp_v1 >= 5) && ((temp_s1_4 & 0xFF) < 2)) {
                        var_v0 = (M2C_FIELD(temp_v0, s8 *, 0xA) & ~0xF) | 3;
                    } else {
                        temp_v0_2 = temp_s1_4 & 0xFF;
                        if (temp_v0_2 < 2) {
                            var_v0 = (M2C_FIELD(temp_v0, s8 *, 0xA) & ~0xF) | 2;
                        } else if (temp_v0_2 < 3) {
                            var_v0 = (M2C_FIELD(temp_v0, s8 *, 0xA) & ~0xF) | 1;
                        } else {
                            var_v0 = (M2C_FIELD(temp_v0, s8 *, 0xA) & ~0xF) | (0 & 0xF);
                        }
                    }
                } else {
block_10:
                    var_v0 = (M2C_FIELD(temp_v0, s8 *, 0xA) & ~0xF) | 7;
                }
                M2C_FIELD(temp_v0, s8 *, 0xA) = var_v0;
                temp_v0_3 = func_00970870(temp_s5);
                if ((temp_v0_3 != NULL) && ((s32) ((u64) ((s64) M2C_FIELD(temp_v0_3, u8 *, 1) << 0x38) >> 0x3C) < 6) && !(temp_s1_4 & 0xFF)) {
                    temp_a1 = M2C_FIELD(temp_v0, s8 *, 0xA);
                    if (((s64) ((s64) temp_a1 << 0x3C) >> 0x3C) < 6) {
                        temp_a0 = M2C_FIELD(temp_v0, u8 *, 7);
                        if ((s32) temp_a0 >= 0x4B) {
                            var_v1 = (temp_a1 & ~0xF) | 7;
                            goto block_47;
                        }
                        if ((s32) temp_a0 >= 0x46) {
                            var_v1 = (temp_a1 & ~0xF) | 6;
                            goto block_47;
                        }
                        if ((s32) temp_a0 >= 0x41) {
                            var_v1 = (temp_a1 & ~0xF) | 5;
                            goto block_47;
                        }
                        if ((s32) temp_a0 >= 0x3C) {
                            var_v1 = (temp_a1 & ~0xF) | 4;
block_47:
                            M2C_FIELD(temp_v0, s8 *, 0xA) = var_v1;
                        }
                    }
                }
                goto block_48;
            }
        } else {
block_48:
            var_s4 = (var_s4 + 1) & 0xFF;
            if (var_s4 >= 0x20) {
                goto block_93;
            }
            goto loop_4;
        }
    } else {
        var_s3 = 0;
loop_52:
        temp_s2_2 = func_00224BC0(var_s0, var_s3) & 0xFFFF;
        if (temp_s2_2 != 0) {
            temp_v0_4 = func_00223E00(temp_s2_2);
            if (temp_v0_4 != NULL) {
                temp_s4 = func_00B2A400(temp_s2_2, 0x26) & 0xFFFF;
                var_s4_2 = (temp_s4 + (func_00B2A340(temp_s2_2, 0x26) & 0xFFFF)) & 0xFFFF;
                if (var_s4_2 == 0) {
                    temp_s4_2 = func_00B2A400(temp_s2_2, 0x27) & 0xFFFF;
                    var_s4_2 = (temp_s4_2 + (func_00B2A340(temp_s2_2, 0x27) & 0xFFFF)) & 0xFFFF;
                }
                temp_a0_2 = func_00B04420(var_s0, temp_s2_2) & 0xFF;
                temp_v1_2 = var_s4_2 & 0xFFFF;
                if ((temp_v1_2 >= 8) && (var_s4_3 = temp_a0_2 & 0xFF, (var_s4_3 == 0))) {
                    var_v0_2 = (M2C_FIELD(temp_v0_4, s8 *, 0xA) & ~0xF) | 6;
                } else if ((temp_v1_2 >= 6) && (var_s4_3 = temp_a0_2 & 0xFF, (var_s4_3 == 0))) {
                    var_v0_2 = (M2C_FIELD(temp_v0_4, s8 *, 0xA) & ~0xF) | 5;
                } else if ((temp_v1_2 >= 4) && (var_s4_3 = temp_a0_2 & 0xFF, (var_s4_3 == 0))) {
                    var_v0_2 = (M2C_FIELD(temp_v0_4, s8 *, 0xA) & ~0xF) | 4;
                } else if ((temp_v1_2 >= 2) && (var_s4_3 = temp_a0_2 & 0xFF, ((var_s4_3 < 2) != 0))) {
                    var_v0_2 = (M2C_FIELD(temp_v0_4, s8 *, 0xA) & ~0xF) | 3;
                } else {
                    var_s4_3 = temp_a0_2 & 0xFF;
                    if (var_s4_3 < 2) {
                        var_v0_2 = (M2C_FIELD(temp_v0_4, s8 *, 0xA) & ~0xF) | 2;
                    } else if (var_s4_3 < 3) {
                        var_v0_2 = (M2C_FIELD(temp_v0_4, s8 *, 0xA) & ~0xF) | 1;
                    } else {
                        var_v0_2 = (M2C_FIELD(temp_v0_4, s8 *, 0xA) & ~0xF) | (0 & 0xF);
                    }
                }
                M2C_FIELD(temp_v0_4, s8 *, 0xA) = var_v0_2;
                temp_v0_5 = func_00970870(temp_s2_2);
                if ((temp_v0_5 != NULL) && ((s32) ((u64) ((s64) M2C_FIELD(temp_v0_5, u8 *, 1) << 0x38) >> 0x3C) < 6) && (var_s4_3 == 0)) {
                    temp_a1_2 = M2C_FIELD(temp_v0_4, s8 *, 0xA);
                    if (((s64) ((s64) temp_a1_2 << 0x3C) >> 0x3C) < 6) {
                        temp_a0_3 = M2C_FIELD(temp_v0_4, u8 *, 7);
                        if ((s32) temp_a0_3 >= 0x4B) {
                            var_v1_2 = (temp_a1_2 & ~0xF) | 7;
                            goto block_90;
                        }
                        if ((s32) temp_a0_3 >= 0x46) {
                            var_v1_2 = (temp_a1_2 & ~0xF) | 6;
                            goto block_90;
                        }
                        if ((s32) temp_a0_3 >= 0x41) {
                            var_v1_2 = (temp_a1_2 & ~0xF) | 5;
                            goto block_90;
                        }
                        if ((s32) temp_a0_3 >= 0x3C) {
                            var_v1_2 = (temp_a1_2 & ~0xF) | 4;
block_90:
                            M2C_FIELD(temp_v0_4, s8 *, 0xA) = var_v1_2;
                        }
                    }
                }
                goto block_91;
            }
        } else {
block_91:
            var_s3 = (var_s3 + 1) & 0xFF;
            if (var_s3 >= 0x20) {
block_93:
                var_s0 = (var_s0 + 1) & 0xFF;
                if (var_s0 < 0x48) {
                    goto loop_1;
                }
            } else {
                goto loop_52;
            }
        }
    }
}
