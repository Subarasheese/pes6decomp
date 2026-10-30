/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001ADE68(s32, M2C_UNK);                    /* extern */
M2C_UNK func_001AE624(s32, s32, s32);               /* extern */
s32 func_001AF4A8(s32, s32, s32);                   /* extern */

s32 func_001B50F8(void *arg0) {
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s3;
    s32 var_v0;
    u8 *temp_v0_3;
    u8 *var_a0;
    u8 temp_v1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_a1 != (arg0 + 0x40)) {
        temp_s3 = M2C_FIELD(arg0, s32 *, 0x34);
        temp_s4 = temp_s3 * 2;
        temp_v0 = func_001AF4A8(M2C_FIELD(arg0, s32 *, 0x54), temp_a1, temp_s4);
        var_v0 = -1;
        if (temp_v0 != 0) {
            temp_s0 = temp_v0 + temp_s3;
            func_001AE624(temp_s0, temp_v0, temp_s3);
            M2C_FIELD(arg0, s32 *, 0) = temp_s0;
            M2C_FIELD(arg0, s32 *, 0x34) = temp_s4;
            var_v0 = 0;
            M2C_FIELD(arg0, s32 *, 0x30) = temp_v0;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_v0;
    }
    temp_v0_2 = func_001ADE68(M2C_FIELD(arg0, s32 *, 0x54), 0x400);
    var_v0 = -1;
    if (temp_v0_2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = temp_v0_2;
        M2C_FIELD(arg0, s32 *, 0x34) = 0x400;
        var_s3 = 2;
        temp_s1 = temp_v0_2 + 0x3FD;
        var_a0 = arg0 + 0x42;
        do {
            temp_v1 = *var_a0;
            var_a0 -= 1;
            temp_v0_3 = temp_s1 + var_s3;
            var_s3 -= 1;
            *temp_v0_3 = temp_v1;
        } while (var_s3 >= 0);
        M2C_FIELD(arg0, s32 *, 0) = temp_s1;
        return 0;
    }
    return var_v0;
}
