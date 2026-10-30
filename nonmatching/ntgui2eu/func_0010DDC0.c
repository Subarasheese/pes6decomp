/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019DBD0(M2C_UNK *, u8, u8, u8, u8);   /* extern */
extern char D_005F7F90[];

s32 func_0010DDC0(void *arg0, M2C_UNK arg1, u8 arg2) {
    s32 var_a0;
    u8 temp_a0;
    u8 temp_a1;
    u8 temp_v1;
    u8 var_a2;

    var_a2 = arg2;
    temp_a1 = M2C_FIELD(arg0, u8 *, 0);
    if ((temp_a1 == 0x54) || (var_a2 = M2C_FIELD(arg0, u8 *, 1), (var_a2 == 0x49)) || (temp_a0 = M2C_FIELD(arg0, u8 *, 2), (temp_a0 == 0x4D)) || (M2C_FIELD(arg0, u8 *, 3) == 0x32)) {
        var_a0 = 1;
        goto block_10;
    }
    if ((temp_a1 != 0x43) && (var_a2 != 0x4C) && (temp_a0 != 0x54)) {
        func_0019DBD0(((void *)D_005F7F90), M2C_FIELD(arg0, u8 *, 0), M2C_FIELD(arg0, u8 *, 1), M2C_FIELD(arg0, u8 *, 2), M2C_FIELD(arg0, u8 *, 3));
        return 0;
    }
    var_a0 = 2;
block_10:
    temp_v1 = M2C_FIELD(arg0, u8 *, 4);
    if (temp_v1 != 3) {
        if ((temp_v1 != 4) || ((u8) M2C_FIELD(arg0, u8 *, 5) >= 2U)) {
            func_0019DBD0((M2C_UNK *)0x5F7FC8, temp_a1, var_a2, (u8) arg0, 0x54U);
            return 0;
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return var_a0;
    }
    return var_a0;
}
