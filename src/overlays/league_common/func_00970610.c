/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern int func_00970870(u32 param_1);

u16 func_00970610(u32 param_1)

{
    u16 uVar1;
    int iVar2;

    iVar2 = func_00970870(param_1);
    if (iVar2 == 0) {
        return 0x11a;
    }
    uVar1 = *(u16 *)(iVar2 + 0x3c) & 0x1ff;
    if (uVar1 == 0x69) {
        uVar1 = 0x11a;
    }
    return uVar1;
}
