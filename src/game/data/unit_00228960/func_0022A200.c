/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(8)
#include "pes6/competition_records.h"

typedef struct {
    u8 reserved0[0x170];
    u16 teamId;
} TeamRecord;
extern TeamRecord *func_00237530(u16 team);

KnockoutMatch *func_0022A200(u8 round, u16 team, u8 stage) {
    u16 alternate = team, i;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (team == 0x126 || team == 0x127) {
        TeamRecord *record = func_00237530(team);
        if (record)
            alternate = record->teamId;
    }
    for (i = 0; i < CUP_MATCH_COUNT; i++) {
        KnockoutMatch *match = knockoutFixture(round, i);
        u16 home, away;
        if (!match)
            return 0;
        home = teamForCupSlot(match->teams[0]);
        away = teamForCupSlot(match->teams[1]);
        if (stage == match->stage &&
            (team == home || team == away || alternate == home || alternate == away))
            return match;
    }
    return 0;
}
