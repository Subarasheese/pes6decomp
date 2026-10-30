/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void *D_00A7DDF8;

s32 func_009D0330(s32 arg0) {
    s8 var_a1;

    if (D_00A7DDF8 == NULL) {
        return 0;
    }
    if (arg0 == 0) {
        M2C_FIELD(D_00A7DDF8, s8 *, 2) = 0;
        var_a1 = 0;
    } else {
        var_a1 = 1;
        M2C_FIELD(D_00A7DDF8, s8 *, 2) = 1;
    }
    if (M2C_FIELD(D_00A7DDF8, u8 *, 1) == 0) {
        var_a1 = 0;
    }
    func_001D7D60(M2C_FIELD(D_00A7DDF8, void **, 0x7F4), var_a1);
    return 1;
}
