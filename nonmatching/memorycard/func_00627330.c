/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00624760(s32);                             /* extern */

s32 func_00627330(s32 arg0, s32 arg1) {
    s32 var_v0;

    if ((arg1 != 1) && (arg1 != 3) && (arg1 != 4)) {
        goto block_23;
    }
    if (func_00624760(arg0) != 0) {
        goto block_23;
    }
    if (arg0 != 0) {
        if ((arg0 < 0x24) && ((arg1 == 1) || ((u32) (arg1 - 3) < 2U))) {
            if ((u32) (arg1 - 3) < 2U) {
                switch (arg0) {                     /* irregular */
                case 1:
                    var_v0 = 1;
                    break;
                default:
                    if ((u32) (arg0 - 0xB) < 3U) {
                    case 3:
                        var_v0 = 1;
                    } else {
                        goto block_20;
                    }
                    break;
                }
            } else {
block_20:
                var_v0 = 0;
            }
            if (var_v0 == 0) {
                return 1;
            }
            goto block_23;
        }
        goto block_23;
    }
block_23:
    return 0;
}
