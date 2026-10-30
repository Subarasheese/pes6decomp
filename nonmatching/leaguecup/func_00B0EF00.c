/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B0CD50(void);
extern void func_001EEDA0(void *, u8);
void func_00B0EF00(void) {
    f32 temp_f1;
    s32 var_a1;
    u32 temp_v0;

    temp_v0 = func_00B0CD50();
    if (temp_v0 != 0) {
        temp_f1 = M2C_FIELD(temp_v0, f32 *, 0x140C);
        if (temp_f1 >= 2.1474836e9f) {
            var_a1 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
        } else {
            var_a1 = (s32) temp_f1;
        }
        func_001EEDA0(M2C_FIELD(temp_v0, void **, 0x1408), var_a1 & 0xFF);
    }
}
