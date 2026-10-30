/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(M2C_UNK *, M2C_UNK);          /* extern */
extern char D_00CBD8C0[];

s32 func_00C0EFF0(s32 arg0) {
    func_001C4730(((void *)D_00CBD8C0), 0x14);
    return arg0 + 0x14;
}
