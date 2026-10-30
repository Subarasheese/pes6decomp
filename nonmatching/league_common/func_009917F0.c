/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00991950(void);
M2C_UNK func_00949340(s32, M2C_UNK, s16);           /* extern */
M2C_UNK func_0098FEA0(M2C_UNK);                     /* extern */
M2C_UNK func_00990130();                            /* extern */
M2C_UNK func_00B60E60(M2C_UNK);                     /* extern */
s32 func_00B60EE0();                                /* extern */

s32 func_009917F0(void) {
    s32 temp_v1;
    s32 var_v0;
    u32 temp_v0;

    temp_v0 = func_00991950();
    if (temp_v0 == 0) {
        return 1;
    }
    temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x4AC);
    var_v0 = 1;
    switch (temp_v1) {                              /* irregular */
    case 1:
        break;
    case 2:
        if (func_00B60EE0() == 1) {
            func_00B60E60(0);
            func_0098FEA0(1);
            M2C_FIELD(temp_v0, s32 *, 0x4AC) = 0;
        }
        /* fallthrough */
    default:
        if (M2C_FIELD(temp_v0, s16 *, 0x478) != 0) {
            func_00949340(temp_v0 + 0x478, 0, M2C_FIELD(temp_v0, s16 *, 0x476));
            M2C_FIELD(temp_v0, s16 *, 0x47A) = (s16) (M2C_FIELD(temp_v0, s16 *, 0x478) * 0);
            func_00990130();
        }
        var_v0 = 0;
        break;
    }
    return var_v0;
}
