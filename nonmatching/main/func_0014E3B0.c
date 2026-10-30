/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0014E3B0(void *arg0, s32 arg1, s8 arg2, s8 arg3, s8 arg4) {
    s32 temp_v1;
    s32 var_a6;
    s32 var_a7;
    s32 var_t0;
    s32 var_v1;
    void *var_a0;

    var_a0 = arg0;
    var_t0 = 0;
    if (arg1 > 0) {
        if (arg1 >= 9) {
            var_a7 = 0;
            var_v1 = 0;
            if ((arg1 >= 0) && (arg1 < 0x7FFFFFFF)) {
                var_v1 = 1;
            }
            if (var_v1 != 0) {
                temp_v1 = arg1 & 0x80000000;
                var_a6 = 1;
                if ((temp_v1 == 0) && (temp_v1 != 0)) {
                    var_a6 = 0;
                }
                if (var_a6 != 0) {
                    var_a7 = 1;
                }
            }
            if (var_a7 != 0) {
                do {
                    M2C_FIELD(var_a0, s8 *, 0) = arg2;
                    var_t0 += 8;
                    M2C_FIELD(var_a0, s8 *, 1) = arg3;
                    M2C_FIELD(var_a0, s8 *, 2) = arg4;
                    M2C_FIELD(var_a0, s8 *, 4) = arg2;
                    M2C_FIELD(var_a0, s8 *, 5) = arg3;
                    M2C_FIELD(var_a0, s8 *, 6) = arg4;
                    M2C_FIELD(var_a0, s8 *, 8) = arg2;
                    M2C_FIELD(var_a0, s8 *, 9) = arg3;
                    M2C_FIELD(var_a0, s8 *, 0xA) = arg4;
                    M2C_FIELD(var_a0, s8 *, 0xC) = arg2;
                    M2C_FIELD(var_a0, s8 *, 0xD) = arg3;
                    M2C_FIELD(var_a0, s8 *, 0xE) = arg4;
                    M2C_FIELD(var_a0, s8 *, 0x10) = arg2;
                    M2C_FIELD(var_a0, s8 *, 0x11) = arg3;
                    M2C_FIELD(var_a0, s8 *, 0x12) = arg4;
                    M2C_FIELD(var_a0, s8 *, 0x14) = arg2;
                    M2C_FIELD(var_a0, s8 *, 0x15) = arg3;
                    M2C_FIELD(var_a0, s8 *, 0x16) = arg4;
                    M2C_FIELD(var_a0, s8 *, 0x18) = arg2;
                    M2C_FIELD(var_a0, s8 *, 0x19) = arg3;
                    M2C_FIELD(var_a0, s8 *, 0x1A) = arg4;
                    M2C_FIELD(var_a0, s8 *, 0x1C) = arg2;
                    M2C_FIELD(var_a0, s8 *, 0x1D) = arg3;
                    M2C_FIELD(var_a0, s8 *, 0x1E) = arg4;
                    var_a0 += 0x20;
                } while (var_t0 < (arg1 - 8));
            }
        }
        if (var_t0 < arg1) {
            do {
                M2C_FIELD(var_a0, s8 *, 0) = arg2;
                var_t0 += 1;
                M2C_FIELD(var_a0, s8 *, 1) = arg3;
                M2C_FIELD(var_a0, s8 *, 2) = arg4;
                var_a0 += 4;
            } while (var_t0 < arg1);
        }
    }
}
