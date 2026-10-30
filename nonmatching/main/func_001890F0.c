/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00520090;

s32 func_001890F0(s32 arg0, void *arg1, f32 *arg2, s16 *arg3, s16 *arg4) {
    s32 *temp_a5;
    void *temp_a0;

    temp_a5 = M2C_FIELD(D_00520090, s32 **, 0x20);
    if (*temp_a5 != 0) {
        temp_a0 = temp_a5 + (arg0 * 0x14);
        M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(temp_a0, f32 *, 0xC);
        M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(temp_a0, f32 *, 0x10);
        M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(temp_a0, f32 *, 0x14);
        *arg2 = M2C_FIELD(temp_a0, f32 *, 4);
        *arg3 = M2C_FIELD(temp_a0, s16 *, 8);
        *arg4 = M2C_FIELD(temp_a0, s16 *, 0xA);
        return 1;
    }
    return 0;
}
