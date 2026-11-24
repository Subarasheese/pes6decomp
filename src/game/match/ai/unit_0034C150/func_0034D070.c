/* compiler: mwcc-3.0.1b198 */

#include "pes6/match_period_message.h"

s32 func_0034D070(TeamMinuteJob *job) {
    u8 side;
    u32 storage;
    s32 playerCounts[2];
    struct Pes6BitSet flags;
    struct Pes6BitSet *bits = &flags;
    void *match;
    s32 minute, rank, special;
    Pes6BitSet_Initialize(bits, 11, &storage);
    match = job->match;
    minute = func_0030EA70();
    func_003414D0(&side, 2, 0xff);
    Pes6Job_GetManager()->side = side;
    rank = func_00333740(match, side);
    func_00341AA0(&playerCounts[0], 0);
    func_00341AA0(&playerCounts[1], 1);
    special = rank >= 17 && playerCounts[side ^ 1] != 11;
    Pes6BitSet_Write(
        bits, 0, (Pes6MatchContext_GetHalf() == 1 && minute >= 85) && (rank >= 17 || rank < 10));
    Pes6BitSet_Write(bits, 5, special);
    Pes6BitSet_Write(bits, 8, special);
    return Pes6Job_SendMessage(0xa2, bits, 1);
}
