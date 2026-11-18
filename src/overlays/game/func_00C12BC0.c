/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 D_00CB3420[];

s32 func_00C12BC0(u8 id)
{
    s32 i;

    for (i = 0; i < 9; i++) {
        if (D_00CB3420[i] == id) {
            return 1;
        }
    }
    return 0;
}
