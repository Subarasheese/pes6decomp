/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B218C[];
extern char D_008B219E[];
extern char D_008B21A2[];

s32 func_00857630(void) {
    s32 var_v0;

    var_v0 = 0;
    if (((void *)D_008B218C) != NULL) {
        if (((u32) ((*(s16 *)D_008B21A2) - 2) < 2U) && ((u32) ((*(s16 *)D_008B219E) - 2) < 2U)) {
            var_v0 = 1;
        }
        if ((*(s16 *)D_008B21A2) == 4) {
            goto block_5;
        }
    } else {
block_5:
        var_v0 = -1;
    }
    return var_v0;
}
