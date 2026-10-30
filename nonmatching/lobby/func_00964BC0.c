/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C7C0(M2C_UNK);                         /* extern */
s32 func_00951700(M2C_UNK);                         /* extern */

s32 func_00964BC0(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;

    var_s0 = 0;
    temp_v0 = func_00951700(0);
    switch (temp_v0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        break;
    case 1:                                         /* switch 1 */
        temp_v0_2 = func_0082C7C0(0x25);
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case -550:                                  /* switch 2 */
            var_s0 = -0xA;
            break;
        case -503:                                  /* switch 2 */
            var_s0 = -0xB;
            break;
        case -506:                                  /* switch 2 */
            var_s0 = -0xC;
            break;
        }
        break;
    case 4:                                         /* switch 1 */
        var_s0 = 1;
        break;
    default:                                        /* switch 1 */
        var_s0 = -0x14;
        break;
    }
    return var_s0;
}
