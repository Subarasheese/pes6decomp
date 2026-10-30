/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00194160(void *arg0, s16 arg1, s16 arg2, s32 arg3) {
    s64 temp_a2;
    s64 var_v0;
    u64 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u64 *, 0x30);
    temp_a2 = ((s64) ((s64) arg2 << 0x30) >> 0x30) - ((u64) (((s64) (((temp_v0 >> 0x30) & 0x7FF) << 0x20) >> 0x20) + 1) >> 1);
    if ((arg3 << 0x10) != 0) {
        var_v0 = ((temp_a2 * 0x10) + 8) << 0x20;
    } else {
        var_v0 = temp_a2 << 0x24;
    }
    M2C_FIELD(arg0, s64 *, 0x20) = (s64) (((((s64) ((s64) arg1 << 0x30) >> 0x30) - ((u64) (((s64) (((temp_v0 >> 0x10) & 0x7FF) << 0x20) >> 0x20) + 1) >> 1)) * 0x10) | var_v0);
}
