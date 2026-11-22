/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_groups.h"
s8 func_00951400(u32 index) {
    LobbyGroup *row = lobby_group_at(index);
    if (row)
        goto available;
    return 0;
available:
    return row->mode;
}
