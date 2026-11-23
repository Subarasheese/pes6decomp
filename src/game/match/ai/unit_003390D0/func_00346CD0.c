/* compiler: mwcc-3.0.1b210 */
#include "types.h"
#include "pes6/bitset.h"
typedef struct {
    u8 reserved00[0x15];
    u8 side, player;
} MessagePlayers;
typedef struct {
    u8 reserved00[0x4c];
    MessagePlayers *players;
} MatchActionJob;
extern s32 func_00333600(s32), Pes6Job_GetArg(MatchActionJob *, s32), func_00340880(float, float);
extern s32 Pes6MatchPlayer_GetTeamRelativeXZ(float *, float *, s32);
extern void func_003139C0(struct Pes6BitSet *, u8);
extern s32 Pes6Job_SendMessage(s32, struct Pes6BitSet *, s32);
extern void Pes6Job_SetDone(MatchActionJob *);
s32 func_00346CD0(MatchActionJob *job) {
    u32 word;
    float x, z;
    struct Pes6BitSet flags;
    s32 action;
    MessagePlayers *players;
    if (func_00333600(14)) {
        players = job->players;
        Pes6BitSet_Initialize(&flags, 31, &word);
        func_003139C0(&flags, players->side);
        action = Pes6Job_GetArg(job, 0);
        Pes6MatchPlayer_GetTeamRelativeXZ(&x, &z, players->player);
        Pes6BitSet_Write(&flags, 0, action != 0);
        Pes6BitSet_Write(&flags, 1, action == 1);
        Pes6BitSet_Write(&flags, 5, action == 2);
        Pes6BitSet_Write(&flags, 6, action == 2);
        Pes6BitSet_Write(&flags, 8, func_00340880(x, z));
        Pes6BitSet_Write(&flags, 11, action == 7);
        Pes6BitSet_Write(&flags, 14, action == 3);
        Pes6BitSet_Write(&flags, 17, action == 4);
        Pes6BitSet_Write(&flags, 20, action == 5);
        Pes6BitSet_Write(&flags, 24, action == 9);
        Pes6BitSet_Write(&flags, 29, action == 8);
        Pes6Job_SendMessage(0x4b, &flags, 1);
    }
    Pes6Job_SetDone(job);
    return 0;
}
