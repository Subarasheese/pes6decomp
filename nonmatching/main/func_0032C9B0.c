/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_003395B0(void *);
extern s32 func_003394B0(void *, s32, s32, void *);
extern s32 func_00340C80(f32);
s32 func_0032C9B0(void *arg0, void *arg1) {
    s32 sp3C;
    s32 temp_s0;

    func_003394B0(arg1, 1, 0, &sp3C);
    temp_s0 = sp3C + func_00340C80(5.0f);
    if (func_003395B0(arg1) >= temp_s0) {
        M2C_FIELD(arg0, s32 *, 0x6C) = 0;
        M2C_FIELD(arg0, s32 *, 0x70) = 0;
        return 1;
    }
    return 0;
}
