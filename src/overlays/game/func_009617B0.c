/* compiler: mwcc-3.0.1b151 */

#include "pes6/tactical_player.h"

extern s32 D_00CB5360[];

void func_009617B0(TacticalActor *actor) {
    if (actor->ai.cooldown > 0)
        --actor->ai.cooldown;
    ++D_00CB5360[actor->player.side];
    if (actor->ai.wait > 0)
        --actor->ai.wait;
}
