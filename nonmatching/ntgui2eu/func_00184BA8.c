/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_00165208(s32, M2C_UNK);                    /* extern */
f32 func_00165280(s32);                             /* extern */

void func_00184BA8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6) {
    s32 temp_lo;
    s32 temp_s0;
    s32 var_s3;
    s32 var_s4;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s1_3;
    void *var_s1;

    if (arg1 != 1) {
        var_s4 = 0x8000;
        switch (arg1) {                             /* irregular */
        case 3:
            var_s4 = 0;
            break;
        case 2:
            var_s4 = 0x4000;
            break;
        }
    } else {
        var_s4 = -0x4000;
    }
    var_s3 = 0;
    M2C_FIELD(arg6, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + arg2);
    M2C_FIELD(arg6, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + arg3);
    temp_s1 = arg6 + 0x20;
    M2C_FIELD(temp_s1, s64 *, 0x10) = (s64) M2C_FIELD(temp_s1, s64 *, -0x10);
    temp_s1_2 = temp_s1 + 0x20;
    M2C_FIELD(temp_s1_2, s64 *, 0x10) = (s64) M2C_FIELD(temp_s1_2, s64 *, -0x10);
    temp_s1_3 = temp_s1_2 + 0x20;
    M2C_FIELD(temp_s1_3, s64 *, 0x10) = (s64) M2C_FIELD(temp_s1_3, s64 *, -0x10);
    var_s1 = temp_s1_3 + 0x20;
    do {
        temp_lo = (s32) (var_s3 << 0xE) / 7;
        var_s3 += 1;
        temp_s0 = var_s4 + temp_lo;
        M2C_FIELD(var_s1, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + (arg2 + (s32) ((f32) arg4 * func_00165280(temp_s0))));
        M2C_FIELD(var_s1, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + (arg3 + (s32) ((f32) arg5 * func_00165208(temp_s0, 7))));
        var_s1 += 0x20;
    } while (var_s3 < 8);
}
