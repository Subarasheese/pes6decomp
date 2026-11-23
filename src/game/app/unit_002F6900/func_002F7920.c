/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"
extern s32 func_002DCA30(void), func_00825610(void);
extern u8 D_00591BBA[];
s32 func_002F7920(void) {
    s32 active = D_00591BBA[0] != 0;
    if (active) {
        s32 state;
        if (func_002DCA30())
            state = func_00825610();
        else
            state = 0;
        active = state == 0;
    }
    return active;
}
