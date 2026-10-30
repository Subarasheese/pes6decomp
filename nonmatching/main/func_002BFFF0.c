/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C6130(s32);                             /* extern */
s32 func_00C12C80(s32);                             /* extern */
void *func_00C13280(s32);                           /* extern */
s32 func_00C132B0(s32);                             /* extern */
s32 func_00C132C0();                                /* extern */
extern u8 D_003E9D50;

s32 func_002BFFF0(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = 0;
    if (func_00C12C80(func_00C132C0()) != 0) {
        if ((M2C_FIELD(func_00C13280(arg0), u8 *, 5) & 3) == 3) {
            var_s0 = D_003E9D50 == (func_00C132B0(arg0) & 0xFF);
        }
    }
    if (var_s0 != 0) {
        temp_v0 = func_002C6130(arg0);
        if (temp_v0 != -1) {
            var_s1 = D_003E9D50 == (func_00C132B0(temp_v0) & 0xFF);
        }
    }
    return var_s1;
}
