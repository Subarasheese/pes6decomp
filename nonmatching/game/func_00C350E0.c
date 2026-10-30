/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BAC710();                                /* extern */

s32 func_00C350E0(s32 arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;

    temp_v1 = arg0 & 0xFFFF;
    var_s0 = 0x2710;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0x42F:                                     /* switch 1 */
        var_s0 = 0x1261;
        break;
    case 0x424:                                     /* switch 1 */
        var_s0 = 0;
        break;
    case 0x525:                                     /* switch 1 */
        var_s0 = 0xEA6;
        break;
    case 0x534:                                     /* switch 1 */
        var_s0 = 0x341;
        break;
    case 0x4FB:                                     /* switch 1 */
        var_s0 = 0x24C3;
        break;
    case 0x412:                                     /* switch 1 */
        var_s0 = 0x24C3;
        break;
    case 0x3F9:                                     /* switch 1 */
        var_s0 = 0x80A;
        break;
    case 0x3F8:                                     /* switch 1 */
        var_s0 = 0x24C3;
        break;
    case 0x3F5:                                     /* switch 1 */
        var_s0 = 0x1CB8;
        break;
    default:                                        /* switch 1 */
        temp_v0 = func_00BAC710();
        switch (temp_v0) {                          /* switch 2; irregular */
        case 0x1B6:                                 /* switch 2 */
            var_s0 = 0x24C3;
            break;
        case 0x1B5:                                 /* switch 2 */
            var_s0 = 0x1015;
            break;
        case 0x1B2:                                 /* switch 2 */
            var_s0 = 0x24C3;
            break;
        case 0x1B1:                                 /* switch 2 */
            var_s0 = 0x1388;
            break;
        case 0x1AE:                                 /* switch 2 */
            var_s0 = 0x24C3;
            break;
        }
        break;
    }
    return var_s0;
}
