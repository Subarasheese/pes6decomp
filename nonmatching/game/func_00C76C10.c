/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCBDE0[];
extern char D_00CCBDE8[];
extern void *D_00CCBDF0;

s32 func_00C76C10(void) {
    s32 var_a2;
    s32 var_v0;

    var_v0 = 0;
    var_a2 = 0;
    if (((*(s32 *)D_00CCBDE8) != -1) && (M2C_FIELD(((void *)D_00CCBDE0), s32 *, 4) != -1)) {
        var_a2 = 1;
    }
    if (var_a2 == 1) {
        var_v0 = 0;
        if ((D_00CCBDF0 != NULL) && (M2C_FIELD(D_00CCBDF0, u8 *, 0x2C) == 1) && (M2C_FIELD(M2C_FIELD(D_00CCBDF0, void **, 0), u8 *, 2) == 1)) {
            var_v0 = 1;
        }
    }
    return var_v0;
}
