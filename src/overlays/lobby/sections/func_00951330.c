/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_groups.h"
char *func_00951330(u32 index) {
    LobbyGroup *row = lobby_group_at(index);
    if (!row)
        return 0;
    if (row->name[0] == 0)
        return 0;
    return row->name;
}
