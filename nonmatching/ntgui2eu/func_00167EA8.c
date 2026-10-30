/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00167EE8();                            /* extern */

void func_00167EA8(M2C_UNK arg0, void *arg1) {
    func_00167EE8();
    M2C_FIELD(arg1, s32 *, 4) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 4) >> 4);
    M2C_FIELD(arg1, s32 *, 8) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 8) >> 4);
}
