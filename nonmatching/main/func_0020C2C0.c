/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0020B680(void);
s32 func_001DA380(s32);                             /* extern */
extern char D_003D41E0[];
extern s32 D_003E99E4;

s32 func_0020C2C0(void) {
    s32 *var_s0;
    s32 var_s2;
    u32 var_s1;

    var_s2 = 1;
    if (D_003E99E4 == 1) {
        if (func_0020B680() == 0) {
            var_s1 = 0;
            var_s0 = ((void *)D_003D41E0);
loop_6:
            if (var_s2 != 0) {
                if (var_s1 < 2U) {
                    var_s2 = var_s2 != 0;
                    if (var_s2 != 0) {
                        var_s2 = func_001DA380(*var_s0) != 0;
                    }
                    var_s0 += 4;
                    var_s1 += 1;
                    goto loop_6;
                }
            }
        }
        if (var_s2 == 1) {
            D_003E99E4 = 2;
        }
    }
    return var_s2;
}
