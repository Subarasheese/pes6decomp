/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00135D48();                                /* extern */
s32 func_00135D70();                                /* extern */
M2C_UNK func_00136FB0();                            /* extern */
M2C_UNK func_00159708();                            /* extern */
extern char D_005BC210[];

s32 func_001500A8(void) {
    s32 var_v0;

    func_00159708();
    var_v0 = 0;
    if (func_00135D48() & (*(s32 *)D_005BC210)) {
        var_v0 = 0;
        if (!(func_00135D70() & (*(s32 *)D_005BC210))) {
            func_00136FB0();
            var_v0 = 1;
        }
    }
    return var_v0;
}
