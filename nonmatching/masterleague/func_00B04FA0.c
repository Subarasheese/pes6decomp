/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern u8 func_00226E70(void);
s32 func_00224BC0(s32, s32);                        /* extern */
void *func_00970870(s32);                           /* extern */
s32 func_00B18C30(s32);                             /* extern */

s32 func_00B04FA0(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    void *temp_v0;
    void *temp_v0_2;

    temp_s0 = arg0 & 0xFF;
    if (temp_s0 != (func_00225820() & 0xFF)) {
        if (temp_s0 >= 0x50) {
            var_s0_2 = 0;
        } else {
            var_s0_3 = 0;
            var_s3 = 0;
            do {
                if (func_00224BC0(arg0, var_s0_3 & 0xFF) & 0xFFFF) {
                    var_s3 = (var_s3 + 1) & 0xFF;
                }
                var_s0_3 += 1;
            } while (var_s0_3 < 0x20);
            var_s0_2 = var_s3 & 0xFF;
        }
        if (func_00226E70() != 1) {
            temp_v1 = var_s0_2 & 0xFF;
            if (temp_v1 < 0x1C) {
                if (temp_v1 != 0x1B) {
                    if (temp_v1 < 0x19) {
                        if (temp_v1 < 0x17) {
                            return 1 & 0xFF;
                        }
                        var_v0 = 2;
                        /* Duplicate return node #80. Try simplifying control flow for better match */
                        return var_v0;
                    }
                    return 3;
                }
                return 4;
            }
            return 5;
        }
        if (arg1 & 0xFFFF) {
            temp_v0 = func_00970870(arg1);
            if (temp_v0 != NULL) {
                var_v0_2 = (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0x3D) << 0x3A) >> 0x3B) + 0xF) & 0xFF;
            } else {
                var_v0_2 = 0;
            }
        } else {
            var_v0_2 = 0;
        }
        temp_a0 = var_v0_2 & 0xFF;
        if (temp_a0 < 0x23) {
            temp_v1_2 = var_s0_2 & 0xFF;
            if (temp_v1_2 < 0x1C) {
                if (temp_v1_2 != 0x1B) {
                    if (temp_v1_2 < 0x19) {
                        if (temp_v1_2 < 0x17) {
                            var_v0 = 1;
                        } else {
                            var_v0 = 2;
                        }
                    } else {
                        var_v0 = 3;
                    }
                } else {
                    var_v0 = 4;
                }
            } else {
                var_v0 = 5;
            }
            if ((temp_a0 + (var_v0 & 0xFF)) >= 0x25) {
                return (0x24 - temp_a0) & 0xFF;
            }
            return var_v0;
        }
        return 1;
    }
    var_s0 = func_00B18C30(arg1) & 0xFF;
    if (func_00226E70() == 1) {
        if (arg1 & 0xFFFF) {
            temp_v0_2 = func_00970870(arg1);
            if (temp_v0_2 != NULL) {
                var_v0_3 = (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x3D) << 0x3A) >> 0x3B) + 0xF) & 0xFF;
            } else {
                var_v0_3 = 0;
            }
        } else {
            var_v0_3 = 0;
        }
        temp_v1_3 = var_v0_3 & 0xFF;
        if (temp_v1_3 < 0x23) {
            if (temp_v1_3 >= 0x20) {
                var_s0 = 2;
            }
        } else {
            var_s0 = 1;
        }
    }
    if (var_s0 & 0xFF) {
        return var_s0;
    }
    return 1;
}
