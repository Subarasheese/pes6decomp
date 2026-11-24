/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_lineup_statistics.h"
u8 func_00C17D70(u8 team, u8 index) {
    LineupMaps *map = &D_00CCAE40;
    if ((u8)team >= 2 || (u8)index >= 18)
        return 0xff;
    return map->slot[(u8)team][(u8)index];
}
