/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(3)
#include "pes6/cup_round_order.h"

void func_00239C70(u8 round) {
    CupSavedRound *roundRecord;
    if (Pes6SaveData_IsUnavailable() == 1)
        return;
    roundRecord = func_0022C140(round);
    if (!roundRecord)
        return;
    roundRecord->current++;
    selectCupFixture(round);
}
