/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_0065EF88;

s32 func_006271F0(s32 arg0, s32 arg1) {
    u8 var_v0;
    void *temp_a3;

    temp_a3 = D_0065EF88 + M2C_FIELD(D_0065EF88, s32 *, 0x154);
    switch (arg1) {                                 /* irregular */
    case 2:
        var_v0 = M2C_FIELD((((arg0 & 0xFFFF) * 0x7C) + (D_0065EF88 + M2C_FIELD(D_0065EF88, s32 *, 0x148))), u8 *, 0x32);
block_11:
        return var_v0 != 0;
    case 1:
        var_v0 = M2C_FIELD((((arg0 & 0xFFFF) * 0x7C) + temp_a3), u8 *, 0x32);
        goto block_11;
    case 3:
        var_v0 = M2C_FIELD((((arg0 & 0xFFFF) * 0x7C) + temp_a3), u8 *, 0x32);
        goto block_11;
    default:
        return 0;
    }
}
