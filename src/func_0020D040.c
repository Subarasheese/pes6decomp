/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_0020C4B0(s32, s32);                        /* extern */
extern char D_00537AFC[];

s32 func_0020D040(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 var_v0;

    temp_a1 = arg1 + (arg0 << 5);
    var_v0 = 0;
    if (temp_a1 < 0x40) {
        var_v0 = func_0020C4B0((*(s32 *)D_00537AFC), temp_a1);
    }
    return var_v0;
}
