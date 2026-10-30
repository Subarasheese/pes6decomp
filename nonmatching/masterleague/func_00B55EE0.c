/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B52BD0(s32, u8);                         /* extern */
extern char D_00B80B80[];

s32 func_00B55EE0(s32 arg0, s32 arg1, s16 *arg2) {
    s16 var_s3;
    s8 var_v0_10;
    s8 var_v0_8;
    u16 *temp_s0;
    u16 temp_a0;
    u16 temp_v1;
    u32 temp_s1;
    u8 var_a1;
    u8 var_v0_2;
    u8 var_v0_4;
    u8 var_v0_6;
    void *var_s2;
    void *var_v0;
    void *var_v0_3;
    void *var_v0_5;
    void *var_v0_7;
    void *var_v0_9;

    if (arg0 == 0) {
        goto block_80;
    }
    if (arg2 != NULL) {
        *arg2 = 0x268;
    }
    temp_s1 = arg1 & 0xFFFF;
    var_s3 = 0;
    var_s2 = ((void *)D_00B80B80) + (temp_s1 << 5);
loop_5:
    temp_s0 = arg0 + ((var_s3 & 0xFFFF) * 2);
    temp_a0 = *temp_s0;
    if ((temp_a0 != 0) && (temp_s1 != temp_a0)) {
        if (temp_a0 >= 0x267U) {
            var_v0 = NULL;
        } else if ((s32) temp_a0 >= 0x268) {
            var_v0 = NULL;
        } else {
            var_v0 = ((void *)D_00B80B80) + (temp_a0 << 5);
        }
        if (var_v0 != NULL) {
            var_v0_2 = M2C_FIELD(var_v0, u8 *, 0x12);
        } else {
            var_v0_2 = 0;
        }
        if (temp_s1 >= 0x267U) {
            var_v0_3 = NULL;
        } else if ((s32) temp_s1 >= 0x268) {
            var_v0_3 = NULL;
        } else {
            var_v0_3 = var_s2;
        }
        if (var_v0_3 == NULL) {
            var_v0_4 = 0;
        } else {
            var_v0_4 = M2C_FIELD(var_v0_3, u8 *, 0x12);
        }
        if ((var_v0_2 & 0xFF & 0xFF) != (var_v0_4 & 0xFF)) {
            if (temp_a0 >= 0x267U) {
                var_v0_5 = NULL;
            } else if ((s32) temp_a0 >= 0x268) {
                var_v0_5 = NULL;
            } else {
                var_v0_5 = ((void *)D_00B80B80) + ((temp_a0 & 0xFFFF) << 5);
            }
            if (var_v0_5 != NULL) {
                var_v0_6 = M2C_FIELD(var_v0_5, u8 *, 0x12);
            } else {
                var_v0_6 = 0;
            }
            if (temp_s1 >= 0x267U) {
                var_v0_7 = NULL;
            } else if ((s32) temp_s1 >= 0x268) {
                var_v0_7 = NULL;
            } else {
                var_v0_7 = var_s2;
            }
            if (var_v0_7 != NULL) {
                var_a1 = M2C_FIELD(var_v0_7, u8 *, 0x12);
            } else {
                var_a1 = 0;
            }
            if (func_00B52BD0(var_v0_6 & 0xFF, var_a1) != 0) {
                goto block_52;
            }
            goto block_79;
        }
block_52:
        if (temp_s1 < 0x267U) {
            if ((s32) temp_s1 >= 0x268) {
                goto block_57;
            }
        } else {
block_57:
            var_s2 = NULL;
        }
        if (var_s2 != NULL) {
            var_v0_8 = M2C_FIELD(var_s2, s8 *, 0x11);
        } else {
            var_v0_8 = -0x80;
        }
        temp_v1 = *temp_s0;
        if (temp_v1 >= 0x267U) {
            var_v0_9 = NULL;
        } else if ((s32) temp_v1 >= 0x268) {
            var_v0_9 = NULL;
        } else {
            var_v0_9 = ((void *)D_00B80B80) + (temp_v1 << 5);
        }
        if (var_v0_9 == NULL) {
            var_v0_10 = -0x80;
        } else {
            var_v0_10 = M2C_FIELD(var_v0_9, s8 *, 0x11);
        }
        if (((s64) (((s64) ((s64) var_v0_8 << 0x38) >> 0x38) << 0x38) >> 0x38) < ((s64) ((s64) var_v0_10 << 0x38) >> 0x38)) {
            if (arg2 == NULL) {
                return 1;
            }
            *arg2 = var_s3;
            return 1;
        }
        if (arg2 == NULL) {
            return -1;
        }
        *arg2 = var_s3;
        return -1;
    }
block_79:
    var_s3 = (var_s3 + 1) & 0xFFFF;
    if (var_s3 >= 0x268) {
block_80:
        return 0;
    }
    goto loop_5;
}
