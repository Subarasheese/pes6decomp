/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_003E9E5C;

s32 func_002E91D0(void) {
    u8 mode = D_003E9E5C;

    if (mode == 1 || mode == 2) {
        return 1;
    }
    return 0;
}
