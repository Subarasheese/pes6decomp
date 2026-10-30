/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00132430(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4, s8 *arg5, s32 arg6, s32 arg7) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 var_a5;
    s32 var_s0;
    s32 var_s3;
    s32 var_s4;
    s32 var_s7;
    s32 var_t2;
    s32 var_t9;
    s32 var_v1;
    s8 *var_s1;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t1;
    void *temp_t1_2;
    void *temp_t3;
    void *temp_t3_2;
    void *temp_t8;
    void *temp_t8_2;
    void *var_a4;
    void *var_fp;
    void *var_s2;
    void *var_t0;
    void *var_t1;
    void *var_t3;
    void *var_t8;

    var_a4 = arg4;
    var_v1 = 0;
    sp4 = arg1;
    var_s1 = arg5;
    sp0 = arg0;
    sp8 = arg6;
    spC = arg7;
    if (arg1 > 0) {
        do {
            var_t8 = var_a4;
            var_a5 = 0;
            var_t0 = var_a4 + spC;
            var_t3 = var_t0;
            var_t1 = var_t0;
            if (sp0 > 0) {
                var_s7 = var_v1 + 1;
                var_fp = var_a4 + sp8;
                do {
                    var_s4 = 1;
                    temp_t3 = var_t3 + 1;
                    temp_t8 = var_t8 + 1;
                    temp_t0 = var_t0 + 1;
                    temp_t1 = var_t1 + 1;
                    var_s0 = M2C_FIELD(var_t8, u8 *, 0) + M2C_FIELD(var_t3, u8 *, 0) + M2C_FIELD(var_t0, u8 *, 0) + M2C_FIELD(var_t1, u8 *, 0);
                    var_t9 = M2C_FIELD(var_t8, u8 *, 1) + M2C_FIELD(var_t3, u8 *, 1) + M2C_FIELD(var_t0, u8 *, 1) + M2C_FIELD(var_t1, u8 *, 1);
                    var_t2 = M2C_FIELD(temp_t8, u8 *, 1) + M2C_FIELD(temp_t3, u8 *, 1) + M2C_FIELD(temp_t0, u8 *, 1) + M2C_FIELD(temp_t1, u8 *, 1);
                    var_t8 = temp_t8 + 1 + 1;
                    var_t3 = temp_t3 + 1 + 1;
                    var_t0 = temp_t0 + 1 + 1;
                    var_t1 = temp_t1 + 1 + 1;
                    if (arg3 > 1) {
                        var_s3 = var_a5 + 1;
                        var_s2 = var_s1 + 1;
                        do {
                            var_s4 += 1;
                            temp_t8_2 = var_t8 + 1;
                            temp_t3_2 = var_t3 + 1;
                            temp_t0_2 = var_t0 + 1;
                            temp_t1_2 = var_t1 + 1;
                            var_t2 = var_t2 + M2C_FIELD(temp_t8_2, u8 *, 1) + M2C_FIELD(temp_t3_2, u8 *, 1) + M2C_FIELD(temp_t0_2, u8 *, 1) + M2C_FIELD(temp_t1_2, u8 *, 1);
                            var_s0 = var_s0 + M2C_FIELD(var_t8, u8 *, 0) + M2C_FIELD(var_t3, u8 *, 0) + M2C_FIELD(var_t0, u8 *, 0) + M2C_FIELD(var_t1, u8 *, 0);
                            var_t9 = var_t9 + M2C_FIELD(var_t8, u8 *, 1) + M2C_FIELD(var_t3, u8 *, 1) + M2C_FIELD(var_t0, u8 *, 1) + M2C_FIELD(var_t1, u8 *, 1);
                            var_t8 = temp_t8_2 + 1 + 1;
                            var_t3 = temp_t3_2 + 1 + 1;
                            var_t0 = temp_t0_2 + 1 + 1;
                            var_t1 = temp_t1_2 + 1 + 1;
                        } while (var_s4 < arg3);
                    } else {
                        var_s3 = var_a5 + 1;
                        var_s2 = var_s1 + 1;
                    }
                    *var_s1 = (s8) (var_s0 >> arg2);
                    var_a5 = var_s3;
                    M2C_FIELD(var_s2, s8 *, 0) = (s8) (var_t9 >> arg2);
                    M2C_FIELD(var_s2, s8 *, 1) = (s8) (var_t2 >> arg2);
                    var_s1 = var_s2 + 1 + 1;
                } while (var_a5 < sp0);
            } else {
                var_s7 = var_v1 + 1;
                var_fp = var_a4 + sp8;
            }
            var_v1 = var_s7;
            var_a4 = var_fp;
        } while (var_v1 < sp4);
    }
}
