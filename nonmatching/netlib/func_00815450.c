/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A35F0[];

s32 func_00815450(void) {
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s8 var_v0_2;
    s8 var_v0_3;
    s8 var_v0_4;

    if (((void *)D_008A35F0) == NULL) {
        goto block_42;
    }
    if (((void *)D_008A35F0) != NULL) {
        var_v0 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
    } else {
        var_v0 = 9;
    }
    if (var_v0 != 0) {
        if (((void *)D_008A35F0) != NULL) {
            var_v1 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
        } else {
            var_v1 = 9;
        }
        if (var_v1 != 1) {
            if (((void *)D_008A35F0) != NULL) {
                var_v1_2 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
            } else {
                var_v1_2 = 9;
            }
            if (var_v1_2 != 8) {
                return 1;
            }
            goto block_19;
        }
        goto block_19;
    }
block_19:
    if (((void *)D_008A35F0) != NULL) {
        var_v1_3 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
    } else {
        var_v1_3 = 9;
    }
    if (var_v1_3 == 8) {
        if (((void *)D_008A35F0) != NULL) {
            var_v0_2 = M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41E);
        } else {
            var_v0_2 = 0;
        }
        if (((s64) ((s64) var_v0_2 << 0x38) >> 0x38) == 0) {
            return 1;
        }
        if (((void *)D_008A35F0) != NULL) {
            var_v0_3 = M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41F);
        } else {
            var_v0_3 = 0;
        }
        if (((s64) ((s64) var_v0_3 << 0x38) >> 0x38) != 1) {
            if (((void *)D_008A35F0) != NULL) {
                var_v0_4 = M2C_FIELD(((void *)D_008A35F0), s8 *, 0x420);
            } else {
                var_v0_4 = 0;
            }
            if (((s64) ((s64) var_v0_4 << 0x38) >> 0x38) == 1) {
                goto block_41;
            }
            goto block_42;
        }
block_41:
        return 1;
    }
block_42:
    return 0;
}
