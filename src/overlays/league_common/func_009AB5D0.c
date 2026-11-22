/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_009AB5D0(u8 value) {
    s32 result = 0;
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
        result = 28;
        break;
    case 4:
        result = 32;
        break;
    case 13:
        result = 0;
        break;
    }
    return result;
}
