/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];


M2C_UNK func_0012BBD0(s32, void *, s128, s128);     /* extern */

void func_001321F0(void *arg0, void *arg1) {
    s128 temp_a2;
    s128 temp_a3;
    void *var_s0;
    void *var_s1;

    var_s1 = M2C_FIELD(arg0, void **, 0);
    if (var_s1 != NULL) {
        var_s0 = arg1;
        do {
            temp_a3 = M2C_FIELD(var_s0, s128 *, 0);
            temp_a2 = M2C_FIELD(var_s0, s128 *, 0x10);
            M2C_FIELD(var_s1, s128 *, 0) = temp_a3;
            M2C_FIELD(var_s1, s128 *, 0x10) = temp_a2;
            M2C_FIELD(var_s1, s128 *, 0x20) = (s128) M2C_FIELD(var_s0, s128 *, 0x20);
            M2C_FIELD(var_s1, s128 *, 0x30) = (s128) M2C_FIELD(var_s0, s128 *, 0x30);
            func_0012BBD0(var_s1 + 0x60, var_s1, temp_a2, temp_a3);
            var_s1 = M2C_FIELD(var_s1, void **, 0x104);
            var_s0 += 0x40;
        } while (var_s1 != NULL);
    }
    M2C_FIELD(arg0, s8 *, 0x1D) = (s8) ((M2C_FIELD(arg0, s8 *, 0x1D) & ~0x3F) | 4);
}
