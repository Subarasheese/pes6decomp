/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_competition_slots.h"
extern s32 func_009BC800(CompetitionEntry *entry, s32 value);
s32 func_0099E2D0(CompetitionSlots *group, s32 index, s32 value) {
    if (!group)
        return 5;
    if (index < 0 || index >= 3)
        return 5;
    func_009BC800(group->entries[index], value);
    return 0;
}
