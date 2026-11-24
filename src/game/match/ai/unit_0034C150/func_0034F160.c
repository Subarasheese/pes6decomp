/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_period_message.h"

s32 func_0034F160(TeamMinuteJob *job) {
    u8 side;
    u32 storage;
    s32 playerCounts[2];
    struct Pes6BitSet flags;
    struct Pes6BitSet *bits = &flags;
    TeamMinutes *times;
    SideMatchState *match;
    s32 minute, elapsed, rank, eligible;
    Pes6BitSet_Initialize(bits, 16, &storage);
    times = job->times;
    match = job->match;
    func_003414D0(&side, 2, 0xff);
    if (times->side == 0xff)
        return 0;
    if (times->team[times->side].minute == 0xff)
        return 0;
    minute = func_0030EA70();
    elapsed = minute - times->team[times->side].minute;
    rank = func_00333710(match, side);
    if (elapsed > 10 && minute >= 45 && times->team[times->side].minute < 44)
        return 0;
    func_00341AA0(&playerCounts[0], 0);
    func_00341AA0(&playerCounts[1], 1);
    Pes6Job_GetManager()->side = times->side;
    Pes6BitSet_Write(bits, 0x0, elapsed >= 10 && elapsed < 16);
    eligible =
        (!times->status && playerCounts[times->side] < playerCounts[times->side ^ 1]) && rank == 16;
    Pes6BitSet_Write(bits, 0x1, eligible);
    Pes6BitSet_Write(bits, 0x2, times->side == side);
    Pes6BitSet_Write(bits, 0x8, times->side == (side ^ 1));
    Pes6BitSet_Write(bits, 0xf, rank >= 13);
    return Pes6Job_SendMessage(0x66, bits, 1);
}
