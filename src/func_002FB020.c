/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 D_005E9A98[];
extern s32 D_005E9A90[];

s32 func_002FB020(void) {
    if (D_005E9A98[0] != 1) {
        return -1;
    }
    return D_005E9A90[0];
}
