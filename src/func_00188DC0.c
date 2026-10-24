/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00189180(s32, s32);
void func_001893A0(s32, s32);

s32 func_00188DC0(s32 target, s32 key) {
    s32 found = func_00189180(key, 8);

    if (found != 0) {
        func_001893A0(target, found);
        return 1;
    }
    return 0;
}
