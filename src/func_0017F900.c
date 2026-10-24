/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_0017ECA0(s32);

s32 func_0017F900(void) {
    s32 i;

    for (i = 1; i < 5; i++) {
        if (func_0017ECA0(i) != 0) {
            return 0;
        }
    }
    return 1;
}
