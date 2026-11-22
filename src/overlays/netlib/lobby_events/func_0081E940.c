/* compiler: mwcc-3.0.1b151 */
#include "types.h"

s32 func_0081E940(s32 mask) {
    s32 result = 14;
    switch (mask) {
    case 0x0010:
        result = 0;
        break;
    case 0x0020:
        result = 1;
        break;
    case 0x0040:
        result = 2;
        break;
    case 0x0080:
        result = 3;
        break;
    case 0x4000:
        result = 4;
        break;
    case 0x1000:
        result = 5;
        break;
    case 0x8000:
        result = 6;
        break;
    case 0x2000:
        result = 7;
        break;
    case 0x0800:
        result = 8;
        break;
    case 0x0200:
        result = 9;
        break;
    case 0x0400:
        result = 10;
        break;
    case 0x0100:
        result = 11;
        break;
    case 0x0001:
        result = 12;
        break;
    case 0x0008:
        result = 13;
        break;
    }
    return result;
}
