/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 Pes6SaveData_IsUnavailable(void);
extern char D_003EA8EC[8];

int func_0095C9B0(int arg0)

{
    int iVar1;
    u32 uVar2;

    iVar1 = Pes6SaveData_IsUnavailable();
    if (iVar1 == 1) {
        uVar2 = 0;
    } else {
        uVar2 = (u32) * (u8 *)(((u32)D_003EA8EC + (arg0 & 0xffU)));
    }
    return uVar2;
}
