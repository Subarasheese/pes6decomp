/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */
extern char D_008A5CB0[];

s32 func_00837DA0(s32 arg0) {
    M2C_UNK *var_v0;
    M2C_UNK *var_v0_2;
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0_4;
    s8 var_v0_3;

    var_s1 = 0;
    if (func_00D0BAF0() == 0) {
        var_v0 = NULL;
    } else {
        var_v0 = ((void *)D_008A5CB0);
    }
    if (var_v0 == NULL) {
        return 0;
    }
    if (func_00D0BAF0() == 0) {
        var_v0_2 = NULL;
    } else {
        var_v0_2 = ((void *)D_008A5CB0);
    }
    if (var_v0_2 != NULL) {
        var_s0 = M2C_FIELD(var_v0_2, s32 *, 0x220);
    } else {
        var_s0 = 0;
    }
    if (arg0 < 0) {
        return 0;
    }
    if ((arg0 < 2) && (var_s0 > 0)) {
        if (var_s0 < 5) {
            var_s2 = 0;
loop_52:
            if (var_s2 < var_s0) {
                if (func_00D0BAF0() == 0) {
                    var_v1 = NULL;
                } else {
                    var_v1 = ((void *)D_008A5CB0);
                }
                if (var_v1 == NULL) {
                    var_v0_3 = 2;
                } else if (var_s2 < 0) {
                    var_v0_3 = 2;
                } else if (var_s2 < 4) {
                    if (var_s2 < M2C_FIELD(var_v1, s32 *, 0x220)) {
                        var_v0_3 = M2C_FIELD((var_v1 + (var_s2 * 0x88)), s8 *, 0x80);
                    } else {
                        goto block_33;
                    }
                } else {
block_33:
                    var_v0_3 = 2;
                }
                if (arg0 == ((s64) ((s64) var_v0_3 << 0x38) >> 0x38)) {
                    if (func_00D0BAF0() == 0) {
                        var_v1_2 = NULL;
                    } else {
                        var_v1_2 = ((void *)D_008A5CB0);
                    }
                    if (var_v1_2 == NULL) {
                        var_v0_4 = 0;
                    } else if (var_s2 < 0) {
                        var_v0_4 = 0;
                    } else if (var_s2 < 4) {
                        if (var_s2 < M2C_FIELD(var_v1_2, s32 *, 0x220)) {
                            var_v0_4 = M2C_FIELD((var_v1_2 + (var_s2 * 0x88)), s32 *, 0x7C);
                        } else {
                            goto block_48;
                        }
                    } else {
block_48:
                        var_v0_4 = 0;
                    }
                    var_s1 |= var_v0_4;
                }
                var_s2 += 1;
                goto loop_52;
            }
            return var_s1;
        }
        goto block_20;
    }
block_20:
    return 0;
}
