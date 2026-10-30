/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_00C13280(u32);                           /* extern */
u32 func_00C135B0(s32, M2C_UNK *, s32);             /* extern */
s32 func_00C137C0(s32);                             /* extern */
extern char D_00CB33F0[];
extern char D_00CB33F8[];

u8 func_002C3B60(u32 arg0, s32 arg1) {
    u32 temp_v0;
    u8 var_s0;

    var_s0 = 0xFF;
    if ((arg0 != -1U) && (arg1 != -1)) {
        temp_v0 = func_00C135B0(func_00C137C0(arg1), ((void *)D_00CB33F0), (*(s32 *)D_00CB33F8));
        if ((temp_v0 != -1U) && (temp_v0 >= arg0)) {
            var_s0 = M2C_FIELD(func_00C13280(temp_v0), u8 *, 1);
        }
    }
    return var_s0;
}
