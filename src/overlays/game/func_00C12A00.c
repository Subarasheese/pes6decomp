/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 D_00CB3488[];

s32 func_00C12A00(u8 id)
{
    s32 i;

    for (i = 0; i < 8; i++) {
        if (D_00CB3488[i] == id) {
            return 1;
        }
    }
    return 0;
}
