/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_player_state_rows.h"

extern u16 func_0022D200(u8 team, u16 player);

s32 func_00324DA0(MatchPlayerStateRows *state) {
    PlayerStateEntry *entry;
    s32 i;
    s32 side;
    for (side = 0; side < 2; ++side) {
        for (i = 0; i < 32; ++i) {
            if (findPlayerState(&entry, state, side, i)) {
                switch (func_0022D200(D_003E77B0->team[side % 2], entry->playerId)) {
                case 1:
                    entry->flags |= 0x20000;
                    break;
                case 2:
                    entry->flags |= 0x40000;
                    break;
                case 3:
                    entry->flags |= 0x80000;
                    break;
                case 4:
                    entry->flags |= 0x100000;
                    break;
                case 5:
                    entry->flags |= 0x200000;
                    break;
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                    entry->flags |= 0x400000;
                    break;
                }
            }
        }
    }
    return 1;
}
