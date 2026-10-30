/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00843F70(M2C_UNK);                     /* extern */
extern char D_008B1618[];
extern char D_008B1638[];

s32 func_00853470(s32 arg0, M2C_UNK (*arg1)(), s32 arg2, u32 arg3) {
    M2C_UNK *var_s0;

    if (arg3 < 4U) {
        var_s0 = ((void *)D_008B1638);
    } else {
        var_s0 = ((void *)D_008B1618);
    }
    if (M2C_FIELD(var_s0, M2C_UNK (**)(), 0xC) != NULL) {
        if (arg3 >= (u32) M2C_FIELD(var_s0, u32 *, 4)) {
            func_00843F70(-9);
            M2C_FIELD(var_s0, s8 *, 9) = 0;
            goto block_9;
        }
        return -1;
    }
block_9:
    M2C_FIELD(var_s0, s32 *, 0) = arg0;
    M2C_FIELD(var_s0, M2C_UNK (**)(), 0xC) = arg1;
    M2C_FIELD(var_s0, s32 *, 0x10) = arg2;
    M2C_FIELD(var_s0, u32 *, 4) = arg3;
    M2C_FIELD(var_s0, s8 *, 8) = 1;
    arg1();
    M2C_FIELD(var_s0, s8 *, 9) = 1;
    return 0;
}
