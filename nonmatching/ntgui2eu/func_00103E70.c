/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00103D70(s32);                         /* extern */
s32 func_00104030(M2C_UNK *);                       /* extern */
extern char D_002B9C30[];
extern s32 D_006020B4;

void func_00103E70(void) {
    M2C_UNK *var_s0;
    s32 var_a0;

    var_a0 = -1;
    if (D_006020B4 != 0) {
        var_s0 = ((void *)D_002B9C30);
        var_a0 = func_00104030(((void *)D_002B9C30));
    } else {
        var_s0 = (M2C_UNK *)0x2C0000;
    }
    if (M2C_FIELD((var_s0 - 0x63D0), s32 *, 8) != 0) {
        if (var_a0 == 1) {
            func_00103D70(var_a0);
        }
    }
}
