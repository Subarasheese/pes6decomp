/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EA764;

s64 func_00C22860(void) {
    s8 var_v0;

    if (D_003EA764 == NULL) {
        return -1;
    }
    var_v0 = M2C_FIELD(D_003EA764, s8 *, 2);
    if (var_v0 < 0) {
        var_v0 = -var_v0;
    }
    return (s64) ((s64) var_v0 << 0x38) >> 0x38;
}
