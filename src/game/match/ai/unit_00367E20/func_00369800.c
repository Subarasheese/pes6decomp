/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_score_situation.h"
extern s32 func_0030F2B0(s32 *phase);

s32 func_00369800(struct Pes6BitSet *bits, const MatchSituationJob *job) {
    s32 combinedRank;
    s32 currentRank;
    s32 phase;
    s16 combined[2];
    s16 goals[2];
    s32 total, difference, previousTotal, previousDifference;
    const MatchSituation *s = &job->situation;
    combined[0] = func_0030DA70(0) + s->goals[0];
    combined[1] = func_0030DA70(1) + s->goals[1];
    goals[0] = s->goals[0];
    goals[1] = s->goals[1];
    func_0030F2B0(&phase);
    total = goals[0] + goals[1];
    difference = s->goals[1] - s->goals[0];
    difference = difference > 0 ? difference : -difference;
    previousDifference = job->previousGoals[0] - job->previousGoals[1];
    previousTotal = job->previousGoals[0] + job->previousGoals[1];
    previousDifference = previousDifference > 0 ? previousDifference : -previousDifference;
    func_00333EA0(&combinedRank, combined, s->side);
    func_00333EA0(&currentRank, goals, s->side);
    Pes6BitSet_Write(bits, 0xc5, phase == 2 && job->type == 2 && s->result != 1);
    Pes6BitSet_Write(bits, 0xc6, s->type30 == 1);
    Pes6BitSet_Write(bits, 0xc7, job->flag05);
    Pes6BitSet_Write(bits, 0xc8, combinedRank >= 14 && currentRank < 14);
    Pes6BitSet_Write(bits, 0xc9, combinedRank < 13 && currentRank >= 13);
    Pes6BitSet_Write(bits, 0xca, combinedRank == 13);
    Pes6BitSet_Write(bits, 0xcb, total == 1 && previousTotal == 1 && s->stage != 1);
    Pes6BitSet_Write(bits, 0xcc, goals[s->side] == 1);
    Pes6BitSet_Write(bits, 0xcd, goals[s->side] == 0);
    Pes6BitSet_Write(bits, 0xce, total == 0 && previousTotal == 0);
    Pes6BitSet_Write(bits, 0xcf,
                     combinedRank == 13 && job->previousGoals[0] == job->previousGoals[1]);
    Pes6BitSet_Write(bits, 0xd0, s->side == s->previousSide);
    Pes6BitSet_Write(bits, 0xd1, s->side == (s->previousSide ^ 1));
    Pes6BitSet_Write(bits, 0xd2, difference == 1 && previousDifference == 1 && total != 1);
    Pes6BitSet_Write(bits, 0xd3, combinedRank == 16);
    Pes6BitSet_Write(bits, 0xd4, combinedRank == 10);
    Pes6BitSet_Write(bits, 0xd5, total != 1 && (currentRank == 16 || currentRank == 10));
    Pes6BitSet_Write(bits, 0xd6, s->side == s->previousSide);
    Pes6BitSet_Write(bits, 0xd7, s->side == (s->previousSide ^ 1));
    Pes6BitSet_Write(bits, 0xd8, difference == 2 && previousDifference == 2);
    Pes6BitSet_Write(bits, 0xd9, currentRank == 17);
    Pes6BitSet_Write(bits, 0xda, currentRank == 9);
    Pes6BitSet_Write(bits, 0xdb, difference >= 3 && previousDifference >= 3);
    Pes6BitSet_Write(bits, 0xdc, currentRank >= 8);
    Pes6BitSet_Write(bits, 0xdd, currentRank < 9);
    Pes6BitSet_Write(bits, 0xde, s->type30 == 2);
    Pes6BitSet_Write(bits, 0xdf, currentRank >= 14);
    Pes6BitSet_Write(bits, 0xe0, currentRank < 13);
    Pes6BitSet_Write(bits, 0xe1, total == 0);
    Pes6BitSet_Write(bits, 0xe2, s->goals[0] == s->goals[1] && s->goals[0] != 0);
    return 1;
}
