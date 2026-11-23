/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"
extern s32 D_003EA480, func_008C43B0(void);
s32 func_008C4370(void) {
    D_003EA480 = 1;
    if (func_008C43B0() == 2) {
        D_003EA480 = 0;
        return 1;
    }
    return 0;
}
