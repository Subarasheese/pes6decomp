/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001C4730(s32, void *, s32);
extern char D_00CCAE00[];

s32 func_00C16E20(s32 arg0) {
    s32 var_s0;

    var_s0 = arg0;
    if (var_s0 != 0) {
        func_001C4730(arg0, D_00CCAE00, 0x28);
        var_s0 += 0x28;
    }
    return var_s0;
}
