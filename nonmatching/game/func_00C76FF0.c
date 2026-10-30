/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCBE00[];
extern char D_00CCBE08[];

s32 func_00C76FF0(void) {
    s32 var_v0;

    var_v0 = 0;
    if ((*(s32 *)D_00CCBE08) != 0) {
        var_v0 = M2C_FIELD(M2C_FIELD(((void *)D_00CCBE00), void **, 8), u8 *, 0x2C) == 1;
    }
    return var_v0;
}
