/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_004FDC04;

s32 func_0013E1F0(s32 arg0) {
    s64 var_a1;

    var_a1 = 1;
    if ((M2C_FIELD(D_004FDC04, u16 *, 0x16) != 0) && (arg0 == 0)) {
        var_a1 = 0;
    }
    return ((u64) ((s64) ((u32) M2C_FIELD(D_004FDC04, u32 *, 0x20) >> 0xB) << 0x20) >> 0x20) | ((s64) M2C_FIELD(D_004FDC04, u16 *, 0x12) << 0x18) | (((s64) (var_a1 << 0x20) >> 0x20) << 0x20);
}
