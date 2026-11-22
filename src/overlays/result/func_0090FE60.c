/* compiler: mwcc-3.0.1b210 */
#include "types.h"

int func_0090FE60(int arg0) {
    u32 value;

    value = arg0 & 0xffffff7f;
    if ((arg0 & 0x80U) == 0) {
        return value;
    }
    if ((int)value < 0x3c) {
        value = 0x2d;
    } else if ((int)value < 0x69) {
        value = 0x5a;
    } else if ((int)value < 0x78) {
        value = 0x69;
    } else {
        value = 0x78;
    }
    return value;
}
