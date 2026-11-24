/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(8)
#include "pes6/competition_records.h"

s32 func_0022ABC0(void) {
    KnockoutCompetition *cup = knockoutCompetition();
    KnockoutRound *roundRecord;
    KnockoutMatch *match;
    u8 selected;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (!cup)
        return 0;
    selected = cup->selectedRound;
    roundRecord = knockoutRound(selected);
    if (!roundRecord)
        return 0;
    match = knockoutFixture(selected, roundRecord->currentFixture);
    if (!match)
        return 0;
    if (match->secondLeg > 0)
        return 1;
    return 0;
}
