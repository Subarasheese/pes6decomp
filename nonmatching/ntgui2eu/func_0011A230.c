/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];


void func_0011A230(s128 *arg0, s128 *arg1, s32 arg2) {
    s128 *var_a3;
    s128 *var_a5;
    s128 temp_a0_2;
    s128 temp_a1;
    s128 temp_v0;
    s128 temp_v0_2;
    s128 temp_v1;
    s32 temp_a0;
    s32 var_a2;
    s32 var_a2_2;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_a5;
    void *temp_a5_2;

    var_a5 = arg0;
    temp_a0 = (s32) ((arg2 < 0) ? (arg2 + 3) : arg2) >> 2;
    var_a2 = (arg2 - (temp_a0 * 4)) - 1;
    var_a3 = arg1;
    if (var_a2 != -1) {
        do {
            temp_v0 = *var_a3;
            var_a3 += 0x10;
            var_a2 -= 1;
            *var_a5 = temp_v0;
            var_a5 += 0x10;
        } while (var_a2 != -1);
    }
    var_a2_2 = temp_a0 - 1;
    if (temp_a0 != 0) {
        do {
            temp_v0_2 = M2C_FIELD(var_a3, s128 *, 0);
            temp_a3 = var_a3 + 0x10;
            temp_v1 = M2C_FIELD(var_a3, s128 *, 0x10);
            temp_a3_2 = temp_a3 + 0x10;
            temp_a0_2 = M2C_FIELD(temp_a3, s128 *, 0x10);
            temp_a1 = M2C_FIELD(temp_a3_2, s128 *, 0x10);
            var_a3 = temp_a3_2 + 0x10 + 0x10;
            M2C_FIELD(var_a5, s128 *, 0) = temp_v0_2;
            temp_a5 = var_a5 + 0x10;
            M2C_FIELD(var_a5, s128 *, 0x10) = temp_v1;
            temp_a5_2 = temp_a5 + 0x10;
            M2C_FIELD(temp_a5, s128 *, 0x10) = temp_a0_2;
            var_a2_2 -= 1;
            M2C_FIELD(temp_a5_2, s128 *, 0x10) = temp_a1;
            var_a5 = temp_a5_2 + 0x10 + 0x10;
        } while (var_a2_2 != -1);
    }
}
