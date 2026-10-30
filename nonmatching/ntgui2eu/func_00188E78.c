/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00163FE8(s32, s32);                    /* extern */
M2C_UNK func_0016A158(s32, M2C_UNK);                /* extern */

void func_00188E78(void *arg0, s32 arg1) {
    func_0016A158(arg0 + 0x9B0, 2);
    func_00163FE8(M2C_FIELD(arg0, s32 *, 0x984), arg1);
    func_00163FE8(M2C_FIELD(arg0, s32 *, 0x980), arg1);
}
