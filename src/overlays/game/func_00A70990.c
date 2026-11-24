/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_shot.h"

extern u8 D_005922D6[];

void func_00A70990(ShotActor *actor) {
    actor->shot.inputLatch = 0;
    actor->shot.startHeading = actor->shot.facing;
    actor->shot.endHeading = actor->shot.facing;
    D_005922D6[0] = 0;
    if (shotPrimaryInput(actor)) {
        actor->shot.endHeading = actor->shot.alternateHeading;
        actor->shot.inputLatch = 4;
    } else if (shotTargetInput(actor)) {
        if (actor->shot.trigger)
            actor->shot.endHeading = actor->shot.secondaryHeading;
        else
            actor->shot.endHeading = actor->shot.facing;
        actor->shot.inputLatch = 4;
    }
}
