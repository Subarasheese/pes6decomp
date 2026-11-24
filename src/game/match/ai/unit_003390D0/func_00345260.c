/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_round_job.h"
extern s32 func_00312000(void **player, u8 index), func_003121F0(s32 *value, void *player);
extern u8 D_00CBCB36[];
extern s32 func_0030D4E0(void);

s32 func_00345260(RoundDetailJob *job) {
    void *player;
    s32 playerValue;
    s32 role;
    u32 storage[3];
    struct Pes6BitSet flags;
    TeamRoundDetails *round = job->round;
    s32 count = round->team[round->side].count;
    s32 kind = D_00CBCB36[0];
    s32 positive, missing;
    func_00312000(&player, round->otherPlayer);
    func_003121F0(&playerValue, player);
    positive = playerValue >= 1;
    func_0030ED20(&role, round->player);
    Pes6BitSet_Initialize(&flags, 75, storage);
    func_003139F0(&flags, round->side);
    Pes6BitSet_Write(&flags, 0x2b, count < 3);
    Pes6BitSet_Write(&flags, 0x2c, round->mode == 5);
    Pes6BitSet_Write(&flags, 0x2d, positive);
    missing = !positive;
    Pes6BitSet_Write(&flags, 0x2e, missing);
    Pes6BitSet_Write(&flags, 0x2f, round->mode != 5);
    Pes6BitSet_Write(&flags, 0x30, positive);
    Pes6BitSet_Write(&flags, 0x31, missing);
    Pes6BitSet_Write(&flags, 0x32, kind == 6);
    Pes6BitSet_Write(&flags, 0x33, func_0030D4E0());
    Pes6BitSet_Write(&flags, 0x34, kind == 8);
    Pes6BitSet_Write(&flags, 0x35, kind == 7);
    Pes6BitSet_Write(&flags, 0x36, count >= 3);
    Pes6BitSet_Write(&flags, 0x37, positive);
    Pes6BitSet_Write(&flags, 0x38, round->mode == 5);
    Pes6BitSet_Write(&flags, 0x39, count == 4);
    Pes6BitSet_Write(&flags, 0x3a, (count == 3) & (role == 2));
    Pes6BitSet_Write(&flags, 0x3b, (count == 3) & (role == 1));
    Pes6Job_SendMessage(0x7b, &flags, 1);
    return 1;
}
