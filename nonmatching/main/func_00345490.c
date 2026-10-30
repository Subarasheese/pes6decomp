/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_00CBCDE1[];

s32 func_00345490(s32 *arg0) {
    s32 var_v0;

    var_v0 = 4;
    if (((*(u8 *)D_00CBCDE1) != 4) && (var_v0 = 3, ((*(u8 *)D_00CBCDE1) != 3)) && (var_v0 = 2, ((*(u8 *)D_00CBCDE1) != 2))) {
        switch ((*(u8 *)D_00CBCDE1)) {                       /* irregular */
        case 1:
            var_v0 = 1;
            goto block_10;
        case 0:
            var_v0 = 1;
            goto block_10;
        default:
            return 0;
        }
    } else {
block_10:
        *arg0 = var_v0;
        return 1;
    }
}
