/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
extern s32 func_008B9660(void);
static inline s32 ignoresLineupMinimum(void) {
    s16 mode = func_008B9660();
    if (mode != 5 && mode != 4)
        return 0;
    return 1;
}
s32 func_008BC400(const FormationOptions *opts) {
    s32 i;
    s32 j;
    s32 player;
    u8 primary;
    u8 secondary;
    if (ignoresLineupMinimum())
        return 1;
    primary = 0;
    secondary = 0;
    for (i = 0; i < 11; i++) {
        player = opts->tactics.plan.lineup[i];
        for (j = 0; j < opts->tactics.pairCount; j++) {
            if (opts->tactics.pairs[j][0] == player) {
                player = opts->tactics.pairs[j][1];
                break;
            }
            if (opts->tactics.pairs[j][1] == player) {
                player = opts->tactics.pairs[j][0];
                break;
            }
        }
        if (opts->primary[(u8)player])
            primary++;
        else if (opts->secondary[(u8)player])
            secondary++;
    }
    return primary >= 7 || primary + secondary < 7;
}
