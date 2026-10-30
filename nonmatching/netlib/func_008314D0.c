/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008314D0(void *arg0, s32 arg1) {
    s32 temp_a2;
    s32 temp_v1;
    u16 var_v0_2;
    u16 var_v0_4;
    void *var_v0;
    void *var_v0_3;

    if (arg0 == NULL) {
        var_v0 = NULL;
    } else if (arg1 < 0) {
        var_v0 = NULL;
    } else if (arg1 < 0x28) {
        if (arg1 < (s32) M2C_FIELD(arg0, u16 *, 0x10)) {
            var_v0 = arg0 + (arg1 * 0x30) + 0x8E;
        } else {
            goto block_9;
        }
    } else {
block_9:
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_v0_2 = M2C_FIELD(var_v0, u16 *, 0x20);
    } else {
        var_v0_2 = 0;
    }
    temp_a2 = var_v0_2 & 0xFFFF;
    if (temp_a2 == 0) {
        return 0;
    }
    if (arg0 == NULL) {
        var_v0_3 = NULL;
    } else if (arg1 < 0) {
        var_v0_3 = NULL;
    } else if (arg1 < 0x28) {
        if (arg1 < (s32) M2C_FIELD(arg0, u16 *, 0x10)) {
            var_v0_3 = arg0 + (arg1 * 0x30) + 0x8E;
        } else {
            goto block_26;
        }
    } else {
block_26:
        var_v0_3 = NULL;
    }
    if (var_v0_3 != NULL) {
        var_v0_4 = M2C_FIELD(var_v0_3, u16 *, 0x22);
    } else {
        var_v0_4 = 0;
    }
    temp_v1 = var_v0_4 & 0xFFFF;
    if (temp_v1 != 0) {
        return (s32) (temp_a2 + (temp_v1 - 1)) / temp_v1;
    }
    return 0;
}
