/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 D_00CB3410[];

s32 func_00C12C80(u8 id)
{
    s32 i;

    for (i = 0; i < 2; i++) {
        if (D_00CB3410[i] == id) {
            return 1;
        }
    }
    return 0;
}
