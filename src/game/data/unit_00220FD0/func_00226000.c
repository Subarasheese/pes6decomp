/* compiler: mwcc-3.0.1b210 */
#include "pes6/saved_teams.h"
static inline u8 *listSettings(void) {
    SavedTeamList *list = savedTeamList();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (!list)
        return 0;
    return list->listSettings;
}
u8 *func_00226000(void) {
    u8 *section = listSettings();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    return section == 0 ? 0 : &section[0];
}
