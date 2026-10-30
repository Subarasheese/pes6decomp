/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BEF6F0(s32, s32, M2C_UNK);           /* extern */
extern char D_00591F1C[];
extern char D_00591F20[];

void func_00BEF3E0(M2C_UNK arg0, void *arg1, s32 arg2, s32 arg3) {
    func_00BEF6F0(arg2, arg3, 2);
    M2C_FIELD(arg1, f32 *, 0x6C) = (f32) (*(s32 *)D_00591F1C);
    M2C_FIELD(arg1, f32 *, 0x70) = (f32) (*(s32 *)D_00591F20);
}
