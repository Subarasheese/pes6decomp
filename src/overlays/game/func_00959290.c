/* compiler: mwcc-3.0.1b151 */

#include "pes6/tactical_player.h"

extern u8 D_00CB53BD[];
extern u8 *Pes6BallOwnerRecord;
extern s32 func_00959320(TacticalActor *, s32);
extern void func_00961C80(TacticalActor *actor, u8 target, u8 mode, u8 parameter);

s32 func_00959290(TacticalActor *actor, s32 mode) {
    u8 target;
    if (D_00CB53BD[actor->player.side])
        return 0;
    if (Pes6BallOwnerRecord[actor->player.side])
        return 0;
    target = (u8)func_00959320(actor, mode);
    if (target == 255)
        return 0;
    func_00961C80(actor, target, 1, 1);
    return 1;
}
