/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00110FB8(void *);                      /* extern */
M2C_UNK func_0019B140(s32);                         /* extern */
M2C_UNK func_0019B160(s32);                         /* extern */
M2C_UNK func_001AE624(s32, s32, s32);               /* extern */

s32 func_00110D40(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s0;
    s32 temp_s3;
    s32 var_s5;

    var_s5 = 0;
    if (arg2 != 0) {
        func_0019B160(M2C_FIELD(arg0, s32 *, 0x10));
        temp_s3 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (temp_s3 < arg2) {
            func_0019B140(M2C_FIELD(arg0, s32 *, 0x10));
            return 1;
        }
        if ((temp_s3 - M2C_FIELD(arg0, s32 *, 8)) < arg2) {
            M2C_FIELD(arg0, s32 *, 0) = arg2;
            var_s5 = 1;
        }
        func_0019B140(M2C_FIELD(arg0, s32 *, 0x10));
        if (var_s5 == 1) {
            func_0019B160(M2C_FIELD(arg0, s32 *, 0x14));
        }
        func_0019B160(M2C_FIELD(arg0, s32 *, 0x10));
        temp_a1 = M2C_FIELD(arg0, s32 *, 0xC) + M2C_FIELD(arg0, s32 *, 8);
        temp_a1_2 = (temp_s3 < temp_a1) ? (temp_a1 - temp_s3) : temp_a1;
        temp_s0 = temp_s3 - temp_a1_2;
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x20);
        if (temp_s0 >= arg2) {
            func_001AE624(temp_a0 + temp_a1_2, arg1, arg2);
        } else {
            func_001AE624(temp_a0 + temp_a1_2, arg1, temp_s0);
            func_001AE624(M2C_FIELD(arg0, s32 *, 0x20), arg1 + temp_s0, arg2 - temp_s0);
        }
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + arg2);
        func_00110FB8(arg0);
        func_0019B140(M2C_FIELD(arg0, s32 *, 0x10));
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
