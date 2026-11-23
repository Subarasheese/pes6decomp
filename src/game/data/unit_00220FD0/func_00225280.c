/* compiler: mwcc-3.0.1b210 */
#include "pes6/saved_teams.h"

u8 *func_00225280(u8 row) {
    SavedTeamList *list = savedTeamList();
    if (!list)
        return 0;
    if (row >= 32)
        return 0;
    return list->records54[row];
}
