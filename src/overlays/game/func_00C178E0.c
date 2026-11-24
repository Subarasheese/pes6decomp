/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_lineup_statistics.h"
#include "pes6/match_player.h"
static inline void storeLineupIndex(u8 team, u8 slot, u8 value) {
    LineupMaps *map = &D_00CCAE40;
    if ((u8)team < 2 && (u8)slot < 32) {
        map->lineupIndex[(u8)team][(u8)slot] = value;
    }
}
void func_00C178E0(void) {
    s32 side, i;
    const Pes6MatchPlayer *player = &Pes6MatchPlayers[1];
    for (side = 0; side < 2; ++side)
        for (i = 0; i < 32; ++i)
            storeLineupIndex(side, i, 0xff);
    for (side = 0; side < 2; ++side) {
        for (i = 0; i < 11; ++i, ++player) {
            storeLineupIndex(player->team, player->slot, i);
        }
    }
}
