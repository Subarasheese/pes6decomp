/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_job_message.h"
typedef struct {
    u8 reserved00[4];
    u8 player;
} JobPlayer;
typedef struct {
    u8 reserved00[0x74];
    JobPlayer player;
} JobPlayerState;
typedef struct {
    u8 reserved00[0x3c];
    JobPlayerState *state;
} PlayerLocationJob;
extern s32 Pes6MatchPlayer_GetTeamRelativeXZ(f32 *x, f32 *z, s32 index);
extern void func_003139C0(struct Pes6BitSet *flags, s32 player);
extern s32 func_00340880(f32 x, f32 z);
s32 func_0032A5C0(PlayerLocationJob *job) {
    f32 x;
    f32 z;
    u32 storage;
    struct Pes6BitSet flags;
    JobPlayer *actor = &job->state->player;
    Pes6MatchPlayer_GetTeamRelativeXZ(&x, &z, actor->player);
    Pes6BitSet_Initialize(&flags, 3, &storage);
    func_003139C0(&flags, actor->player);
    Pes6BitSet_Write(&flags, 1, !func_00340880(x, z));
    Pes6BitSet_Write(&flags, 2, !Pes6BitSet_Lookup(&flags, 1));
    Pes6Job_SendMessage(4, &flags, 1);
    Pes6Job_SetDone((MatchJob *)job);
    return 1;
}
