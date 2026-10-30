/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001CDAD0(void *arg0) {
    s32 *temp_a1;
    s32 temp_v1;
    s32 var_a3;
    s32 var_a4;
    u64 temp_a2;

    temp_a2 = (u64) ((s64) arg0 << 0x20) >> 0x20;
    M2C_FIELD(arg0, u32 *, 4) = (u32) ((s64) ((M2C_FIELD(arg0, u32 *, 4) + temp_a2) << 0x20) >> 0x20);
    var_a4 = 0;
    if (M2C_FIELD(arg0, s32 *, 0) > 0) {
        var_a3 = 0;
        do {
            temp_a1 = M2C_FIELD(arg0, u32 *, 4) + var_a3;
            temp_v1 = *temp_a1;
            if (temp_v1 != 0) {
                *temp_a1 = (s32) ((s64) ((temp_a2 + ((u64) ((s64) temp_v1 << 0x20) >> 0x20)) << 0x20) >> 0x20);
            }
            var_a4 += 1;
            var_a3 += 4;
        } while (var_a4 < M2C_FIELD(arg0, s32 *, 0));
    }
}
