/* compiler: mwcc-3.0.1b210 */
#include "types.h"
#include "pes6/bitset.h"
typedef struct {
    u8 reserved18[6], minute, reserved1f[13];
    s32 mode;
    u8 player, side, enabled, reserved33[5];
    s32 phase, outcome;
    s16 home, away;
    u32 flags;
} EventDetail;
typedef struct {
    u8 reserved00[2], kind, reserved03[21];
    EventDetail match;
} EventRecord;
extern s32 func_0030D710(s32, s32);
s32 func_0036A5D0(struct Pes6BitSet *bits, const EventRecord *event) {
    const EventDetail *detail = &event->match;
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
                         ((u32)(detail->phase - 2) < 3));
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
    Pes6BitSet_Write(bits, 0x51, func_0030D710(detail->player, detail->side));
    Pes6BitSet_Write(bits, 0x52, outcome == 8);
    Pes6BitSet_Write(bits, 0x53, event->kind == 2);
    Pes6BitSet_Write(bits, 0x55, detail->phase == 4 && (detail->flags & 0x1000));
    Pes6BitSet_Write(bits, 0x56, detail->phase == 4);
    Pes6BitSet_Write(bits, 0x57, detail->phase == 7);
    Pes6BitSet_Write(bits, 0x58, home + away == 0);
    oneGoal = 0;
    if (detail->phase == 2) {
        difference = home - away;
        if ((difference > 0 ? difference : -difference) == 1)
            oneGoal = 1;
    }
    Pes6BitSet_Write(bits, 0x59, oneGoal);
    Pes6BitSet_Write(bits, 0x5a, 0);
    return 1;
}
