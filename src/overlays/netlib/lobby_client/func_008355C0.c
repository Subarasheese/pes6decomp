/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_clock.h"
extern s8 D_008A5F7A[];
extern s32 D_008A5F80[];
extern s32 func_00828140(void);

s32 func_008355C0(void) {
    if (D_008A5F7A[0] != 1) {
        return 1;
    }
    return func_00827BF0(D_008A5F80[0] + func_00828140());
}
