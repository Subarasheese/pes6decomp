/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00936B90(void);
void func_0095ED40(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 temp_a0;
    s32 temp_s6;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    u16 *var_v1;
    u16 *var_v1_3;
    u16 var_v1_2;
    u16 var_v1_4;
    u8 var_v1_5;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *var_a0;
    void *var_s0;

    temp_s6 = arg0 & 0xFFFF;
    var_s3 = 0;
    var_s2 = 5;
    var_s1 = -1;
    do {
        temp_v0 = func_00936B90();
        if (temp_v0 != NULL) {
            var_s0 = temp_v0 + 0x3DFD0;
        } else {
            var_s0 = NULL;
        }
        if (var_s0 == NULL) {
            var_a0 = NULL;
        } else {
            temp_v0_2 = func_00936B90();
            if (temp_v0_2 != NULL) {
                var_v1 = temp_v0_2 + 0x3DFD0;
            } else {
                var_v1 = NULL;
            }
            if (var_v1 != NULL) {
                var_v1_2 = *var_v1;
            } else {
                var_v1_2 = 0;
            }
            temp_v1 = var_v1_2 & 0xFFFF;
            if (temp_s6 < temp_v1) {
                temp_v0_3 = func_00936B90();
                if (temp_v0_3 != NULL) {
                    var_v1_3 = temp_v0_3 + 0x3DFD0;
                } else {
                    var_v1_3 = NULL;
                }
                if (var_v1_3 != NULL) {
                    var_v1_4 = *var_v1_3;
                } else {
                    var_v1_4 = 0;
                }
                temp_a0 = ((temp_v1 - temp_s6) - 1) & 0xFFFF & 0xFFFF;
                if (temp_a0 < (var_v1_4 & 0xFFFF)) {
                    var_a0 = var_s0 + (temp_a0 * 0xE4) + 4;
                } else {
                    var_a0 = NULL;
                }
            } else {
                var_a0 = NULL;
            }
        }
        if (var_a0 == NULL) {
            var_a0 = NULL;
        }
        if (var_a0 == NULL) {
            var_v1_5 = 0x30;
        } else if (var_s3 < 0) {
            var_v1_5 = 0x30;
        } else if (var_s3 < 5) {
            var_v1_5 = M2C_FIELD((var_a0 + var_s3), u8 *, 0x50);
        } else {
            var_v1_5 = 0x30;
        }
        if ((var_v1_5 & 0xFF) == 0x31) {
            if (var_s3 < var_s2) {
                var_s2 = var_s3;
            }
            if (var_s1 < var_s3) {
                var_s1 = var_s3;
            }
        }
        var_s3 += 1;
    } while (var_s3 < 5);
    if ((var_s2 == 5) || (var_s1 == -1)) {
        var_s2 = 5;
        var_s1 = 5;
    }
    if (arg1 != NULL) {
        *arg1 = var_s2;
    }
    if (arg2 != NULL) {
        *arg2 = var_s1;
    }
}
