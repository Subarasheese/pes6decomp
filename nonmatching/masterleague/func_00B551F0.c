/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00994760();                                /* extern */
extern char D_00B80B80[];

u32 func_00B551F0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s3;
    u16 *var_v0;
    u16 *var_v0_5;
    u16 var_v0_2;
    u16 var_v0_6;
    u32 temp_s2;
    u32 temp_v1;
    u8 var_v0_4;
    u8 var_v0_8;
    void *var_v0_3;
    void *var_v0_7;
    void *var_v1;
    void *var_v1_2;

    temp_s1 = arg0 & 0xFF;
    if (temp_s1 >= 8) {
        var_v0 = NULL;
    } else {
        temp_v0 = func_00994760();
        if (temp_v0 != 0) {
            var_v0 = temp_v0 + (temp_s1 * 4) + 0x61AC4;
        } else {
            var_v0 = NULL;
        }
    }
    if (var_v0 != NULL) {
        var_v0_2 = *var_v0;
    } else {
        var_v0_2 = 0;
    }
    temp_s2 = var_v0_2 & 0xFFFF;
    if (temp_s2 < 0x267U) {
        if ((s32) temp_s2 >= 0x268) {
            var_v0_3 = NULL;
        } else {
            var_v0_3 = ((void *)D_00B80B80) + (temp_s2 << 5);
        }
    } else {
        var_v0_3 = NULL;
    }
    if (var_v0_3 != NULL) {
        var_v0_4 = M2C_FIELD(var_v0_3, u8 *, 0x1B);
    } else {
        var_v0_4 = 0;
    }
    if (temp_s1 >= 8) {
        var_v1 = NULL;
    } else {
        temp_v0_2 = func_00994760();
        if (temp_v0_2 != 0) {
            var_v1 = temp_v0_2 + ((arg0 & 0xFF) * 4) + 0x61AC4;
        } else {
            var_v1 = NULL;
        }
    }
    if (var_v1 != NULL) {
        M2C_FIELD(var_v1, s8 *, 2) = 1;
    }
    var_s3 = 0;
    do {
        temp_s0 = var_s3 & 0xFF;
        if (temp_s0 >= 8) {
            var_v0_5 = NULL;
        } else {
            temp_v0_3 = func_00994760();
            if (temp_v0_3 == 0) {
                var_v0_5 = NULL;
            } else {
                var_v0_5 = temp_v0_3 + (temp_s0 * 4) + 0x61AC4;
            }
        }
        if (var_v0_5 != NULL) {
            var_v0_6 = *var_v0_5;
        } else {
            var_v0_6 = 0;
        }
        temp_v1 = var_v0_6 & 0xFFFF;
        if (temp_v1 != 0) {
            if (temp_v1 >= 0x267U) {
                var_v0_7 = NULL;
            } else if ((s32) temp_v1 >= 0x268) {
                var_v0_7 = NULL;
            } else {
                var_v0_7 = ((void *)D_00B80B80) + (temp_v1 << 5);
            }
            if (var_v0_7 != NULL) {
                var_v0_8 = M2C_FIELD(var_v0_7, u8 *, 0x1B);
            } else {
                var_v0_8 = 0;
            }
            if ((var_v0_4 & 0xFF & 0xFF) == (var_v0_8 & 0xFF)) {
                if (temp_s0 >= 8) {
                    var_v1_2 = NULL;
                } else {
                    temp_v0_4 = func_00994760();
                    if (temp_v0_4 == 0) {
                        var_v1_2 = NULL;
                    } else {
                        var_v1_2 = temp_v0_4 + ((var_s3 & 0xFF) * 4) + 0x61AC4;
                    }
                }
                if (var_v1_2 != NULL) {
                    M2C_FIELD(var_v1_2, s8 *, 2) = 1;
                }
            }
        }
        var_s3 = (var_s3 + 1) & 0xFF;
    } while (var_s3 < 8);
    return temp_s2;
}
