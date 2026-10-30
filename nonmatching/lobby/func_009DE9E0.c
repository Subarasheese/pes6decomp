/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_001D7D80(void *, s16);
extern void *D_00A7DED0;

s32 func_009DE9E0(s64 arg0) {
    s64 var_s0;

    var_s0 = arg0;
    if (D_00A7DED0 == NULL) {
        return 0;
    }
    if ((var_s0 < 0) || (var_s0 >= 6)) {
        var_s0 = 5;
    }
    if (var_s0 != 5) {
        func_001D7D60(M2C_FIELD(D_00A7DED0, void **, 4), 1);
        func_001D7D80(M2C_FIELD(D_00A7DED0, void **, 4), (s16) ((s64) (var_s0 << 0x30) >> 0x30));
    } else {
        func_001D7D60(M2C_FIELD(D_00A7DED0, void **, 4), 0);
    }
    return 1;
}
