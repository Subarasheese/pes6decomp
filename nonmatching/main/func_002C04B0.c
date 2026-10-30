/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C12B00(s32);                             /* extern */
s32 func_00C132B0(s32);                             /* extern */
s32 func_00C132C0();                                /* extern */
extern u8 D_003E9D51;
extern u8 D_003E9D53;

s32 func_002C04B0(s32 arg0) {
    s32 var_s0;
    u8 temp_v1;

    var_s0 = 0;
    if (func_00C12B00(func_00C132C0()) != 0) {
        temp_v1 = func_00C132B0(arg0) & 0xFF;
        if (temp_v1 != D_003E9D53) {
            var_s0 = temp_v1 != 0xFF;
            D_003E9D53 = temp_v1;
            if (var_s0 != 0) {
                var_s0 = D_003E9D51 == (((s32) temp_v1 >> 5) & 1);
            }
        }
    }
    return var_s0;
}
