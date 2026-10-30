/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern s32 D_003E77AC;

s32 func_0022AE10(s32 arg0) {
    s32 temp_s0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s4;
    void *var_s3;
    void *var_v0;
    void *var_v0_2;

    if (func_00231240() == 1) {
        return 0;
    }
    if (func_00231240() != 1) {
        if (D_003E77AC == 0) {
            var_s0 = 0;
        } else {
            var_s0 = D_003E77AC + 0xDEDC;
        }
    } else {
        var_s0 = 0;
    }
    if (func_00231240() != 1) {
        temp_v1 = arg0 & 0xFF;
        if (temp_v1 >= 7) {
            var_s3 = NULL;
        } else if (var_s0 != 0) {
            var_s3 = var_s0 + (temp_v1 * 0xC) + 0xA3E;
        } else {
            var_s3 = NULL;
        }
    } else {
        var_s3 = NULL;
    }
    if (var_s3 != NULL) {
        var_s4 = 0;
        if ((s32) M2C_FIELD(var_s3, u8 *, 5) > 0) {
            temp_s0 = arg0 & 0xFF;
loop_27:
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
                    temp_v1_2 = (M2C_FIELD(var_v0_2, u8 *, 4) + (var_s4 & 0xFF)) & 0xFF;
                    if (temp_v1_2 >= 0x61) {
                        var_v0 = NULL;
                    } else {
                        var_v0 = var_s2 + (temp_v1_2 * 0x18) + 0x126;
                    }
                }
            }
            if ((var_v0 != NULL) && (((u64) ((s64) M2C_FIELD(var_v0, u8 *, 0x16) << 0x3A) >> 0x3F) == 0)) {
                return 0;
            }
            var_s4 += 1;
            if (var_s4 >= (s32) M2C_FIELD(var_s3, u8 *, 5)) {
                goto block_63;
            }
            goto loop_27;
        }
block_63:
        return 1;
    }
    return 0;
}
