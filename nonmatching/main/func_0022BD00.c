/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern s32 D_003E77AC;

void *func_0022BD00(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s4_2;
    void *var_s3_2;
    void *var_v0;
    void *var_v0_2;

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
        goto block_74;
    }
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
        temp_v1 = arg0 & 0xFF;
        if (temp_v1 >= 7) {
            var_s3_2 = NULL;
        } else if (var_s3 != 0) {
            var_s3_2 = var_s3 + (temp_v1 * 0xC) + 0xA3E;
        } else {
            var_s3_2 = NULL;
        }
    } else {
        var_s3_2 = NULL;
    }
    if (var_s4 == 0) {
        goto block_74;
    }
    if (var_s3_2 != NULL) {
        var_s4_2 = 0;
        if ((s32) M2C_FIELD(var_s3_2, u8 *, 5) > 0) {
            temp_s0 = arg0 & 0xFF;
loop_37:
            if (func_00231240() == 1) {
                var_s2 = 0;
            } else if (D_003E77AC != 0) {
                var_s2 = D_003E77AC + 0xDEDC;
            } else {
                var_s2 = 0;
            }
            if (func_00231240() == 1) {
                var_v0 = NULL;
            } else {
                if (func_00231240() == 1) {
                    var_s1 = 0;
                } else if (D_003E77AC != 0) {
                    var_s1 = D_003E77AC + 0xDEDC;
                } else {
                    var_s1 = 0;
                }
                if (func_00231240() == 1) {
                    var_v0_2 = NULL;
                } else if (temp_s0 >= 7) {
                    var_v0_2 = NULL;
                } else if (var_s1 == 0) {
                    var_v0_2 = NULL;
                } else {
                    var_v0_2 = var_s1 + (temp_s0 * 0xC) + 0xA3E;
                }
                if (var_s2 == 0) {
                    var_v0 = NULL;
                } else if (var_v0_2 == NULL) {
                    var_v0 = NULL;
                } else {
                    temp_v1_2 = (M2C_FIELD(var_v0_2, u8 *, 4) + (var_s4_2 & 0xFF)) & 0xFF;
                    if (temp_v1_2 >= 0x61) {
                        var_v0 = NULL;
                    } else {
                        var_v0 = var_s2 + (temp_v1_2 * 0x18) + 0x126;
                    }
                }
            }
            if ((var_v0 != NULL) && (M2C_FIELD(var_v0, u8 *, 0) == (arg1 & 0xFF)) && (M2C_FIELD(var_v0, u8 *, 1) == (arg2 & 0xFF))) {
                return var_v0;
            }
            var_s4_2 += 1;
            if (var_s4_2 >= (s32) M2C_FIELD(var_s3_2, u8 *, 5)) {
                goto block_74;
            }
            goto loop_37;
        }
        goto block_74;
    }
block_74:
    return NULL;
}
