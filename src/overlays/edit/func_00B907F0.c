/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 func_003655D0(u32 param_1);

u32 func_00B907F0(int *param_1, u32 param_2)

{
    int iVar1;

    if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
        return 0;
    }
    iVar1 = func_003655D0(param_2);
    *param_1 = iVar1;
    return 1;
}
