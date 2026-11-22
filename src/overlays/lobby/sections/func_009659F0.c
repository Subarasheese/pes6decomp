/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 func_00840560(s32);

s32 func_009659F0(s32 arg0) {
    s32 value;
    unsigned short value2;
    value = (value2 = func_00840560(arg0) & 0xFF);
    value2 = 1;
    if (value < 0) {
        value = -value2;
    }
    if (value >= 4) {
        value = -value2;
    }
    return value;
}
