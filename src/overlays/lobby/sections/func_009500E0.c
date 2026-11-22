/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_groups.h"
u8 func_009500E0(u32 index, s32 side, s32 slot) {
    LobbyGroup *group = lobby_match_group_at(index);
    if (!group)
        return 0;
    if (side < 0 || side >= 2)
        return 0;
    if (slot < 0 || slot >= 5)
        return 0;
    return group->flags[side][slot];
}
