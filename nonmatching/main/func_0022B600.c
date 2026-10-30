/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern s32 func_00226710(void);
extern u8 func_00229D70(void);
extern s32 D_003E77AC;

s32 func_0022B600(void) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    u8 temp_a0;
    u8 temp_s0;
    void *var_v0_2;
    void *var_v0_3;
    void *var_v0_4;

    if (func_00231240() == 1) {
        return 0;
    }
    if (func_00231240() == 1) {
        var_s3 = 0;
    } else {
        temp_v1 = func_00226710() & 0xFF;
        switch (temp_v1) {                          /* irregular */
        case 33:
            var_v0 = 4;
            break;
        case 39:
            var_v0 = 5;
            break;
        case 38:
            var_v0 = 6;
            break;
        default:
            var_v0 = 0;
            break;
        case 29:
            var_v0 = func_00229D70() & 0xFF;
            break;
        }
        var_s3 = var_v0 & 0xFF;
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
        temp_v1_2 = var_s3 & 0xFF;
        if (temp_v1_2 >= 7) {
            var_v0_2 = NULL;
        } else if (var_s0 != 0) {
            var_v0_2 = var_s0 + (temp_v1_2 * 0xC) + 0xA3E;
        } else {
            var_v0_2 = NULL;
        }
    } else {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        temp_s0 = M2C_FIELD(var_v0_2, u8 *, 3);
        if (func_00231240() != 1) {
            if (D_003E77AC == 0) {
                var_s2 = 0;
            } else {
                var_s2 = D_003E77AC + 0xDEDC;
            }
        } else {
            var_s2 = 0;
        }
        if (func_00231240() == 1) {
            var_v0_3 = NULL;
        } else {
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
                temp_v1_3 = var_s3 & 0xFF;
                if (temp_v1_3 >= 7) {
                    var_v0_4 = NULL;
                } else if (var_s1 != 0) {
                    var_v0_4 = var_s1 + (temp_v1_3 * 0xC) + 0xA3E;
                } else {
                    var_v0_4 = NULL;
                }
            } else {
                var_v0_4 = NULL;
            }
            if (var_s2 == 0) {
                var_v0_3 = NULL;
            } else if (var_v0_4 != NULL) {
                temp_v1_4 = (M2C_FIELD(var_v0_4, u8 *, 4) + (temp_s0 & 0xFF)) & 0xFF;
                if (temp_v1_4 < 0x61) {
                    var_v0_3 = var_s2 + (temp_v1_4 * 0x18) + 0x126;
                } else {
                    var_v0_3 = NULL;
                }
            } else {
                var_v0_3 = NULL;
            }
        }
        if (var_v0_3 != NULL) {
            temp_a0 = M2C_FIELD(var_v0_3, u8 *, 0x16);
            if (((u64) ((s64) temp_a0 << 0x3D) >> 0x3F) != 1) {
                return 0;
            }
            return (s32) ((u64) ((s64) temp_a0 << 0x39) >> 0x3F) > 0;
        }
        return 0;
    }
    return 0;
}
