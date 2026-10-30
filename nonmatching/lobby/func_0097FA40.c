/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
s32 func_00980590(s32);                             /* extern */
s32 func_009812C0();                                /* extern */

s32 func_0097FA40(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_3;
    void *var_v0_2;

    if (func_0082C2A0() == 0) {
        var_s0 = 0;
    } else {
        var_s0 = func_009812C0();
    }
    if (var_s0 != 0) {
        temp_v0 = func_00980590(arg0);
        if (temp_v0 < 0) {
            var_v0_2 = NULL;
        } else if (temp_v0 < 0x19) {
            var_v0_2 = var_s0 + (temp_v0 * 0x670) + 4;
        } else {
            var_v0_2 = NULL;
        }
    } else {
        var_v0_2 = NULL;
    }
    if (var_v0_2 == NULL) {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        var_s0_2 = M2C_FIELD(var_v0_2, s32 *, 8);
    } else {
        var_s0_2 = 0;
    }
    if (func_0082C2A0() == 0) {
        var_s2 = 0;
    } else {
        var_s2 = func_009812C0();
    }
    if (var_s2 != 0) {
        temp_v0_2 = func_00980590(arg0);
        if (temp_v0_2 < 0) {
            var_v0_3 = 0;
        } else if (temp_v0_2 < 0x19) {
            var_v0_3 = var_s2 + (temp_v0_2 * 0x670) + 4;
        } else {
            var_v0_3 = 0;
        }
    } else {
        var_v0_3 = 0;
    }
    if (var_v0_3 == 0) {
        var_v0_3 = 0;
    }
    if (var_v0_3 != 0) {
        var_v0 = ((var_s0_2 >> 7) & 1) != 0;
    } else {
        var_v0 = 0;
    }
    return var_v0 == 0;
}
