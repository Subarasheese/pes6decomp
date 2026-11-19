/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 D_00CBBE48[];

s32 func_00BEEA30(const u8 *entry)
{
    s32 i;
    u8 id = entry[0];

    for (i = 0; i < 3; i++) {
        if (D_00CBBE48[i + 0x9] == id) {
            return 1;
        }
    }
    return 0;
}
