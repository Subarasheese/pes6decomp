/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_player.h"

s32 func_009B9FB0(const Pes6MatchPlayer *actor) {
    Pes6PlayerInfo *motion = actor->info;
    s32 animation = motion->unk30;
    switch (animation) {
    case 0x26e:
        if (!(motion->animationFrame < 19.f))
            return 1;
        break;
    case 0x279:
    case 0x302:
        if (motion->animationFrame <= 12.f)
            return 1;
        break;
    default:
        break;
    }
    return 0;
}
