/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00C99AD0(s32, s32);                    /* extern */
extern void *D_003AE9D8;

s32 func_008F98B0(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    func_0026E840(0x84028400);
    M2C_FIELD(D_003AE9D8, s32 *, 0) = 1;
    func_00C99AD0(M2C_FIELD(D_003AE9D8, s32 *, 4), arg2);
    return 2;
}
