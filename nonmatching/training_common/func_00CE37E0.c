/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00CD7A00(M2C_UNK);                     /* extern */

s32 func_00CE37E0(M2C_UNK arg0, void *arg1) {
    s32 temp_v0;
    s32 var_v1;

    if (M2C_FIELD(arg1, s32 *, 0x88) != 0) {
        var_v1 = 3;
    } else {
        var_v1 = 2;
    }
    temp_v0 = M2C_FIELD(arg1, s32 *, 0x110) + 1;
    M2C_FIELD(arg1, s32 *, 0x110) = temp_v0;
    M2C_FIELD(arg1, s32 *, 0x110) = (s32) (temp_v0 % var_v1);
    func_00CD7A00(1);
    return 0;
}
