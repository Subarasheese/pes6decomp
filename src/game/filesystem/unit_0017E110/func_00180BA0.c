/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern u32 func_001CDA50(s32);

s32 func_00180BA0(s32 mode) {
    u32 value;
    s32 result;
    result = 0xb;
    switch (mode) {
    case 0:

    case 1:
        result = 0;
        break;

    case 2:
        value = func_001CDA50(0);
        result = value + 1;
        break;

    case 3:
        value = func_001CDA50(1);
        result = value + 1;
        break;

    case 4:
        break;
    }

    return result;
}
