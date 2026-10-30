/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BBB8C0(M2C_UNK);                         /* extern */
extern void *Pes6Ball_Current;

s32 func_00A690C0(s32 arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_s1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = Pes6Ball_Current;
    var_s1 = arg0;
    if (M2C_FIELD(temp_s0, u16 *, 0x6A) == 0) {

    } else {
        temp_v1 = ((s32) (arg1 * (func_00BBB8C0(0x40) + 0x380)) / (s32) M2C_FIELD(temp_s0, u16 *, 0x6A)) & 0xFFFF;
        if (M2C_FIELD(temp_s0, u8 *, 0x6C) != 0) {
            var_v0 = var_s1 - temp_v1;
        } else {
            var_v0 = var_s1 + temp_v1;
        }
        var_s1 = var_v0 & 0xFFFF;
    }
    return var_s1;
}
