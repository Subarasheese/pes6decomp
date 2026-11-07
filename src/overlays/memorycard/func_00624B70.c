/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


s32 func_00624B70(s32 arg0) {
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;

    switch (arg0) {                                 /* irregular */
    case 0x37:
        var_v0_2 = 0x131400;
        break;
    case 0x38:
        var_v0_2 = 0x134C00;
        break;
    case 0x3A:
        var_v0_2 = 0x131400;
        break;
    default:
        var_v0_2 = 0x123000;
        break;
    }
    temp_v1 = var_v0_2 + 0x7FFF + 0x7001;
    return (temp_v1 / 1024) + 4;
}
