/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_squad_selection.h"

extern u8 func_00293030(const SquadPlayerProfile *, u8);
extern u64 func_00292F30(void *, s32);

u8 func_002C6320(const SquadPlayerProfile *player, u8 role) {
    u8 bonus[13][13] = {
        {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 2, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 1, 1, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 1, 1, 2, 0, 1, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 2, 1, 1, 1, 1, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 2, 1, 1, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 1, 1, 2, 1, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 1, 1, 2, 1, 1, 0, 0}, {0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 0, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 2, 1, 1}, {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 1},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2}};
    u8 score = func_00293030(player, role);
    if (score < 4) {
        switch (role) {
        case 1:
        case 2:
        case 3:
        case 4:
            if (func_00292F30((void *)player, 2) || func_00292F30((void *)player, 1) ||
                func_00292F30((void *)player, 3) || func_00292F30((void *)player, 4))
                score = 4;
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            if (func_00292F30((void *)player, 5) || func_00292F30((void *)player, 6) ||
                func_00292F30((void *)player, 8) || func_00292F30((void *)player, 7) ||
                func_00292F30((void *)player, 9))
                score = 4;
            break;
        case 10:
        case 11:
        case 12:
            if (func_00292F30((void *)player, 12) || func_00292F30((void *)player, 11) ||
                func_00292F30((void *)player, 10))
                score = 4;
            break;
        }
    }
    if (score == 9 && role < 13 && player) {
        u8 registered = player->identity.registeredPosition;
        if (registered < 13)
            score += bonus[registered][role];
    }
    return score;
}
