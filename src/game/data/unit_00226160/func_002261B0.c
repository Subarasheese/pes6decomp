/* compiler: mwcc-3.0.1b198-O3 */
#include "pes6/team_category.h"
s32 func_002261B0(u16 team) {
    s32 result;
    s32 group = teamCategoryGroup(team);
    switch (group) {
    case 2:
        result = team == 0x35 ? 4 : 0;
        break;
    case 1:
        result = 1;
        break;
    case 5:
        result = 2;
        break;
    case 3:
        result = 3;
        break;
    default:
        result = 5;
        break;
    }
    return result;
}
