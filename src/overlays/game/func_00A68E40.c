/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_shot.h"

s32 func_00A68E40(ShotActor *actor) {
    s32 active = 0;
    if (shotPrimaryInput(actor))
        active = 1;
    if (shotTargetInput(actor))
        active = 1;
    if ((actor->shot.flags & 0x2000) || active) {
        if (actor->shot.directionState < 128)
            return 1;
    }
    return 0;
}
