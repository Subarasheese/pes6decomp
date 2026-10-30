/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
extern char D_008AA13C[];

s32 func_00834590(void) {
    M2C_UNK *var_v0;
    s32 var_v1;

    if (func_0082C2A0() == 0) {
        var_v0 = NULL;
    } else {
        var_v0 = ((void *)D_008AA13C);
    }
    if (var_v0 == NULL) {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_v1 = M2C_FIELD(var_v0, s32 *, 0x18);
    } else {
        var_v1 = 0;
    }
    switch (var_v1) {                               /* irregular */
    case 30:
        return 5;
    case 25:
        return 4;
    case 20:
        return 3;
    case 15:
        return 2;
    case 10:
        return 1;
    default:
        return 0;
    }
}
