/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_0017F900(M2C_UNK);                         /* extern */
M2C_UNK func_00255EA0();                            /* extern */
M2C_UNK func_002D3030();                            /* extern */
M2C_UNK func_003424C0();                            /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */

s32 func_001FC130(void) {
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0;
    temp_v1 = func_009E1C90(2) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    default:
        func_009E1D30(2, 0);
        break;
    case 0:
        if (func_0017F900(2) != 0) {
            func_003424C0();
            func_009E1D30(2, 1);
        case 1:
            func_00255EA0();
            func_002D3030();
            func_009E1D30(2, 1);
        case 2:
            var_s0 = 1;
        }
        break;
    }
    return var_s0;
}
