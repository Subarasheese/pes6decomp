/* compiler: mwcc-3.0.1b210 */
#include "pes6/player_ability_fields.h"
s32 func_002571B0(const Pes6PackedAbilities *attributes, s32 which) {
    if (!attributes)
        return 0;
    switch (which) {
    case 0:
        return attributes->ability[0].rating;
    case 1:
        return attributes->ability[1].rating;
    case 2:
        return attributes->ability[2].rating;
    case 3:
        return attributes->ability[3].rating;
    case 4:
        return attributes->ability[4].rating;
    case 5:
        return attributes->ability[5].rating;
    case 6:
        return attributes->ability[6].rating;
    case 7:
        return attributes->ability[7].rating;
    case 8:
        return attributes->ability[8].rating;
    case 9:
        return attributes->ability[9].rating;
    case 10:
        return attributes->ability[10].rating;
    case 11:
        return attributes->ability[11].rating;
    case 12:
        return attributes->ability[12].rating;
    case 13:
        return attributes->ability[13].rating;
    case 14:
        return attributes->ability[14].rating;
    case 15:
        return attributes->ability[15].rating;
    case 16:
        return attributes->ability[16].rating;
    case 17:
        return attributes->ability[17].rating;
    case 18:
        return attributes->ability[18].rating;
    case 19:
        return attributes->ability[19].rating;
    case 20:
        return attributes->ability[20].rating;
    case 21:
        return attributes->ability[22].rating;
    case 22:
        return attributes->ability[23].rating;
    case 23:
        return attributes->ability[24].rating;
    case 24:
        return attributes->ability[25].rating;
    case 25:
        return attributes->ability[21].rating;
    case 26:
        return attributes->extra[1].value0;
    case 27:
        return attributes->extra[1].value1;
    case 28:
        return attributes->extra[0].value1;
    default:
        return 0;
    }
}
