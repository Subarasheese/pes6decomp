/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00841940(s32);                             /* extern */
s32 func_00D0BAF0();                                /* extern */

s32 func_0083F7A0(s32 arg0) {
    s32 *var_v0_2;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;

    temp_v0 = func_00D0BAF0();
    if (temp_v0 != 0) {
        var_v1 = temp_v0 + 0xF8A4;
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        var_v0_2 = NULL;
    } else if (arg0 < 0) {
        var_v0_2 = NULL;
    } else if (arg0 < 4) {
        var_v0_2 = var_v1 + (arg0 * 0x10) + 0x7C0;
    } else {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        var_a0 = *var_v0_2;
    } else {
        var_a0 = 0;
    }
    if (var_a0 == 0) {
        return 0;
    }
    temp_s0 = func_00841940(var_a0);
    temp_v0_2 = func_00D0BAF0();
    if (temp_v0_2 != 0) {
        var_v1_2 = temp_v0_2 + 0xF8A4;
    } else {
        var_v1_2 = 0;
    }
    if (var_v1_2 == 0) {
        var_v0 = 0;
    } else if (temp_s0 < 0) {
        var_v0 = 0;
    } else if (temp_s0 < 8) {
        var_v0 = var_v1_2 + (temp_s0 * 0xB8);
    } else {
        var_v0 = 0;
    }
    if (var_v0 != 0) {
        return var_v0 + 4;
    }
    return 0;
}
