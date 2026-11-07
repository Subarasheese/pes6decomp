/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *func_00222850(s32, s32);

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

void func_00BC5D90(s32 arg0, u16 arg1) {
    func_00222850(arg0, kind(arg1));
}
