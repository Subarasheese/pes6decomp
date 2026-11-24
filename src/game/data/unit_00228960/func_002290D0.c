/* compiler: mwcc-3.0.1b210 */
#include "pes6/competition_records.h"

u16 func_002290D0(u8 index) {
    u8 slot = leagueTeamSlot(index);
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0xffff;
    if (slot > 80)
        return 0xffff;
    return func_00225680(slot);
}
