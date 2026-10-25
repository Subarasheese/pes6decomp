/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_00591C09[];
extern s32 D_003E9A8C;

s32 func_00240C40(void) {
    if (D_00591C09[0] != 0 && D_00591C09[0] != 12) {
        return 1;
    }
    if (D_003E9A8C == 9) {
        return 1;
    }
    return 0;
}
