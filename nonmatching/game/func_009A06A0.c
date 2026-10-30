/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0093FDF0();                            /* extern */
M2C_UNK func_009A0DA0();                            /* extern */
extern char D_00591EFC[];

s32 func_009A06A0(void) {
    s32 var_s0;

    var_s0 = 0;
    func_009A0DA0();
    if ((*(u8 *)D_00591EFC) != 0) {
        func_0093FDF0();
        var_s0 = 1;
        (*(u8 *)D_00591EFC) = 0;
    }
    return var_s0;
}
