/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(8)
#include "pes6/competition_records.h"

s32 func_0022AE10(u8 index) {
    KnockoutRound *roundRecord;
    s32 i;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    roundRecord = knockoutRound(index);
    if (!roundRecord)
        return 0;
    for (i = 0; i < roundRecord->fixtureCount; i++) {
        KnockoutMatch *match = knockoutFixture(index, i);
        if (match && !match->completed)
            return 0;
    }
    return 1;
}
