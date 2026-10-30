/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D7A20(s32, void *, s32);            /* extern */

void func_002FA3B0(void *arg0, s32 arg1, s32 arg2, void *arg3, void *arg4) {
    f32 sp38;
    f32 sp3C;

    if (arg3 != NULL) {
        sp38 = M2C_FIELD(arg3, f32 *, 0);
        sp3C = M2C_FIELD(arg3, f32 *, 4);
    } else {
        sp38 = 0.0f;
        sp3C = 0.0f;
    }
    M2C_FIELD(arg0, f32 *, 0) = 0.0f;
    M2C_FIELD(arg0, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, M2C_UNK32 *, 8) = 0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0xC) = 0;
    func_001D7A20(arg1, arg0, arg2 & 0xFFFF);
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) - sp38);
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) - sp3C);
    if (arg4 != NULL) {
        M2C_FIELD(arg0, M2C_UNK32 *, 8) = (M2C_UNK32) M2C_FIELD(arg4, M2C_UNK32 *, 0);
        M2C_FIELD(arg0, M2C_UNK32 *, 0xC) = (M2C_UNK32) M2C_FIELD(arg4, M2C_UNK32 *, 4);
    }
}
