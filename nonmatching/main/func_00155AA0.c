/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0012AD80(s32);
M2C_UNK func_0014A890(M2C_UNK *);                   /* extern */
M2C_UNK func_0015E770();                            /* extern */
M2C_UNK func_001600B8();                            /* extern */
extern s32 D_003E7450;
extern M2C_UNK func_00155D00;

void func_00155AA0(void) {
    func_0012AD80(D_003E7450);
    func_0014A890(&func_00155D00);
    func_001600B8();
    func_0015E770();
}
