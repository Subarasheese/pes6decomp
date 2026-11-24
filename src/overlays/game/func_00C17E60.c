/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern u8 D_00CCAE40[][32];
u8 func_00C17E60(u8 team) {
    u8 count = 0;
    s32 i;
    const u8 *squad = D_00CCAE40[(u8)team];
    for (i = 0; i < 32; ++i) {
        if (squad[i] != 0xff)
            ++count;
    }
    return count;
}
