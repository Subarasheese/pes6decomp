/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern char D_00376A80[];

s32 func_0014D720(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (0 < 5) {
loop_2:
        if (M2C_FIELD(arg0, u8 *, 0x19) != *(((u8 *)D_00376A80) + (var_v0 * 4))) {
            var_v0 += 1;
            if (var_v0 >= 5) {
                goto block_8;
            }
            goto loop_2;
        }
        return var_v0;
    }
block_8:
    return 0;
}
