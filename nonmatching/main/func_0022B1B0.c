/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00226710(void);
extern u8 func_00229D70(void);
extern int func_00231240(void);
s32 func_00225940(u8);                              /* extern */
s32 func_0022B600();                                /* extern */
extern s32 D_003E77AC;

s32 func_0022B1B0(void) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 temp_v1_8;
    s32 var_s0;
    s32 var_s0_4;
    s32 var_s1;
    s32 var_s1_3;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    u8 temp_s0;
    u8 temp_s2;
    u8 temp_s2_2;
    u8 temp_v1_5;
    u8 var_s0_3;
    u8 var_s2;
    void *var_s0_2;
    void *var_s1_2;
    void *var_v0_3;

    if (func_00231240() == 1) {
        return 0;
    }
    if (func_00231240() == 1) {
        var_s0 = 0;
    } else {
        temp_v1 = func_00226710() & 0xFF;
        switch (temp_v1) {                          /* switch 1; irregular */
        case 33:                                    /* switch 1 */
            var_v0_2 = 4;
            break;
        case 39:                                    /* switch 1 */
            var_v0_2 = 5;
            break;
        case 38:                                    /* switch 1 */
            var_v0_2 = 6;
            break;
        default:                                    /* switch 1 */
            var_v0_2 = 0;
            break;
        case 29:                                    /* switch 1 */
            var_v0_2 = func_00229D70() & 0xFF;
            break;
        }
        var_s0 = var_v0_2 & 0xFF;
    }
    if (func_00231240() != 1) {
        if (D_003E77AC == 0) {
            var_s1 = 0;
        } else {
            var_s1 = D_003E77AC + 0xDEDC;
        }
    } else {
        var_s1 = 0;
    }
    if (func_00231240() != 1) {
        temp_v1_2 = var_s0 & 0xFF;
        if (temp_v1_2 >= 7) {
            var_s1_2 = NULL;
        } else if (var_s1 != 0) {
            var_s1_2 = var_s1 + (temp_v1_2 * 0xC) + 0xA3E;
        } else {
            var_s1_2 = NULL;
        }
    } else {
        var_s1_2 = NULL;
    }
    if (var_s1_2 != NULL) {
        temp_s2 = M2C_FIELD(var_s1_2, u8 *, 3);
        if (func_00231240() != 1) {
            if (D_003E77AC == 0) {
                var_s4 = 0;
            } else {
                var_s4 = D_003E77AC + 0xDEDC;
            }
        } else {
            var_s4 = 0;
        }
        if (func_00231240() == 1) {
            var_s0_2 = NULL;
        } else {
            if (func_00231240() != 1) {
                if (D_003E77AC == 0) {
                    var_s3 = 0;
                } else {
                    var_s3 = D_003E77AC + 0xDEDC;
                }
            } else {
                var_s3 = 0;
            }
            if (func_00231240() != 1) {
                temp_v1_3 = var_s0 & 0xFF;
                if (temp_v1_3 >= 7) {
                    var_v0_3 = NULL;
                } else if (var_s3 != 0) {
                    var_v0_3 = var_s3 + (temp_v1_3 * 0xC) + 0xA3E;
                } else {
                    var_v0_3 = NULL;
                }
            } else {
                var_v0_3 = NULL;
            }
            if (var_s4 == 0) {
                var_s0_2 = NULL;
            } else if (var_v0_3 != NULL) {
                temp_v1_4 = (M2C_FIELD(var_v0_3, u8 *, 4) + (temp_s2 & 0xFF)) & 0xFF;
                if (temp_v1_4 < 0x61) {
                    var_s0_2 = var_s4 + (temp_v1_4 * 0x18) + 0x126;
                } else {
                    var_s0_2 = NULL;
                }
            } else {
                var_s0_2 = NULL;
            }
        }
        if (var_s0_2 != NULL) {
            temp_v1_5 = M2C_FIELD(var_s0_2, u8 *, 0x16);
            if (((s32) ((u64) ((s64) temp_v1_5 << 0x3D) >> 0x3F) > 0) && (((u64) ((s64) temp_v1_5 << 0x39) >> 0x3F) == 0)) {
                return 0;
            }
            if (M2C_FIELD(var_s1_2, u8 *, 3) == 0) {
                temp_s2_2 = M2C_FIELD(var_s0_2, u8 *, 5);
                var_s1_3 = 0;
                if (func_00231240() != 1) {
                    if (D_003E77AC == 0) {
                        var_s3_2 = 0;
                    } else {
                        var_s3_2 = D_003E77AC + 0xDEDC;
                    }
                } else {
                    var_s3_2 = 0;
                }
                if (func_00231240() == 1) {
                    var_s2 = 0xFF;
                } else if (var_s3_2 != 0) {
                    temp_v1_6 = temp_s2_2 & 0xFF;
                    if (temp_v1_6 < 0x60) {
                        var_s2 = M2C_FIELD((temp_v1_6 + var_s3_2), u8 *, 0xC4);
                    } else {
                        var_s2 = 0xFF;
                    }
                } else {
                    var_s2 = 0xFF;
                }
                if (func_00231240() != 1) {
                    if ((var_s2 & 0xFF) < 0x50) {
                        var_s3_3 = func_00225940(var_s2) & 0xFF;
                    } else {
                        var_s3_3 = 0;
                    }
                } else {
                    var_s3_3 = 0;
                }
                temp_s0 = M2C_FIELD(var_s0_2, u8 *, 6);
                if (func_00231240() != 1) {
                    if (D_003E77AC == 0) {
                        var_s2_2 = 0;
                    } else {
                        var_s2_2 = D_003E77AC + 0xDEDC;
                    }
                } else {
                    var_s2_2 = 0;
                }
                if (func_00231240() == 1) {
                    var_s0_3 = 0xFF;
                } else if (var_s2_2 != 0) {
                    temp_v1_7 = temp_s0 & 0xFF;
                    if (temp_v1_7 < 0x60) {
                        var_s0_3 = M2C_FIELD((temp_v1_7 + var_s2_2), u8 *, 0xC4);
                    } else {
                        var_s0_3 = 0xFF;
                    }
                } else {
                    var_s0_3 = 0xFF;
                }
                if (func_00231240() != 1) {
                    if ((var_s0_3 & 0xFF) < 0x50) {
                        var_s0_4 = func_00225940(var_s0_3) & 0xFF;
                    } else {
                        var_s0_4 = 0;
                    }
                } else {
                    var_s0_4 = 0;
                }
                if (func_0022B600() == 1) {
                    var_s1_3 = 1 & 0xFF;
                }
                temp_v1_8 = var_s1_3 & 0xFF;
                switch (temp_v1_8) {                /* switch 2; irregular */
                case 1:                             /* switch 2 */
                    var_v0 = var_s0_4 & 0xFF;
block_157:
                    return var_v0 > 0;
                case 0:                             /* switch 2 */
                    var_v0 = var_s3_3 & 0xFF;
                    goto block_157;
                default:                            /* switch 2 */
                    return 0;
                }
            } else {
                return 0;
            }
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}
