/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_0017EC50(s32, s32);

s32 func_0017F8A0(s32 arg) {
    s32 i;

    for (i = 1; i < 5; i++) {
        if (func_0017EC50(i, arg) != 0) {
            return 0;
        }
    }
    return 1;
}
