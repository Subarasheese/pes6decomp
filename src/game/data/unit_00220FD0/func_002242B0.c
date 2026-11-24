/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s32 func_00230410(void), func_00210DF0(void), func_0096F610(s32 player);
s32 func_002242B0(s32 player) {
    if (func_00230410() == 1)
        return 0;
    if (func_00210DF0() == 1) {
        if (func_0096F610(player) == 1)
            return 1;
        else
            return 0;
    } else
        return 1;
}
