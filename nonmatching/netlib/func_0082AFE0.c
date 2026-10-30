/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A5F70[];

s32 func_0082AFE0(s32 arg0) {
    s32 var_a1;

    if (arg0 == 0) {
        goto block_10;
    }
    var_a1 = 0;
loop_7:
    if (var_a1 < 0x64) {
        if (M2C_FIELD((((void *)D_008A5F70) + (var_a1 * 4)), s32 *, 0x3744) != arg0) {
            var_a1 += 1;
            goto loop_7;
        }
        return 1;
    }
block_10:
    return 0;
}
