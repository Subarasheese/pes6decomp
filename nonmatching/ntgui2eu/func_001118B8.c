/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_006024A8;

void func_001118B8(void *arg0) {
    s32 temp_v0;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    if (temp_v0 != 0) {
        M2C_FIELD(D_006024A8, M2C_UNK (**)(s32), 0x108)(temp_v0);
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
