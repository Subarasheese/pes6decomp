/* compiler: mwcc-3.0.1b151 */
#pragma opt_propagation off

#include "pes6/match_squad_selection.h"

static inline u8 roleFlag(const SquadPlayerProfile *player, s32 slot) {
    switch (slot) {
    case SQUAD_FLAG_GK:
        return player->ability[SQUAD_FLAG_GK].flag;
    case SQUAD_FLAG_SWEEPER:
        return player->ability[SQUAD_FLAG_SWEEPER].flag;
    case SQUAD_FLAG_CENTRE_BACK:
        return player->ability[SQUAD_FLAG_CENTRE_BACK].flag;
    case SQUAD_FLAG_SIDE_BACK:
        return player->ability[SQUAD_FLAG_SIDE_BACK].flag;
    case SQUAD_FLAG_DEFENSIVE_MIDFIELD:
        return player->ability[SQUAD_FLAG_DEFENSIVE_MIDFIELD].flag;
    case SQUAD_FLAG_WING_BACK:
        return player->ability[SQUAD_FLAG_WING_BACK].flag;
    case SQUAD_FLAG_CENTRAL_MIDFIELD:
        return player->ability[SQUAD_FLAG_CENTRAL_MIDFIELD].flag;
    case SQUAD_FLAG_SIDE_MIDFIELD:
        return player->ability[SQUAD_FLAG_SIDE_MIDFIELD].flag;
    case SQUAD_FLAG_ATTACKING_MIDFIELD:
        return player->ability[SQUAD_FLAG_ATTACKING_MIDFIELD].flag;
    case SQUAD_FLAG_WING:
        return player->ability[SQUAD_FLAG_WING].flag;
    case SQUAD_FLAG_SECOND_STRIKER:
        return player->ability[SQUAD_FLAG_SECOND_STRIKER].flag;
    case SQUAD_FLAG_CENTRE_FORWARD:
        return player->ability[SQUAD_FLAG_CENTRE_FORWARD].flag;
    default:
        return 0;
    }
}

