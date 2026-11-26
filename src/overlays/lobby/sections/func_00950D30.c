/* compiler: mwcc-3.0.1b198-O3 */
#pragma inline_depth(16)
#include "pes6/lobby_group_members.h"
u32 func_00950D30(s32 id) {
    u32 count, index;
    if (!id)
        return 100;
    count = lobby_group_total_count();
    for (index = 0; index < count; index++) {
        LobbyGroup *group = lobby_group_at_total(index);
        s32 current = (0 == group) ? 0 : group->id;
        if (id == current)
            return index;
    }
    return 100;
}
