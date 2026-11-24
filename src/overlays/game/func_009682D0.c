/* compiler: mwcc-3.0.1b151 */

#include "pes6/tactical_player.h"

extern s32 func_00990150(TacticalActor *, s32, u16, s32, s32, u8 *);
extern s32 func_00968010(TacticalActor *, Pes6MatchPlayer *);

s32 func_009682D0(TacticalActor *actor) {
    u8 rivals[16];
    s32 count =
        (u8)func_00990150(actor, actor->player.side ^ 1, actor->ai.facing, 0x4000, 0x400, rivals);
    s32 allowed = count > 0;
    s32 i;
    for (i = 0; i < count; ++i) {
        s32 passes = 0;
        if (allowed && func_00968010(actor, Pes6MatchPlayer_Get(rivals[i])))
            passes = 1;
        allowed = passes;
    }
    return allowed;
}
