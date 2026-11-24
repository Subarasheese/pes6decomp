/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_period_message.h"
typedef struct {
    u8 reserved00[0x40];
    TeamCompetition *round;
} RoundJob;
extern s32 func_00326070(void *round), func_00325E40(void *round), func_00325DA0(void *round);

s32 func_00370700(RoundJob *job) {
    struct Pes6BitSet flags;
    u32 storage;
    struct Pes6BitSet *bits = &flags;
    TeamCompetition *round;
    Pes6BitSet_Initialize(bits, 21, &storage);
    round = job->round;
    Pes6BitSet_Write(bits, 0x0, func_00326070(round));
    Pes6BitSet_Write(bits, 0x1, func_00325E40(round));
    Pes6BitSet_Write(bits, 0x3, round->kind == 6 && round->competition != 28);
    Pes6BitSet_Write(bits, 0x4, round->competition == 15);
    Pes6BitSet_Write(bits, 0x5, round->competition == 20);
    Pes6BitSet_Write(bits, 0x6, round->competition == 18);
    Pes6BitSet_Write(bits, 0x7, round->competition == 22);
    Pes6BitSet_Write(bits, 0x8, round->competition == 26);
    Pes6BitSet_Write(bits, 0x9, round->competition == 24);
    Pes6BitSet_Write(bits, 0xb, round->competition == 28);
    Pes6BitSet_Write(bits, 0xc, round->competition == 38);
    Pes6BitSet_Write(bits, 0x10,
                     Pes6BitSet_Lookup(bits, 0x4) | Pes6BitSet_Lookup(bits, 0x5) |
                         Pes6BitSet_Lookup(bits, 0x6) | Pes6BitSet_Lookup(bits, 0x7) |
                         Pes6BitSet_Lookup(bits, 0x8) | Pes6BitSet_Lookup(bits, 0x9));
    Pes6BitSet_Write(bits, 0x11, func_00325DA0(round));
    Pes6BitSet_Write(bits, 0x12, round->competition == 28);
    Pes6BitSet_Write(bits, 0x13, round->competition == 29);
    Pes6Job_SendMessage(0x6d, bits, 1);
    Pes6Job_SetDone((MatchJob *)job);
    return 1;
}
