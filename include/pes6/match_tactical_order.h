#ifndef PES6_MATCH_TACTICAL_ORDER_H
#define PES6_MATCH_TACTICAL_ORDER_H

#include "pes6/tactical_player.h"
extern s32 D_00CB5360[];
extern u8 D_00CB539C[];
static inline void changeOrder(TacticalActor *actor, u8 decision, u8 argument) {
    u8 side = actor->player.side;
    switch ((u8)decision) {
    case 0x9:
    case 0xa:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
        D_00CB5360[(u8)side] = 0;
        break;
    default:
        break;
    }
    actor->ai.decision = (u8)decision;
    if (!actor->ai.flags)
        D_00CB539C[actor->player.side] = 1;
    actor->ai.argument = (u8)argument;
    D_00CB539C[(u8)side] = 1;
}

#endif
