/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern void **D_00A7DED0;

s32 func_009DE980(s64 arg0) {
    s64 var_a0;

    var_a0 = arg0;
    if (D_00A7DED0 == NULL) {
        return 0;
    }
    if ((var_a0 < 0) || (var_a0 >= 3)) {
        var_a0 = 0;
    }
    func_001D7D80(*D_00A7DED0, (s16) ((s64) (var_a0 << 0x30) >> 0x30));
    return 1;
}
