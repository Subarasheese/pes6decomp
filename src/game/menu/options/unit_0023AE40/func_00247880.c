/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_pad_assignment.h"

extern s32 func_00247460(s32);

void func_00247880(s32 pad, MatchPadSlot *slots) {
    s32 team, i, sign, count;
    for (team = 0; team <= 1; team++) {
        count = 0;
        if (team == 0)
            sign = -1;
        else
            sign = 1;
        for (i = 0; i < MATCH_PAD_COUNT; i++) {
            if (slots[i].side == sign * 3)
                count++;
            if (count > 1) {
                if (!func_00247460(team))
                    slots[pad].side = sign;
                else
                    slots[pad].side = sign * 4;
                break;
            }
        }
        if (!func_00247460(team)) {
            for (i = 0; i < MATCH_PAD_COUNT; i++) {
                if (slots[i].side == sign * 11) {
                    slots[i].side = 10;
                    if (D_0053CB40[i] != 1) {
                        D_0053CB40[i] = 0;
                        Pes6PadAssign[i].state = 0;
                    }
                }
                if (slots[i].side == sign * 4) {
                    slots[i].side = 0;
                    D_0053CB40[i] = 0;
                    Pes6PadAssign[i].state = 0;
                }
            }
        }
    }
}
