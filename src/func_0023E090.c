/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_00591C09[];

s32 func_0023E090(void) {
    u8 mode = D_00591C09[0];

    if (mode == 1 || mode == 4 || mode == 2 || mode == 14) {
        return 1;
    }
    return 0;
}
