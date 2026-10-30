/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0012DF30(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a4;
    s32 temp_a4_3;
    s32 temp_a5;
    s32 temp_a7_2;
    s32 var_a3;
    s32 var_a4;
    s32 var_a5;
    s32 var_a6;
    void *temp_a4_2;
    void *temp_a6;
    void *temp_a6_2;
    void *temp_a7;
    void *temp_t0;
    void *temp_t1;
    void *temp_t2;
    void *var_a0;

    var_a0 = arg0;
    var_a3 = 0;
    if (arg1 > 0) {
        if (arg1 >= 9) {
            var_a6 = 0;
            var_a4 = 0;
            if ((arg1 >= 0) && (arg1 < 0x7FFFFFFF)) {
                var_a4 = 1;
            }
            if (var_a4 != 0) {
                temp_a4 = arg1 & 0x80000000;
                var_a5 = 1;
                if ((temp_a4 == 0) && (temp_a4 != 0)) {
                    var_a5 = 0;
                }
                if (var_a5 != 0) {
                    var_a6 = 1;
                }
            }
            if (var_a6 != 0) {
                do {
                    M2C_FIELD(var_a0, s32 *, 0) = -1;
                    temp_a7 = var_a0 + arg2;
                    M2C_FIELD(var_a0, s32 *, 4) = var_a3;
                    temp_a4_2 = temp_a7 + arg2;
                    M2C_FIELD(var_a0, s32 *, 8) = -1;
                    temp_a6 = temp_a4_2 + arg2;
                    M2C_FIELD(temp_a7, s32 *, 0) = -1;
                    M2C_FIELD(temp_a7, s32 *, 4) = (s32) (var_a3 + 1);
                    temp_t2 = temp_a6 + arg2;
                    M2C_FIELD(temp_a7, s32 *, 8) = -1;
                    temp_t1 = temp_t2 + arg2;
                    M2C_FIELD(temp_a4_2, s32 *, 0) = -1;
                    M2C_FIELD(temp_a4_2, s32 *, 4) = (s32) (var_a3 + 2);
                    M2C_FIELD(temp_a4_2, s32 *, 8) = -1;
                    M2C_FIELD(temp_a6, s32 *, 0) = -1;
                    temp_a4_3 = var_a3 + 5;
                    M2C_FIELD(temp_a6, s32 *, 4) = (s32) (var_a3 + 3);
                    temp_t0 = temp_t1 + arg2;
                    M2C_FIELD(temp_a6, s32 *, 8) = -1;
                    temp_a7_2 = var_a3 + 6;
                    M2C_FIELD(temp_t2, s32 *, 0) = -1;
                    temp_a5 = var_a3 + 7;
                    M2C_FIELD(temp_t2, s32 *, 4) = (s32) (var_a3 + 4);
                    temp_a6_2 = temp_t0 + arg2;
                    M2C_FIELD(temp_t2, s32 *, 8) = -1;
                    var_a3 += 8;
                    M2C_FIELD(temp_t1, s32 *, 0) = -1;
                    var_a0 = temp_a6_2 + arg2;
                    M2C_FIELD(temp_t1, s32 *, 4) = temp_a4_3;
                    M2C_FIELD(temp_t1, s32 *, 8) = -1;
                    M2C_FIELD(temp_t0, s32 *, 0) = -1;
                    M2C_FIELD(temp_t0, s32 *, 4) = temp_a7_2;
                    M2C_FIELD(temp_t0, s32 *, 8) = -1;
                    M2C_FIELD(temp_a6_2, s32 *, 0) = -1;
                    M2C_FIELD(temp_a6_2, s32 *, 4) = temp_a5;
                    M2C_FIELD(temp_a6_2, s32 *, 8) = -1;
                } while (var_a3 < (arg1 - 8));
            }
        }
        if (var_a3 < arg1) {
            do {
                M2C_FIELD(var_a0, s32 *, 0) = -1;
                M2C_FIELD(var_a0, s32 *, 4) = var_a3;
                var_a3 += 1;
                M2C_FIELD(var_a0, s32 *, 8) = -1;
                var_a0 += arg2;
            } while (var_a3 < arg1);
        }
    }
}
