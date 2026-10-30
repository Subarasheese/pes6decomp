/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00167B30(M2C_UNK arg0, s64 arg1) {
    s64 temp_a1;

    temp_a1 = (s64) (arg1 << 0x20) >> 0x20;
    M2C_FIELD(temp_a1, s32 *, 0x560) = 0;
    M2C_FIELD(temp_a1, s32 *, 0x564) = 0;
}
