/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
s32 func_001B93D0(s32, s32);                        /* extern */
M2C_UNK func_001B94C0(s32, s32);                    /* extern */

s32 func_001B9690(void *arg0) {
    s32 var_s0;
    s32 var_s1;

    var_s1 = 1;
    if (arg0 != NULL) {
        var_s0 = M2C_FIELD(arg0, s32 *, 8);
        var_s1 = 0;
        switch (var_s0) {                           /* irregular */
        case 1:
            if (func_001B93D0(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4)) != 0) {
                var_s0 += 1;
            default:
            case 2:
                var_s1 = 1;
            }
            break;
        case 0:
            func_001B94C0(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
            var_s0 += 1;
            break;
        }
        M2C_FIELD(arg0, s32 *, 8) = var_s0;
    }
    if ((var_s1 == 1) && (arg0 != NULL) && (arg0 != NULL)) {
        func_00153FA0(arg0);
    }
    return var_s1;
}
