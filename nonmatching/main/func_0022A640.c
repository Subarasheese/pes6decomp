/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern s32 D_003E77AC;

void *func_0022A640(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s6;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s4;
    u8 temp_s1;
    u8 temp_s5;
    u8 var_s2_3;
    u8 var_v1;
    void *var_s3;
    void *var_v0;

    if (func_00231240() != 1) {
        temp_s6 = arg0 & 0xFF;
        temp_s0 = arg1 & 0xFF;
        var_s4 = 0;
loop_5:
        if (func_00231240() == 1) {
            var_s2 = 0;
        } else if (D_003E77AC != 0) {
            var_s2 = D_003E77AC + 0xDEDC;
        } else {
            var_s2 = 0;
        }
        if (func_00231240() == 1) {
            var_s3 = NULL;
        } else {
            if (func_00231240() == 1) {
                var_s1 = 0;
            } else if (D_003E77AC != 0) {
                var_s1 = D_003E77AC + 0xDEDC;
            } else {
                var_s1 = 0;
            }
            if (func_00231240() == 1) {
                var_v0 = NULL;
            } else if (temp_s6 >= 7) {
                var_v0 = NULL;
            } else if (var_s1 == 0) {
                var_v0 = NULL;
            } else {
                var_v0 = var_s1 + (temp_s6 * 0xC) + 0xA3E;
            }
            if (var_s2 == 0) {
                var_s3 = NULL;
            } else if (var_v0 == NULL) {
                var_s3 = NULL;
            } else {
                temp_v1 = (M2C_FIELD(var_v0, u8 *, 4) + (var_s4 & 0xFF)) & 0xFF;
                if (temp_v1 >= 0x61) {
                    var_s3 = NULL;
                } else {
                    var_s3 = var_s2 + (temp_v1 * 0x18) + 0x126;
                }
            }
        }
        if (var_s3 != NULL) {
            temp_s1 = M2C_FIELD(var_s3, u8 *, 5);
            if (func_00231240() == 1) {
                var_s2_2 = 0;
            } else if (D_003E77AC != 0) {
                var_s2_2 = D_003E77AC + 0xDEDC;
            } else {
                var_s2_2 = 0;
            }
            if (func_00231240() == 1) {
                var_s2_3 = 0xFF;
            } else if (var_s2_2 == 0) {
                var_s2_3 = 0xFF;
            } else {
                temp_v1_2 = temp_s1 & 0xFF;
                if (temp_v1_2 >= 0x60) {
                    var_s2_3 = 0xFF;
                } else {
                    var_s2_3 = M2C_FIELD((var_s2_2 + temp_v1_2), u8 *, 0xC4);
                }
            }
            temp_s5 = M2C_FIELD(var_s3, u8 *, 6);
            if (func_00231240() == 1) {
                var_s1_2 = 0;
            } else if (D_003E77AC != 0) {
                var_s1_2 = D_003E77AC + 0xDEDC;
            } else {
                var_s1_2 = 0;
            }
            if (func_00231240() == 1) {
                var_v1 = 0xFF;
            } else if (var_s1_2 == 0) {
                var_v1 = 0xFF;
            } else {
                temp_v1_3 = temp_s5 & 0xFF;
                if (temp_v1_3 >= 0x60) {
                    var_v1 = 0xFF;
                } else {
                    var_v1 = M2C_FIELD((var_s1_2 + temp_v1_3), u8 *, 0xC4);
                }
            }
            if ((arg2 & 0xFF) == M2C_FIELD(var_s3, u8 *, 0)) {
                if (temp_s0 != (var_s2_3 & 0xFF)) {
                    if (temp_s0 == (var_v1 & 0xFF)) {
                        goto block_70;
                    }
                    goto block_71;
                }
block_70:
                return var_s3;
            }
            goto block_71;
        }
block_71:
        var_s4 = (var_s4 + 1) & 0xFFFF;
        if (var_s4 >= 0x61) {
            goto block_72;
        }
        goto loop_5;
    }
block_72:
    return NULL;
}
