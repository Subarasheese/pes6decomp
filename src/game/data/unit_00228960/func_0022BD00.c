/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(8)
#include "pes6/competition_records.h"

KnockoutMatch *func_0022BD00(u8 round, u8 stage, u8 pairing) {
    KnockoutCompetition *cup = knockoutCompetition();
    KnockoutRound *roundRecord;
    s32 i;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    roundRecord = knockoutRound(round);
    if (!cup)
        return 0;
    if (!roundRecord)
        return 0;
    for (i = 0; i < roundRecord->fixtureCount; i++) {
        KnockoutMatch *match = knockoutFixture(round, i);
        if (match && match->stage == stage && match->pairing == pairing)
            return match;
    }
    return 0;
}
