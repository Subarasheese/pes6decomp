/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001991C0(f32);                         /* extern */
M2C_UNK func_00199268(s32, s32, f32);               /* extern */
M2C_UNK func_00199310(s32, s32, f32);               /* extern */

void func_001993B8(s32 arg0, M2C_UNK arg1, void *arg2) {
    func_001991C0(M2C_FIELD(arg2, f32 *, 8));
    func_00199310(arg0, arg0, M2C_FIELD(arg2, f32 *, 4));
    func_00199268(arg0, arg0, M2C_FIELD(arg2, f32 *, 0));
}
