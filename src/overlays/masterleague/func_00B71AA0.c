/* compiler: mwcc-3.0.1b151 */
#include "types.h"

u8 func_00B71AA0(u8 param_1)

{
    u8 uVar1;

    uVar1 = 6;
    switch (param_1) {
    case 0:
        uVar1 = 1;
        break;
    case 1:
    case 2:
    case 3:
    case 4:
        uVar1 = 3;
        break;
    case 5:
        uVar1 = 4;
        break;
    case 6:
    case 7:
    case 8:
        uVar1 = 5;
        break;
    }
    return uVar1;
}
