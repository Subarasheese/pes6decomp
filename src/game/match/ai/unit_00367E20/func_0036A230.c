/* compiler: mwcc-3.0.1b198 */

#include "pes6/match_score_event.h"

s32 func_0036A230(struct Pes6BitSet *bits, const MatchScoreEvent *event) {
    const MatchScoreDetail *state = &event->match;
    s32 mode;
    u32 enabled;

    mode = state->stage;
    Pes6BitSet_Write(bits, 0x5e, state->flags & 1);
    Pes6BitSet_Write(bits, 0x60, !(state->flags34 & 0x8000000));
    Pes6BitSet_Write(bits, 0x61, state->flags & 2);
    Pes6BitSet_Write(bits, 0x62, (mode == 2));
    Pes6BitSet_Write(bits, 99, (mode == 4));
    enabled = mode == 2;
    if (enabled)
        enabled = !(state->flags34 & 0x1d30);
    Pes6BitSet_Write(bits, 0x65, enabled);
    Pes6BitSet_Write(bits, 0x68, (state->result == 1));
    Pes6BitSet_Write(bits, 0x69, state->flags34 & 1);
    Pes6BitSet_Write(bits, 0x6a, state->flags34 & 2);
    Pes6BitSet_Write(bits, 0x6b, state->flags34 & 4);
    Pes6BitSet_Write(bits, 0x6c, state->flags34 & 8);
    Pes6BitSet_Write(bits, 0x6d, state->flags34 & 0x10);
    Pes6BitSet_Write(bits, 0x6e, state->flags34 & 0x20);
    Pes6BitSet_Write(bits, 0x6f, state->flags34 & 0x40);
    Pes6BitSet_Write(bits, 0x70, (mode == 2));
    Pes6BitSet_Write(bits, 0x71, (mode != 2));
    Pes6BitSet_Write(bits, 0x72, state->flags34 & 0x80);
    Pes6BitSet_Write(bits, 0x73, (mode == 2));
    Pes6BitSet_Write(bits, 0x74, (mode != 2));
    Pes6BitSet_Write(bits, 0x75, state->flags34 & 0x100);
    Pes6BitSet_Write(bits, 0x76, state->flags34 & 0x200);
    Pes6BitSet_Write(bits, 0x77, state->flags34 & 0x400);
    Pes6BitSet_Write(bits, 0x78, state->flags34 & 0x800);
    Pes6BitSet_Write(bits, 0x79, state->flags34 & 0x1000);
    Pes6BitSet_Write(bits, 0x7a, state->flags34 & 0x2000);
    Pes6BitSet_Write(bits, 0x7b, state->flags34 & 0x4000);
    Pes6BitSet_Write(bits, 0x7c, state->flags34 & 0x8000);
    Pes6BitSet_Write(bits, 0x7d, state->flags34 & 0x10000);
    Pes6BitSet_Write(bits, 0x7e, state->flags34 & 0x20000);
    Pes6BitSet_Write(bits, 0x7f, state->flags34 & 0x40000);
    Pes6BitSet_Write(bits, 0x5f, (state->kind30 == 1));
    Pes6BitSet_Write(bits, 0x80, (state->kind30 == 2));
    Pes6BitSet_Write(bits, 0x81, !(state->flags38 & 0x100));
    Pes6BitSet_Write(bits, 0x83, state->flags38 & 8);
    Pes6BitSet_Write(bits, 0x84, state->flags38 & 0x10);
    Pes6BitSet_Write(bits, 0x85, state->flags38 & 0x100);
    Pes6BitSet_Write(bits, 0x86, state->flags38 & 0x200);
    Pes6BitSet_Write(bits, 0x87, state->flags38 & 1);
    Pes6BitSet_Write(bits, 0x88, state->flags38 & 2);
    Pes6BitSet_Write(bits, 0x89, state->flags38 & 4);
    return 1;
}
