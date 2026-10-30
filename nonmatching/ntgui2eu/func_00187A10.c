/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00187A10(void *arg0) {
    s32 temp_a2;
    s32 temp_lo;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x9C4);
    temp_lo = (s32) ((((M2C_FIELD(arg0, s32 *, 0x5AC) - (M2C_FIELD(arg0, s32 *, 0x948) * 2)) - M2C_FIELD(arg0, s32 *, 0x950)) - M2C_FIELD(arg0, s32 *, 0x954)) - ((temp_a2 - 1) * M2C_FIELD(arg0, s32 *, 0x9CC))) / temp_a2;
    M2C_FIELD(arg0, s32 *, 0x988) = temp_lo;
    M2C_FIELD(arg0, s32 *, 0x984) = temp_lo;
}
