/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021DF90(s32);
extern void func_001F04F0(s32, void *);
extern char D_009C07F8[];
extern char D_009C0800[];

s32 func_00981D30(void) {
    s32 *var_s0;
    u32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_009C07F8);
    do {
        func_001F04F0(func_0021DF90(*var_s0), ((void *)D_009C0800));
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2U);
    return 1;
}
