/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_lineup_statistics.h"
u8 func_00C17CF0(u8 team, u8 slot) {
    LineupMaps *map = &D_00CCAE40;
    if ((u8)slot < 18)
        return map->captainCount[(u8)team][(u8)slot];
    return 0;
}
