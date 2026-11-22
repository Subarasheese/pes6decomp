/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u16 D_008ECA00[];

int func_008B2FF0(int param_1)

{
    int iVar1;

    iVar1 = 0;
    do {
        if (param_1 <= (short)(&D_008ECA00[0])[iVar1 * 4]) {
            return iVar1 + -1;
        }
        iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    return 3;
}
