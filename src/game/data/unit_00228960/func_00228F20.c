/* compiler: mwcc-3.0.1b210 */
#include "pes6/competition_records.h"

u8 func_00228F20(u8 index) {
    u8 slot = leagueTeamSlot(index);
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (slot >= 80)
        return 0;
    return func_00225940(slot);
}
