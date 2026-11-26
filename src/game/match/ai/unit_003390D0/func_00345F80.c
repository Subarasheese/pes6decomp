/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_job_message.h"
#include "pes6/match_player.h"
typedef struct {
    u8 reserved00[0x28];
    s32 mode;
} PositionRound;
typedef struct {
    u8 reserved00[0x4c];
    PositionRound *round;
} PositionJob;
extern s32 func_00310A50(u8 *player, s32 kind), func_00341AA0(s32 *playerCount, s32 side);
extern int Pes6MatchPlayer_GetSquadIndex(u8 player);
extern float Pes6MatchPlayer_ScaleByGoalDirection(u8 id, s32 index, float value);
extern s32 func_003139F0(struct Pes6BitSet *, s32), func_00341C90(u16 angle, u16 start, u16 end);
extern u16 func_00A9C660(u8 *player);
extern float D_00591E58[];
extern u8 D_00592376[];
s32 func_00345F80(PositionJob *job) {
    u8 player;
    u32 storage;
    s32 playerCounts[2];
    struct Pes6BitSet flags;
    struct Pes6BitSet *bits;
    PositionRound *round;
    s32 side;
    s32 mode;
    float z;
    u16 heading;
    round = job->round;
    func_00310A50(&player, 7);
    func_00341AA0(&playerCounts[0], 0);
    func_00341AA0(&playerCounts[1], 1);
    side = (u8)Pes6MatchPlayer_GetSquadIndex(player);
    z = Pes6MatchPlayer_ScaleByGoalDirection(player, 1, D_00591E58[0]);
    mode = D_00592376[0];
    bits = &flags;
    Pes6BitSet_Initialize(bits, 12, &storage);
    func_003139F0(bits, side);
    Pes6BitSet_Write(bits, 0x0, z > 0.0f);
    Pes6BitSet_Write(bits, 0x1,
                     round->mode == 4 && playerCounts[(u8)side] < playerCounts[(u8)side ^ 1]);
    Pes6BitSet_Write(bits, 0x2, z > 5401.0f);
    heading = func_00A9C660((u8 *)Pes6MatchPlayer_Get(player));
    Pes6BitSet_Write(bits, 0x3, func_00341C90((u16)heading, 0x3000, 0xd000) != 0);
    Pes6BitSet_Write(bits, 0x7, z < 5401.0f);
    Pes6BitSet_Write(bits, 0x9, mode == 0);
    Pes6BitSet_Write(bits, 0xa, mode == 1);
    Pes6Job_SendMessage(0x3a, bits, 1);
    Pes6Job_SetDone((MatchJob *)job);
    return 1;
}
