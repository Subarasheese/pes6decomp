/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_player_state_rows.h"

extern u16 func_0022D460(u8 team, u16 player);

s32 func_00324F60(MatchPlayerStateRows *state) {
    PlayerStateEntry *entry;
    s32 i;
    s32 side;
    for (side = 0; side < 2; ++side) {
        for (i = 0; i < 32; ++i) {
            if (findPlayerState(&entry, state, side, i)) {
                switch (func_0022D460(D_003E77B0->team[side % 2], entry->playerId)) {
                case 1:
                    entry->flags |= 0x400;
                    break;
                case 2:
                    entry->flags |= 0x800;
                    break;
                case 3:
                    entry->flags |= 0x1000;
                    break;
                case 4:
                    entry->flags |= 0x2000;
                    break;
                case 5:
                    entry->flags |= 0x4000;
                    break;
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                    entry->flags |= 0x8000;
                    break;
                }
            }
        }
    }
    return 1;
}
