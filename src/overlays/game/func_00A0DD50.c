/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

extern u8 D_00591E4F[][2];
extern u8 D_00591F16[][2];
extern u8 D_00591F17[][2];

s32 func_00A0DD50(TouchActor *actor) {
    u8 id = actor->player.id;
    if (id != D_00591E4F[actor->player.side][0]) {
        s32 marked;
        if ((id == D_00591F16[actor->player.side][0] || id == D_00591F17[actor->player.side][0]))
            marked = 1;
        else
            marked = 0;
        if (!marked)
            return 0;
    }
    return 1;
}
