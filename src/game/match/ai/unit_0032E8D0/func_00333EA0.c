/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_score_situation.h"
extern s32 func_00292A30(void), func_002929C0(void);

s32 func_00333EA0(s32 *result, const s16 goals[2], s32 side) {
    s32 difference = goals[side] - goals[side ^ 1];
    s32 rank;
    if (difference > 0 ? difference : -difference) {
        if (difference > 0)
            rank = difference + 15;
        else
            rank = difference + 11;
    } else if (func_00292A30() || func_002929C0()) {
        s32 home = func_0030DA70(0);
        s32 away = func_0030DA70(1);
        if (!side) {
            if (home > goals[1])
                rank = 15;
            else if (home == goals[1])
                rank = 13;
            else
                rank = 11;
        } else {
            if (away > goals[0])
                rank = 15;
            else if (home == goals[1])
                rank = 13;
            else
                rank = 11;
        }
    } else {
        rank = 13;
    }
    *result = rank;
    return 1;
}
