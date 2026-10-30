/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern s32 D_003E77AC;

s32 func_0022ABC0(void) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s3;
    u8 temp_s0;
    u8 temp_s1;
    void *var_s0;
    void *var_v0;
    void *var_v0_2;
    void *var_v0_3;

    if (func_00231240() != 1) {
        if (D_003E77AC == 0) {
            var_s0 = NULL;
        } else {
            var_s0 = D_003E77AC + 0xDEDC;
        }
    } else {
        var_s0 = NULL;
    }
    if (func_00231240() == 1) {
        return 0;
    }
    if (var_s0 != NULL) {
        temp_s1 = M2C_FIELD(var_s0, u8 *, 1);
        if (func_00231240() != 1) {
            if (D_003E77AC == 0) {
                var_s0_2 = 0;
            } else {
                var_s0_2 = D_003E77AC + 0xDEDC;
            }
        } else {
            var_s0_2 = 0;
        }
        if (func_00231240() != 1) {
            temp_v1 = temp_s1 & 0xFF;
            if (temp_v1 >= 7) {
                var_v0_2 = NULL;
            } else if (var_s0_2 != 0) {
                var_v0_2 = var_s0_2 + (temp_v1 * 0xC) + 0xA3E;
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
                    var_s3 = 0;
                } else {
                    var_s3 = D_003E77AC + 0xDEDC;
                }
            } else {
                var_s3 = 0;
            }
            if (func_00231240() == 1) {
                var_v0 = NULL;
            } else {
                if (func_00231240() != 1) {
                    if (D_003E77AC == 0) {
                        var_s2 = 0;
                    } else {
                        var_s2 = D_003E77AC + 0xDEDC;
                    }
                } else {
                    var_s2 = 0;
                }
                if (func_00231240() != 1) {
                    temp_v1_2 = temp_s1 & 0xFF;
                    if (temp_v1_2 >= 7) {
                        var_v0_3 = NULL;
                    } else if (var_s2 != 0) {
                        var_v0_3 = var_s2 + (temp_v1_2 * 0xC) + 0xA3E;
                    } else {
                        var_v0_3 = NULL;
                    }
                } else {
                    var_v0_3 = NULL;
                }
                if (var_s3 == 0) {
                    var_v0 = NULL;
                } else if (var_v0_3 != NULL) {
                    temp_v1_3 = (M2C_FIELD(var_v0_3, u8 *, 4) + (temp_s0 & 0xFF)) & 0xFF;
                    if (temp_v1_3 < 0x61) {
                        var_v0 = var_s3 + (temp_v1_3 * 0x18) + 0x126;
                    } else {
                        var_v0 = NULL;
                    }
                } else {
                    var_v0 = NULL;
                }
            }
            if (var_v0 != NULL) {
                return (s32) ((u64) ((s64) M2C_FIELD(var_v0, u8 *, 0x16) << 0x3E) >> 0x3F) > 0;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}
