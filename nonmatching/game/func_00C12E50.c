/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, M2C_UNK);             /* extern */
extern char D_00CBFAA0[];

s32 func_00C12E50(s32 arg0) {
    s32 var_s0;

    var_s0 = arg0;
    if (var_s0 != 0) {
        func_001C4730(((void *)D_00CBFAA0) + 0xB220, 4);
        var_s0 += 4;
    }
    return var_s0;
}
