/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_006024A8;

void func_00111850(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_v0 != 0) {
        M2C_FIELD(D_006024A8, M2C_UNK (**)(s32), 0x108)(temp_v0);
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0_2;
    if (temp_v0_2 > 0) {
        M2C_FIELD(arg0, s32 *, 0) = M2C_FIELD(D_006024A8, s32 (**)(M2C_UNK, s32), 0x104)(0x10, temp_v0_2 * 8);
    }
}
