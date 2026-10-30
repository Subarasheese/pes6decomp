/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00163C30(s32, s32);                        /* extern */
s32 func_0016A788(s32, s32, s32, s32, s32);         /* extern */
extern char D_005BFCA8[];

s32 func_00167BB8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != 0) {
        if (func_00163C30(arg0, (*(s32 *)D_005BFCA8)) == 0) {
            return 0;
        }
        var_v0 = func_0016A788(arg0 + 0x9D0, arg1, arg0, arg2, arg3);
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
