/* compiler: mwcc-3.0.1b151 */
#include "pes6/paired_player_action.h"
extern u16 func_009B30B0(u16, u16);
s32 func_00A08690(PairedActor *actor) {
    int distance;
    switch (actor->playback->clip) {
    case 0x2e:
    case 0xc1:
        break;
    default:
        distance = func_009B30B0(actor->heading, actor->previousHeading);
        if (distance >= 32 && distance < 97)
            return 1;
        return 0;
    }
    return 1;
}
