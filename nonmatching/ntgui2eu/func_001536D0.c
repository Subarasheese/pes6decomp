/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u32 func_00153ED8(s32);                             /* extern */
s32 func_00153F48(s32, s32);                        /* extern */

s32 func_001536D0(void *arg0, s32 arg1, u32 *arg2, s32 *arg3) {
    s32 temp_s2;
    s32 var_s0;
    s32 var_s1;
    u32 temp_hi;
    void *temp_s3;

    var_s1 = 0;
    temp_hi = func_00153ED8(arg1) % (u32) M2C_FIELD(arg0, u32 *, 0xC);
    temp_s3 = M2C_FIELD(arg0, s32 *, 0) + (temp_hi * 0x14);
    temp_s2 = M2C_FIELD(temp_s3, s32 *, 0xC);
    var_s0 = 0;
    if (temp_s2 > 0) {
loop_2:
        if (func_00153F48(arg1, M2C_FIELD(temp_s3, s32 *, 0) + var_s0) != 0) {
            *arg2 = temp_hi;
            *arg3 = var_s1;
            return 1;
        }
        var_s1 += 1;
        var_s0 += 0x4B0;
        if (var_s1 >= temp_s2) {
            goto block_5;
        }
        goto loop_2;
    }
block_5:
    *arg2 = -1U;
    *arg3 = -1;
    return 0;
}
