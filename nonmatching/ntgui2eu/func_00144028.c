/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00135D48();                                /* extern */
s32 func_00135D70();                                /* extern */
M2C_UNK func_00144080();                            /* extern */
M2C_UNK func_001540B0(M2C_UNK *);                   /* extern */
extern char D_005FC198[];

s32 func_00144028(void) {
    s32 var_v0;

    var_v0 = 0;
    if (func_00135D48() & 0x10) {
        var_v0 = 0;
        if (!(func_00135D70() & 0x10)) {
            func_001540B0(((void *)D_005FC198));
            func_00144080();
            var_v0 = 1;
        }
    }
    return var_v0;
}
