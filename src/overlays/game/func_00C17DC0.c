/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_lineup_statistics.h"
u8 func_00C17DC0(u8 team, u8 slot) {
    LineupMaps *tables = &D_00CCAE40;
    if ((u8)team < 2 && (u8)slot < 32)
        return tables->actor[(u8)team][(u8)slot];
    return 255;
}
