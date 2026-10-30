/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_0038DBD0[];
extern char D_0038DBD8[];

void func_00175F98(void *arg0, s32 arg1) {
    if (((*(s32 *)D_0038DBD8) != 1) || ((*(s32 *)D_0038DBD0) > 0)) {
        M2C_FIELD(arg0, s32 *, 0x5C) = arg1;
    }
}
