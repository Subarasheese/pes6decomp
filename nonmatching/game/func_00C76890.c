/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00292F00(u8, M2C_UNK *, s32);              /* extern */
extern char D_00CCBDE0[];
extern char D_00CCBDE8[];
extern void *D_00CCBDEC;

s32 func_00C76890(void) {
    s32 var_a2;
    s32 var_v0;

    var_v0 = 0;
    var_a2 = 0;
    if (((*(s32 *)D_00CCBDE8) != -1) && (M2C_FIELD(((void *)D_00CCBDE0), s32 *, 4) != -1)) {
        var_a2 = 1;
    }
    if ((var_a2 == 1) && (D_00CCBDEC != NULL)) {
        var_v0 = func_00292F00(M2C_FIELD(D_00CCBDEC, u8 *, 0x10), ((void *)D_00CCBDE0), var_a2) & 0xFF;
    }
    return var_v0;
}
