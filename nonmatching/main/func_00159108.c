/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00159108(void *arg0) {
    M2C_UNK (*temp_a3)(s32, s32, s32, M2C_UNK);
    s32 temp_a1;

    temp_a3 = M2C_FIELD(arg0, M2C_UNK (**)(s32, s32, s32, M2C_UNK), 0xFC);
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x94) - M2C_FIELD(arg0, s32 *, 0xF4);
    temp_a3(M2C_FIELD(arg0, s32 *, 0x100), (temp_a1 < 0) ? (temp_a1 + 0x7FFFFFFF) : temp_a1, M2C_FIELD(arg0, s32 *, 0x90) * M2C_FIELD(arg0, s8 *, 0xE) * 2, temp_a3);
    M2C_FIELD(arg0, s32 *, 0xF4) = (s32) M2C_FIELD(arg0, s32 *, 0x94);
}
