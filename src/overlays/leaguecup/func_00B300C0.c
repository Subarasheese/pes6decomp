/* compiler: mwcc-3.0.1b151 */
#include "types.h"

u8 func_00B300C0(int arg0)

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
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
        iVar1 = 5;
        break;
    case 20:
    case 21:
    case 22:
        iVar1 = 2;
        break;
    case 18:
    case 19:
    case 23:
    case 24:
    case 25:
    case 26:
        iVar1 = 1;
        break;
    }
    return iVar1;
}
