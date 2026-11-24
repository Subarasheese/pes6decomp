/* compiler: mwcc-3.0.1b151 */

#include "pes6/tactical_player.h"

extern u16 func_009B32D0(u16 target, u16 current, u16 step);
extern s32 func_00952420(TacticalActor *actor, u16 heading, u16 halfAngle, u32 distanceSquared);
extern s32 func_009909D0(TacticalActor *actor, u32 distanceSquared);

u8 func_0095DF80(TacticalActor *actor, TacticalActor *receiver) {
    u16 heading =
        func_009B32D0(actor->ai.approachHeading, actor->ai.headings[receiver->player.id], 0x1000);
    u32 range = actor->ai.distancesSquared[receiver->player.id] + 0x40000;
    u8 decision = 0;
    if (!func_00952420(actor, heading, 0x800, range))
        decision = 2;
    if (!func_00952420(actor, heading, 0xc00, range >> 2))
        decision = 2;
    heading =
        func_009B32D0(actor->ai.approachHeading, actor->ai.headings[receiver->player.id], 0x800);
    if (!func_00952420(actor, heading, 0xc00, range))
        decision = 2;
    if ((f32)actor->player.goalDirection * actor->player.x <
            receiver->player.x * (f32)actor->player.goalDirection - 1024.f &&
        func_00952420(actor, heading, 0x1000, range) && !(u8)func_009909D0(receiver, 0x310000))
        decision = 1;
    if (!(receiver->player.x * (f32)actor->player.goalDirection <= 12057.f))
        decision = 1;
    return decision;
}
