/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_player.h"

s32 func_009B9C60(const Pes6MatchPlayer *actor) {
    Pes6PlayerInfo *motion = actor->info;
    s32 animation = motion->unk30;
    switch (animation) {
    case 0x285:
        if (motion->animationFrame < 34.f)
            return 1;
        break;
    case 0x2a6:
        if (motion->animationFrame < 16.f)
            return 1;
        break;
    default:
        break;
    }
    return 0;
}
