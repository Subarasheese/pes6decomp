/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00110FB8(void *);                      /* extern */
M2C_UNK func_0019B140(s32);                         /* extern */
M2C_UNK func_0019B160(s32);                         /* extern */
M2C_UNK func_001AE624(s32, s32, s32);               /* extern */

s32 func_00110E88(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s4;
    s32 temp_s6;
    s32 var_v0;

    var_v0 = 0;
    if (arg2 != 0) {
        func_0019B160(M2C_FIELD(arg0, s32 *, 0x10));
        temp_s4 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (M2C_FIELD(arg0, s32 *, 8) < arg2) {
            func_0019B140(M2C_FIELD(arg0, s32 *, 0x10));
            return 0;
        }
        temp_s2 = M2C_FIELD(arg0, s32 *, 0xC);
        temp_s0 = temp_s4 - temp_s2;
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x20) + temp_s2;
        temp_s6 = arg2 - temp_s0;
        if (temp_s0 >= arg2) {
            func_001AE624(arg1, temp_a1, arg2);
            if (arg3 == 0) {
                M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((s32) (temp_s2 + arg2) % temp_s4);
                goto block_8;
            }
        } else {
            func_001AE624(arg1, temp_a1, temp_s0);
            func_001AE624(arg1 + temp_s0, M2C_FIELD(arg0, s32 *, 0x20), temp_s6);
            if (arg3 == 0) {
                M2C_FIELD(arg0, s32 *, 0xC) = temp_s6;
block_8:
                M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - arg2);
            }
        }
        func_00110FB8(arg0);
        func_0019B140(M2C_FIELD(arg0, s32 *, 0x10));
        var_v0 = 1;
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
