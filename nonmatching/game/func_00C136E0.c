/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBFAA0[];

void *func_00C136E0(s32 arg0, s32 arg1) {
    u32 var_a0;

    if (arg0 != -1) {
        var_a0 = arg0 - 4;
        if (var_a0 >= (u32) ((void *)D_00CBFAA0)) {
loop_3:
            if (M2C_FIELD(var_a0, u8 *, 2) != (arg1 & 0xFF)) {
                var_a0 -= 4;
                if (var_a0 < (u32) ((void *)D_00CBFAA0)) {
                    goto block_8;
                }
                goto loop_3;
            }
            return (void *) var_a0;
        }
    }
block_8:
    return (void *)-1;
}
