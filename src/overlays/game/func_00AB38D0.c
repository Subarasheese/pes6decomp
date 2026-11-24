/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

s32 func_00AB38D0(KeeperActor *actor) {
    u8 now = actor->player.role;
    u16 prior;
    switch (now) {
    case 5:
    case 6:
    case 4:
    case 8:
    case 9:
    case 10:
    case 65:
        return now;
    default:
        prior = actor->decision.previousRole;
        switch (prior) {
        case 5:
        case 6:
        case 4:
        case 8:
        case 9:
        case 10:
        case 65:
            return (u16)prior;
        default:
            break;
        }
        break;
    }
    return (u8)now;
}
