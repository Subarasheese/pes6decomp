/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0016A5D8(s32, s32);                    /* extern */
M2C_UNK func_0016A638(s32);                         /* extern */

void func_00167D48(s32 arg0, s32 arg1, s32 arg2) {
    if (arg1 != arg2) {
        if (arg1 != 0) {
            func_0016A638(arg0 + 0x9D0);
        }
        if (arg2 != 0) {
            func_0016A5D8(arg0 + 0x9D0, arg2);
        }
    }
}
