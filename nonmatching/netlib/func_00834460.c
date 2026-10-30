/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
extern char D_008AA13C[];

s32 func_00834460(void) {
    M2C_UNK *var_v0_2;
    s32 var_v0;
    s64 var_v0_3;

    if (func_0082C2A0() == 0) {
        var_v0_2 = NULL;
    } else {
        var_v0_2 = ((void *)D_008AA13C);
    }
    if (var_v0_2 == NULL) {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        var_v0_3 = M2C_FIELD(var_v0_2, s8 *, 0x80) == 0;
    } else {
        var_v0_3 = 0;
    }
    var_v0 = 1;
    if (((s64) (var_v0_3 << 0x38) >> 0x38) != 1) {
        var_v0 = 0;
    }
    return var_v0;
}
