/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B2414[];

void func_0087E6A0(s32 *arg0) {
    s32 var_a0;

    if (*arg0 == 3) {
        if ((*(s32 *)D_008B2414) == 3) {
            var_a0 = 4;
            goto block_12;
        }
        var_a0 = 1;
        switch ((*(s32 *)D_008B2414)) {                       /* irregular */
        case 0:
            goto block_12;
        case 1:
            (*(s32 *)D_008B2414) = 3;
            return;
        }
    } else if ((*(s32 *)D_008B2414) == 5) {
        var_a0 = 4;
block_12:
        (*(s32 *)D_008B2414) = var_a0;
    }
}
