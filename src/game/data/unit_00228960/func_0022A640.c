/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(8)
#include "pes6/competition_records.h"

KnockoutMatch *func_0022A640(u8 round, u8 team, u8 stage) {
    u16 i;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    for (i = 0; i < CUP_MATCH_COUNT; i++) {
        KnockoutMatch *match = knockoutFixture(round, i);
        if (match) {
            u8 home = knockoutTeamSlot(match->teams[0]);
            u8 away = knockoutTeamSlot(match->teams[1]);
            if (stage == match->stage && (team == home || team == away))
                return match;
        }
    }
    return 0;
}
