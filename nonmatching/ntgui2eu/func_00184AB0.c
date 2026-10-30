/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00184AB0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_v1;
    void *temp_a6;
    void *temp_a6_2;
    void *var_a6;

    if (arg1 != 1) {
        if (arg1 < 2) {
            var_a1 = -1;
            goto block_10;
        }
        if (arg1 != 2) {
            var_a1 = -1;
            if (arg1 != 3) {
                goto block_10;
            }
            var_a1 = 1;
            var_a0 = 1;
        } else {
            var_a1 = -1;
            var_a0 = 1;
        }
    } else {
        var_a1 = 1;
block_10:
        var_a0 = -1;
    }
    var_v1 = 7;
    M2C_FIELD(arg6, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + arg2);
    M2C_FIELD(arg6, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + arg3);
    var_a6 = arg6 + 0x20;
    do {
        var_v1 -= 1;
        M2C_FIELD(var_a6, s64 *, 0x10) = (s64) M2C_FIELD(var_a6, s64 *, -0x10);
        var_a6 += 0x20;
    } while (var_v1 >= 0);
    temp_v1 = (var_a0 * arg5) + arg3;
    temp_a0 = (var_a1 * arg4) + arg2;
    M2C_FIELD(var_a6, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + arg2);
    M2C_FIELD(var_a6, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + temp_v1);
    temp_a6 = var_a6 + 0x20;
    M2C_FIELD(temp_a6, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + temp_a0);
    M2C_FIELD(temp_a6, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + temp_v1);
    temp_a6_2 = temp_a6 + 0x20;
    M2C_FIELD(temp_a6_2, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + temp_a0);
    M2C_FIELD(temp_a6_2, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + arg3);
}
