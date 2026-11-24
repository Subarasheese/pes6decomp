/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern void func_00930240(KeeperActor *);
extern void func_00A00960(KeeperActor *, s32);
extern s32 func_00AB33D0(u16);
extern s32 func_00A9DFF0(KeeperActor *, s32);
extern s32 func_00A9DE50(KeeperActor *, s32, s32);
extern s32 func_00A9DF20(KeeperActor *, u16);

void func_009D7620(KeeperActor *actor) {
    HeadingMotion *motion = actor->heading.motion;
    s32 frame = (s32)motion->frame;
    if (motion->frame <= (f32)(2 * motion->descriptor->eventFrame)) {
        func_00A00960(actor, actor->decision.turnCorrection);
        return;
    }
    switch (motion->clip) {
    case 0x3ab:
    case 0x3ac:
    case 0x25b:
    case 0x292:
    case 0x336:
    case 0x19d:
    default:
        actor->player.speed = actor->player.speed * 98 / 100;
        if (frame > (2 * actor->heading.motion->descriptor->phase2)) {
            func_00930240(actor);
        }
        return;
    case 0x37d:
    case 0x28f:
        if (frame <= (2 * motion->descriptor->phase2)) {
            actor->player.speed = actor->player.speed * 98 / 100;
        } else {
            actor->player.speed = actor->player.speed * 95 / 100;
            func_00930240(actor);
        }
        return;
    case 0x262:
    case 0x269:
        actor->player.speed = actor->player.speed * 98 / 100;
        func_00930240(actor);
        return;
    case 0x3ae:
        actor->player.speed = actor->player.speed * 98 / 100;
        {
            s32 end = (2 * actor->heading.motion->descriptor->phase2);
            if (frame > end) {
                actor->decision.turnCorrection = func_00A9DE50(actor, 90, end);
                applyClipTurn(actor);
                func_00930240(actor);
            }
        }
        return;
    case 0x3af:
        actor->player.speed = actor->player.speed * 98 / 100;
        {
            s32 end = (2 * actor->heading.motion->descriptor->phase2);
            if (frame > end) {
                actor->decision.turnCorrection = func_00A9DE50(actor, 90, end);
                applyClipTurn(actor);
                func_00930240(actor);
            } else {
                actor->decision.turnCorrection = func_00A9DF20(actor, actor->heading.turnAngle);
                applyClipTurn(actor);
            }
        }
        return;
    case 0x178:
        actor->player.speed = actor->player.speed * 98 / 100;
        actor->decision.turnCorrection =
            func_00A9DFF0(actor, func_00AB33D0(actor->heading.motion->clip));
        applyClipTurn(actor);
        if (frame >= (2 * actor->heading.motion->descriptor->phase2)) {
            func_00930240(actor);
        }
        return;
    case 0x263:
        actor->player.speed = actor->player.speed * 98 / 100;
        actor->decision.turnCorrection =
            func_00A9DFF0(actor, func_00AB33D0(actor->heading.motion->clip));
        reverseClipTurn(actor);
        if (frame >= (2 * actor->heading.motion->descriptor->phase2)) {
            func_00930240(actor);
        }
        return;
    case 0x260:
        if (motion->frame < 44.f) {
            actor->decision.turnCorrection = 0x2e8;
            applyClipTurn(actor);
        }
        func_00930240(actor);
        break;
    case 0x261:
        actor->player.speed = actor->player.speed * 98 / 100;
        actor->decision.turnCorrection = func_00A9DFF0(actor, 90);
        applyClipTurn(actor);
        if (frame > (2 * actor->heading.motion->descriptor->phase2)) {
            func_00930240(actor);
        }
        return;
    case 0x1b5:
        actor->player.speed = actor->player.speed * 98 / 100;
        {
            s32 end = (2 * actor->heading.motion->descriptor->phase2);
            if (frame > end) {
                func_00930240(actor);
            } else {
                actor->decision.turnCorrection = 0x98da / end;
                applyClipTurn(actor);
            }
        }
        return;
    case 0x264:
        actor->player.speed = actor->player.speed * 98 / 100;
        actor->decision.turnCorrection = func_00A9DFF0(actor, 180);
        applyClipTurn(actor);
        if (frame > (2 * actor->heading.motion->descriptor->phase2)) {
            func_00930240(actor);
        }
        return;
    }
}
