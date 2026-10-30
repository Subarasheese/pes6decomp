/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00C88AB0(void);
s32 func_00C88BF0(u8);                              /* extern */
extern char D_00CB4F28[];
extern char D_00CCCE20[];

void func_00C88C90(void) {
    s32 *var_s0;
    u32 var_s2;
    u8 *var_s1;

    var_s2 = 0;
    var_s1 = ((void *)D_00CB4F28);
    var_s0 = ((void *)D_00CCCE20);
    do {
        *var_s0 = func_00C88BF0(*var_s1);
        func_00C88AB0();
        var_s2 += 1;
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s2 < 4U);
}
