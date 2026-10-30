/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00125940();                            /* extern */
M2C_UNK func_00125D20(s32, s32, s32, s32);          /* extern */

void func_00125968(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00125940();
    func_00125D20(arg0, arg1, arg2, arg3);
}
