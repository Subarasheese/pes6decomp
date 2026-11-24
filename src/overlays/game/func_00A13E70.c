/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

extern u8 D_00591E4F[][2];
extern u16 func_009B30B0(u16 first, u16 second);
extern s32 func_00BBB8C0(s32);
extern u8 D_00591F1A[];

s32 func_00A13E70(TouchActor *actor) {
    TouchActor *opponent = (TouchActor *)Pes6MatchPlayer_Get(D_00591E4F[actor->player.side ^ 1][0]);
    if (func_009B30B0(actor->touch.facing, actor->touch.playerHeadings[opponent->player.id]) <=
            80 &&
        (opponent->player.role == 12 ||
         actor->touch.playerDistancesSquared[opponent->player.id] <= 0x24000))
        return func_00BBB8C0((99 - touchRating(actor, 24, 40)) * 8) + 0x300;
    if (D_00591F1A[0] > 1)
        return 0;
    return func_00BBB8C0((99 - touchRating(actor, 24, 40)) * 2);
}
