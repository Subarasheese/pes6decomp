/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_002C6060(u32);
void *func_00C13280(u32);                           /* extern */
s32 func_00C132B0(u32);                             /* extern */
s32 func_00C132C0();                                /* extern */
extern u8 D_003E9D50;
extern u8 D_003E9D51;

s32 func_002C0CB0(u32 arg0) {
    s32 var_s1;

    var_s1 = 0;
    if ((func_00C132C0() & 0xFF) == 3) {
        if (M2C_FIELD(func_00C13280(arg0), u8 *, 5) == D_003E9D50) {
            var_s1 = D_003E9D51 == (((s32) (func_00C132B0(func_002C6060(arg0)) & 0xFF) >> 5) & 1);
        }
    }
    return var_s1;
}
