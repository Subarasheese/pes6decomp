/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_001C4730(void *, void *, s32);
extern char D_00CCAE40[];

s32 func_00C17C50(s32 arg0) {
    s32 var_s0;

    var_s0 = arg0;
    if (var_s0 != 0) {
        func_001C4730((void *)arg0, (void *)D_00CCAE40, 0x80);
        var_s0 += 0x80;
    }
    return var_s0;
}
