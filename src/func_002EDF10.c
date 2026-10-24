/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_0021F710(s32);

s32 func_002EDF10(s32 input) {
    s32 value;

    value = func_0021F710(input);
    if ((value >= 0x124) && (value < 0x156)) {
        return 2;
    }
    if ((value >= 0x156) && (value < 0x1BA)) {
        return 1;
    }
    if ((u32) (value - 0x1BA) < 2U) {
        return 2;
    }
    return 0;
}
