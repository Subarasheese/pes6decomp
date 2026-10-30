/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B1594[];
extern void *D_008B15A0;

s32 func_008505B0(s32 arg0) {
    s32 var_v0;

    if (D_008B15A0 == NULL) {
        return 0;
    }
    if (D_008B15A0 == NULL) {
        var_v0 = 0;
    } else {
        var_v0 = M2C_FIELD(D_008B15A0, s32 *, 0x34) & ~(*(s32 *)D_008B1594);
    }
    return var_v0 & arg0;
}
