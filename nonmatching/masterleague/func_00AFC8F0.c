/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern s32 func_002260F0(s32);
M2C_UNK func_00AFC940();                            /* extern */
extern void *D_003E77B0;

void func_00AFC8F0(void) {
    s32 temp_v0;

    func_00AFC940();
    temp_v0 = func_002260F0(func_00225820() & 0xFF);
    if ((temp_v0 != 0) && (M2C_FIELD(temp_v0, s32 *, 0x34) < 0)) {
        M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) | 8);
    }
}
