#ifndef PES6_SAVED_TEAM_CATEGORY_H
#define PES6_SAVED_TEAM_CATEGORY_H

#include "pes6/saved_teams.h"
static inline s32 categoryInUse(u8 category) {
    switch (category) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
        return 1;
    case 0:
        return 0;
    default:
        return 0;
    }
}

#endif
