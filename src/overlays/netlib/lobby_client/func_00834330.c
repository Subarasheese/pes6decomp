/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 *func_00D0BAF0(void);
extern char D_008A8394[];

s8 func_00834330(void)

{
    s8 sVar1;
    int *piVar2;
    int iVar3;

    piVar2 = func_00D0BAF0();
    if (piVar2 == (int *)0x0) {
        iVar3 = 0;
    } else {
        iVar3 = (u32)D_008A8394;
    }
    if (iVar3 == 0) {
        iVar3 = 0;
    }
    if (iVar3 == 0) {
        sVar1 = '\x03';
    } else {
        sVar1 = *(s8 *)(iVar3 + 0x53);
    }
    return sVar1;
}
