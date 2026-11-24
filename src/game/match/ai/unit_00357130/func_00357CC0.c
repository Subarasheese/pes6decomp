/* compiler: mwcc-3.0.1b210 */
#pragma opt_propagation off
#include "pes6/match_period_message.h"
typedef struct {
    u8 reserved00[0x0c];
    s16 score;
    u8 reserved0e[0x2e6];
} ShootoutTeam;
extern ShootoutTeam *D_00CB3300[];
extern u8 D_00CBBDFD[], D_00CBBE04[];
extern const char D_003E6490[];
extern s32 func_00357650(MatchJob *job);
extern void Pes6Job_SetField4(MatchJob *, s32 (*)(MatchJob *), const char *);
extern s32 func_003139C0(struct Pes6BitSet *, s32);
extern s32 func_003414D0(u8 *side, s32 kind, s32 player);
extern s32 func_009E62D0(s16 home, s16 away);
extern s32 Pes6Job_SetArg(MatchJob *, s32, s32);
extern s32 func_00311840(s32), func_0030E690(s32), func_00311AD0(s32);
s32 func_00357CC0(MatchJob *job) {
    u8 chosen;
    u32 storage;
    s16 scores[2];
    s16 next[2];
    struct Pes6BitSet flags;
    struct Pes6BitSet *bits;
    s32 kick = D_00CBBDFD[0];
    ShootoutTeam *teams = D_00CB3300[0];
    s32 side = kick & 1;
    s32 difference, round;
    s32 player;
    scores[0] = teams[0].score;
    scores[1] = teams[1].score;
    difference = scores[side] - scores[side ^ 1];
    round = kick / 2 + 1;
    bits = &flags;
    player = D_00CBBE04[0];
    Pes6BitSet_Initialize(bits, 23, &storage);
    func_003139C0(bits, player);
    func_003414D0(&chosen, 2, 0xff);
    next[0] = scores[0];
    next[1] = scores[1];
    next[side]++;
    Pes6Job_SetArg(job, 0, func_009E62D0(next[0], next[1]) != 0);
    Pes6Job_SetArg(job, 1, (u8)func_009E62D0(scores[0], scores[1]));
    Pes6BitSet_Write(bits, 0x1, kick == 0);
    Pes6BitSet_Write(bits, 0x2, Pes6Job_GetArg(job, 0));
    Pes6BitSet_Write(bits, 0x3, side == chosen);
    Pes6BitSet_Write(bits, 0x4, side == (chosen ^ 1));
    Pes6BitSet_Write(bits, 0x5, Pes6Job_GetArg(job, 1));
    Pes6BitSet_Write(bits, 0x6, difference == 1);
    Pes6BitSet_Write(bits, 0x7, difference == -2);
    Pes6BitSet_Write(bits, 0x8, func_00311840(player));
    Pes6BitSet_Write(bits, 0x9, func_0030E690(player));
    Pes6BitSet_Write(bits, 0xa, func_00311AD0(player));
    Pes6BitSet_Write(bits, 0xb, round < 12);
    Pes6BitSet_Write(bits, 0xc, round == 2);
    Pes6BitSet_Write(bits, 0xd, round == 3);
    Pes6BitSet_Write(bits, 0xe, round == 4);
    Pes6BitSet_Write(bits, 0xf, round == 5);
    Pes6BitSet_Write(bits, 0x10, round == 6);
    Pes6BitSet_Write(bits, 0x11, round == 7);
    Pes6BitSet_Write(bits, 0x12, round == 8);
    Pes6BitSet_Write(bits, 0x13, round == 9);
    Pes6BitSet_Write(bits, 0x14, round == 10);
    Pes6BitSet_Write(bits, 0x15, round == 11);
    Pes6Job_SendMessage(0x41, bits, 1);
    Pes6Job_SetField4(job, func_00357650, D_003E6490);
    return 0;
}
