/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_001C4730(s32, void *, s32);
extern char D_00CBDED0[];

s32 func_00C11E50(s32 arg0) {
    s32 var_s0;

    var_s0 = arg0;
    if (var_s0 != 0) {
        func_001C4730(var_s0, (void *)D_00CBDED0, 0x1BC4);
        var_s0 += 0x1BC4;
    }
    return var_s0;
}
