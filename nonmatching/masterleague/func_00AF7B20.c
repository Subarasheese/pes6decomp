/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0094C730();                                /* extern */
M2C_UNK func_0095EB80();                            /* extern */
s32 func_0095F190();                                /* extern */
s32 func_009A8570();                                /* extern */
M2C_UNK func_00AEAF60();                            /* extern */
s32 func_00B06700();                                /* extern */

s32 func_00AF7B20(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0;
    if (func_0095F190() == 0) {
        return 0;
    }
    func_00AEAF60();
    func_0095EB80();
    temp_v1 = func_0094C730() & 0xFF;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 38:                                        /* switch 1 */
        break;
    case 2:                                         /* switch 1 */
        temp_v0 = func_009A8570();
        switch (temp_v0) {                          /* switch 2; irregular */
        case 0x20:                                  /* switch 2 */
            var_s0 = 0x20 & 0xFF;
            break;
        case 0x48:                                  /* switch 2 */
            var_s0 = 0x1E;
            break;
        case 0x47:                                  /* switch 2 */
            var_s0 = 0x1D;
            break;
        case 0x51:                                  /* switch 2 */
            var_s0 = 1;
            break;
        case 0x52:                                  /* switch 2 */
            var_s0 = 0x2D;
            break;
        case 0x46:                                  /* switch 2 */
            var_s0 = 0x1C;
            break;
        case 0x45:                                  /* switch 2 */
            var_s0 = 0x1B;
            break;
        case 0x58:                                  /* switch 2 */
            var_s0 = 1;
            break;
        }
        break;
    case 27:                                        /* switch 1 */
        if (func_00B06700() == 0x17) {
            var_s0 = 0x1C;
        }
        break;
    case 28:                                        /* switch 1 */
        temp_v0_2 = func_00B06700();
        switch (temp_v0_2) {                        /* switch 3; irregular */
        case 24:                                    /* switch 3 */
            var_s0 = 1;
            break;
        case 23:                                    /* switch 3 */
            var_s0 = 0x1B;
            break;
        case 25:                                    /* switch 3 */
            var_s0 = 0x26;
            break;
        }
        break;
    }
    return var_s0;
}
