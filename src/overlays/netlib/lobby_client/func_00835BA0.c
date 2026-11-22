/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_00835BA0(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 0;
    switch (arg1) {
    case 0:
        var_a2 = 1;
        break;
    case 1:
        var_a2 = 2;
        break;
    case 2:
        var_a2 = 4;
        break;
    case 3:
        var_a2 = 8;
        break;
    case 4:
        var_a2 = 0x10;
        break;
    case 5:
        var_a2 = 0x20;
        break;
    case 6:
        var_a2 = 0x40;
        break;
    case 7:
        var_a2 = 0x80;
        break;
    case 8:
        var_a2 = 0x100;
        break;
    case 9:
        var_a2 = 0x200;
        break;
    case 10:
        var_a2 = 0x400;
        break;
    case 11:
        var_a2 = 0x800;
        break;
    case 12:
        var_a2 = 0x1000;
        break;
    case 13:
        var_a2 = 0x2000;
        break;
    }
    return (var_a2 & arg0) != 0;
}
