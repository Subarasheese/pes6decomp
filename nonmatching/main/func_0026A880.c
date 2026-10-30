/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern void func_001DEF30(void *, s8);
extern void func_001F1860(void *, s32);
extern s32 func_001F3D10(s32, u8);
M2C_UNK func_001F1650(s32, f32, f32);               /* extern */
s32 func_001F1A20(s32, s32, f32 *, s32);            /* extern */

s32 func_0026A880(s32 arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4) {
    f32 sp58;
    f32 sp5C;
    s32 temp_v0;
    s32 var_s0;

    if (arg2 == NULL) {
        return 0;
    }
    temp_v0 = func_001F08B0(arg4);
    if (temp_v0 == 0) {
        var_s0 = 0;
    } else if (arg2 != NULL) {
        sp58 = M2C_FIELD(arg2, f32 *, 0);
        sp5C = M2C_FIELD(arg2, f32 *, 4);
        var_s0 = func_001F1A20(arg0, arg1, &sp58, temp_v0);
        func_001F3D10(var_s0, 1U);
        func_001F1650(var_s0, M2C_FIELD(arg2, f32 *, 8), M2C_FIELD(arg2, f32 *, 0xC));
        func_001F1860((void *) var_s0, arg3);
        func_001DEF30(M2C_FIELD(var_s0, void **, 0x54), 3);
    } else {
        var_s0 = 0;
    }
    return var_s0;
}
