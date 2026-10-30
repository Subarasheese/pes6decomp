/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0016DB78(void *arg0, s32 *arg1, s32 *arg2) {
    M2C_UNK (*temp_v0)(void *);
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0x50);
    if ((temp_a0 != NULL) && (temp_v0 = M2C_FIELD(M2C_FIELD(temp_a0, void **, 0x4C), M2C_UNK (**)(void *), 0x9C), (temp_v0 != NULL))) {
        temp_v0(temp_a0);
    } else {
        *arg2 = 0;
        *arg1 = 0;
    }
    *arg1 = *arg1 + M2C_FIELD(arg0, s32 *, 0x5A0) + (M2C_FIELD(arg0, s32 *, 0x880) + M2C_FIELD(arg0, s32 *, 0x5D4)) + M2C_FIELD(arg0, s32 *, 0x878);
    *arg2 = *arg2 + M2C_FIELD(arg0, s32 *, 0x5A4) + (M2C_FIELD(arg0, s32 *, 0x888) + M2C_FIELD(arg0, s32 *, 0x5D4)) + M2C_FIELD(arg0, s32 *, 0x87C);
}
