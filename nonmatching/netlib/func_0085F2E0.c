/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008744F0();                            /* extern */
s32 func_00874700(void *, s32);                     /* extern */

s32 func_0085F2E0(void *arg0, void *arg1) {
    s16 temp_v1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;

    temp_v1 = M2C_FIELD(arg0, s16 *, 0x458);
    if ((temp_v1 != 5) && (temp_v1 != 6)) {
        func_008744F0();
    }
    temp_v0 = func_00874700(arg0, M2C_FIELD(arg1, s32 *, 0));
    switch (temp_v0) {                              /* irregular */
    case 0:
        temp_v0_2 = M2C_FIELD(arg1, s32 *, 0x14) + 1;
        M2C_FIELD(arg1, s32 *, 0x14) = temp_v0_2;
        if (M2C_FIELD(arg0, s32 *, 8) != temp_v0_2) {
            return -0x49;
        }
        return 0;
    case -101:
        return -0x63;
    default:
        var_v0 = -0x3E;
block_13:
        return var_v0;
    case -50:
        var_v0 = -0x40;
        goto block_13;
    }
}
