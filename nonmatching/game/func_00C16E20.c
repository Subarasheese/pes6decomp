/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(M2C_UNK *, M2C_UNK);          /* extern */
extern char D_00CCAE00[];

s32 func_00C16E20(s32 arg0) {
    s32 var_s0;

    var_s0 = arg0;
    if (var_s0 != 0) {
        func_001C4730(((void *)D_00CCAE00), 0x28);
        var_s0 += 0x28;
    }
    return var_s0;
}
