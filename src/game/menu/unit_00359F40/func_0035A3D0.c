/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 D_003E9FBC;

u32 func_0035A3D0(int param_1)

{
    u32 uVar1;

    uVar1 = 0;
    if (((D_003E9FBC != 0) && (*(int *)(D_003E9FBC + 0x14) != 0)) &&
        (param_1 < *(int *)(D_003E9FBC + 0x18))) {
        uVar1 = *(u32 *)(*(int *)(D_003E9FBC + 0x14) + param_1 * 4);
    }
    return uVar1;
}
