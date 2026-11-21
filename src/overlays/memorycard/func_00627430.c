/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 *D_008F9E40[];

u32 func_00627430(u32 param_1, int param_2)

{
    if (((param_2 == 3) || (param_2 == 4)) && ((int)param_1 < 0x23)) {
        param_1 = (u32) * (u8 *)((int)&D_008F9E40[0] + param_1);
    }
    return param_1;
}
