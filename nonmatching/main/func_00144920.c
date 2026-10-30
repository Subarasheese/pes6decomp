/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];


void *func_00144920(void *arg0, s32 arg1, s128 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s128 *temp_v1_2;
    s128 *var_a2;
    s128 *var_t0;
    s32 temp_a3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a4;
    s32 var_a7;
    s32 var_t1;
    void *temp_v1;

    var_a2 = arg2;
    temp_v1_2 = arg0 + 0x10;
    var_t0 = temp_v1_2;
    var_a7 = 0;
    M2C_FIELD(arg0, u64 *, 0) = (u64) ((u64) (((((u32) (arg1 + 0x20) >> 4) - 1) | 0x10000000) << 0x20) >> 0x20);
    M2C_FIELD(arg0, s32 *, 8) = arg3;
    M2C_FIELD(arg0, s32 *, 0xC) = arg4;
    if (arg1 > 0) {
        temp_a3 = arg1 + 0xF;
        var_a0 = temp_a3 >> 4;
        if (temp_a3 < 0) {
            var_a0 = (s32) (temp_a3 + 0xF) >> 4;
        }
        if (var_a0 >= 9) {
            var_t1 = 0;
            var_a0_2 = 0;
            if ((arg1 >= 0) && (arg1 < 0x7FFFFFF0)) {
                var_a0_2 = 1;
            }
            if (var_a0_2 != 0) {
                var_a4 = 1;
                if (!(arg1 & 0x80000000) && ((arg1 + 0xF) & 0x80000000)) {
                    var_a4 = 0;
                }
                if (var_a4 != 0) {
                    var_t1 = 1;
                }
            }
            if (var_t1 != 0) {
                do {
                    var_a7 += 0x80;
                    M2C_FIELD(var_t0, s128 *, 0) = M2C_FIELD(var_a2, s128 *, 0);
                    M2C_FIELD(var_t0, s128 *, 0x10) = (s128) M2C_FIELD(var_a2, s128 *, 0x10);
                    M2C_FIELD(var_t0, s128 *, 0x20) = (s128) M2C_FIELD(var_a2, s128 *, 0x20);
                    M2C_FIELD(var_t0, s128 *, 0x30) = (s128) M2C_FIELD(var_a2, s128 *, 0x30);
                    M2C_FIELD(var_t0, s128 *, 0x40) = (s128) M2C_FIELD(var_a2, s128 *, 0x40);
                    M2C_FIELD(var_t0, s128 *, 0x50) = (s128) M2C_FIELD(var_a2, s128 *, 0x50);
                    M2C_FIELD(var_t0, s128 *, 0x60) = (s128) M2C_FIELD(var_a2, s128 *, 0x60);
                    M2C_FIELD(var_t0, s128 *, 0x70) = (s128) M2C_FIELD(var_a2, s128 *, 0x70);
                    var_a2 += 0x80;
                    var_t0 += 0x80;
                } while (var_a7 < (arg1 - 0x80));
            }
        }
        if (var_a7 < arg1) {
            do {
                var_a7 += 0x10;
                *var_t0 = *var_a2;
                var_a2 += 0x10;
                var_t0 += 0x10;
            } while (var_a7 < arg1);
        }
    }
    temp_v1 = temp_v1_2 + arg1;
    M2C_FIELD(temp_v1, s32 *, 0) = arg5;
    M2C_FIELD(temp_v1, s32 *, 4) = arg6;
    M2C_FIELD(temp_v1, s64 *, 8) = 0;
    return temp_v1 + 0x10;
}
