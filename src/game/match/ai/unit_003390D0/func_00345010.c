/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_round_job.h"
extern s32 func_00312000(void **player, u8 index), func_003121F0(s32 *value, void *player);

s32 func_00345010(RoundDetailJob *job) {
    s32 role;
    void *player;
    s32 playerValue;
    u32 storage[3];
    struct Pes6BitSet flags;
    TeamRoundDetails *round = job->round;
    s32 hasPlayer, count;
    func_00312000(&player, round->otherPlayer);
    func_003121F0(&playerValue, player);
    hasPlayer = playerValue >= 1;
    func_0030ED20(&role, round->player);
    count = round->team[round->side].count;
    Pes6BitSet_Initialize(&flags, 75, storage);
    func_003139F0(&flags, round->side);
    Pes6BitSet_Write(&flags, 0x3c, count >= 3);
    Pes6BitSet_Write(&flags, 0x3d, hasPlayer);
    Pes6BitSet_Write(&flags, 0x3e, round->mode != 5);
    Pes6BitSet_Write(&flags, 0x3f, count == 4);
    Pes6BitSet_Write(&flags, 0x40, (count == 3) & (role == 2));
    Pes6BitSet_Write(&flags, 0x41, (count == 3) & (role == 1));
    Pes6BitSet_Write(&flags, 0x42, !hasPlayer);
    Pes6BitSet_Write(&flags, 0x43, round->mode == 5);
    Pes6BitSet_Write(&flags, 0x44, count == 4);
    Pes6BitSet_Write(&flags, 0x45, (count == 3) & (role == 2));
    Pes6BitSet_Write(&flags, 0x46, (count == 3) & (role == 1));
    Pes6BitSet_Write(&flags, 0x47, round->mode != 5);
    Pes6BitSet_Write(&flags, 0x48, count == 4);
    Pes6BitSet_Write(&flags, 0x49, (count == 3) & (role == 2));
    Pes6BitSet_Write(&flags, 0x4a, (count == 3) & (role == 1));
    Pes6Job_SendMessage(0x48, &flags, 1);
    Pes6Job_SetDone((MatchJob *)job);
    return 1;
}
