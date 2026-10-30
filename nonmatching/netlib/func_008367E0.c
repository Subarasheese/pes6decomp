/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
s32 func_008367E0(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_v1;
    s32 var_v1_2;
    u16 var_v0;
    void *var_v0_2;
    void *var_v0_3;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != 0) {
        var_v1 = temp_v0 + 0x16144;
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        var_v0_2 = NULL;
    } else if (arg0 < 0) {
        var_v0_2 = NULL;
    } else if (arg0 < 4) {
        var_v0_2 = var_v1 + (arg0 * 0x18);
    } else {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        var_s0 = M2C_FIELD(var_v0_2, s32 *, 4);
    } else {
        var_s0 = 0;
    }
    temp_v0_2 = func_0082C2A0();
    if (temp_v0_2 != 0) {
        var_v1_2 = temp_v0_2 + 0x16144;
    } else {
        var_v1_2 = 0;
    }
    if (var_v1_2 == 0) {
        var_v0_3 = NULL;
    } else if (arg0 < 0) {
        var_v0_3 = NULL;
    } else if (arg0 < 4) {
        var_v0_3 = var_v1_2 + (arg0 * 0x18);
    } else {
        var_v0_3 = NULL;
    }
    if (var_v0_3 != NULL) {
        var_v0 = M2C_FIELD(var_v0_3, u16 *, 0x10);
    } else {
        var_v0 = 0;
    }
    return var_s0 - var_v0;
}
