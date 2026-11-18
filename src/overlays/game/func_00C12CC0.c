/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 D_00CB3400[];

s32 func_00C12CC0(u8 id)
{
    s32 i;

    for (i = 0; i < 2; i++) {
        if (D_00CB3400[i] == id) {
            return 1;
        }
    }
    return 0;
}
