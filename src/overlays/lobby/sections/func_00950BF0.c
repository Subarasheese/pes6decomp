/* compiler: mwcc-3.0.1b198-O3 */
#pragma inline_depth(16)
#include "pes6/lobby_group_members.h"
s32 func_00950BF0(u32 index) {
    s32 count = 0, slot;
    for (slot = 0; slot < 8; slot++) {
        if (lobby_group_member_id(index, slot))
            count++;
    }
    return count;
}
