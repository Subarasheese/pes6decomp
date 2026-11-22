/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_00BC5ED0(s32 arg0) {
    s32 value;
    s32 value2;

    value = arg0 & 0xFFFF;
    if ((value >= 0x40) && (value < 0xCC)) {
        value2 = 3;
    } else if (value == 0x126) {
        value2 = 3;
    } else {
        if ((value >= 0xDD) && (value < 0xFE)) {
            value2 = 3;
        } else {
            value2 = 0;
        }
    }
    return value2 == 3;
}
