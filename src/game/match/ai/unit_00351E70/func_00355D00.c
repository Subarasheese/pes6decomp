/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_job_message.h"
typedef struct {
    u8 reserved00[0x44];
    void *state;
} PlayerMessageJob;
extern s32 Pes6Job_GetArg(s32 job, s32 index);
extern s32 Pes6MatchPlayer_GetSquadIndex(u8 player);
extern s32 func_003414D0(u8 *slot, s32 type, s32 side);
extern s32 func_003566D0(s32 *value, u8 player, s32 index);
extern s32 func_00335390(void);
extern s32 func_00326040(void *state, s32 side);

s32 func_00355D00(PlayerMessageJob *job) {
    u8 slot;
    u32 storage;
    s32 value;
    struct Pes6BitSet flags;
    void *state;
    u8 side;
    Pes6BitSet_Initialize(&flags, 18, &storage);
    state = job->state;
    side = (u8)Pes6MatchPlayer_GetSquadIndex((u8)Pes6Job_GetArg((s32)job, 0));
    func_003414D0(&slot, 3, (u8)side);
    func_003566D0(&value, (u8)Pes6Job_GetArg((s32)job, 0), 1);
    Pes6BitSet_Write(&flags, 1, func_00335390());
    side = (u8)side;
    Pes6BitSet_Write(&flags, 6, func_00326040(state, side));
    Pes6BitSet_Write(&flags, 7, side == 0);
    Pes6BitSet_Write(&flags, 8, side == 1);
    Pes6BitSet_Write(&flags, 16, value == 3);
    Pes6BitSet_Write(&flags, 17, value == 2);
    Pes6Job_SendMessage(0x98, &flags, 1);
    Pes6Job_SetDone((MatchJob *)job);
    return 1;
}
