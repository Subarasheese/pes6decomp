/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_job_message.h"
typedef struct {
    s32 kind;
    u8 reserved04[0x8e8];
    u8 active[2], localRank[2], otherActive[2], otherRank[2];
} TeamRankState;
typedef struct {
    u8 reserved00[0x44];
    TeamRankState *ranks;
} TeamRankJob;
extern s32 Pes6Job_GetArg(s32 job, s32 index);
s32 func_0033B850(struct Pes6BitSet *bits, TeamRankJob *job) {
    u8 active;
    s32 slot;
    TeamRankState *ranks = job->ranks;
    u8 side = (u8)Pes6Job_GetArg((s32)job, 0);
    s32 rank = Pes6Job_GetArg((s32)job, 2);
    if (ranks->kind != 6)
        return 0;
    slot = (u8)side;
    active = ranks->active[slot];
    Pes6BitSet_Write(bits, 0xd0, rank >= 14);
    Pes6BitSet_Write(bits, 0xd1, ranks->active[slot]);
    Pes6BitSet_Write(bits, 0xd2, ranks->otherRank[slot] == 1 && ranks->otherActive[slot] == 0);
    Pes6BitSet_Write(bits, 0xd3, ranks->otherRank[slot] == 2 && ranks->otherActive[slot] == 0);
    Pes6BitSet_Write(bits, 0xd4, ranks->otherRank[slot] == 3 && ranks->otherActive[slot] == 0);
    Pes6BitSet_Write(bits, 0xd5, ranks->localRank[slot] == 1 && !active);
    Pes6BitSet_Write(bits, 0xd6, ranks->localRank[slot] == 2 && !active);
    Pes6BitSet_Write(bits, 0xd7, ranks->localRank[slot] == 3 && !active);
    Pes6BitSet_Write(bits, 0xd8, ranks->localRank[slot] == 4 && !active);
    Pes6BitSet_Write(bits, 0xd9,
                     (ranks->localRank[slot] >= 5 && ranks->localRank[slot] < 14) && !active);
    Pes6BitSet_Write(bits, 0xda, ranks->localRank[slot] >= 14 && !active);
    return 1;
}
