/* compiler: mwcc-3.0.1b210 */
#pragma no_branch_likely on

#include "pes6/match_squad_selection.h"

u8 func_0028C460(const SquadSelection *work) {
    u8 selected = 0;
    s32 i, best;
    for (i = 0; i < STARTING_ELEVEN; i++) {
        s32 player = work->lineup[i];
        if (work->captainEligible[player] && player == work->captain)
            return work->captain;
    }
    best = -10;
    for (i = 0; i < STARTING_ELEVEN; i++) {
        s32 player = work->lineup[i];
        if (work->captainEligible[player]) {
            const SquadPlayerProfile *info = work->players[player];
            s32 age = info->lineup.age + 15, score;
            if (age > 30)
                age = 30;
            if (age < 20)
                age = -10;
            score = info->ability[SQUAD_RATING_MENTALITY].value +
                    (age + info->ability[SQUAD_RATING_TEAMWORK].value) +
                    info->attributes.value21 * 4;
            if (i == 0)
                score += 3;
            if (info->packed.special.defensiveLineControl)
                score += 5;
            if (score > best) {
                best = score;
                selected = player;
            }
        }
    }
    return selected;
}
