/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0026B580(void *, s32, s32);
M2C_UNK func_0026E840(M2C_UNK, M2C_UNK);            /* extern */
extern void *D_003AE9D0;

s32 func_008F6B90(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    func_0026B580(D_003AE9D0, 7, arg3);
    M2C_FIELD(D_003AE9D0, s8 *, 0xE5) = -1;
    func_0026E840(0x84028400, -1);
    return 2;
}
