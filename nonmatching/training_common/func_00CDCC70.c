/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002630F0(void);
extern void *D_003E9C48;

s32 func_00CDCC70(void) {
    s32 var_v0;

    if (func_002630F0() == 0) {
        var_v0 = 0;
    } else {
        var_v0 = M2C_FIELD(D_003E9C48, s32 *, 0x18);
    }
    return var_v0 == 1;
}
