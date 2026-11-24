/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_squad_selection.h"

s32 func_002C7280(const SquadPlayerProfile *player, s32 side) {
    s32 allowed = 0;
    if (!player)
        return 0;
    switch ((u8)side) {
    case 1:
        switch (player->foot.favoredSide) {
        case 0:
            if (player->attributes.preferredFoot)
                allowed = 1;
            break;
        case 1:
            if (!player->attributes.preferredFoot)
                allowed = 1;
            break;
        case 2:
            allowed = 1;
            break;
        }
        break;
    case 2:
        switch (player->foot.favoredSide) {
        case 0:
            if (!player->attributes.preferredFoot)
                allowed = 1;
            break;
        case 1:
            if (player->attributes.preferredFoot)
                allowed = 1;
            break;
        case 2:
            allowed = 1;
            break;
        }
        break;
    default:
        allowed = 1;
        break;
    }
    return allowed;
}
