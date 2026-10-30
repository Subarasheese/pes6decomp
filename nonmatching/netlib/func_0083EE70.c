/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00841940(s32);                             /* extern */
s32 func_00D0BAF0();                                /* extern */

s32 func_0083EE70(s32 arg0) {
    s32 *var_v0_6;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_a0;
    s32 var_s0;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s8 temp_v1;
    s8 var_v0_3;
    u8 var_v0_5;
    void *var_a0_2;
    void *var_v0_2;
    void *var_v0_4;

    var_s0 = 0;
loop_90:
    if (var_s0 >= 4) {
        return 0;
    }
    temp_v0 = func_00D0BAF0();
    if (temp_v0 != 0) {
        var_v1 = temp_v0 + 0xF8A4;
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        var_v0_2 = NULL;
    } else if (var_s0 < 0) {
        var_v0_2 = NULL;
    } else if (var_s0 < 4) {
        var_v0_2 = var_v1 + (var_s0 * 0x10) + 0x7C0;
    } else {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        var_v0_3 = M2C_FIELD(var_v0_2, s8 *, 8);
    } else {
        var_v0_3 = 2;
    }
    if (arg0 == ((s64) ((s64) var_v0_3 << 0x38) >> 0x38)) {
        temp_v0_2 = func_00D0BAF0();
        if (temp_v0_2 != 0) {
            var_v1_2 = temp_v0_2 + 0xF8A4;
        } else {
            var_v1_2 = 0;
        }
        if (var_v1_2 == 0) {
            var_v0_4 = NULL;
        } else if (var_s0 < 0) {
            var_v0_4 = NULL;
        } else if (var_s0 < 4) {
            var_v0_4 = var_v1_2 + (var_s0 * 0x10) + 0x7C0;
        } else {
            var_v0_4 = NULL;
        }
        if (var_v0_4 != NULL) {
            var_v0_5 = M2C_FIELD(var_v0_4, u8 *, 0xB);
        } else {
            var_v0_5 = 0;
        }
        if ((var_v0_5 & 0xFF) == 1) {
            temp_v0_3 = func_00D0BAF0();
            if (temp_v0_3 != 0) {
                var_v1_3 = temp_v0_3 + 0xF8A4;
            } else {
                var_v1_3 = 0;
            }
            if (var_v1_3 == 0) {
                var_v0_6 = NULL;
            } else if (var_s0 < 0) {
                var_v0_6 = NULL;
            } else if (var_s0 < 4) {
                var_v0_6 = var_v1_3 + (var_s0 * 0x10) + 0x7C0;
            } else {
                var_v0_6 = NULL;
            }
            if (var_v0_6 != NULL) {
                var_a0 = *var_v0_6;
            } else {
                var_a0 = 0;
            }
            temp_s0 = func_00841940(var_a0);
            temp_v0_4 = func_00D0BAF0();
            if (temp_v0_4 != 0) {
                var_v1_4 = temp_v0_4 + 0xF8A4;
            } else {
                var_v1_4 = 0;
            }
            if (var_v1_4 == 0) {
                var_a0_2 = NULL;
            } else if (temp_s0 < 0) {
                var_a0_2 = NULL;
            } else if (temp_s0 < 8) {
                var_a0_2 = var_v1_4 + (temp_s0 * 0xB8);
            } else {
                var_a0_2 = NULL;
            }
            if (var_a0_2 != NULL) {
                temp_v1 = M2C_FIELD(var_a0_2, s8 *, 0xB5);
                switch (temp_v1) {                  /* irregular */
                case 4:
                    var_v0 = 0;
                    break;
                default:
                    var_v0 = 0;
                    break;
                case 3:
                case 2:
                case 1:
                    var_v0 = M2C_FIELD(var_a0_2, s32 *, 0x80);
                    break;
                }
            } else {
                var_v0 = 0;
            }
            return var_v0;
        }
        goto block_89;
    }
block_89:
    var_s0 += 1;
    goto loop_90;
}
