/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B7B80(s32);
extern void func_001B7A60(s32);
extern char D_00CA9350[];

void func_00C997B0(void) {
    s32 *var_s0;
    u32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_00CA9350);
    do {
        func_001B7B80(*var_s0);
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 6U);
    func_001B7A60(0);
}
