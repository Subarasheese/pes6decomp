/* compiler: mwcc-3.0.1b210 */
#include "pes6/cup_round_order.h"

u8 func_00239E40(u8 round, u8 index) {
    CupBracketIndex *bracket = func_0022C1E0();
    CupSavedRound *roundRecord;
    u8 pos;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0xff;
    roundRecord = func_0022C140(round);
    if (!bracket)
        return 0xff;
    if (!roundRecord)
        return 0xff;
    pos = roundRecord->teamStart + index;
    if (pos >= CUP_BRACKET_TEAMS)
        return 0xff;
    return bracket->teams[pos];
}
