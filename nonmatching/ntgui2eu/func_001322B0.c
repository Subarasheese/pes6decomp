/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001322B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4, s8 *arg5, s32 arg6, s32 arg7) {
    s32 var_a1;
    s32 var_a4_2;
    s32 var_a6;
    s32 var_a7;
    s32 var_t2;
    s32 var_t3;
    s32 var_t8;
    s32 var_v1;
    s8 *var_a5;
    u8 temp_t2;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t1;
    void *temp_t1_2;
    void *var_a4;
    void *var_s2;
    void *var_t0;
    void *var_t1;
    void *var_t9;

    var_a4 = arg4;
    var_a5 = arg5;
    var_v1 = 0;
    if (arg1 > 0) {
        do {
            var_t1 = var_a4;
            var_t0 = var_a4 + arg7;
            var_a1 = 0;
            if (arg0 > 0) {
                var_s2 = var_a4 + arg6;
                var_a7 = var_v1 + 1;
                do {
                    var_a6 = 1;
                    temp_t1 = var_t1 + 1;
                    temp_t0 = var_t0 + 1;
                    temp_t2 = M2C_FIELD(temp_t1, u8 *, 1);
                    var_t8 = M2C_FIELD(var_t1, u8 *, 0) + M2C_FIELD(var_t0, u8 *, 0);
                    var_t3 = M2C_FIELD(var_t1, u8 *, 1) + M2C_FIELD(var_t0, u8 *, 1);
                    var_t1 = temp_t1 + 1 + 1;
                    var_t2 = temp_t2 + M2C_FIELD(temp_t0, u8 *, 1);
                    var_t0 = temp_t0 + 1 + 1;
                    if (arg3 > 1) {
                        var_a4_2 = var_a1 + 1;
                        var_t9 = var_a5 + 1;
                        do {
                            var_a6 += 1;
                            temp_t1_2 = var_t1 + 1;
                            temp_t0_2 = var_t0 + 1;
                            var_t8 = var_t8 + M2C_FIELD(var_t1, u8 *, 0) + M2C_FIELD(var_t0, u8 *, 0);
                            var_t3 = var_t3 + M2C_FIELD(var_t1, u8 *, 1) + M2C_FIELD(var_t0, u8 *, 1);
                            var_t2 = var_t2 + M2C_FIELD(temp_t1_2, u8 *, 1) + M2C_FIELD(temp_t0_2, u8 *, 1);
                            var_t1 = temp_t1_2 + 1 + 1;
                            var_t0 = temp_t0_2 + 1 + 1;
                        } while (var_a6 < arg3);
                    } else {
                        var_a4_2 = var_a1 + 1;
                        var_t9 = var_a5 + 1;
                    }
                    *var_a5 = (s8) (var_t8 >> arg2);
                    var_a1 = var_a4_2;
                    M2C_FIELD(var_t9, s8 *, 0) = (s8) (var_t3 >> arg2);
                    M2C_FIELD(var_t9, s8 *, 1) = (s8) (var_t2 >> arg2);
                    var_a5 = var_t9 + 1 + 1;
                } while (var_a1 < arg0);
            } else {
                var_s2 = var_a4 + arg6;
                var_a7 = var_v1 + 1;
            }
            var_v1 = var_a7;
            var_a4 = var_s2;
        } while (var_v1 < arg1);
    }
}
