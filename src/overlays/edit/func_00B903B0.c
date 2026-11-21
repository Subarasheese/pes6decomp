/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 func_001B9B30(u32 param_1, u32 param_2, u32 param_3, u32 param_4);

u32 func_00B903B0(int *param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)

{
    int iVar1;

    if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
        return 0;
    }
    iVar1 = func_001B9B30(param_2, param_3, param_4, param_5);
    *param_1 = iVar1;
    return 1;
}
