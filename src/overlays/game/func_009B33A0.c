/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_player.h"

s32 func_009B33A0(Pes6MatchPlayer *player, s32 x, s32 z) {
    s32 dx = (s32)(player->x - (f32)x);
    s32 dz = (s32)(player->z - (f32)z);
    return dx * dx + dz * dz;
}
