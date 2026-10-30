/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0021CCE0(void *arg0, s32 arg1) {
    s16 temp_a0;
    s16 temp_a2;
    s32 var_v0;

    temp_a2 = M2C_FIELD(arg0, s16 *, 6);
    temp_a0 = M2C_FIELD(arg0, s16 *, 4);
    var_v0 = 0;
    switch (temp_a0) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        var_v0 = -0x7F;
        break;
    case 0:                                         /* switch 1 */
        var_v0 = -0x7F;
        break;
    case 3:                                         /* switch 1 */
        var_v0 = -0x7E;
        break;
    }
    if (var_v0 == 0) {
        switch (temp_a2) {                          /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            var_v0 = -0x7E;
            break;
        case -1:                                    /* switch 2 */
            var_v0 = -0x7F;
            break;
        case 2:                                     /* switch 2 */
            if (arg1 == 0) {
                var_v0 = -0x7C;
            }
            break;
        }
    }
    if (var_v0 == 0) {
        var_v0 = 1;
    }
    return var_v0;
}
