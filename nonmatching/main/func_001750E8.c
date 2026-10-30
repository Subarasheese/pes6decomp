/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0038DBD0[];
extern char D_0038DBD8[];
extern char D_0038DC00[];

void func_001750E8(void *arg0, s8 arg1) {
    if ((((*(s32 *)D_0038DBD8) != 1) || ((*(s32 *)D_0038DBD0) > 0)) && (M2C_FIELD(arg0, s8 *, 0x54) != arg1) && (((*(s32 *)D_0038DC00) != 0) || (arg1 != 1))) {
        M2C_FIELD(arg0, s8 *, 0x54) = arg1;
    }
}
