/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_0018AB40(s32, s64);                        /* extern */

void func_00189948(void *arg0, void *arg1, void *arg2, void *arg3) {
    u32 var_s5;
    u8 temp_a0;
    u8 temp_s0;
    u8 temp_s0_2;
    u8 temp_s0_3;
    u8 temp_s0_4;
    void *var_s1;
    void *var_s2;
    void *var_s3;

    var_s5 = 0;
    var_s3 = arg3;
    var_s2 = arg2;
    var_s1 = arg1;
    do {
        temp_s0 = M2C_FIELD(var_s2, u8 *, 0);
        var_s5 += 1;
        M2C_FIELD(var_s1, s8 *, 0) = (s8) (temp_s0 + ((func_0018AB40(M2C_FIELD(var_s3, u8 *, 0) - temp_s0, M2C_FIELD(arg0, s64 *, 0x18)) >> 0x10) & 0xFF));
        temp_s0_2 = M2C_FIELD(var_s2, u8 *, 1);
        M2C_FIELD(var_s1, s8 *, 1) = (s8) (temp_s0_2 + ((func_0018AB40(M2C_FIELD(var_s3, u8 *, 1) - temp_s0_2, M2C_FIELD(arg0, s64 *, 0x18)) >> 0x10) & 0xFF));
        temp_s0_3 = M2C_FIELD(var_s2, u8 *, 2);
        M2C_FIELD(var_s1, s8 *, 2) = (s8) (temp_s0_3 + ((func_0018AB40(M2C_FIELD(var_s3, u8 *, 2) - temp_s0_3, M2C_FIELD(arg0, s64 *, 0x18)) >> 0x10) & 0xFF));
        temp_s0_4 = M2C_FIELD(var_s2, u8 *, 3);
        temp_a0 = M2C_FIELD(var_s3, u8 *, 3);
        var_s2 += 4;
        var_s3 += 4;
        M2C_FIELD(var_s1, s8 *, 3) = (s8) (temp_s0_4 + ((func_0018AB40(temp_a0 - temp_s0_4, M2C_FIELD(arg0, s64 *, 0x18)) >> 0x10) & 0xFF));
        var_s1 += 4;
    } while (var_s5 < 4U);
}
