/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

extern u8 D_00591E19[];
extern void func_00A7BF90(TouchActor *);
extern void func_00A70990(TouchActor *);

void func_00A020E0(TouchActor *actor) {
    actor->touch.field220 = 0;
    actor->touch.flags221 = 0;
    actor->touch.field222 = 0;
    actor->touch.field223 = 0;
    switch (actor->touch.previousAction) {
    case 0x4:
        actor->touch.directionState = 16;
        if (!actor->touch.controlMode || actor->touch.inputLatch > 3)
            actor->touch.inputLatch = 0;
        if (actor->player.id != D_00591E19[0])
            actor->touch.flags221 |= 8;
        break;
    case 0x8:
        actor->touch.directionState = 16;
        func_00A70990(actor);
        break;
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x28:
    case 0x5:
    case 0x6:
        func_00A7BF90(actor);
        break;
    default:
        break;
    }
}
