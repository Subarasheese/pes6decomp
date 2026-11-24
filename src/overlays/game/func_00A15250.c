/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_shot.h"

extern s32 func_00AFBAB0(s32 id);

void func_00A15250(ShotActor *actor) {
    s32 slot;
    s32 id = actor->player.id;
    if (!id)
        return;
    slot = actor->player.id - (u8)func_00AFBAB0(id);
    D_00591F44[actor->player.team][slot].status = 0xff;
    D_00591F44[actor->player.team][slot].secondaryStatus = 0xff;
}
