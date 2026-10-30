/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00994D80(u8);                              /* extern */
s32 func_0099B6E0(u8, s32);                         /* extern */
extern s32 D_003EAE64;
extern char D_00B800B0[];

s32 func_00B3D280(s32 arg0) {
    s32 var_s1;
    s32 var_s2;
    u8 *var_s0;

    var_s1 = 0;
    if (D_003EAE64 == 0) {
        return 0;
    }
    var_s2 = 0;
    var_s0 = ((void *)D_00B800B0);
    do {
        if ((func_0099B6E0(*var_s0, arg0) == 1) && (func_00994D80(*var_s0) & 0xFF)) {
            var_s1 += 1;
        }
        var_s2 += 1;
        var_s0 += 4;
    } while (var_s2 < 0xA);
    return var_s1 & 0xFF;
}
