/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_0082C2A0(void);
extern char D_008AA13C[];

s8 func_008344D0(void)

{
    s8 sVar1;
    int iVar2;

    iVar2 = func_0082C2A0();
    if (iVar2 == 0) {
        iVar2 = 0;
    } else {
        iVar2 = (u32)D_008AA13C;
    }
    if (iVar2 == 0) {
        iVar2 = 0;
    }
    if (iVar2 == 0) {
        sVar1 = 0;
    } else {
        sVar1 = *(s8 *)(iVar2 + 0x6f);
    }
    return sVar1;
}
