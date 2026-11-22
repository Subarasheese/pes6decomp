/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 D_003EA6A8;

u32 func_008FFF50(int param_1)

{
    u32 uVar1;

    uVar1 = 0;
    if (((D_003EA6A8 != 0) && (*(int *)(D_003EA6A8 + 0x10) != 0)) &&
        (param_1 < *(int *)(D_003EA6A8 + 0x14))) {
        uVar1 = *(u32 *)(*(int *)(D_003EA6A8 + 0x10) + param_1 * 4);
    }
    return uVar1;
}
