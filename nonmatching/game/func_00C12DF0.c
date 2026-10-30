/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, s32, s32);            /* extern */
extern char D_00CBFAA0[];

s32 func_00C12DF0(s32 arg0, s32 arg1) {
    s32 var_s1;

    var_s1 = arg0;
    if (var_s1 != 0) {
        func_001C4730(((void *)D_00CBFAA0) + 0xB220, var_s1, arg1);
        var_s1 += arg1;
    }
    return var_s1;
}
