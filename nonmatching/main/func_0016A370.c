/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s8 *D_0050E334;
extern char D_0050E338[];

s8 *func_0016A370(void) {
    s32 var_a1;
    s8 *var_a0;
    s8 *var_v0;

    var_a1 = 0;
    var_a0 = D_0050E334;
    if ((*(s32 *)D_0050E338) > 0) {
loop_2:
        var_v0 = var_a0;
        var_a0 += 0x10;
        if (*var_a0 != 0) {
            var_a1 += 1;
            if (var_a1 >= (*(s32 *)D_0050E338)) {
                goto block_4;
            }
            goto loop_2;
        }
    } else {
block_4:
        var_v0 = NULL;
    }
    return var_v0;
}
