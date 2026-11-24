/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

extern s32 func_00991380(u8);
extern u8 func_009A0270(void);
extern u8 D_00591BBC[];
extern u8 Pes6MatchContext_Half[];

s32 func_00A17170(TouchActor *actor) {
    s32 other, lead;
    s32 minute;
    if (actor->touch.opponentDistanceSquared < 0x6400000U)
        return 0;
    other = func_00991380(actor->player.team ^ 1);
    lead = func_00991380(actor->player.team) - other;
    if (D_00591BBC[0] >= 2 && (s32)Pes6MatchContext_Half[0] > 0) {
        minute = (u8)func_009A0270();
        if ((lead == -2 && minute >= 21) || (lead == -1 && minute > 30))
            return 1;
    }
    return 0;
}
