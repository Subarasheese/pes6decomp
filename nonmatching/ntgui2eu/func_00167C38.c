/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00163C30(s32);                             /* extern */
M2C_UNK func_0016A800(s32, s32);                    /* extern */
extern char D_005BFCA8[];

void func_00167C38(s32 arg0, s32 arg1) {
    if (arg0 != 0) {
        if (func_00163C30((*(s32 *)D_005BFCA8)) != 0) {
            func_0016A800(arg0 + 0x9D0, arg1);
        }
    }
}
