/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_period_message.h"
extern s16 func_0030DAF0(s32 side);
extern s32 func_00326070(void *state);

s32 func_0034F900(TeamMinuteJob *job) {
    u8 side;
    u32 storage;
    struct Pes6BitSet flags;
    struct Pes6BitSet *bits = &flags;
    TeamCompetition *competition;
    SideMatchState *match;
    TeamMinutes *times;
    s32 rank, minute, enabled, league;
    s16 home, away;
    Pes6BitSet_Initialize(bits, 21, &storage);
    match = job->match;
    times = job->times;
    competition = job->competition;
    if (!func_00326070(competition))
        return 0;
    func_003414D0(&side, 2, 0xff);
    home = func_0030DAF0(0);
    away = func_0030DAF0(1);
    rank = func_00333740(match, side);
    minute = job->minute;
    enabled = func_003336F0(match);
    league = competition->competition == 40 || competition->competition == 41;
    Pes6BitSet_Write(bits, 0x2,
                     (minute >= 10 && minute < 35 && enabled && competition->mode == 2) && league);
    Pes6BitSet_Write(bits, 0x3, (minute < 45 && minute >= 35) && enabled);
    Pes6BitSet_Write(
        bits, 0x4,
        ((rank == 16 && times->team[side].minute < 45) && (minute >= 65 && minute < 76)) && league);
    Pes6BitSet_Write(bits, 0x8, home + away == 1 && rank == 16);
    Pes6BitSet_Write(bits, 0x9, rank == 13 && !enabled);
    Pes6BitSet_Write(bits, 0xa, times->side == side);
    Pes6BitSet_Write(bits, 0xb, times->side == (side ^ 1));
    Pes6BitSet_Write(bits, 0xc, match->side != 0xff && (rank == 16 || rank == 10));
    Pes6BitSet_Write(bits, 0xd, match->side == side && rank == 16);
    Pes6BitSet_Write(bits, 0xe, match->side == (side ^ 1) && rank == 10);
    Pes6BitSet_Write(bits, 0xf, rank >= 14);
    Pes6BitSet_Write(bits, 0x10, rank == 16);
    Pes6BitSet_Write(bits, 0x11, rank == 17);
    Pes6BitSet_Write(bits, 0x12, rank == 18);
    Pes6BitSet_Write(bits, 0x13, rank >= 19);
    Pes6BitSet_Write(bits, 0x14, rank < 13);
    return Pes6Job_SendMessage(0x5e, bits, 1);
}
