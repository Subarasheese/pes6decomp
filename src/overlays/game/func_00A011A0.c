/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern u8 D_00591E4C[];
extern f32 D_005926D8[];
extern u8 D_005926EC[];
extern s32 func_00A09950(Pes6MatchPlayer *);
extern s32 func_00AA32C0(Pes6MatchPlayer *);

s32 func_00A011A0(KeeperActor *actor, s32 frame) {
    u8 kind;
    HeadingMotion *animation;
    if (actor->player.id != D_00591E4C[0] &&
        (keeperBall->ball.action != 1 || func_00A09950(&actor->player) == 1)) {
        s32 playerWindow = (s32)D_005926EC[0] + actor->player.speed / 1024;
        s32 ballWindow = keeperBall->ball.horizontalSpeed / 2048;
        s32 count = (s32)(ballWindow + (s32)playerWindow);
        if (D_005926D8[0] <= (f32)count)
            return 1;
    }
    kind = actor->heading.motion->descriptor->clipKind;
    switch (kind) {
    case 0:
    case 11:
    case 1:
    case 2:
        break;
    default:
        if (actor->player.id == D_00591E4C[0] && actor->player.speed > 0x1000 &&
            func_00AA32C0(&actor->player) >= 0x24000) {
            int limit = (int)actor->heading.motion->descriptor->recoveryFrame * 2;
            if (limit != 0 && frame < limit)
                return 1;
        }
        break;
    }
    animation = actor->heading.motion;
    switch ((s32)animation->clip) {
    case 58:
        if (frame < 35)
            return 1;
        break;
    case 842:
    case 494:
    case 497:
    case 808:
    case 456:
    case 455:
    case 28:
    case 552:
    case 88:
    case 90:
    case 84:
    case 54:
    case 737:
    case 741:
        if (frame >= 4 && frame <= (int)animation->descriptor->recoveryFrame * 2)
            return 1;
        break;
    case 55:
    case 64:
    case 68:
    case 71:
    case 137:
    case 74:
    case 76:
    case 77:
    case 267:
        if (frame >= (int)animation->descriptor->eventFrame * 2 - 4 &&
            frame <= (int)animation->descriptor->recoveryFrame * 2)
            return 1;
        break;
    case 745:
    case 746:
        if (frame <= (int)animation->descriptor->recoveryFrame * 2)
            return 1;
        break;
    case 743:
    case 742:
    case 744:
    case 867:
        if (frame >= 4 && frame <= (int)animation->descriptor->eventFrame * 2)
            return 1;
        break;
    }
    return 0;
}
