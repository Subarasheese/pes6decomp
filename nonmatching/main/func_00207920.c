/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002082F0(s32);
s32 func_00208280(u16);                             /* extern */
s32 func_002082C0(u16);                             /* extern */

s32 func_00207920(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;

    temp_v0 = func_002082F0((s32) M2C_FIELD(arg0, u16 *, 0x30));
    if (temp_v0 < (s32) M2C_FIELD(arg0, f32 *, 0x38)) {
        temp_v0_2 = func_002082C0(M2C_FIELD(arg0, u16 *, 0x30));
        if ((temp_v0_2 != 0) && ((s32) M2C_FIELD(arg0, f32 *, 0x38) >= temp_v0_2)) {
            var_v0 = 0x2710;
        } else {
            var_v0 = (s32) (((s32) M2C_FIELD(arg0, f32 *, 0x38) - temp_v0) * 0x2710) / func_00208280(M2C_FIELD(arg0, u16 *, 0x30));
        }
    } else {
        var_v0 = 0;
    }
    return var_v0;
}
