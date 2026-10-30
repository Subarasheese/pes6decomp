/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_008360E0();                                /* extern */
s32 func_00836120();                                /* extern */

s32 func_0093D4B0(void) {
    s32 var_v0;
    s64 temp_a1;
    s64 temp_s0;

    temp_s0 = (s64) (func_008360E0() << 0x38) >> 0x38;
    if (func_00836120() == 0) {
        return 0;
    }
    temp_a1 = (s64) (temp_s0 << 0x38) >> 0x38;
    switch (temp_a1) {                              /* switch 1; irregular */
    case 4:                                         /* switch 1 */
        return 0;
    case 3:                                         /* switch 1 */
        return 1;
    default:                                        /* switch 1 */
        var_v0 = 2;
        switch (temp_a1) {                          /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            return 3;
        case 0:                                     /* switch 2 */
            return 0;
        default:                                    /* switch 2 */
            var_v0 = 4;
            /* fallthrough */
        case 1:                                     /* switch 2 */
            return var_v0;
        }
        break;
    }
}
