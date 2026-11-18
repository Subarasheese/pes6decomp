/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 D_00CB3488[];

s32 func_00C129C0(const u8 *entry)
{
    s32 i;
    u8 id = entry[2];

    for (i = 0; i < 8; i++) {
        if (D_00CB3488[i] == id) {
            return 1;
        }
    }
    return 0;
}
