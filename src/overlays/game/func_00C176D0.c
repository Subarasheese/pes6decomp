/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_lineup_statistics.h"
static inline u8 entry(u8 team, u8 index) {
    LineupMaps *map = &D_00CCAE40;
    if ((u8)team >= 2 || (u8)index >= 32)
        return 0xff;
    return map->lineupIndex[(u8)team][(u8)index];
}
static inline void storeSlot(u8 team, u8 index, u8 slot) {
    LineupMaps *map = &D_00CCAE40;
    if ((u8)team < 2 && (u8)index < 18)
        map->slot[(u8)team][(u8)index] = slot;
}
void func_00C176D0(void) {
    s32 side, i;
    for (side = 0; side < 2; ++side)
        for (i = 0; i < 18; ++i)
            storeSlot(side, i, 0xff);
    for (side = 0; side < 2; ++side)
        for (i = 0; i < 32; ++i) {
            u8 active = entry(side, i);
            if ((u8)active != 0xff)
                storeSlot(side, active, i);
        }
}
