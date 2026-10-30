/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0044AA50[];

s32 func_00110054(void) {
    s32 var_a0;
    s32 var_a2;

    var_a2 = 0;
    var_a0 = 0;
    if (M2C_FIELD(((void *)D_0044AA50), s32 *, 0x309C) < M2C_FIELD(((void *)D_0044AA50), s32 *, 0x3098)) {
loop_1:
        var_a0 += 1;
        var_a2 += 1;
        if (var_a0 < 0xA) {
            if ((M2C_FIELD(((void *)D_0044AA50), s32 *, 0x309C) + var_a0) < M2C_FIELD(((void *)D_0044AA50), s32 *, 0x3098)) {
                goto loop_1;
            }
        }
    }
    return var_a2;
}
