/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 func_001D6E70(int param_1, u32 param_2, u32 param_3);

int func_00B8FC70(int *param_1, u32 param_2, u32 param_3, u32 param_4)

{
    int iVar1;

    if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
        return 0;
    }
    iVar1 = func_001D6E70(param_2, param_3, param_4);
    *param_1 = iVar1;
    return iVar1 != 0;
}
