/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#pragma no_branch_likely on
#include "types.h"
extern u8 D_009C5C20[];
extern s32 func_0097F040(void);
u8 func_0097F470(void) {
    s32 mode = (u8)func_0097F040();
    if (mode >= 49)
        return 0;
    return D_009C5C20[mode];
}
