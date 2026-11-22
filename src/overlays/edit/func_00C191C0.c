/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 D_00CBFD90[];
extern u32 D_00CF2030[];

u32 func_00C191C0(int param_1)

{
    u32 uVar1;

    uVar1 = 0;
    do {
        if (param_1 == (&D_00CBFD90[0])[uVar1]) {
            return (&D_00CF2030[0])[uVar1];
        }
        uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    return 0;
}
