/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001EB420(void *arg0, s64 *arg1, s32 arg2) {
    s32 var_a2;
    s64 *var_a1;
    s64 temp_v1;
    void *var_a0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = arg2;
    if (var_a2 != 0) {
        do {
            var_a2 -= 1;
            temp_v1 = ((s64) M2C_FIELD(var_a0, s32 *, 8) << 0x20) | (((s64) (((M2C_FIELD(var_a0, s32 *, 0) & ~0xF) - 1) << 0x20) >> 0x20) | (((s64) (((M2C_FIELD(var_a0, s32 *, 4) & ~0xF) - 1) << 0x20) >> 0x20) << 0x10));
            var_a0 += 0x10;
            *var_a1 = temp_v1;
            var_a1 += 8;
        } while (var_a2 != 0);
    }
}
