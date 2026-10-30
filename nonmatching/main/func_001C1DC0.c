/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 memchr(s32, M2C_UNK, u32);               /* extern */
M2C_UNK func_001C4730(s8 *, s32, u32);              /* extern */
s32 func_001C7200(void *);                          /* extern */

s8 *func_001C1DC0(s8 *arg0, s32 arg1, void *arg2) {
    s32 temp_s2;
    s32 temp_v1;
    s32 temp_v1_2;
    s8 *temp_a0;
    s8 *var_s4;
    u32 temp_s0;
    u32 temp_s0_2;
    u32 var_s3;

    var_s3 = arg1 - 1;
    var_s4 = arg0;
    if (arg1 < 2) {
        return NULL;
    }
loop_5:
    if (M2C_FIELD(arg2, u32 *, 4) == 0) {
        if (func_001C7200(arg2) == 0) {
            goto block_12;
        }
        if (var_s4 == arg0) {
            return NULL;
        }
        goto block_14;
    }
block_12:
    temp_s2 = M2C_FIELD(arg2, s32 *, 0);
    temp_s0 = (var_s3 < M2C_FIELD(arg2, u32 *, 4)) ? var_s3 : M2C_FIELD(arg2, u32 *, 4);
    temp_a0 = var_s4;
    temp_v1 = memchr(temp_s2, 0xA, temp_s0);
    var_s3 -= temp_s0;
    if (temp_v1 == 0) {
        var_s4 = &var_s4[temp_s0];
        M2C_FIELD(arg2, u32 *, 4) = (u32) (M2C_FIELD(arg2, u32 *, 4) - temp_s0);
        M2C_FIELD(arg2, s32 *, 0) = (s32) (M2C_FIELD(arg2, s32 *, 0) + temp_s0);
        func_001C4730(temp_a0, temp_s2, temp_s0);
        if (var_s3 == 0) {
block_14:
            *var_s4 = 0;
            goto block_15;
        }
        goto loop_5;
    }
    temp_v1_2 = temp_v1 + 1;
    temp_s0_2 = temp_v1_2 - temp_s2;
    M2C_FIELD(arg2, s32 *, 0) = temp_v1_2;
    M2C_FIELD(arg2, u32 *, 4) = (u32) (M2C_FIELD(arg2, u32 *, 4) - temp_s0_2);
    func_001C4730(var_s4, temp_s2, temp_s0_2);
    var_s4[temp_s0_2] = 0;
block_15:
    return arg0;
}
