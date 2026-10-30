/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008282CC[];

void func_00813CD0(void *arg0, M2C_UNK arg1, s32 arg2) {
    f32 sp8;
    f32 spC;
    f32 var_f0;
    void *temp_v1;

    temp_v1 = (*(s32 *)D_008282CC) + ((arg2 & 0xFF) * 8);
    sp8 = M2C_FIELD(temp_v1, f32 *, 0);
    spC = M2C_FIELD(temp_v1, f32 *, 4);
    sp8 *= 1.5f;
    if (!(fabsf(spC) < 500.0f)) {
        var_f0 = spC * 3.0f;
    } else {
        var_f0 = spC * 4.0f;
    }
    spC = var_f0;
    M2C_FIELD(arg0, f32 *, 0) = sp8;
    M2C_FIELD(arg0, f32 *, 4) = var_f0;
}
