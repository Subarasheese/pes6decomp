/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001D61A0(s32, s32, s32);
s32 func_001D7290(s32, s32, s32, s32);

s32 func_001D6E70(s32 arg0, s32 arg1, s32 arg2) {
    s32 t;
    if (arg0 != 0) {
        t = func_001D61A0(arg0, 1, arg1);
        if (t != 0) {
            return func_001D7290(arg0, t, arg1, arg2);
        }
        return 0;
    }
    return 0;
}
