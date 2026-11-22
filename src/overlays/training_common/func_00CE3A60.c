/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001DF3B0(int param_1, float param_2);

void func_00CE3A60(int *param_1)

{
    int iVar1;

    iVar1 = 0;
    param_1[4] = 0;
    if (0 < param_1[1]) {
        do {
            func_001DF3B0(*(u32 *)(*param_1 + iVar1 * 4), 0);
            iVar1 = iVar1 + 1;
        } while (iVar1 < param_1[1]);
    }
    return;
}
