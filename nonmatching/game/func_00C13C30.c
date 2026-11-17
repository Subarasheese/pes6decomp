/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_001C4730(s32, void *, s32);
extern char D_00CCAD50[];

s32 func_00C13C30(s32 arg0) {
    s32 var_s0;

    var_s0 = arg0;
    if (var_s0 != 0) {
        func_001C4730(var_s0, D_00CCAD50, 4);
        var_s0 += 4;
    }
    return var_s0;
}
