/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */

s32 func_00841940(s32 arg0) {
    s32 *var_v0;
    s32 *var_v0_3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0_2;
    s32 var_v0_4;
    s32 var_v1;
    s32 var_v1_2;
    u8 var_s0_2;
    u8 var_s1_2;
    void *var_s0;

    var_s1_2 = 0;
    temp_v0 = func_00D0BAF0();
    if (temp_v0 != 0) {
        var_s0 = temp_v0 + 0xF8A4;
    } else {
        var_s0 = NULL;
    }
    if (var_s0 != NULL) {
        var_s2 = 0;
        do {
            temp_v0_2 = func_00D0BAF0();
            if (temp_v0_2 != 0) {
                var_v1 = temp_v0_2 + 0xF8A4;
            } else {
                var_v1 = 0;
            }
            if (var_v1 == 0) {
                var_v0 = NULL;
            } else if (var_s2 < 0) {
                var_v0 = NULL;
            } else if (var_s2 < 8) {
                var_v0 = var_v1 + (var_s2 * 0xB8);
            } else {
                var_v0 = NULL;
            }
            if (var_v0 != NULL) {
                var_v0_2 = *var_v0;
            } else {
                var_v0_2 = 0;
            }
            if (var_v0_2 != 0) {
                var_s1_2 += 1;
            }
            var_s2 += 1;
        } while (var_s2 < 8);
        M2C_FIELD(var_s0, u8 *, 0x8FE) = var_s1_2;
        var_s0_2 = M2C_FIELD(var_s0, u8 *, 0x8FE);
    } else {
        var_s0_2 = 0;
    }
    if (var_s0_2 == 0) {
        goto block_62;
    }
    if (arg0 != 0) {
        var_s1 = 0;
loop_61:
        if (var_s1 >= (s32) var_s0_2) {
            goto block_62;
        }
        temp_v0_3 = func_00D0BAF0();
        if (temp_v0_3 != 0) {
            var_v1_2 = temp_v0_3 + 0xF8A4;
        } else {
            var_v1_2 = 0;
        }
        if (var_v1_2 == 0) {
            var_v0_3 = NULL;
        } else if (var_s1 < 0) {
            var_v0_3 = NULL;
        } else if (var_s1 < 8) {
            var_v0_3 = var_v1_2 + (var_s1 * 0xB8);
        } else {
            var_v0_3 = NULL;
        }
        if (var_v0_3 != NULL) {
            var_v0_4 = *var_v0_3;
        } else {
            var_v0_4 = 0;
        }
        if (arg0 != var_v0_4) {
            var_s1 += 1;
            goto loop_61;
        }
        return var_s1;
    }
block_62:
    return 8;
}
