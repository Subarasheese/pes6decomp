/* compiler: mwcc-3.0.1b151 */
#include "types.h"

u8 func_00B234E0(int arg0)

{
    u8 iVar1;

    iVar1 = 0;
    switch (arg0 & 0xffU) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 10:
    case 11:
    case 12:
        iVar1 = 2;
        break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 13:
    case 14:
    case 15:
    case 16:
        iVar1 = 1;
        break;
    }
    return iVar1;
}
