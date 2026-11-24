/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_round_job.h"
extern s32 func_003260A0(s32 state, s32 player), func_003260E0(s32 state, s32 player);

s32 func_003472D0(RoundDetailJob *job) {
    struct Pes6BitSet flags;
    u32 storage;
    struct Pes6BitSet *bits;
    TeamRoundDetails *record = job->round;
    s32 state = job->sideState;
    u32 mask = record->mask;
    s32 first = func_003260A0(state, record->player);
    s32 second = func_003260E0(state, record->player);
    bits = &flags;
    Pes6BitSet_Initialize(bits, 13, &storage);
    func_003139F0(bits, record->side);
    Pes6BitSet_Write(bits, 0x0, mask & 0x3f);
    Pes6BitSet_Write(bits, 0x1, (mask & 0x80000000) && !first);
    Pes6BitSet_Write(bits, 0x2, mask & 2);
    Pes6BitSet_Write(bits, 0x3, mask & 4);
    Pes6BitSet_Write(bits, 0x4, mask & 8);
    Pes6BitSet_Write(bits, 0x5, mask & 16);
    Pes6BitSet_Write(bits, 0x6, mask & 32);
    Pes6BitSet_Write(bits, 0x7, !((mask & 0x80000000) || second));
    Pes6BitSet_Write(bits, 0x8, mask & 2);
    Pes6BitSet_Write(bits, 0x9, mask & 4);
    Pes6BitSet_Write(bits, 0xa, mask & 8);
    Pes6BitSet_Write(bits, 0xb, mask & 16);
    Pes6Job_SendMessage(0x99, bits, 1);
    Pes6Job_SetDone((MatchJob *)job);
    return 1;
}
