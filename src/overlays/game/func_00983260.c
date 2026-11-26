/* compiler: mwcc-3.0.3 */
#pragma opt_common_subs off
#include "pes6/tactical_player.h"
extern void func_009143D0(TacticalActor *actor, s32 value, s32 update);
void func_00983260(TacticalActor *actor, u8 mode) {
    if (actor->ai.commandMode != mode) {
        actor->ai.commandMode = (u8)mode;
        actor->ai.markMode = 0;
        func_009143D0(actor, 0, 1);
    }
}
