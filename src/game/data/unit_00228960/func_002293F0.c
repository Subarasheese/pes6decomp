/* compiler: mwcc-3.0.1b210 */
#include "pes6/competition_records.h"
u8 *func_002293F0(void) {
    u8 *section = (u8 *)leagueCompetition();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    return section == 0 ? 0 : &section[0];
}
