/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082C2A0();                              /* extern */
s32 func_00936B90();                                /* extern */

s32 func_00960430(void) {
    s32 temp_v0;
    s32 var_v0;
    u32 var_a0;
    u32 var_s1;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *var_s0;

    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_s0 = temp_v0 + 0x3F1A4;
    } else {
        var_s0 = NULL;
    }
    if (var_s0 == NULL) {
        var_s0 = NULL;
    }
    if (var_s0 == NULL) {
        return 0;
    }
    temp_v0_2 = func_0082C2A0();
    if (temp_v0_2 != NULL) {
        var_v0 = M2C_FIELD(temp_v0_2, s32 *, 0x153BC);
    } else {
        var_v0 = 0;
    }
    if (var_v0 == 0) {
        return 0;
    }
    temp_v0_3 = func_0082C2A0();
    if (temp_v0_3 != NULL) {
        var_s1 = M2C_FIELD(temp_v0_3, u32 *, 0x153C0);
    } else {
        var_s1 = 0;
    }
    temp_v0_4 = func_0082C2A0();
    if (temp_v0_4 != NULL) {
        var_a0 = M2C_FIELD(temp_v0_4, u32 *, 0x153C4);
    } else {
        var_a0 = 0;
    }
    if ((u32) M2C_FIELD(var_s0, u32 *, 8) < var_s1) {
        return 0;
    }
    return var_a0 >= (u32) M2C_FIELD(var_s0, u32 *, 4);
}
