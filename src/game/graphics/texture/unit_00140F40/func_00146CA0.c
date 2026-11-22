/* compiler: mwcc-3.0.1b210 */
#include "types.h"

int func_00146CA0(int arg0) {
    int value;
    u32 value2;

    value = 0;
    value2 = 1;
    if (1 < (u32)arg0) {
        do {
            value2 = value2 << 1;
            value = value + 1;
        } while (value2 < (u32)arg0);
    }
    return value;
}
