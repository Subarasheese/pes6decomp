/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C80F0(void *);                          /* extern */

s32 func_009B8BE0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s6;
    s32 var_v1;
    s32 var_v1_2;

    if (arg0 == NULL) {
        return -1;
    }
    if (M2C_FIELD(arg0, s32 *, 0) != 2) {
        var_s1 = arg1;
        var_s6 = arg2;
        var_s0 = 0;
        if (arg2 > 0) {
            do {
                if ((arg0 == NULL) || (var_s0 < 0) || (var_s0 >= 3)) {
                    var_v1 = 4;
                } else if (var_s0 == 2) {
                    if (func_001C80F0(arg0 + 0x88) != 0) {
                        if (func_001C80F0(arg0 + 0xC8) == 0) {
                            goto block_15;
                        }
                        goto block_16;
                    }
block_15:
                    var_v1 = 4;
                } else {
block_16:
                    var_v1 = 0;
                }
                if (var_v1 == 4) {
                    var_s6 -= 1;
                } else {
                    if ((arg3 < 0) && (var_s0 < arg1)) {
                        var_s1 = var_s0;
                    }
                    if ((arg3 > 0) && (arg1 < var_s0) && (var_s1 == arg1)) {
                        var_s1 = var_s0;
                    }
                }
                var_s0 += 1;
            } while (var_s0 < arg2);
        }
        if (var_s6 >= 3) {
            var_s1 = arg1;
loop_30:
            var_s1 = (s32) (var_s1 + arg2 + arg3) % arg2;
            if (var_s1 != arg1) {
                if ((arg0 != NULL) && (var_s1 >= 0)) {
                    if (var_s1 >= 3) {
                        goto block_35;
                    }
                    if (var_s1 == 2) {
                        if (func_001C80F0(arg0 + 0x88) != 0) {
                            if (func_001C80F0(arg0 + 0xC8) == 0) {
                                goto block_40;
                            }
                            goto block_41;
                        }
block_40:
                        var_v1_2 = 4;
                    } else {
block_41:
                        var_v1_2 = 0;
                    }
                } else {
block_35:
                    var_v1_2 = 4;
                }
                if (var_v1_2 != 4) {

                } else {
                    goto loop_30;
                }
            }
        }
        if ((var_s1 != arg1) && (arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0) != 2)) {
            if (M2C_FIELD(arg0, s32 *, 0x50) != var_s1) {
                M2C_FIELD(arg0, s8 *, 0x62) = 1;
            }
            if (var_s1 >= 0) {
                if (var_s1 < 3) {
                    M2C_FIELD(arg0, s32 *, 0x50) = var_s1;
                } else {
                    M2C_FIELD(arg0, s32 *, 0x50) = 2;
                }
            } else {
                M2C_FIELD(arg0, s32 *, 0x50) = 0;
            }
        }
        return var_s1;
    }
    return -1;
}
