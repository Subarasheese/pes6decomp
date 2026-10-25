/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00231240(void);
s32 func_00234E00(s32);

s32 func_002365F0(s32 x) {
    if (func_00231240() == 1) {
        return 0;
    }
    return func_00234E00(x);
}
