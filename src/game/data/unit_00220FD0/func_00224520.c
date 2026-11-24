/* compiler: mwcc-3.0.1b210 */
#include "pes6/saved_roster.h"
u8 *func_00224520(u8 slot, u8 index) {
    SavedTeamPlayer *entry = savedPlayerAt(slot, index);
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (entry == 0)
        return 0;
    return entry->attributes;
}
