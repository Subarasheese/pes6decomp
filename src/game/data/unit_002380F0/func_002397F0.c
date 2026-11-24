/* compiler: mwcc-3.0.1b210 */
#include "pes6/cup_round_order.h"

s32 func_002397F0(u8 round, u8 stage) {
    CupSavedRound *roundRecord;
    s32 i;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    roundRecord = func_0022C140(round);
    if (!roundRecord)
        return 0;
    for (i = 0; i < roundRecord->matchCount; i++) {
        CupSavedFixture *f = func_0022BFF0(round, i);
        if (f && stage == f->stage && !f->completed)
            return 0;
    }
    return 1;
}
