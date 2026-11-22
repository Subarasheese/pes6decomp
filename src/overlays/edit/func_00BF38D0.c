/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 D_00CBE818[];

int func_00BF38D0(int param_1)

{
    u32 uVar1;

    uVar1 = 0;
    do {
        if (param_1 == (&D_00CBE818[0])[uVar1]) {
            return uVar1 + 0xa5;
        }
        uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    return -1;
}
