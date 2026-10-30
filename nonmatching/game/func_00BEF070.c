/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A0C770(void *, M2C_UNK);                 /* extern */
s32 func_00BC13A0(M2C_UNK);                         /* extern */

s32 func_00BEF070(void *arg0) {
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_s0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x4A);
    switch (temp_v1) {                              /* irregular */
    case 6:
    case 2:
        temp_s0 = M2C_FIELD(arg0, u16 *, 0x28);
        M2C_FIELD(arg0, u16 *, 0x28) = (u16) (M2C_FIELD(arg0, u16 *, 0x26) + 0x7FFF + 1);
        if ((func_00A0C770(arg0, 0x140) == 0) && !(((f32) M2C_FIELD(arg0, s16 *, 0x14) * M2C_FIELD(arg0, f32 *, 0xE0)) < 6732.5f) && ((s32) M2C_FIELD(arg0, u8 *, 0x4D) >= 0x55)) {
            var_v0_2 = func_00BC13A0(0x59);
        } else {
            var_v0_2 = func_00BC13A0(0x5C);
        }
        var_v0 = var_v0_2 & 0xFFFF;
        M2C_FIELD(arg0, u16 *, 0x28) = temp_s0;
        break;
    default:
    case 5:
    case 4:
    case 0:
        var_v0 = func_00BC13A0(0x5D) & 0xFFFF;
        break;
    }
    return var_v0;
}
