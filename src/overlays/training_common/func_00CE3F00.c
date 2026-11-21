/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void Pes6Heap_Free(int param_1);
extern void func_001D7F10(int param_1);

void func_00CE3F00(int *param_1)

{
    int iVar1;

    if (((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) {
        iVar1 = 0;
        if (0 < param_1[2]) {
            do {
                func_001D7F10(*(u32 *)(*param_1 + iVar1 * 4));
                iVar1 = iVar1 + 1;
            } while (iVar1 < param_1[2]);
        }
        Pes6Heap_Free(param_1[1]);
        param_1[1] = 0;
        Pes6Heap_Free(*param_1);
        *param_1 = 0;
        param_1[2] = 0;
    }
    return;
}
