/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DA4B0(s32);
extern char D_009BF408[];

void func_00957F30(void) {
    s32 *var_s0;
    u32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_009BF408);
    do {
        func_001DA4B0(*var_s0);
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2U);
}
