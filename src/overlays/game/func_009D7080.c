/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern void func_00930240(KeeperActor *);
extern void func_00A00960(KeeperActor *, s32);
extern s32 func_00A9DFF0(KeeperActor *, s32);

void func_009D7080(KeeperActor *actor) {
    HeadingMotion *motion = actor->heading.motion;
    if (motion->frame <= (f32)(2 * motion->descriptor->eventFrame)) {
        func_00A00960(actor, actor->decision.turnCorrection);
        return;
    }
    switch (motion->clip) {
    case 0x26e:
    case 0x26f:
        if (motion->frame >= (f32)(2 * motion->descriptor->phase2))
            actor->player.speed = actor->player.speed * 94 / 100;
        else
            actor->player.speed = actor->player.speed * 99 / 100;
        break;
    case 0x272:
        if (motion->frame >= (f32)(2 * motion->descriptor->phase2))
            actor->player.speed = actor->player.speed * 94 / 100;
        else
            actor->player.speed = actor->player.speed * 99 / 100;
        break;
    case 0x26b:
    case 0x26a:
        func_00930240(actor);
        if (actor->heading.motion->frame == (f32)(2 * actor->heading.motion->descriptor->phase2))
            actor->player.speed = actor->player.speed * 95 / 100;
        break;
    case 0x3c9:
    case 0x3cb:
    case 0x3cf:
        actor->decision.turnCorrection = func_00A9DFF0(actor, 45);
        applyClipTurn(actor);
        if (actor->heading.motion->frame >= (f32)(2 * actor->heading.motion->descriptor->phase2))
            actor->player.speed = actor->player.speed * 92 / 100;
        break;
    case 0x3c5:
    case 0x3c3:
        actor->decision.turnCorrection = func_00A9DFF0(actor, 45);
        applyClipTurn(actor);
        if (actor->heading.motion->frame >= (f32)(2 * actor->heading.motion->descriptor->phase2))
            actor->player.speed = actor->player.speed * 90 / 100;
        break;
    case 0x3d8:
    case 0x3da:
    case 0x3e3:
    case 0x3df:
    case 0x3dd:
        actor->decision.turnCorrection = func_00A9DFF0(actor, 27);
        applyClipTurn(actor);
        if (actor->heading.motion->frame >= (f32)(2 * actor->heading.motion->descriptor->phase2))
            actor->player.speed = actor->player.speed * 95 / 100;
        break;
    default:
        actor->decision.turnCorrection = func_00A9DFF0(actor, 45);
        func_00A00960(actor, actor->decision.turnCorrection);
        if (actor->heading.motion->frame >= (f32)(2 * actor->heading.motion->descriptor->phase2))
            actor->player.speed = actor->player.speed * 92 / 100;
        break;
    }
    if (actor->heading.motion->frame <= (f32)(2 * actor->heading.motion->descriptor->phase2)) {
        actor->player.y -= actor->decision.velocityY;
        if (actor->decision.velocityY * actor->player.y < 0.f)
            actor->player.y = 0.f;
    }
}
