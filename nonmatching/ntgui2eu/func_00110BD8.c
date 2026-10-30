/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00110FB8(void *);                      /* extern */
M2C_UNK func_0019B140(s32);                         /* extern */
M2C_UNK func_0019B160(s32);                         /* extern */
M2C_UNK func_001AE624(s32, s32, s32);               /* extern */

s32 func_00110BD8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s4;
    s32 var_s2;

    var_s2 = 0;
    if (arg2 != 0) {
        func_0019B160(M2C_FIELD(arg0, s32 *, 0x10));
        temp_s4 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (temp_s4 >= arg2) {
            if (M2C_FIELD(arg0, s32 *, 8) < arg2) {
                M2C_FIELD(arg0, s32 *, 4) = arg2;
                var_s2 = 1;
            }
            func_0019B140(M2C_FIELD(arg0, s32 *, 0x10));
            if (var_s2 == 1) {
                func_0019B160(M2C_FIELD(arg0, s32 *, 0x18));
            }
            func_0019B160(M2C_FIELD(arg0, s32 *, 0x10));
            temp_s2 = M2C_FIELD(arg0, s32 *, 0xC);
            temp_s1 = temp_s4 - temp_s2;
            temp_a1 = M2C_FIELD(arg0, s32 *, 0x20);
            if (temp_s1 >= arg2) {
                func_001AE624(arg1, temp_a1 + temp_s2, arg2);
                if (arg3 == 0) {
                    M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((s32) (temp_s2 + arg2) % temp_s4);
                    goto block_14;
                }
            } else {
                temp_s2_2 = arg2 - temp_s1;
                func_001AE624(arg1, temp_a1 + temp_s2, temp_s1);
                func_001AE624(arg1 + temp_s1, M2C_FIELD(arg0, s32 *, 0x20), temp_s2_2);
                if (arg3 == 0) {
                    M2C_FIELD(arg0, s32 *, 0xC) = temp_s2_2;
block_14:
                    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - arg2);
                }
            }
            func_00110FB8(arg0);
            func_0019B140(M2C_FIELD(arg0, s32 *, 0x10));
            /* Duplicate return node #16. Try simplifying control flow for better match */
            return 0;
        }
        func_0019B140(M2C_FIELD(arg0, s32 *, 0x10));
        return 1;
    }
    return 0;
}
