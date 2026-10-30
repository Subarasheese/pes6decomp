/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00115754(void *arg0, void *arg1) {
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a4;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x48);
    temp_a3 = M2C_FIELD(arg0, s32 *, 0x78);
    temp_a4 = M2C_FIELD(arg0, s32 *, 0x6C);
    M2C_FIELD(arg1, M2C_UNK (**)(void *, s32, s32, s32, s32), 0x2C)(arg1, temp_a4 + (M2C_FIELD(((temp_a2 * 0x198) + temp_a3), u16 *, 0x180) * 0x10), temp_a2, temp_a3, temp_a4);
}
