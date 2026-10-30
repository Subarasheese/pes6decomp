/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
extern void *D_003AE9D8;

void func_0087C7D0(void *arg0) {
    M2C_UNK32 sp28;
    M2C_UNK32 sp2C;
    M2C_UNK32 var_v1;

    if (M2C_FIELD(D_003AE9D8, s32 *, 0x8C) == 0) {
        var_v1 = 1;
    } else {
        func_0026E840(0x84028400);
        var_v1 = 2;
    }
    sp28 = var_v1;
    sp2C = 0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0) = sp28;
    M2C_FIELD(arg0, M2C_UNK32 *, 4) = sp2C;
}
