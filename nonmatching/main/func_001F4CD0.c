/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_0052B348;

s32 func_001F4CD0(s32 arg0, u32 arg1) {
    s32 var_a3;
    s32 var_a3_2;
    s32 var_v0;
    void *var_a0;
    void *var_a0_2;
    void *var_a2;
    void *var_a2_2;

    var_v0 = 0;
    if (arg0 != -1) {
        var_a2 = D_0052B348;
        var_a3_2 = 0;
        if (var_a2 != NULL) {
loop_2:
            if (M2C_FIELD(var_a2, s32 *, 0x10) != arg0) {
                var_a2 = M2C_FIELD(var_a2, void **, 4);
                if (var_a2 == NULL) {
                    goto block_7;
                }
                goto loop_2;
            }
        } else {
block_7:
            var_a2 = NULL;
        }
        if (var_a2 != NULL) {
            var_a0 = M2C_FIELD(var_a2, void **, 8);
            if (var_a0 != NULL) {
                if ((arg1 >= (u32) M2C_FIELD(var_a0, u32 *, 8)) && ((u32) M2C_FIELD(M2C_FIELD(var_a2, void **, 0xC), u32 *, 8) >= arg1)) {
loop_12:
                    if (M2C_FIELD(var_a0, s32 *, 8) != arg1) {
                        var_a0 = M2C_FIELD(var_a0, void **, 4);
                        if (var_a0 == NULL) {
                            goto block_17;
                        }
                        goto loop_12;
                    }
                } else {
                    goto block_17;
                }
            } else {
block_17:
                var_a0 = NULL;
            }
            if (var_a0 != NULL) {
                var_a3_2 = (0 | M2C_FIELD(var_a0, u8 *, 0xC)) & 0xFF;
            }
        }
        var_v0 = (0 | var_a3_2) & 0xFF;
    }
    var_a2_2 = D_0052B348;
    var_a3 = 0;
    if (var_a2_2 != NULL) {
loop_23:
        if (M2C_FIELD(var_a2_2, s32 *, 0x10) != -1) {
            var_a2_2 = M2C_FIELD(var_a2_2, void **, 4);
            if (var_a2_2 == NULL) {
                goto block_28;
            }
            goto loop_23;
        }
    } else {
block_28:
        var_a2_2 = NULL;
    }
    if (var_a2_2 != NULL) {
        var_a0_2 = M2C_FIELD(var_a2_2, void **, 8);
        if (var_a0_2 != NULL) {
            if ((arg1 >= (u32) M2C_FIELD(var_a0_2, u32 *, 8)) && ((u32) M2C_FIELD(M2C_FIELD(var_a2_2, void **, 0xC), u32 *, 8) >= arg1)) {
loop_33:
                if (M2C_FIELD(var_a0_2, s32 *, 8) != arg1) {
                    var_a0_2 = M2C_FIELD(var_a0_2, void **, 4);
                    if (var_a0_2 == NULL) {
                        goto block_38;
                    }
                    goto loop_33;
                }
            } else {
                goto block_38;
            }
        } else {
block_38:
            var_a0_2 = NULL;
        }
        if (var_a0_2 != NULL) {
            var_a3 = (0 | M2C_FIELD(var_a0_2, u8 *, 0xC)) & 0xFF;
        }
    }
    return (var_v0 | var_a3) & 0xFF;
}
