/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u32 func_001C80F0(void *);                          /* extern */
M2C_UNK func_009C0850(void *, s32);                 /* extern */
s32 func_009C1120(void *, s32);                     /* extern */

s32 func_009C0410(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_s1;
    s32 var_v1;

    temp_s0 = arg2 - 1;
    if (arg0 == NULL) {
        return -1;
    }
    if (M2C_FIELD(arg0, s32 *, 0) == 2) {
        return -1;
    }
    if (temp_s0 >= 0) {
        var_s1 = arg1 - 1;
        if (var_s1 < 0) {
            var_s1 += 5;
        }
        if (arg0 == NULL) {
            var_v1 = 4;
        } else if (var_s1 >= 0) {
            if (var_s1 < 5) {
                if ((M2C_FIELD(arg0, s32 *, 0xA0) == 1) && (var_s1 == 0)) {
                    var_v1 = 4;
                } else if (var_s1 == 4) {
                    if (func_001C80F0(arg0 + 0xD7) < 8U) {
                        var_v1 = 4;
                    } else if ((func_001C80F0(arg0 + 0x117) < 8U) || (func_001C80F0(arg0 + 0x157) < 8U)) {
                        var_v1 = 4;
                    } else {
                        goto block_28;
                    }
                } else {
block_28:
                    var_v1 = 0;
                }
            } else {
                goto block_17;
            }
        } else {
block_17:
            var_v1 = 4;
        }
        if (var_v1 == 4) {
            temp_s0_2 = temp_s0 - 1;
            if (arg0 == NULL) {
                var_s1 = -1;
            } else if (M2C_FIELD(arg0, s32 *, 0) == 2) {
                var_s1 = -1;
            } else if (temp_s0_2 >= 0) {
                var_s1 -= 1;
                if (var_s1 < 0) {
                    var_s1 += 5;
                }
                if (func_009C1120(arg0, var_s1) == 4) {
                    var_s1 = func_009C0410(arg0, var_s1, temp_s0_2);
                }
                func_009C0850(arg0, var_s1);
            }
        }
        if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0) != 2)) {
            if (M2C_FIELD(arg0, s32 *, 0x84) != var_s1) {
                M2C_FIELD(arg0, s8 *, 0x9E) = 1;
            }
            if (var_s1 >= 0) {
                if (var_s1 < 5) {
                    M2C_FIELD(arg0, s32 *, 0x84) = var_s1;
                } else {
                    M2C_FIELD(arg0, s32 *, 0x84) = 4;
                }
            } else {
                M2C_FIELD(arg0, s32 *, 0x84) = 0;
            }
        }
        return var_s1;
    }
    return arg1;
}
