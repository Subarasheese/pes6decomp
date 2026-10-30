/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_002C6060(u32);
void *func_00C13280(u32);                           /* extern */
s32 func_00C132B0(u32);                             /* extern */
s32 func_00C132C0();                                /* extern */
extern u8 D_003E9D50;

s32 func_002BF5F0(u32 arg0) {
    s32 var_s0;
    u32 temp_v0;

    var_s0 = 0;
    if ((func_00C132C0() & 0xFF) == 3) {
        if (M2C_FIELD(func_00C13280(arg0), u8 *, 5) == D_003E9D50) {
            temp_v0 = func_002C6060(arg0);
            if (temp_v0 != -1U) {
                var_s0 = D_003E9D50 == (func_00C132B0(temp_v0) & 0xFF);
            }
        }
    }
    return var_s0;
}
