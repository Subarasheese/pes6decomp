/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C7C0(M2C_UNK);                         /* extern */
M2C_UNK func_008429A0(M2C_UNK);                     /* extern */
s32 func_0094C7A0(M2C_UNK);                         /* extern */

s32 func_00965630(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;

    var_s0 = 0;
    temp_v0 = func_0094C7A0(1);
    switch (temp_v0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        break;
    case 1:                                         /* switch 1 */
        temp_v0_2 = func_0082C7C0(0x3B);
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case -512:                                  /* switch 2 */
            var_s0 = -0xC;
            break;
        case -581:                                  /* switch 2 */
            var_s0 = -0xA;
            break;
        case -586:                                  /* switch 2 */
            var_s0 = -0xB;
            break;
        default:                                    /* switch 1 */
        case 3:                                     /* switch 1 */
        case 2:                                     /* switch 1 */
        case -507:                                  /* switch 2 */
        case -506:                                  /* switch 2 */
        case -584:                                  /* switch 2 */
            var_s0 = -0x14;
            break;
        }
        break;
    case 4:                                         /* switch 1 */
        func_008429A0(0);
        var_s0 = 1;
        break;
    }
    return var_s0;
}
