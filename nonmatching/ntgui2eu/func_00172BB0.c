/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00165B00();                                /* extern */
M2C_UNK func_00167C38(s32, s32);                    /* extern */

void func_00172BB0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xD10) = 0;
    if (M2C_FIELD(arg0, s32 *, 0xC90) != 0) {
        func_00167C38(func_00165B00(), M2C_FIELD(arg0, s32 *, 0xC90));
        M2C_FIELD(arg0, s32 *, 0xC90) = 0;
    }
}
