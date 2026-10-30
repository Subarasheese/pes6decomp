/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 (*D_005C1494)();

s32 func_00174A88(void *arg0, u16 *arg1) {
    M2C_UNK (*temp_v0)(void *, s32);
    s32 temp_s0;
    u16 temp_v1;

    temp_v1 = *arg1;
    temp_s0 = D_005C1494();
    if (((s32) temp_v1 >= 5) && ((s32) temp_v1 < 8)) {
        temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK (**)(void *, s32), 0x128);
        if (temp_v0 != NULL) {
            temp_v0(arg0, M2C_FIELD(arg0, s32 *, 0x918) == 0);
        }
    }
    return temp_s0;
}
