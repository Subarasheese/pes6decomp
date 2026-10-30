/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0017F900();                                /* extern */
M2C_UNK func_002CD170(M2C_UNK);                     /* extern */
s32 func_002E8BD0();                                /* extern */
M2C_UNK func_00654F30();                            /* extern */
s32 func_00655660();                                /* extern */
M2C_UNK func_00656A10();                            /* extern */
extern u8 D_003EA1C4;

s32 func_00649650(void) {
    M2C_UNK var_a0;
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    switch (D_003EA1C4) {                           /* switch 1; irregular */
    default:                                        /* switch 1 */
        temp_v0 = func_002E8BD0();
        switch (temp_v0) {                          /* switch 2; irregular */
        case 50:                                    /* switch 2 */
            /* fallthrough */
        case 48:                                    /* switch 2 */
            func_00656A10();
            var_a0 = 7;
            break;
        default:                                    /* switch 2 */
            var_a0 = 1;
            break;
        case 45:                                    /* switch 2 */
            var_a0 = 5;
            break;
        }
        func_002CD170(var_a0);
        D_003EA1C4 = 2;
        break;
    case 1:                                         /* switch 1 */
        if (func_00655660() != 0) {
            D_003EA1C4 = 2;
        case 2:                                     /* switch 1 */
            if (func_0017F900() != 0) {
                D_003EA1C4 = 4;
            }
        }
        break;
    case 3:                                         /* switch 1 */
        if (func_00655660() != 0) {
            D_003EA1C4 = 4;
        case 4:                                     /* switch 1 */
            func_00654F30();
            D_003EA1C4 = 0;
            var_s0 = 1;
        }
        break;
    }
    return var_s0;
}
