/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0038DBD0[];
extern char D_0038DBD8[];
extern char D_0038DC18[];

void func_00175138(void *arg0, s8 arg1) {
    if ((((*(s32 *)D_0038DBD8) != 1) || ((*(s32 *)D_0038DBD0) > 0)) && ((*(s32 *)D_0038DC18) == 2) && (M2C_FIELD(arg0, s8 *, 0x56) != arg1)) {
        M2C_FIELD(arg0, s8 *, 0x56) = arg1;
    }
}
