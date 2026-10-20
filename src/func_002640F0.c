/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_0017F900();                                /* extern */
s32 func_001FC840(s32);                             /* extern */
s32 func_002646D0(s32);                             /* extern */
M2C_UNK func_00264790(s32, M2C_UNK);                /* extern */
M2C_UNK func_002648E0(s32);                         /* extern */
M2C_UNK func_002648F0();                            /* extern */

s32 func_002640F0(s32 arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0;
    func_002648F0();
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_001FC840(arg1) != 0) {
            func_00264790(arg0, 1);
        case 1:
            if (func_0017F900() != 0) {
                var_s0 = 1;
            }
        }
        break;
    }
    func_002648E0(arg0);
    return var_s0;
}
