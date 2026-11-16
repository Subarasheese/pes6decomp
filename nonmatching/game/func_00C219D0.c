/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_001C4730(void *, void *, s32);          /* extern */
extern char D_00CCAF80[];

s32 func_00C219D0(s32 arg0) {
    s32 var_s0;

    var_s0 = arg0;
    if (var_s0 != 0) {
        func_001C4730((void *)var_s0, D_00CCAF80, 0x94);
        var_s0 += 0x94;
    }
    return var_s0;
}
