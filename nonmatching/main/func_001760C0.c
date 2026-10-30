/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0038DBD0[];
extern char D_0038DBD8[];

s32 func_001760C0(s32 arg0, s32 arg1) {
    s32 var_v0;

    if (((*(s32 *)D_0038DBD8) != 1) || (var_v0 = 0, ((*(s32 *)D_0038DBD0) > 0))) {
        var_v0 = M2C_FIELD(((arg1 * 4) + arg0), s32 *, 0x40);
    }
    return var_v0;
}
