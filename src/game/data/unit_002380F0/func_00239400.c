/* compiler: mwcc-3.0.1b210 */
#include "pes6/cup_round_order.h"

void func_00239400(u8 count) {
    CupBracketIndex *bracket = func_0022C1E0();
    s32 i;
    if (Pes6SaveData_IsUnavailable() == 1)
        return;
    for (i = 0; i < count; i++) {
        if (i < CUP_BRACKET_TEAMS)
            bracket->teams[i] = i;
    }
}
