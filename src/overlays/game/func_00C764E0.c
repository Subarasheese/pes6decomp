/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 D_00CB4C54[];

u32 func_00C764E0(u32 param_1)

{
    u32 uVar1;

    uVar1 = 3;
    if (param_1 < 3) {
        uVar1 = *(u32 *)(&D_00CB4C54[0] + param_1 * 8);
    }
    return uVar1;
}
