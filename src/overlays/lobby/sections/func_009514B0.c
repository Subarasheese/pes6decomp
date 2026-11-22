/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_groups.h"
s32 func_009514B0(u32 index) {
    LobbyGroup *row = lobby_group_at(index);
    if (row)
        goto available;
    return 0;
available:
    return row->id;
}
