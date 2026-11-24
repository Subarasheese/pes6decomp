/* compiler: mwcc-3.0.1b151 */

#include "pes6/tactical_player.h"

s32 func_00957CC0(TacticalActor *actor) {
    switch (actor->ai.decision) {
    case 14:
    case 11:
    case 10:
    case 5:
    case 2:
    case 1:
    case 0:
        return 1;
    case 15:
    case 13:
    case 12:
    case 9:
    case 8:
    case 7:
    case 6:
    case 4:
    case 3:
    default:
        return 0;
    }
}
