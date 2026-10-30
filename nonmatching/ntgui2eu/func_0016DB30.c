/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK (*D_005BFDAC)(s32, s32, s32, s32, M2C_UNK *);

void func_0016DB30(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 temp_a4;
    s32 temp_a5;

    temp_a4 = M2C_FIELD(arg0, s32 *, 0x87C);
    temp_a5 = M2C_FIELD(arg0, s32 *, 0x880);
    D_005BFDAC(arg2 + M2C_FIELD(arg0, s32 *, 0x878) + temp_a5, arg3 + temp_a4 + M2C_FIELD(arg0, s32 *, 0x888), temp_a4, temp_a5, &D_005BFDAC);
}
