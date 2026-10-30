/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00340C80(f32);
extern void func_00338930(int);
s32 func_00312E00(void *arg0) {
    s32 temp_s0;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0x3C);
    temp_s0 = M2C_FIELD(temp_s1, s32 *, 0x6C) + 1;
    M2C_FIELD(temp_s1, s32 *, 0x6C) = temp_s0;
    if (func_00340C80(3.0f) >= temp_s0) {
        return 0;
    }
    M2C_FIELD(temp_s1, s32 *, 0x6C) = 0xF0;
    func_00338930((s32) arg0);
    return 1;
}
