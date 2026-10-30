/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00193008(s32, s32);                    /* extern */
M2C_UNK func_00193100(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0019B160(s32);                         /* extern */
extern s32 D_00602080;
extern s32 D_0060208C;

void func_00101F90(s32 arg0) {
    func_00193008(D_0060208C, arg0);
    func_00193100(0, 0);
    func_0019B160(D_00602080);
    func_00193008(D_0060208C, arg0 ^ 1);
    func_00193100(0, 0);
    func_0019B160(D_00602080);
}
