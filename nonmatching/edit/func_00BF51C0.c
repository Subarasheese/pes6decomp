/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_00C042D0(void);
M2C_UNK func_00BF5660(void *, M2C_UNK);             /* extern */
s16 func_00C042E0(s32);                             /* extern */

void func_00BF51C0(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_s0;
    s32 var_s2;
    s32 var_v1;
    void *var_s3;

    temp_s0 = func_00C042D0() & 0xFFFF;
    var_s2 = 0;
    var_s3 = arg0;
    do {
        temp_a0 = var_s2 + (arg1 * 0xD);
        if (temp_a0 < temp_s0) {
            M2C_FIELD(var_s3, s16 *, 0x80) = func_00C042E0(temp_a0);
            func_00BF5660(var_s3, 0x11A);
        } else {
            M2C_FIELD(var_s3, s32 *, 0x7C) = 0;
        }
        var_s2 += 1;
        var_s3 += 0x88;
    } while (var_s2 < 0xD);
    M2C_FIELD(arg0, s32 *, 0x144C) = 0xD;
    M2C_FIELD(arg0, s32 *, 0x1454) = arg1;
    if ((temp_s0 % 13) == 0) {
        var_v1 = (temp_s0 / 13) + ((u32) temp_s0 >> 0x1F);
    } else {
        var_v1 = (temp_s0 / 13) + ((u32) temp_s0 >> 0x1F) + 1;
    }
    M2C_FIELD(arg0, s32 *, 0x1458) = var_v1;
}
