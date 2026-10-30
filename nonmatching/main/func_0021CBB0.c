/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0021CBB0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a7;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_a6;
    s32 var_t2;
    s32 var_t3;
    s32 var_t8;
    s32 var_t9;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    void *var_t0;
    void *var_t1;

    temp_a7 = M2C_FIELD(arg0, s32 *, 0x18);
    var_t1 = M2C_FIELD(arg0, void **, 0x1C);
    if (arg1 != 2) {
        var_t3 = 0x2000;
    } else {
        var_t3 = 0x400;
    }
    var_v0 = 0;
    var_t9 = 0;
    var_t8 = 0;
    if (temp_a7 > 0) {
        var_t0 = var_t1;
        var_a6 = var_t3 >> 0xA;
        if (var_t3 < 0) {
            var_a6 = (s32) (var_t3 + 0x3FF) >> 0xA;
        }
        do {
            var_t2 = 0;
            if (M2C_FIELD(var_t1, s32 *, 0x18) != 0) {
                var_t2 = 1;
            }
            if (var_t2 != 0) {
                var_t9 += 1;
                var_v0 += ((s32) (M2C_FIELD(var_t0, s32 *, 0x1C) + (var_t3 - 1)) / var_t3) * var_a6;
            }
            var_t8 += 1;
            var_t1 += 0x20;
            var_t0 += 0x20;
        } while (var_t8 < temp_a7);
    }
    if (arg1 != 2) {
        var_a1 = 0;
        var_a0 = 0;
    } else {
        var_v1 = (var_t9 + 2) - arg2;
        if (var_v1 < 0) {
            var_v1 = 0;
        }
        temp_v1 = var_v1 + 1;
        var_a1 = temp_v1 >> 1;
        if (temp_v1 < 0) {
            var_a1 = (s32) (temp_v1 + 1) >> 1;
        }
        var_v1_2 = arg4 - arg3;
        if (var_v1_2 < 0) {
            var_v1_2 = 0;
        }
        temp_v1_2 = var_v1_2 + 1;
        var_a0 = temp_v1_2 >> 1;
        if (temp_v1_2 < 0) {
            var_a0 = (s32) (temp_v1_2 + 1) >> 1;
        }
    }
    return var_a0 + (var_v0 + var_a1);
}
