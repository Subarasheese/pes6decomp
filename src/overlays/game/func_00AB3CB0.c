/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern s32 func_00207D10(HeadingMotion *);
extern void func_002084C0(HeadingMotion *);

static inline void nextAction(KeeperActor *actor, s32 role, s32 action) {
    actor->player.role = role;
    actor->player.action = action;
}

s32 func_00AB3CB0(KeeperActor *actor) {
    if (!func_00207D10(actor->heading.motion))
        return 0;
    func_002084C0(actor->heading.motion);
    actor->decision.previousSpeed = actor->player.speed;
    actor->decision.previousRole = 0xff;
    switch (actor->heading.motion->clip) {
    case 0x2a6:
        nextAction(actor, 17, 64);
        break;
    case 0x285:
        nextAction(actor, 17, 35);
        break;
    case 0:
    case 0x1bf:
        actor->player.speed = 0;
        if (!actor->decision.controller) {
            nextAction(actor, 130, 0);
        } else {
            nextAction(actor, 7, 0);
        }
        break;
    case 0x2c5:
        nextAction(actor, 24, 4);
        break;
    default:
        nextAction(actor, 24, 16);
        break;
    }
    return 1;
}
