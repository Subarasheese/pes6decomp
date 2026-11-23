/* compiler: mwcc-3.0.1b210 */
#include "pes6/saved_team_category.h"

u8 func_002259E0(void) {
    s32 slot;
    s32 count = 0;
    for (slot = 0; slot < 72; slot++)
        if (categoryInUse(savedTeamCategory(slot)) == 1)
            ++count;
    return (u8)count;
}
