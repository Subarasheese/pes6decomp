/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0016D5C0(M2C_UNK);                     /* extern */
s32 func_0016D858(s32, M2C_UNK, s32);               /* extern */

s32 func_00170480(void *arg0) {
    s32 temp_s0;
    s32 var_v0;

    func_0016D5C0(0x4000);
    temp_s0 = func_0016D858(M2C_FIELD(arg0, s32 *, 0x18), 1, arg0 + 0x14);
    func_0016D5C0(0x4001);
    var_v0 = 0;
    if (temp_s0 >= 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x14) != 1;
    }
    return var_v0;
}
