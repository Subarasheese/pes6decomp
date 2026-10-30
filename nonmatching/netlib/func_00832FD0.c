/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008314D0(M2C_UNK *, s32);              /* extern */
s32 func_00D0BAF0();                                /* extern */
extern char D_008A8C28[];

void func_00832FD0(s32 arg0) {
    M2C_UNK *var_a0;

    if (func_00D0BAF0() == 0) {
        var_a0 = NULL;
    } else {
        var_a0 = ((void *)D_008A8C28);
    }
    if (var_a0 == NULL) {
        var_a0 = NULL;
    }
    func_008314D0(var_a0, arg0);
}
