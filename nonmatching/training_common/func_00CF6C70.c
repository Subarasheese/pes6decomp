/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C99A40();                            /* extern */
M2C_UNK func_00C99AD0(void *, s32);                 /* extern */
extern void **D_003AE9D0;

s32 func_00CF6C70(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    M2C_FIELD(*D_003AE9D0, s16 *, 0x10) = 1;
    func_00C99A40();
    func_00C99AD0(*D_003AE9D0, arg2);
    return 2;
}
