/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */

void *func_00949D20(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_v1_2;
    void *var_v0;
    void *var_v1;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != 0) {
        var_v0 = temp_v0 + 0x11AAC;
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_s0 = M2C_FIELD(var_v0, s32 *, 0x780);
        if (var_s0 >= 0) {
            if (var_s0 >= 0x1F) {
                var_s0 = 0x1E;
            }
        } else {
            var_s0 = 0;
        }
    } else {
        var_s0 = 0;
    }
    temp_v0_2 = func_0082C2A0();
    if (temp_v0_2 != 0) {
        var_v1_2 = temp_v0_2 + 0x11AAC;
    } else {
        var_v1_2 = 0;
    }
    if (var_v1_2 == 0) {
        var_v1 = NULL;
    } else if (arg0 < 0) {
        var_v1 = NULL;
    } else if (arg0 < var_s0) {
        var_v1 = var_v1_2 + (arg0 << 6);
    } else {
        var_v1 = NULL;
    }
    if (var_v1 != NULL) {
        if (M2C_FIELD(var_v1, s8 *, 0xC) != 0) {
            return var_v1 + 0xC;
        }
        return NULL;
    }
    return NULL;
}
