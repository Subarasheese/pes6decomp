/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0029A000(s32);
M2C_UNK func_0027B270(s32, M2C_UNK);                /* extern */
s32 *func_00299FE0(s32);                            /* extern */
extern char D_0092F0D0[];

void func_00909D30(void) {
    s32 var_s0;

    if ((*(s32 *)D_0092F0D0) & 0x80) {
        var_s0 = 0;
        do {
            func_0027B270(*func_00299FE0(var_s0), 0);
            func_0029A000(var_s0);
            var_s0 += 1;
        } while (var_s0 < 3);
        (*(s32 *)D_0092F0D0) &= ~0x80;
    }
}
