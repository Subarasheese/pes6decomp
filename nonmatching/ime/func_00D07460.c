/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D07460(void *arg0) {
    s8 var_v0;
    s8 var_v0_2;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s8 *, 0x3F);
    } else {
        var_v0 = 3;
    }
    if (((s64) ((s64) var_v0 << 0x38) >> 0x38) == 2) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    } else {
        if (arg0 != NULL) {
            var_v0_2 = M2C_FIELD(arg0, s8 *, 0x3F);
        } else {
            var_v0_2 = 3;
        }
        if (((s64) ((s64) var_v0_2 << 0x38) >> 0x38) != 2) {
            M2C_FIELD(arg0, s32 *, 0x30) = 0xF0;
            if (arg0 != NULL) {
                M2C_FIELD(arg0, s8 *, 0x3F) = 1;
                M2C_FIELD(arg0, s8 *, 0x3B) = 1;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x30) = 0;
        }
    }
    return 1;
}
