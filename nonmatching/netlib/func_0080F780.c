/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DED00(s32);
s16 *func_008472D0();                               /* extern */
M2C_UNK func_0084A620(M2C_UNK);                     /* extern */
M2C_UNK func_00859EB0(s16, M2C_UNK);                /* extern */
extern s32 D_003E77C0;

s32 func_0080F780(void) {
    func_002DED00(D_003E77C0);
    D_003E77C0 = -1;
    func_00859EB0(*func_008472D0(), 3);
    func_0084A620(1);
    return 1;
}
