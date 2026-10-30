/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0052AED0[];
extern s32 *D_0052AED4;

void func_001E2D00(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 *var_a5;
    s32 var_a6;
    s32 var_a7;

    if (((*(s32 *)D_0052AED0) != 0) && (*arg1 = *D_0052AED4, *arg2 = M2C_FIELD((((*(s32 *)D_0052AED0) * 0x30) + D_0052AED4), s32 *, -0x2C), var_a6 = (*(s32 *)D_0052AED0), var_a5 = D_0052AED4, var_a7 = 0, (var_a6 != 0))) {
loop_3:
        if (M2C_FIELD(var_a5, u8 *, 0x2E) != 1) {
            goto block_5;
        }
        if (arg0 != var_a7) {

        } else {
            *arg1 = M2C_FIELD(var_a5, s32 *, 0);
        }
        if ((arg0 + 1) != var_a7) {
            var_a7 += 1;
block_5:
            var_a6 -= 1;
            var_a5 += 0x30;
            if (var_a6 == 0) {
                return;
            }
            goto loop_3;
        }
        *arg2 = M2C_FIELD(var_a5, s32 *, 0);
    }
}
