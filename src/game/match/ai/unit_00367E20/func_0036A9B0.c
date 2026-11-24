/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_score_event.h"
extern u8 D_003EA040;
extern s32 func_0030F2B0(s32 *phase), func_0030D710(s32 side, s32 slot);

s32 func_0036A9B0(struct Pes6BitSet *bits, const MatchScoreEvent *event) {
    const MatchScoreDetail *d = &event->match;
    s32 minute = event->match.minute;
    s32 opening = minute < 9;
    s32 permit;
    s32 firstPeriod, extra, special, late, phase;
    s16 home, away;
    s16 difference;
    firstPeriod = minute < 54 && d->period == 1;
    special = d->mode == 3;
    extra = d->period >= 2;
    late = (d->flags & 4) || minute % 45 >= 37 || (extra && (minute - 90) % 15 >= 10);
    home = d->home;
    away = d->away;
    func_0030F2B0(&phase);
    difference = home - away > 0 ? home - away : -(home - away);
    Pes6BitSet_Write(bits, 0x2, d->flags & 1);
    Pes6BitSet_Write(bits, 0x3, special);
    Pes6BitSet_Write(bits, 0x5, d->result == 1);
    Pes6BitSet_Write(bits, 0x6, (d->flags & 0x10) && special);
    Pes6BitSet_Write(bits, 0x7, d->minute > 79 && ((u32)d->phase1c - 2 < 3) && d->enabled);
    Pes6BitSet_Write(bits, 0x8, d->flags & 2);
    Pes6BitSet_Write(bits, 0x9,
                     d->mode == 1 && D_003EA040 == (u8)((d->side << 5) | (d->playerSlot & 31)) &&
                         D_003EA040 != 0xff);
    Pes6BitSet_Write(bits, 0xa, d->flags & 8);
    Pes6BitSet_Write(bits, 0xb, d->phase1c == 3);
    Pes6BitSet_Write(bits, 0xc, special);
    Pes6BitSet_Write(bits, 0xd, late);
    Pes6BitSet_Write(bits, 0xe, opening);
    Pes6BitSet_Write(bits, 0xf, firstPeriod);
    Pes6BitSet_Write(bits, 0x11, d->phase1c == 4);
    Pes6BitSet_Write(bits, 0x12, special);
    Pes6BitSet_Write(bits, 0x13, late);
    Pes6BitSet_Write(bits, 0x14, opening);
    Pes6BitSet_Write(bits, 0x15, firstPeriod);
    Pes6BitSet_Write(bits, 0x17, d->phase1c == 2);
    Pes6BitSet_Write(bits, 0x18, difference == 1);
    Pes6BitSet_Write(bits, 0x19, special);
    Pes6BitSet_Write(bits, 0x1b, difference == 2);
    Pes6BitSet_Write(bits, 0x1e, d->flags & 0x20);
    Pes6BitSet_Write(bits, 0x1f, d->flags & 0x40);
    Pes6BitSet_Write(bits, 0x20, d->flags & 0x80);
    Pes6BitSet_Write(bits, 0x21, d->flags & 0x100);
    Pes6BitSet_Write(bits, 0x1d,
                     (Pes6BitSet_Lookup(bits, 0x1e) | Pes6BitSet_Lookup(bits, 0x1f) |
                      Pes6BitSet_Lookup(bits, 0x20) | Pes6BitSet_Lookup(bits, 0x21)) &&
                         !special);
    Pes6BitSet_Write(bits, 0x22, home + away == 1 && !special);
    Pes6BitSet_Write(bits, 0x23, late);
    Pes6BitSet_Write(bits, 0x24, opening);
    Pes6BitSet_Write(bits, 0x25, firstPeriod);
    Pes6BitSet_Write(bits, 0x27, d->phase1c == 2);
    Pes6BitSet_Write(bits, 0x28, special);
    Pes6BitSet_Write(bits, 0x29, late);
    Pes6BitSet_Write(bits, 0x2a, opening);
    Pes6BitSet_Write(bits, 0x2b, firstPeriod);
    Pes6BitSet_Write(bits, 0x2d, d->phase1c == 7);
    Pes6BitSet_Write(bits, 0x2e, special);
    Pes6BitSet_Write(bits, 0x2f, late);
    Pes6BitSet_Write(bits, 0x30, opening);
    Pes6BitSet_Write(bits, 0x31, firstPeriod);
    Pes6BitSet_Write(bits, 0x34, late);
    Pes6BitSet_Write(bits, 0x35, firstPeriod | opening);
    Pes6BitSet_Write(bits, 0x33,
                     (Pes6BitSet_Lookup(bits, 0x34) | Pes6BitSet_Lookup(bits, 0x35)) && !special);
    permit = 0;
    if (func_0030D710(d->playerSide, d->playerSlot)) {
        if ((special != 0) ^ 1)
            permit = 1;
        else
            permit = 0;
    }
    Pes6BitSet_Write(bits, 0x36, permit);
    Pes6BitSet_Write(bits, 0x37, !special);
    Pes6BitSet_Write(bits, 0x38, phase == 3 && (d->flags & 0x200));
    Pes6BitSet_Write(bits, 0x39,
                     ((!(firstPeriod | extra) &&
                       (d->home == event->previousHome && d->away == event->previousAway)) &&
                      d->away + event->previousAway != 1));
    return 1;
}
