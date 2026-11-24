/* compiler: mwcc-3.0.1b198 */

#include "pes6/match_score_event.h"

s32 func_00369EF0(struct Pes6BitSet *bits, const MatchScoreEvent *event) {
    const MatchScoreDetail *state = &event->match;
    u32 enabled, selected;
    Pes6BitSet_Write(bits, 0x97, state->flags34 & 0x80000);
    Pes6BitSet_Write(bits, 0x98, state->flags34 & 0x100000);
    Pes6BitSet_Write(bits, 0x99, state->flags34 & 0x200000);
    Pes6BitSet_Write(bits, 0x9a, state->flags34 & 1);
    Pes6BitSet_Write(bits, 0x9b, state->flags34 & 2);
    Pes6BitSet_Write(bits, 0x9c, state->flags34 & 4);
    Pes6BitSet_Write(bits, 0x9d, state->flags34 & 8);
    Pes6BitSet_Write(bits, 0x9e, state->flags34 & 0x10);
    Pes6BitSet_Write(bits, 0x9f, state->flags34 & 0x20);
    Pes6BitSet_Write(bits, 0xa0, state->flags34 & 0x40);
    Pes6BitSet_Write(bits, 0xa1, state->flags34 & 0x80);
    Pes6BitSet_Write(bits, 0xa2, state->flags34 & 0x100);
    Pes6BitSet_Write(bits, 0xa3, state->flags34 & 0x200);
    Pes6BitSet_Write(bits, 0xa4, state->flags34 & 0x400);
    Pes6BitSet_Write(bits, 0xa5, state->flags34 & 0x800);
    Pes6BitSet_Write(bits, 0xa6, state->flags34 & 0x1000);
    Pes6BitSet_Write(bits, 0xa7, state->flags34 & 0x1400);
    Pes6BitSet_Write(bits, 0x94, (state->kind30 == 1));
    Pes6BitSet_Write(bits, 0xab, state->flags38 & 1);
    Pes6BitSet_Write(bits, 0xac, state->flags38 & 2);
    Pes6BitSet_Write(bits, 0xad, state->flags38 & 4);
    Pes6BitSet_Write(bits, 0xae, state->flags38 & 8);
    Pes6BitSet_Write(bits, 0xaf, state->flags38 & 0x10);
    Pes6BitSet_Write(bits, 0xb0, state->flags38 & 0x20);
    Pes6BitSet_Write(bits, 0xb1, state->flags38 & 0x40);
    Pes6BitSet_Write(bits, 0xb2, state->flags38 & 0x80);
    Pes6BitSet_Write(bits, 0xa8, (state->kind30 == 2));
    Pes6BitSet_Write(bits, 0x8d, (state->phase20 == 2));
    Pes6BitSet_Write(bits, 0x8e, (state->phase20 == 4));
    Pes6BitSet_Write(bits, 0x90, state->flags & 0x80);
    Pes6BitSet_Write(bits, 0x91, (state->outcome == 4));
    Pes6BitSet_Write(bits, 0x92, (state->outcome == 3));
    Pes6BitSet_Write(bits, 0x8b, (state->result == 2));
    enabled = !(state->flags & 1);
    if (enabled) {
        selected = Pes6BitSet_Lookup(bits, 0x8b);
        selected |= Pes6BitSet_Lookup(bits, 0x94);
        enabled = Pes6BitSet_Lookup(bits, 0xa8);
        enabled = (enabled | selected) != 0;
    }
    Pes6BitSet_Write(bits, 0x8a, enabled);
    return 1;
}
