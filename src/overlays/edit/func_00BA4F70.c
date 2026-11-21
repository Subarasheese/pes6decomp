/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_002EE490(s32);
extern void func_002E9370(s32);

s32 func_00BA4F70(s32 arg0) {
    s32 value1;
    value1 = func_002EE490(arg0);
    if (value1 == 0) {
        return 0;
    } else {
        if (arg0 != 0x1BA) {
            func_002E9370(0x80000);
        }
        return 1;
    }
}
