/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00132680(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4, void *arg5, s32 arg6, s32 arg7, s32 arg_sp0) {
    s32 var_a0;
    s32 var_a1;
    s32 var_a4_2;
    s32 var_t9;
    s32 var_v1;
    u8 temp_v0;
    u8 var_t1;
    u8 var_t2;
    u8 var_t3;
    void *temp_t0;
    void *temp_t0_2;
    void *var_a2;
    void *var_a4;
    void *var_a5;
    void *var_a6;
    void *var_t0;
    void *var_t8;

    var_a4 = arg4;
    var_a5 = arg5;
    var_a0 = 0;
    if (arg1 > 0) {
        do {
            var_t0 = var_a4;
            var_t8 = var_a5;
            var_v1 = 0;
            if (arg0 > 0) {
                var_a6 = var_a4 + arg6;
                var_a5 += arg7;
                var_a4_2 = var_a0 + 1;
                do {
                    var_t3 = M2C_FIELD(var_t0, u8 *, 0);
                    var_t9 = 1;
                    temp_t0 = var_t0 + 1;
                    var_t1 = M2C_FIELD(var_t0, u8 *, 1);
                    var_t2 = M2C_FIELD(temp_t0, u8 *, 1);
                    var_t0 = temp_t0 + 1 + 1;
                    if (arg3 > 1) {
                        var_a1 = var_v1 + 1;
                        var_a2 = var_t8 + arg_sp0;
                        do {
                            var_t9 += 1;
                            temp_t0_2 = var_t0 + 1;
                            var_t3 += M2C_FIELD(var_t0, u8 *, 0);
                            temp_v0 = M2C_FIELD(temp_t0_2, u8 *, 1);
                            var_t1 += M2C_FIELD(var_t0, u8 *, 1);
                            var_t0 = temp_t0_2 + 1 + 1;
                            var_t2 += temp_v0;
                        } while (var_t9 < arg3);
                    } else {
                        var_a1 = var_v1 + 1;
                        var_a2 = var_t8 + arg_sp0;
                    }
                    M2C_FIELD(var_t8, s8 *, 0) = (s8) ((s32) var_t3 >> arg2);
                    M2C_FIELD(var_t8, s8 *, 1) = (s8) ((s32) var_t1 >> arg2);
                    var_v1 = var_a1;
                    M2C_FIELD(var_t8, s8 *, 2) = (s8) ((s32) var_t2 >> arg2);
                    M2C_FIELD(var_t8, s8 *, 3) = 0xFF;
                    var_t8 = var_a2;
                } while (var_v1 < arg0);
            } else {
                var_a6 = var_a4 + arg6;
                var_a5 += arg7;
                var_a4_2 = var_a0 + 1;
            }
            var_a0 = var_a4_2;
            var_a4 = var_a6;
        } while (var_a0 < arg1);
    }
}
