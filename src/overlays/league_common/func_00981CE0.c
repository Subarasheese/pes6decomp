/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0021DF90(s32);
extern void func_001F0210(s32);
extern char D_009C07F8[];

void func_00981CE0(void) {
    u32 var_s1;
    s32 *var_s0;

    var_s1 = 0;
    var_s0 = (s32 *)D_009C07F8;
    do {
        func_001F0210(func_0021DF90(*var_s0));
        var_s1 += 1;
        var_s0 += 1;
    } while (var_s1 < 2U);
}
