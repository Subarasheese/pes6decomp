/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_00529A80[];
extern s32 D_00529A98[];

s32 func_001BD0B0(void) {
    if (D_00529A80[0] != 0) {
        D_00529A98[0] = 1;
        D_00529A80[0] = 0;
        return 1;
    }
    return 0;
}
