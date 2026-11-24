/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_score_event.h"
extern s32 func_0030D710(s32 side, s32 slot);

s32 func_0036A5D0(struct Pes6BitSet *bits, const MatchScoreEvent *event) {
    const MatchScoreDetail *detail = &event->match;
    s32 special = event->match.mode == 3, outcome = event->match.outcome;
    s16 home = event->match.home, away = event->match.away;
    s32 difference, oneGoal;
    Pes6BitSet_Write(bits, 0x3b, !(detail->flags & 1));
    Pes6BitSet_Write(bits, 0x3d, special);
    Pes6BitSet_Write(bits, 0x3e, special & (detail->flags & 0x10));
    Pes6BitSet_Write(bits, 0x3f, detail->flags & 2);
    Pes6BitSet_Write(bits, 0x40, detail->mode == 1);
    Pes6BitSet_Write(bits, 0x41, detail->flags & 8);
    Pes6BitSet_Write(bits, 0x43, detail->flags & 0x400);
    Pes6BitSet_Write(bits, 0x44, detail->flags & 0x800);
    Pes6BitSet_Write(bits, 0x42,
                     (Pes6BitSet_Lookup(bits, 0x43) | Pes6BitSet_Lookup(bits, 0x44)) &
                         (detail->minute >= 0x50) & detail->enabled &
                         ((u32)(detail->phase20 - 2) < 3));
    Pes6BitSet_Write(bits, 0x46, detail->flags & 0x20);
    Pes6BitSet_Write(bits, 0x47, detail->flags & 0x80);
    Pes6BitSet_Write(bits, 0x48, detail->flags & 0x100);
    Pes6BitSet_Write(bits, 0x45,
                     Pes6BitSet_Lookup(bits, 0x46) | Pes6BitSet_Lookup(bits, 0x47) |
                         Pes6BitSet_Lookup(bits, 0x48));
    Pes6BitSet_Write(bits, 0x4a, outcome == 1);
    Pes6BitSet_Write(bits, 0x4b, outcome == 2);
    Pes6BitSet_Write(bits, 0x4c, outcome == 4);
    Pes6BitSet_Write(bits, 0x4d, detail->flags & 0x400);
    Pes6BitSet_Write(bits, 0x4e, detail->flags & 0x800);
    Pes6BitSet_Write(bits, 0x4f, outcome == 3);
    Pes6BitSet_Write(bits, 0x49,
                     Pes6BitSet_Lookup(bits, 0x4a) | Pes6BitSet_Lookup(bits, 0x4b) |
                         Pes6BitSet_Lookup(bits, 0x4c) | Pes6BitSet_Lookup(bits, 0x4d) |
                         Pes6BitSet_Lookup(bits, 0x4e) | Pes6BitSet_Lookup(bits, 0x4f));
    Pes6BitSet_Write(bits, 0x51, func_0030D710(detail->playerSide, detail->playerSlot));
    Pes6BitSet_Write(bits, 0x52, outcome == 8);
    Pes6BitSet_Write(bits, 0x53, event->kind == 2);
    Pes6BitSet_Write(bits, 0x55, detail->phase20 == 4 && (detail->flags & 0x1000));
    Pes6BitSet_Write(bits, 0x56, detail->phase20 == 4);
    Pes6BitSet_Write(bits, 0x57, detail->phase20 == 7);
    Pes6BitSet_Write(bits, 0x58, home + away == 0);
    oneGoal = 0;
    if (detail->phase20 == 2) {
        difference = home - away;
        if ((difference > 0 ? difference : -difference) == 1)
            oneGoal = 1;
    }
    Pes6BitSet_Write(bits, 0x59, oneGoal);
    Pes6BitSet_Write(bits, 0x5a, 0);
    return 1;
}
