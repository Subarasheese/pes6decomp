/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00230490();                                /* extern */
s32 func_0094C730();                                /* extern */
s32 func_0095EBB0();                                /* extern */

s32 func_0095E560(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;

    var_s0 = -1;
    temp_v0 = func_0094C730() & 0xFF;
    switch (temp_v0) {                              /* switch 1; irregular */
    case 30:                                        /* switch 1 */
        var_s0 = 0;
        break;
    case 2:                                         /* switch 1 */
        var_s0 = 0;
        break;
    case 1:                                         /* switch 1 */
        var_s0 = 0;
        break;
    case 3:                                         /* switch 1 */
        temp_v0_2 = func_0095EBB0();
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 4:                                     /* switch 2 */
            var_s0 = 0;
            break;
        case 2:                                     /* switch 2 */
            var_s0 = 0x012C0004;
            break;
        case 3:                                     /* switch 2 */
            var_s0 = 0x012C0003;
            break;
        }
        break;
    case 5:                                         /* switch 1 */
        if (func_00230490() != 0) {
            var_s0 = 0x1A004A;
        } else {
            var_s0 = 0x1A0009;
        }
        break;
    case 13:                                        /* switch 1 */
    case 12:                                        /* switch 1 */
        var_s0 = 0x1A004F;
        break;
    case 14:                                        /* switch 1 */
        var_s0 = 0x1E003F;
        break;
    case 15:                                        /* switch 1 */
        var_s0 = 0x1900B1;
        break;
    case 7:                                         /* switch 1 */
        var_s0 = 0x1A0005;
        break;
    case 8:                                         /* switch 1 */
        var_s0 = 0x1A004B;
        break;
    case 9:                                         /* switch 1 */
        var_s0 = 0x1A0025;
        break;
    case 34:                                        /* switch 1 */
        var_s0 = 0x1A000B;
        break;
    case 35:                                        /* switch 1 */
        var_s0 = 0x1A0010;
        break;
    case 10:                                        /* switch 1 */
        var_s0 = 0x1A0012;
        break;
    case 11:                                        /* switch 1 */
        var_s0 = 0x1A0012;
        break;
    case 36:                                        /* switch 1 */
        var_s0 = 0x1A004F;
        break;
    case 6:                                         /* switch 1 */
        var_s0 = 0x1A0009;
        break;
    case 49:                                        /* switch 1 */
    case 48:                                        /* switch 1 */
    case 46:                                        /* switch 1 */
    case 45:                                        /* switch 1 */
    case 44:                                        /* switch 1 */
    case 43:                                        /* switch 1 */
        var_s0 = 0x1C0002;
        break;
    case 39:                                        /* switch 1 */
    case 18:                                        /* switch 1 */
        var_s0 = -2;
        break;
    }
    return var_s0;
}
