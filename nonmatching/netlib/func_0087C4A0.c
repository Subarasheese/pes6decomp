/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern char D_00591F24[];

void func_0087C4A0(void) {
    s32 var_a0;
    s32 var_v0;

    if ((*(u8 *)D_00591F24) != 2) {
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    if (var_v0 != 0) {
        var_a0 = 0xC0029;
    } else {
        var_a0 = 0xC001C;
    }
    func_001F08B0(var_a0);
}
