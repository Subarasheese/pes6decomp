/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern f32 D_005A24A0[];

u8 func_00295290(void) {
    if (D_005A24A0[0] <= 5.0f) {
        goto one;
    }
    if (D_005A24A0[0] < 20.0f) {
        goto mid;
    }
    return 0;
mid:
    return D_005A24A0[0] <= 15.0f;
one:
    return 1;
}
