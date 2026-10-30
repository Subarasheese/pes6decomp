/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern char D_00CDF9E4[];
extern char D_00CDF9E8[];

void func_00B90EB0(s32 arg0) {
    if (arg0 != 0) {
        func_001C4730(((void *)D_00CDF9E8), arg0, 0x10);
        (*(s32 *)D_00CDF9E4) |= 8;
    }
}
