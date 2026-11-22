/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 D_008F5880[];

void func_008D8F10(u8 param_1, u32 param_2)

{
    if (param_1 < 8) {
        *(u32 *)(&D_008F5880[0] + (u32)param_1 * 4) = param_2;
    }
    return;
}
