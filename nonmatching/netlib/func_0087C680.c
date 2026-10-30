/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_0087C970(s32);                         /* extern */
extern void *D_003AE9D8;

void func_0087C680(void *arg0) {
    M2C_UNK32 sp28;
    M2C_UNK32 sp2C;

    if (M2C_FIELD(D_003AE9D8, s32 *, 0x8C) == 0) {
        M2C_FIELD(D_003AE9D8, s32 *, 0x8C) = 1;
        func_0026E840(0x8400F802);
        func_0087C970(M2C_FIELD(D_003AE9D8, s32 *, 0x8C));
    }
    sp28 = 0;
    sp2C = 0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0) = sp28;
    M2C_FIELD(arg0, M2C_UNK32 *, 4) = sp2C;
}
