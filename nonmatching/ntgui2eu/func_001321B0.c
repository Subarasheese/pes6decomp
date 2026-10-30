/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001321B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4, s8 *arg5, s32 arg6) {
    s32 var_a1;
    s32 var_t0;
    s32 var_t3;
    s32 var_t9;
    s32 var_v1;
    s8 *var_a5;
    u8 temp_v0;
    u8 var_t1;
    u8 var_t2;
    u8 var_t8;
    void *temp_a7;
    void *temp_a7_2;
    void *var_a4;
    void *var_a7;
    void *var_t0_2;

    var_a4 = arg4;
    var_a5 = arg5;
    var_v1 = 0;
    if (arg1 > 0) {
        var_a7 = var_a4;
        do {
            var_t0 = 0;
            if (arg0 > 0) {
                var_a4 += arg6;
                var_a1 = var_v1 + 1;
                do {
                    var_t8 = M2C_FIELD(var_a7, u8 *, 0);
                    var_t3 = 1;
                    temp_a7 = var_a7 + 1;
                    var_t1 = M2C_FIELD(var_a7, u8 *, 1);
                    var_t2 = M2C_FIELD(temp_a7, u8 *, 1);
                    var_a7 = temp_a7 + 1 + 1;
                    if (arg3 > 1) {
                        var_t9 = var_t0 + 1;
                        var_t0_2 = var_a5 + 1;
                        do {
                            var_t3 += 1;
                            temp_a7_2 = var_a7 + 1;
                            var_t8 += M2C_FIELD(var_a7, u8 *, 0);
                            temp_v0 = M2C_FIELD(temp_a7_2, u8 *, 1);
                            var_t1 += M2C_FIELD(var_a7, u8 *, 1);
                            var_a7 = temp_a7_2 + 1 + 1;
                            var_t2 += temp_v0;
                        } while (var_t3 < arg3);
                    } else {
                        var_t9 = var_t0 + 1;
                        var_t0_2 = var_a5 + 1;
                    }
                    *var_a5 = (s8) ((s32) var_t8 >> arg2);
                    M2C_FIELD(var_t0_2, s8 *, 0) = (s8) ((s32) var_t1 >> arg2);
                    var_t0 = var_t9;
                    M2C_FIELD(var_t0_2, s8 *, 1) = (s8) ((s32) var_t2 >> arg2);
                    var_a5 = var_t0_2 + 1 + 1;
                } while (var_t0 < arg0);
            } else {
                var_a4 += arg6;
                var_a1 = var_v1 + 1;
            }
            var_v1 = var_a1;
            var_a7 = var_a4;
        } while (var_v1 < arg1);
    }
}
