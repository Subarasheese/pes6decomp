/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_competition_slots.h"
extern s32 func_009BCB20(void *);
s32 func_0099E1C0(const CompetitionSlots *list, s32 index) {
    if (!list)
        return 0;
    if (index < 0 || index >= 3)
        return 0;
    return func_009BCB20(list->entries[index]);
}
