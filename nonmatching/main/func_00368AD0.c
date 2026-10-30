/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00C13280(s32);                           /* extern */
s32 func_00C59D90(s32);                             /* extern */

s32 func_00368AD0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;

    temp_v0 = func_00C59D90(arg3);
    switch (arg1) {                                 /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        var_v0 = 7;
        break;
    case 3:                                         /* switch 1 */
        var_v0 = 6;
        break;
    default:                                        /* switch 1 */
        if (temp_v0 == -1) {
            var_v0 = 9;
        } else {
            temp_v1 = M2C_FIELD(func_00C13280(temp_v0), u8 *, 5) & 0x70;
            switch (temp_v1) {                      /* switch 2; irregular */
            case 0x40:                              /* switch 2 */
                var_v0 = 3;
                break;
            case 0x20:                              /* switch 2 */
                var_v0 = 1;
                break;
            case 0x10:                              /* switch 2 */
                var_v0 = 2;
                break;
            case 0x60:                              /* switch 2 */
            case 0x50:                              /* switch 2 */
                var_v0 = 4;
                break;
            default:                                /* switch 2 */
                if (!(arg2 & 0x800)) {
                    var_v0 = 8;
                } else {
                    var_v0 = 5;
                }
                break;
            }
        }
        break;
    }
    *arg0 = var_v0;
    return 1;
}