u8 func_00293030(const SquadPlayerProfile *player, u8 role) {
    s32 score = 9;
    switch (role) {
    case 0:
        if (roleFlag(player, SQUAD_FLAG_GK))
            break;
        score = 0;
        break;
    case 1:
        score = 0;
        if (player->ability[SQUAD_FLAG_SWEEPER].flag)
            score = 8;
        else if (player->ability[SQUAD_FLAG_CENTRE_BACK].flag)
            score = 8;
        else if (player->ability[SQUAD_FLAG_DEFENSIVE_MIDFIELD].flag)
            score = 6;
        break;
    case 2:
        if (roleFlag(player, SQUAD_FLAG_SWEEPER))
            break;
        score = 0;
        if (player->ability[SQUAD_FLAG_CENTRE_BACK].flag)
            score = 8;
        else if (player->ability[SQUAD_FLAG_DEFENSIVE_MIDFIELD].flag)
            score = 6;
        break;
    case 3:
        if (roleFlag(player, SQUAD_FLAG_CENTRE_BACK))
            break;
        score = 0;
        if (player->ability[SQUAD_FLAG_SWEEPER].flag)
            score = 8;
        else if (player->ability[SQUAD_FLAG_DEFENSIVE_MIDFIELD].flag)
            score = 6;
        else if (player->ability[SQUAD_FLAG_SIDE_BACK].flag)
            score = 2;
        break;
    case 4:
        if (roleFlag(player, SQUAD_FLAG_SIDE_BACK))
            break;
        score = 0;
        if (player->ability[SQUAD_FLAG_WING_BACK].flag)
            score = 8;
        else if (player->ability[SQUAD_FLAG_SIDE_MIDFIELD].flag)
            score = 4;
        else if (player->ability[SQUAD_FLAG_CENTRE_BACK].flag)
            score = 2;
        break;
    case 5:
        if (roleFlag(player, SQUAD_FLAG_DEFENSIVE_MIDFIELD))
            break;
        score = 0;
        if (player->ability[SQUAD_FLAG_CENTRAL_MIDFIELD].flag)
            score = 8;
        else if (player->ability[SQUAD_FLAG_SWEEPER].flag)
            score = 6;
        else if (player->ability[SQUAD_FLAG_CENTRE_BACK].flag)
            score = 6;
        else if (player->ability[SQUAD_FLAG_ATTACKING_MIDFIELD].flag)
            score = 6;
        break;
    case 6:
        if (roleFlag(player, SQUAD_FLAG_WING_BACK))
            break;
        score = 0;
        if (player->ability[SQUAD_FLAG_SIDE_BACK].flag)
            score = 8;
        else if (player->ability[SQUAD_FLAG_SIDE_MIDFIELD].flag)
            score = 8;
        else if (player->ability[SQUAD_FLAG_CENTRAL_MIDFIELD].flag)
            score = 4;
        else if (player->ability[SQUAD_FLAG_WING].flag)
            score = 2;
        break;
    case 7:
        if (roleFlag(player, SQUAD_FLAG_CENTRAL_MIDFIELD))
            break;
        score = 0;
        if (player->ability[SQUAD_FLAG_DEFENSIVE_MIDFIELD].flag)
            score = 8;
        else if (player->ability[SQUAD_FLAG_ATTACKING_MIDFIELD].flag)
            score = 8;
        else if (player->ability[SQUAD_FLAG_SECOND_STRIKER].flag)
            score = 4;
        else if (player->ability[SQUAD_FLAG_WING_BACK].flag)
            score = 4;
        else if (player->ability[SQUAD_FLAG_SIDE_MIDFIELD].flag)
            score = 2;
        break;
    case 8:
        if (roleFlag(player, SQUAD_FLAG_SIDE_MIDFIELD))
            break;
        score = 0;
        if (player->ability[SQUAD_FLAG_WING_BACK].flag)
            score = 8;
        else if (player->ability[SQUAD_FLAG_SIDE_BACK].flag)
            score = 4;
        else if (player->ability[SQUAD_FLAG_WING].flag)
            score = 6;
        else if (player->ability[SQUAD_FLAG_ATTACKING_MIDFIELD].flag)
            score = 4;
        else if (player->ability[SQUAD_FLAG_CENTRAL_MIDFIELD].flag)
            score = 2;
        else if (player->ability[SQUAD_FLAG_SECOND_STRIKER].flag)
            score = 2;
        break;
    case 9:
        if (roleFlag(player, SQUAD_FLAG_ATTACKING_MIDFIELD))
            break;
        score = 0;
        if (player->ability[SQUAD_FLAG_SECOND_STRIKER].flag)
            score = 8;
        else if (player->ability[SQUAD_FLAG_CENTRAL_MIDFIELD].flag)
            score = 8;
        else if (player->ability[SQUAD_FLAG_CENTRE_FORWARD].flag)
            score = 6;
        else if (player->ability[SQUAD_FLAG_DEFENSIVE_MIDFIELD].flag)
            score = 6;
        else if (player->ability[SQUAD_FLAG_SIDE_MIDFIELD].flag)
            score = 4;
        break;
    case 10:
        if (roleFlag(player, SQUAD_FLAG_WING))
            break;
        score = 0;
        if (player->ability[SQUAD_FLAG_SIDE_MIDFIELD].flag)
            score = 6;
        else if (player->ability[SQUAD_FLAG_CENTRE_FORWARD].flag)
            score = 6;
        else if (player->ability[SQUAD_FLAG_WING_BACK].flag)
            score = 2;
        else if (player->ability[SQUAD_FLAG_SECOND_STRIKER].flag)
            score = 2;
        break;
    case 11:
        if (roleFlag(player, SQUAD_FLAG_SECOND_STRIKER))
            break;
        score = 0;
        if (player->ability[SQUAD_FLAG_ATTACKING_MIDFIELD].flag)
            score = 8;
        else if (player->ability[SQUAD_FLAG_CENTRE_FORWARD].flag)
            score = 8;
        else if (player->ability[SQUAD_FLAG_CENTRAL_MIDFIELD].flag)
            score = 4;
        else if (player->ability[SQUAD_FLAG_SIDE_MIDFIELD].flag)
            score = 2;
        else if (player->ability[SQUAD_FLAG_WING].flag)
            score = 2;
        break;
    case 12:
        if (roleFlag(player, SQUAD_FLAG_CENTRE_FORWARD))
            break;
        score = 0;
        if (player->ability[SQUAD_FLAG_SECOND_STRIKER].flag)
            score = 8;
        else if (player->ability[SQUAD_FLAG_WING].flag)
            score = 6;
        else if (player->ability[SQUAD_FLAG_ATTACKING_MIDFIELD].flag)
            score = 6;
        break;
    }
    if (score < 0)
        score = 0;
    if (score > 9)
        score = 9;
    return (u8)score;
}
