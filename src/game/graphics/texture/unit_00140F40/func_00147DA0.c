/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u64 func_00147D70(s32);
u64 func_00147D40(s32);

u64 func_00147DA0(s32 a, s32 b) {
    u64 first = func_00147D70(a);
    u64 second;

    if (first == 0) {
        return 0;
    }
    second = func_00147D40(b);
    if (second != 0) {
        return first | second;
    }
    return 0;
}
