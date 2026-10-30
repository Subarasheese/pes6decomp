/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
s32 func_00936B90();                                /* extern */

s32 func_00953C90(s32 arg0, s64 arg1) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0_5;
    s64 temp_v1;
    s8 *var_v0_2;
    s8 var_v0;
    u16 *var_v0_3;
    u16 *var_v0_6;
    u16 var_v0_4;
    u16 var_v0_7;

    temp_s0 = func_0082C2A0();
    temp_v0 = func_00936B90();
    if (temp_v0 == 0) {
        goto block_5;
    }
    if (temp_s0 != 0) {
        var_s0 = temp_v0 + 0xDC;
    } else {
block_5:
        var_s0 = 0;
    }
    if (var_s0 == 0) {
        var_v0_2 = NULL;
    } else if (arg0 < 0) {
        var_v0_2 = NULL;
    } else {
        temp_s1 = func_0082C2A0();
        temp_v0_2 = func_00936B90();
        if (temp_v0_2 == 0) {
            goto block_16;
        }
        if (temp_s1 != 0) {
            var_v0_3 = temp_v0_2 + 0xDC;
        } else {
block_16:
            var_v0_3 = NULL;
        }
        if (var_v0_3 != NULL) {
            var_v0_4 = *var_v0_3;
        } else {
            var_v0_4 = 0;
        }
        if (arg0 < (var_v0_4 & 0xFFFF)) {
            var_v0_2 = var_s0 + (arg0 * 0x68) + 2;
        } else {
            var_v0_2 = NULL;
        }
    }
    if (var_v0_2 == NULL) {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        var_v0 = *var_v0_2;
    } else {
        var_v0 = 0;
    }
    temp_s1_2 = func_0082C2A0();
    temp_v0_3 = func_00936B90();
    if (temp_v0_3 == 0) {
        goto block_37;
    }
    if (temp_s1_2 != 0) {
        var_s1 = temp_v0_3 + 0xDC;
    } else {
block_37:
        var_s1 = 0;
    }
    if (var_s1 == 0) {
        var_v0_5 = 0;
    } else if (arg0 < 0) {
        var_v0_5 = 0;
    } else {
        temp_s4 = func_0082C2A0();
        temp_v0_4 = func_00936B90();
        if (temp_v0_4 == 0) {
            goto block_48;
        }
        if (temp_s4 != 0) {
            var_v0_6 = temp_v0_4 + 0xDC;
        } else {
block_48:
            var_v0_6 = NULL;
        }
        if (var_v0_6 != NULL) {
            var_v0_7 = *var_v0_6;
        } else {
            var_v0_7 = 0;
        }
        if (arg0 < (var_v0_7 & 0xFFFF)) {
            var_v0_5 = var_s1 + (arg0 * 0x68) + 2;
        } else {
            var_v0_5 = 0;
        }
    }
    if (var_v0_5 == 0) {
        var_v0_5 = 0;
    }
    if (var_v0_5 != 0) {
        temp_v1 = (s64) (arg1 << 0x38) >> 0x38;
        if ((temp_v1 != 0x20) && (temp_v1 != 0x10) && (temp_v1 != 8) && (temp_v1 != 4) && (temp_v1 != 2) && (temp_v1 != 1)) {
            return 0;
        }
        return ((s64) ((((s64) (((s64) ((s64) var_v0 << 0x38) >> 0x38) << 0x38) >> 0x38) & temp_v1) << 0x38) >> 0x38) != 0;
    }
    return 0;
}
