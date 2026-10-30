/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C7C0(M2C_UNK);                         /* extern */
s32 func_0094B780();                                /* extern */

s32 func_0093D280(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;

    var_s0 = 0;
    temp_v0 = func_0094B780();
    switch (temp_v0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        break;
    case 1:                                         /* switch 1 */
        temp_v0_2 = func_0082C7C0(0x7C);
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case -703:                                  /* switch 2 */
            var_s0 = -2;
            break;
        default:                                    /* switch 1 */
        case -21:                                   /* switch 2 */
        case -705:                                  /* switch 2 */
            var_s0 = -1;
            break;
        }
        break;
    case 4:                                         /* switch 1 */
        var_s0 = 1;
        break;
    }
    return var_s0;
}
