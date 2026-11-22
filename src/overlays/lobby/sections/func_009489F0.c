/* compiler: mwcc-3.0.1b210 */
#pragma optimize_for_size on
#include "types.h"
typedef struct {
    u8 beforeMask[0x10];
    s32 mask;
} LobbyOptionSet;
extern s32 func_00835BA0(s32 mask, s32 option);
s32 func_009489F0(LobbyOptionSet *options) {
    s32 mask;
    s32 option;
    s32 count;
    if (!options)
        return 0;
    mask = options->mask;
    count = 0;
    option = 0;
    do {
        if (func_00835BA0(mask, option) == 1)
            ++count;
        ++option;
    } while (option < 14);
    return count;
}
