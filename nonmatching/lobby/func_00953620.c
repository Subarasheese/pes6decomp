/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009537A0(s64);
s32 func_0082C2A0();                                /* extern */
s32 func_00936B90();                                /* extern */

s32 func_00953620(void) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0_6;
    s8 *var_v0_3;
    u16 *var_v0;
    u16 *var_v0_4;
    u16 var_v0_2;
    u16 var_v0_5;

    temp_s0 = func_0082C2A0();
    temp_v0 = func_00936B90();
    if (temp_v0 == 0) {
        goto block_5;
    }
    if (temp_s0 != 0) {
        var_v0 = temp_v0 + 0xDC;
    } else {
block_5:
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_v0_2 = *var_v0;
    } else {
        var_v0_2 = 0;
    }
    var_s3 = 0;
loop_49:
    temp_s1 = var_s3 & 0xFFFF;
    if (temp_s1 >= (var_v0_2 & 0xFFFF)) {
        return 0;
    }
    temp_s2 = func_0082C2A0();
    temp_v0_2 = func_00936B90();
    if (temp_v0_2 == 0) {
        goto block_16;
    }
    if (temp_s2 != 0) {
        var_s2 = temp_v0_2 + 0xDC;
    } else {
block_16:
        var_s2 = 0;
    }
    if (var_s2 == 0) {
        var_v0_3 = NULL;
    } else if (temp_s1 < 0) {
        var_v0_3 = NULL;
    } else {
        temp_s4 = func_0082C2A0();
        temp_v0_3 = func_00936B90();
        if (temp_v0_3 == 0) {
            goto block_27;
        }
        if (temp_s4 != 0) {
            var_v0_4 = temp_v0_3 + 0xDC;
        } else {
block_27:
            var_v0_4 = NULL;
        }
        if (var_v0_4 != NULL) {
            var_v0_5 = *var_v0_4;
        } else {
            var_v0_5 = 0;
        }
        if (temp_s1 < (var_v0_5 & 0xFFFF)) {
            var_v0_3 = var_s2 + (temp_s1 * 0x68) + 2;
        } else {
            var_v0_3 = NULL;
        }
    }
    if (var_v0_3 == NULL) {
        var_v0_3 = NULL;
    }
    if (var_v0_3 != NULL) {
        var_v0_6 = func_009537A0((s64) *var_v0_3);
    } else {
        var_v0_6 = 0;
    }
    if (var_v0_6 != 1) {
        var_s3 = (var_s3 + 1) & 0xFFFF;
        goto loop_49;
    }
    return temp_s1;
}
