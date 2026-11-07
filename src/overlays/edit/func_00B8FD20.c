/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_001D6D30(s32, s32);
s32 func_001D6EF0(s32, s32, s32);
s32 func_001F0160(s32);

s32 func_00B8FD20(s32 *arg0, s32 arg1, s32 arg2) {
    s32 r;

    if (arg0 == NULL || *arg0 != 0) {
        return 0;
    }
    r = func_001D6EF0(arg1, func_001F0160(func_001D6D30(arg1, arg2)), arg2);
    *arg0 = r;
    return r != 0;
}
