/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_round_job.h"
extern s32 Pes6MatchPlayer_GetTeamRelativeXZ(float *x, float *z, u8 player);
extern s32 func_0030E690(s32 player), func_00340590(float x, float z);
extern u8 func_00992720(void);

s32 func_00347B40(RoundDetailJob *job) {
    u32 storage;
    float x;
    float z;
    s32 role;
    struct Pes6BitSet flags;
    struct Pes6BitSet *bits;
    TeamRoundDetails *round = job->round;
    s32 count;
    Pes6MatchPlayer_GetTeamRelativeXZ(&x, &z, round->otherPlayer);
    func_0030ED20(&role, round->player);
    count = round->team[round->side].count;
    bits = &flags;
    Pes6BitSet_Initialize(bits, 9, &storage);
    func_003139F0(bits, round->side);
    Pes6BitSet_Write(bits, 0x0, round->mode != 5);
    Pes6BitSet_Write(bits, 0x1, role == 2);
    Pes6BitSet_Write(bits, 0x2, func_0030E690(round->otherPlayer) & func_00340590(x, z));
    Pes6BitSet_Write(bits, 0x3, count == 2 || count == 3);
    Pes6BitSet_Write(bits, 0x4, (u8)func_00992720());
    Pes6BitSet_Write(bits, 0x8, count >= 2);
    Pes6Job_SendMessage(0x47, bits, 1);
    Pes6Job_SetDone((MatchJob *)job);
    return 0;
}
