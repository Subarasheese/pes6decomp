/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_001C7F58(s32, s32);                    /* extern */
M2C_UNK func_002C9D20(s32);                         /* extern */

void func_008B2B00(s32 arg0, s32 arg1) {
    s32 var_a0;

    var_a0 = -1;
    if (arg1 >= 0x17) {
        var_a0 = 0x3D0021;
    }
    if (arg1 == 0x16) {
        var_a0 = 0x3D0020;
    }
    if (var_a0 == -1) {
        func_002C9D20(arg0);
        return;
    }
    func_001C7F58(arg0, func_001F08B0(var_a0));
}
