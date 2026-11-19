/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 D_00CB33F0[];

s32 func_00C12D40(u8 id)
{
    s32 i;

    for (i = 0; i < 3; i++) {
        if (D_00CB33F0[i] == id) {
            return 1;
        }
    }
    return 0;
}
