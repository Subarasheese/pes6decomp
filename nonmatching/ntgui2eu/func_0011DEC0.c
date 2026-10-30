/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0011DEF8();                            /* extern */

void func_0011DEC0(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x394) = arg3;
    M2C_FIELD(arg0, s32 *, 0x36C) = 1;
    M2C_FIELD(arg0, s32 *, 0x2C4) = 1;
    M2C_FIELD(arg0, s32 *, 0x2C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x390) = arg3;
    func_0011DEF8();
}
