/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(3)
#include "pes6/cup_round_order.h"

void func_002396B0(u8 round) {
    CupBracketIndex *bracket = func_0022C1E0();
    CupSavedRound *roundRecord;
    s32 i, count;
    if (Pes6SaveData_IsUnavailable() == 1)
        return;
    if (!bracket)
        return;
    roundRecord = func_0022C140(round);
    if (!roundRecord)
        return;
    i = 0;
    count = 0;
    for (; i < roundRecord->teamCount; i++) {
        if (func_00225940(cupRoundTeam(round, i)) != 0)
            count++;
    }
    roundRecord->activeTeams = count;
}
