/* compiler: mwcc-3.0.1b151 */

#include "pes6/tactical_player.h"

extern u16 func_009B30B0(u16 first, u16 second);
extern s32 func_009B3480(void *player, f32 targetX, f32 targetZ);
extern s32 func_0098ED30(s32);
extern u16 func_00967760(TacticalActor *actor);
extern u16 func_00AD9860(TacticalActor *);
extern s32 func_00952420(TacticalActor *actor, u16 heading, u16 halfAngle, u32 distanceSquared);

s32 func_00962320(TacticalActor *actor) {
    s32 window;
    u16 direction = (u16)func_00967760(actor);
    window = 0x1000 - func_009B30B0(direction, actor->ai.approachHeading) * 8;
    if (actor->ai.approachDistanceSquared < (u32)(window * window)) {
        u16 bonus = 0;
        s32 threshold;
        u16 heading;
        switch ((u8)func_0098ED30(actor->player.id)) {
        case 0x5:
            bonus = 0x800;
            break;
        case 0x3:
            bonus = 0x400;
            break;
        case 0x2:
            bonus = 0x200;
            break;
        default:
            break;
        }
        threshold = 0x1800 - bonus;
        if (func_00952420(actor, actor->ai.approachHeading, threshold,
                          actor->ai.approachDistanceSquared))
            return 1;
        {
            s32 side = actor->player.z < 0.f ? -1 : 1;
            f32 goalX = 13465.f * (f32)actor->player.goalDirection;
            heading = (u16)func_009B3480(actor, goalX, (f32)(side * func_00AD9860(actor)));
        }
        if (func_00952420(actor, heading, threshold, actor->ai.approachDistanceSquared))
            return 1;
        {
            s32 side = actor->player.z < 0.f ? -1 : 1;
            f32 goalX = 13465.f * (f32)actor->player.goalDirection;
            heading = (u16)func_009B3480(actor, goalX, (f32)(-side * func_00AD9860(actor)));
        }
        if (func_00952420(actor, heading, threshold, actor->ai.approachDistanceSquared))
            return 1;
    }
    return 0;
}
