/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */
s32 func_009602B0();                                /* extern */
s32 func_00960370();                                /* extern */

s8 func_0095DBF0(void) {
    s32 *var_v0_4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 var_s0;
    s32 var_s1;
    s32 var_s3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s64 temp_v1;
    s8 var_s2;
    void *var_v0;
    void *var_v0_2;
    void *var_v0_3;

    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_v0 = temp_v0 + 0x3F1A4;
    } else {
        var_v0 = NULL;
    }
    if (var_v0 == NULL) {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_s2 = M2C_FIELD(var_v0, s8 *, 0x6D);
        temp_v0_2 = func_00936B90();
        if (temp_v0_2 != 0) {
            var_v0_2 = temp_v0_2 + 0x3F1A4;
        } else {
            var_v0_2 = NULL;
        }
        if (var_v0_2 == NULL) {
            var_v0_2 = NULL;
        }
        if (var_v0_2 != NULL) {
            var_s0 = M2C_FIELD(var_v0_2, s32 *, 0x10);
        } else {
            var_s0 = 0;
        }
        temp_v0_3 = func_00936B90();
        if (temp_v0_3 != 0) {
            var_v0_3 = temp_v0_3 + 0x3F1A4;
        } else {
            var_v0_3 = NULL;
        }
        if (var_v0_3 == NULL) {
            var_v0_3 = NULL;
        }
        if (var_v0_3 != NULL) {
            var_s1 = M2C_FIELD(var_v0_3, s32 *, 0xC);
        } else {
            var_s1 = 0;
        }
        temp_v0_4 = func_00936B90();
        if (temp_v0_4 != 0) {
            var_v0_4 = temp_v0_4 + 0x3F1A4;
        } else {
            var_v0_4 = NULL;
        }
        if (var_v0_4 == NULL) {
            var_v0_4 = NULL;
        }
        if (var_v0_4 != NULL) {
            var_s3 = *var_v0_4;
        } else {
            var_s3 = 0;
        }
        temp_v0_5 = func_009602B0();
        if (var_s3 == 0) {
            var_v1 = 1;
        } else if (temp_v0_5 == 0) {
            var_v1 = 1;
        } else if (var_s3 != temp_v0_5) {
            var_v1 = 1;
        } else {
            var_v1 = 4;
        }
        if (var_v1 == 4) {
            var_v1_2 = 2;
        } else {
            temp_v0_6 = func_00960370();
            if (var_s3 == 0) {
                var_v1_3 = 1;
            } else if (temp_v0_6 == 0) {
                var_v1_3 = 1;
            } else if (var_s3 != temp_v0_6) {
                var_v1_3 = 1;
            } else {
                var_v1_3 = 4;
            }
            if (var_v1_3 != 4) {
                var_v1_2 = 0;
            } else {
                var_v1_2 = 1;
            }
        }
        if ((var_v1_2 == 1) || ((u32) (var_v1_2 - 2) < 2U)) {
            var_s1 -= 1;
            if (var_s1 < 0) {
                var_s1 = 0;
            }
        }
        temp_v1 = (s64) ((s64) var_s2 << 0x38) >> 0x38;
        if (((temp_v1 == 5) || (temp_v1 == 4) || (temp_v1 == 2)) && (var_s0 != 0) && (var_s1 != 0) && (var_s0 == var_s1)) {
            var_s2 = 6;
        }
        return var_s2;
    }
    return 0;
}
