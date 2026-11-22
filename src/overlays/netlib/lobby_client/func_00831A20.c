/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_0082C2A0(void);
extern char D_008AA13C[];

int func_00831A20(void)

{
    int iVar1;

    iVar1 = func_0082C2A0();
    if (iVar1 == 0) {
        iVar1 = 0;
    } else {
        iVar1 = (u32)D_008AA13C;
    }
    if (iVar1 == 0) {
        iVar1 = 0;
    }
    if (iVar1 == 0) {
        iVar1 = 0;
    } else {
        iVar1 = *(int *)(iVar1 + 0x18);
    }
    return iVar1;
}
