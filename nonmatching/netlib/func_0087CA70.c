/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0081D240(M2C_UNK);                     /* extern */
M2C_UNK func_00C75070(s32, M2C_UNK);                /* extern */
extern char D_003AE9D8[];
extern void *D_003EA380;

void func_0087CA70(void *arg0) {
    if ((M2C_FIELD(D_003EA380, s32 *, 4) != 1) || (M2C_FIELD(D_003EA380, s32 *, 0) == 3)) {
        M2C_FIELD(D_003EA380, s32 *, 4) = 1;
        func_00C75070((*(s32 *)D_003AE9D8) + 4, 0);
    }
    func_0081D240(0);
    M2C_FIELD(D_003EA380, M2C_UNK32 *, 0xC) = 3;
    M2C_FIELD(D_003EA380, M2C_UNK32 *, 0x10) = 0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0) = (M2C_UNK32) M2C_FIELD(D_003EA380, M2C_UNK32 *, 0xC);
    M2C_FIELD(arg0, M2C_UNK32 *, 4) = (M2C_UNK32) M2C_FIELD(D_003EA380, M2C_UNK32 *, 0x10);
}
