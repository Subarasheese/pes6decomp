/* compiler: mwcc-3.0.1b210 */
#include "types.h"

void func_00BE3150(u64 param_1, u32 *param_2, u32 *param_3) {
    *param_2 = 0;
    *param_3 = 0;
    switch (param_1) {
    default:
        *param_2 = 0xf;
        *param_3 = 0x2e;
        break;
    case 1:
        *param_3 = 1;
        break;
    case 2:
        *param_3 = 2;
        break;
    case 3:
        *param_3 = 3;
        break;
    case 4:
        *param_3 = 9;
        break;
    case 5:
        *param_3 = 4;
        break;
    case 6:
        *param_3 = 3;
        break;
    case 9:
        *param_3 = 5;
    }
}
