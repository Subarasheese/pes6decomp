/* compiler: mwcc-3.0.1b210 */
#include "types.h"

int func_009E10B0(int arg0)

{
    int iVar1;

    switch (arg0) {
    case 0:
    case 1:
    case 9:
        iVar1 = 1;
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
        iVar1 = 2;
        break;
    case 6:
        iVar1 = 0;
        break;
    default:
        iVar1 = 1;
    }
    return iVar1;
}
