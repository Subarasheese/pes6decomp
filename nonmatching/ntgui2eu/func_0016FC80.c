/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0016FC80(void *arg0, s32 arg1) {
    s32 temp_a4;
    s32 temp_v0;
    void *temp_a5;

    temp_a5 = M2C_FIELD(arg0, void **, 0x4C);
    temp_a4 = M2C_FIELD(arg0, s32 *, 0x5A4);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x5D4);
    M2C_FIELD(temp_a5, M2C_UNK (**)(s32, s32, s32, s32, s32, void *), 0x124)(arg1, M2C_FIELD(arg0, s32 *, 0x810) + M2C_FIELD(arg0, s32 *, 0x5A0) + temp_v0, M2C_FIELD(arg0, s32 *, 0x814) + temp_a4 + temp_v0, arg0 + 0x818, temp_a4, temp_a5);
}
