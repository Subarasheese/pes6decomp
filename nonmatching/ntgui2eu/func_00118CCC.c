/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_001AE7D8(s32, M2C_UNK, M2C_UNK);       /* extern */
extern char D_005F8E88[];
extern s32 D_006024F0;
extern char D_006024F8[];

void func_00118CCC(void) {
    if (D_006024F0 == 0) {
        func_001AD620(((void *)D_005F8E88), 0xEE, ((void *)D_006024F8));
    }
    func_001AE7D8(D_006024F0, 0, 0x590);
}
