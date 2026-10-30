/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
void *func_0082C2A0();                              /* extern */

s32 func_00945600(s32 arg0) {
    s32 temp_s1;
    s32 var_s0;
    void *temp_v0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        var_s0 = M2C_FIELD(temp_v0, s32 *, 0x117E8);
    } else {
        var_s0 = 0;
    }
    if (var_s0 == 0) {
        return 0;
    }
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 < 0x64) {
        temp_s1 = arg0 * 0x1D0;
        func_001C48E8(var_s0 + temp_s1, 0, 0x1D0);
        M2C_FIELD((temp_s1 + var_s0), s32 *, 0x14) = -1;
        return 1;
    }
    return 0;
}
