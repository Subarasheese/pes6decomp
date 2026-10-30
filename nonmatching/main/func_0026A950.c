/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DEF30(void *, s8);
extern void func_001F1860(void *, s32);
extern s32 func_001F3D10(s32, u8);
M2C_UNK func_001F1650(s32, f32, f32);               /* extern */
s32 func_001F1A20(f32 *, s32);                      /* extern */

s32 func_0026A950(M2C_UNK arg0, M2C_UNK arg1, void *arg2, s32 arg3, s32 arg4) {
    f32 sp48;
    f32 sp4C;
    s32 temp_v0;

    if (arg4 != 0) {
        if (arg2 != NULL) {
            sp48 = M2C_FIELD(arg2, f32 *, 0);
            sp4C = M2C_FIELD(arg2, f32 *, 4);
            temp_v0 = func_001F1A20(&sp48, arg4);
            func_001F3D10(temp_v0, 1U);
            func_001F1650(temp_v0, M2C_FIELD(arg2, f32 *, 8), M2C_FIELD(arg2, f32 *, 0xC));
            func_001F1860((void *) temp_v0, arg3);
            func_001DEF30(M2C_FIELD(temp_v0, void **, 0x54), 3);
            return temp_v0;
        }
        goto block_4;
    }
block_4:
    return 0;
}
