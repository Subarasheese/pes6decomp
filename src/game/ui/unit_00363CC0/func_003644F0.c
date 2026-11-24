/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_job_message.h"
extern s32 Pes6MatchPlayer_GetSquadIndex(u8 player);
extern s32 func_003264D0(s32 *mode, void *roster, s32 squadIndex);
extern s32 func_00326B70(s16 *status, void *roster, u8 player);

s32 func_003644F0(RosterMessage *ctx) {
    s16 status;
    u32 storage;
    s32 mode;
    struct Pes6BitSet flags;
    s32 squadIndex;
    Pes6BitSet_Initialize(&flags, 6, &storage);
    squadIndex = Pes6MatchPlayer_GetSquadIndex(ctx->player);
    func_003264D0(&mode, ctx->roster, squadIndex);
    func_00326B70(&status, ctx->roster, ctx->player);
    Pes6BitSet_Write(&flags, 0, mode == 2);
    Pes6BitSet_Write(&flags, 1, status == 1);
    Pes6BitSet_Write(&flags, 2, status == 2);
    Pes6BitSet_Write(&flags, 3, status == 3);
    Pes6BitSet_Write(&flags, 4, status == 4);
    Pes6BitSet_Write(&flags, 5, status == 5);
    if (Pes6Job_SendMessage(0xac, &flags, 2))
        return 3;
    return 1;
}
