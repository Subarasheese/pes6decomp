/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_0013B660();                                /* extern */
M2C_UNK func_00152130(M2C_UNK, s32);                /* extern */
s32 func_001BE7C0();                                /* extern */
M2C_UNK func_001BE830(s32);                         /* extern */
M2C_UNK func_001BE850(M2C_UNK);                     /* extern */

s32 func_001BE4D0(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;

    var_s1 = arg0;
    func_001BE850(0);
    if (var_s1 > 0) {
        func_001BE830(var_s1);
    }
    temp_v0 = func_001BE7C0();
    var_s0 = temp_v0;
    if ((temp_v0 == 1) && (func_0013B660() == 0)) {
        var_s0 = 0;
        if (var_s1 == 0) {
            var_s1 = 0x25;
        }
        func_00152130(0, var_s1 & 0xFF);
    }
    return var_s0;
}
