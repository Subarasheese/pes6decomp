/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_shot.h"

extern u8 D_00591BE4[];

s32 func_00A427F0(ShotActor *actor, s32 held) {
    if (!held) {
        if (actor->shot.flags & 4) {
            if (shotControllerUsesAlternateInput(actor->shot.inputSlot)) {
                actor->shot.inputTicks = (u32)D_00591BE4[0] >> 1;
                return actor->shot.active;
            }
            return 0;
        }
        if (!shotControllerUsesAlternateInput(actor->shot.inputSlot))
            return actor->shot.active;
        if (actor->shot.inputTicks)
            return actor->shot.active;
        return 0;
    } else {
        if (shotControllerUsesAlternateInput(actor->shot.inputSlot) && actor->shot.inputTicks)
            return 0;
        if (actor->shot.flags & 4) {
            if (!shotControllerUsesAlternateInput(actor->shot.inputSlot))
                return actor->shot.active;
            return 0;
        }
        {
            if (!shotControllerUsesAlternateInput(actor->shot.inputSlot))
                return 0;
            return actor->shot.active;
        }
    }
}
