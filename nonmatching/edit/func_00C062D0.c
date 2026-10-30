/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern char D_00CF1FE0[];
extern char D_00CF2020[];

void func_00C062D0(s32 arg0) {
    if (arg0 != 0) {
        func_001C4730(((void *)D_00CF1FE0), arg0, 0x3E);
        (*(s32 *)D_00CF2020) = 1;
    }
}
