/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern s32 func_00BC03A0(u16);
extern void func_00930240(KeeperActor *);
extern void func_00A00960(KeeperActor *, s32);

static inline void turnKeeper(KeeperActor *actor) {
    applyClipTurn(actor);
    func_00930240(actor);
}

void func_009D6E10(KeeperActor *actor) {
    HeadingMotion *motion = actor->heading.motion;
    u16 clip = motion->clip;
    if (clip >= 0x59a) {
        s32 variant = func_00BC03A0(clip);
        switch (variant) {
        case 0x43:
            func_00930240(actor);
            break;
        case 0x44:
            func_00A00960(actor, 0x1000);
            func_00930240(actor);
            break;
        case 0x42:
            turnKeeper(actor);
            break;
        default:
            actor->player.speed = actor->player.speed * 96 / 100;
            break;
        }
    } else {
        switch (clip) {
        case 0x274:
            func_00A00960(actor, 0x1000);
            func_00930240(actor);
            break;
        case 0x1b0:
            turnKeeper(actor);
            break;
        default:
            if (motion->frame == 0.f) {
                actor->player.speed = actor->player.speed * 96 / 100;
            } else if (motion->frame <= 21.f) {
                func_00A00960(actor, actor->decision.turnCorrection);
                if (actor->heading.motion->frame >= 21.f)
                    actor->player.speed = actor->player.speed * 9 / 10;
            } else {
                actor->player.speed = actor->player.speed * 97 / 100;
            }
            break;
        }
    }
}
