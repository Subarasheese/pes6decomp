/* compiler: mwcc-3.0.1b151 */
#pragma opt_common_subs off

#include "pes6/match_first_touch.h"

extern u8 D_00591BBC[];

s32 func_00962BC0(TouchActor *actor) {
    s32 level = D_00591BBC[0];
    if (level >= 5)
        return 5;
    if (level <= 0)
        return 0;
    if (touchRating(actor, 10, 40) < 50)
        --level;
    if (touchRating(actor, 10, 40) > 90)
        ++level;
    if (level > 5)
        level = 5;
    return level;
}
