/* compiler: mwcc-3.0.1b198-O3 */
#pragma inline_depth(16)
#include "pes6/lobby_group_members.h"
u32 func_00950FD0(s32 id) {
    u32 count, index;
    u32 slot;
    if (!id)
        return 100;
    count = lobby_group_count();
    for (index = 0; index < count; index++) {
        for (slot = 0; slot < 8; slot++) {
            if (id == lobby_group_member_id(index, slot))
                return index;
        }
    }
    return 100;
}
