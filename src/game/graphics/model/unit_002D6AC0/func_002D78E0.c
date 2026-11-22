/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 D_003B2FB8[];

u32 func_002D78E0(u32 param_1)

{
    u32 uVar1;

    uVar1 = 0;
    do {
        if (param_1 == (u8)(&D_003B2FB8[0])[uVar1]) {
            return 1;
        }
        uVar1 = uVar1 + 1;
    } while (uVar1 < 7);
    return 0;
}
