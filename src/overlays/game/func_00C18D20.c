/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
u8 func_00C18D20(u8 id) {
    u8 encoded = 255;
    if ((u8)id != 255) {
        const Pes6MatchPlayer *actor = Pes6MatchPlayer_Get((u8)id);
        encoded = (actor->team << 5) | (actor->slot & 31);
    }
    return (u8)encoded;
}
