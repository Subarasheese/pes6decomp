/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_period_message.h"
extern s16 func_00310340(s16 *total, s32 side), func_0030DAF0(s32 side);

s32 func_0034DFA0(TeamMinuteJob *job) {
    u8 side;
    s16 totals[2];
    u32 storage;
    struct Pes6BitSet flags;
    struct Pes6BitSet *bits;
    void *match;
    s32 rank, oneGoal, enabled, test;
    s32 home, away;
    s16 total;
    s32 minute = func_0030EA70();
    if (minute < 35 || minute > 44)
        return 0;
    match = job->match;
    func_00310340(&totals[0], 0);
    func_00310340(&totals[1], 1);
    func_003414D0(&side, 2, 0xff);
    rank = func_00333740(match, side);
    home = func_0030DAF0(0);
    away = func_0030DAF0(1);
    oneGoal = home + away == 1;
    enabled = func_003336F0(match);
    bits = &flags;
    Pes6BitSet_Initialize(bits, 27, &storage);
    Pes6BitSet_Write(bits, 1, enabled);
    /* The PAL comparison reads the same side for both operands. */
    total = totals[side];
    test = 0;
    if (total * 2 < total && total >= 6)
        test = 1;
    Pes6BitSet_Write(bits, 0x2, test);
    Pes6BitSet_Write(bits, 0x5, totals[0] < 4 && totals[1] < 4);
    Pes6BitSet_Write(bits, 0xb, oneGoal);
    Pes6BitSet_Write(bits, 0x10, rank == 16);
    Pes6BitSet_Write(bits, 0x11, rank == 10);
    Pes6BitSet_Write(bits, 0x13, rank == 16);
    Pes6BitSet_Write(bits, 0x14, rank == 10);
    Pes6BitSet_Write(bits, 0x15, rank >= 17 || rank < 10);
    Pes6BitSet_Write(bits, 0x0, oneGoal || enabled);
    return Pes6Job_SendMessage(0x61, bits, 1);
}
