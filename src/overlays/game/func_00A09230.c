/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

extern u8 D_00591E4F[][2];
extern u8 D_00591E50[][2];
extern s32 func_00997EB0(void *);

s32 func_00A09230(TouchActor *actor) {
    u8 first = D_00591E4F[actor->player.side][0];
    if (actor->player.id == first || actor->player.id == D_00591E50[actor->player.side][0])
        return 1;
    if (!func_00997EB0(Pes6MatchPlayer_Get(first)))
        return 0;
    if (!func_00997EB0(Pes6MatchPlayer_Get(D_00591E50[actor->player.side][0])))
        return 0;
    return 1;
}
