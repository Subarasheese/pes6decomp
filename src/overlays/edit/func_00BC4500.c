/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_002D7930(void);

static inline s32 kind(u16 arg0) {
    if (arg0 >= 0x40 && arg0 < 0xCC) {
        return 3;
    }
    if (arg0 == 0x126) {
        return 3;
    }
    if (arg0 >= 0xDD && arg0 < 0xFE) {
        return 3;
    }
    return 0;
}

s32 func_00BC4500(u16 arg0) {
    if (kind(arg0) == 0) {
        return 0;
    }
    return func_002D7930() == 0;
}
