/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001EF370(int param_1, int param_2);
extern u32 func_001B9830(u32 param_1, u32 param_2);

int func_00CED280(int *param_1, char param_2, u32 param_3)

{
    int iVar1;
    u32 uVar2;

    if (param_1 == (int *)0x0) {
        return -1;
    }
    iVar1 = param_1[3];
    if (param_1[2] + -1 < iVar1) {
        return -1;
    }
    uVar2 = *(u32 *)(*param_1 + iVar1 * 4);
    func_001B9830(uVar2, (int)param_2);
    func_001EF370(uVar2, param_3);
    return iVar1;
}
