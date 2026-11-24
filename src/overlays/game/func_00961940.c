/* compiler: mwcc-3.0.1b151 */

#include "pes6/tactical_player.h"

extern s32 D_00CB5360[];
extern s32 func_009B3480(void *player, f32 targetX, f32 targetZ);
extern u16 func_009B3070(u16 first, u16 second);

s32 func_00961940(TacticalActor *actor, s32 mode) {
    u16 first = (u16)func_009B3480(actor, 13465.f * (f32)actor->player.goalDirection,
                                   939.f * (f32)(actor->player.z < 0.f ? -1 : 1));
    u16 second = (u16)func_009B3480(actor, 13465.f * (f32)actor->player.goalDirection,
                                    -939.f * (f32)(actor->player.z < 0.f ? -1 : 1));
    func_009B3070(actor->ai.facing, second);
    func_009B3070(actor->ai.facing, first);
    actor->ai.command = 0x8000;
    switch (mode) {
    default:
    case 1:
    case 2:
        actor->ai.choice = 0;
        break;
    case 3:
        actor->ai.choice = 1;
        break;
    case 4:
        actor->ai.choice = 2;
        break;
    }
    D_00CB5360[actor->player.side] = 0;
    return 0;
}
