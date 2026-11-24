/* compiler: mwcc-3.0.1b210 */
#include "pes6/player_ability_fields.h"
s32 func_00257000(const Pes6PackedAbilities *attributes, s32 which) {
    if (!attributes)
        return 0;
    switch (which) {
    case 0:
        return attributes->ability[14].special;
    case 1:
        return attributes->ability[15].special;
    case 2:
        return attributes->ability[16].special;
    case 3:
        return attributes->ability[17].special;
    case 4:
        return attributes->ability[18].special;
    case 5:
        return attributes->ability[19].special;
    case 6:
        return attributes->ability[20].special;
    case 7:
        return attributes->ability[21].special;
    case 8:
        return attributes->ability[22].special;
    case 9:
        return attributes->ability[23].special;
    case 10:
        return attributes->ability[24].special;
    case 11:
        return attributes->ability[25].special;
    case 12:
        return attributes->ability[13].special;
    case 13:
        return attributes->ability[12].special;
    case 14:
        return attributes->special.oneTouchPass;
    case 15:
        return attributes->special.outside;
    case 16:
        return attributes->special.marking;
    case 17:
        return attributes->special.sliding;
    case 18:
        return attributes->special.covering;
    case 19:
        return attributes->special.defensiveLineControl;
    case 20:
        return attributes->special.penaltyStopper;
    case 21:
        return attributes->special.oneOnOneStopper;
    case 22:
        return attributes->extra20.special;
    default:
        return 0;
    }
}
