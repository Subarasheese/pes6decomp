/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 *func_00BD6D80(s32 *arg0, s32 arg1) {
    s32 spA0;
    s32 spB0;
    s32 spC0;
    s32 spD0;
    s32 *spE0;
    s32 spF0;
    s32 *sp10C;
    s32 *temp_v0;
    s32 *temp_v0_2;
    s32 *var_s2;
    s32 *var_s4;
    s32 *var_s7;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_fp;
    s32 var_s0;
    s32 var_s1;
    s32 var_s3;
    s32 var_s6;

    sp10C = arg0;
    if (M2C_FIELD(arg0, s32 *, 0) == arg1) {
        return arg0;
    }
    spF0 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x28) > 0) {
        spC0 = 0;
loop_4:
        temp_v0 = M2C_FIELD(sp10C, s32 *, 0x24) + spC0;
        spE0 = temp_v0;
        if (*temp_v0 == arg1) {

        } else {
            spD0 = 0;
            if (M2C_FIELD(spE0, s32 *, 0x28) > 0) {
                spB0 = 0;
loop_8:
                var_s7 = M2C_FIELD(spE0, s32 *, 0x24) + spB0;
                if (M2C_FIELD(var_s7, s32 *, 0) == arg1) {

                } else {
                    var_fp = 0;
                    if (M2C_FIELD(var_s7, s32 *, 0x28) > 0) {
                        spA0 = 0;
loop_13:
                        var_s4 = M2C_FIELD(var_s7, s32 *, 0x24) + spA0;
                        if (M2C_FIELD(var_s4, s32 *, 0) == arg1) {

                        } else {
                            var_s3 = 0;
                            if (M2C_FIELD(var_s4, s32 *, 0x28) > 0) {
                                var_s6 = 0;
loop_17:
                                var_s2 = M2C_FIELD(var_s4, s32 *, 0x24) + var_s6;
                                if (M2C_FIELD(var_s2, s32 *, 0) == arg1) {

                                } else {
                                    var_s1 = 0;
                                    if (M2C_FIELD(var_s2, s32 *, 0x28) > 0) {
                                        var_s0 = 0;
loop_22:
                                        temp_v0_2 = func_00BD6D80(M2C_FIELD(var_s2, s32 *, 0x24) + var_s0, arg1);
                                        if (temp_v0_2 != NULL) {
                                            var_s2 = temp_v0_2;
                                        } else {
                                            var_s1 += 1;
                                            var_s0 += 0x2C;
                                            if (var_s1 >= M2C_FIELD(var_s2, s32 *, 0x28)) {
                                                goto block_26;
                                            }
                                            goto loop_22;
                                        }
                                    } else {
block_26:
                                        var_s2 = NULL;
                                    }
                                }
                                if (var_s2 != NULL) {
                                    var_s4 = var_s2;
                                } else {
                                    var_s3 += 1;
                                    var_s6 += 0x2C;
                                    if (var_s3 >= M2C_FIELD(var_s4, s32 *, 0x28)) {
                                        goto block_31;
                                    }
                                    goto loop_17;
                                }
                            } else {
block_31:
                                var_s4 = NULL;
                            }
                        }
                        if (var_s4 != NULL) {
                            var_s7 = var_s4;
                        } else {
                            var_fp += 1;
                            spA0 += 0x2C;
                            if (var_fp >= M2C_FIELD(var_s7, s32 *, 0x28)) {
                                goto block_35;
                            }
                            goto loop_13;
                        }
                    } else {
block_35:
                        var_s7 = NULL;
                    }
                }
                if (var_s7 != NULL) {
                    spE0 = var_s7;
                } else {
                    spB0 += 0x2C;
                    temp_v0_3 = spD0 + 1;
                    spD0 = temp_v0_3;
                    if (temp_v0_3 >= M2C_FIELD(spE0, s32 *, 0x28)) {
                        goto block_39;
                    }
                    goto loop_8;
                }
            } else {
block_39:
                spE0 = NULL;
            }
        }
        if (spE0 == NULL) {
            spC0 += 0x2C;
            temp_v0_4 = spF0 + 1;
            spF0 = temp_v0_4;
            if (temp_v0_4 >= M2C_FIELD(sp10C, s32 *, 0x28)) {
                goto block_45;
            }
            goto loop_4;
        }
        return spE0;
    }
block_45:
    return NULL;
}
