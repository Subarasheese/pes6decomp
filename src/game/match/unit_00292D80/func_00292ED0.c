/* compiler: mwcc-3.0.1b151 */

#include "types.h"

s32 func_00292ED0(s32 role) {
    s32 v = (u8)role;
    if (v < 1)
        return 0;
    else if (v <= 4)
        return 1;
    else if (v <= 9)
        return 2;
    else
        return 3;
}
