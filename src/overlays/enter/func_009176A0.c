/* compiler: mwcc-3.0.3 */
#include "pes6/match_player.h"
extern void func_00911780(Pes6MatchPlayer *player);
void func_009176A0(void) {
    Pes6MatchPlayer *player;
    u8 index;
    index = 0;
    player = Pes6MatchPlayers;
    do {
        func_00911780(player);
        ++index;
        ++player;
    } while (index < 23);
}
