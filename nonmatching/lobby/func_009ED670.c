/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00214290(s32);                         /* extern */
M2C_UNK func_00D0C5F0(s32);                         /* extern */
extern char D_00A034A0[];
extern char D_00A7E00C[];
extern char D_00A7E010[];

void func_009ED670(void) {
    s32 *var_s0;
    u32 var_s1;

    if ((*(u8 *)D_00A7E010) & 1) {
        var_s1 = 0;
        (*(u8 *)D_00A7E010) = ((*(u8 *)D_00A7E010) & ~1) | (0 & 1);
        var_s0 = ((void *)D_00A034A0);
        do {
            func_00D0C5F0(*var_s0);
            var_s1 += 1;
            var_s0 += 8;
        } while (var_s1 < 2U);
        func_00214290((*(s32 *)D_00A7E00C));
        (*(s32 *)D_00A7E00C) = 0;
    }
}
