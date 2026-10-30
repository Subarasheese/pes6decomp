/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008C9DB0(s32, M2C_UNK);                /* extern */
M2C_UNK func_008E5110(s32, M2C_UNK);                /* extern */
M2C_UNK func_008E5200(s32, M2C_UNK);                /* extern */
M2C_UNK func_008EAD60(s32, M2C_UNK);                /* extern */

void func_008EA4C0(s32 arg0, s32 arg1) {
    M2C_UNK var_s0;
    s32 temp_v1;

    temp_v1 = arg1 & 0xFF;
    var_s0 = 1;
    switch (temp_v1) {                              /* irregular */
    case 7:
        func_008E5110(arg0 + 0x129C, 1);
        func_008C9DB0(arg0 + 0xB0C, 0);
        var_s0 = 0;
        break;
    case 6:
        func_008E5110(arg0 + 0x129C, 1);
        func_008C9DB0(arg0 + 0xB0C, 9);
        var_s0 = 0;
        break;
    case 5:
        func_008E5110(arg0 + 0x129C, 0);
        func_008E5200(arg0 + 0x129C, 6);
        func_008C9DB0(arg0 + 0xB0C, 0xF);
        var_s0 = 0;
        break;
    default:
        func_008E5110(arg0 + 0x129C, 1);
        func_008C9DB0(arg0 + 0xB0C, 5);
        break;
    }
    func_008EAD60(arg0 + 0x24C4, var_s0);
}
