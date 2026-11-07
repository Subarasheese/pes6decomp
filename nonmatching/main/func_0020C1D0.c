/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001DA4B0(s32);                         /* extern */
extern char D_003D41E0[];
extern s32 D_003E99E4;

void func_0020C1D0(void) {
    s32 *var_s0;
    s32 temp_a0;
    u32 var_s1;

    if (D_003E99E4 == 2) {
        var_s1 = 0;
        var_s0 = ((void *)D_003D41E0);
        do {
            temp_a0 = *var_s0;
            if (temp_a0 != 1) {
                func_001DA4B0(temp_a0);
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 2U);
        D_003E99E4 = 0;
    }
}
