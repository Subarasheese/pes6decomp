/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_competition_slots.h"

s32 func_0099FC70(CompetitionSelection *entry, s32 value) {
    if (!entry)
        return 1;
    if (value < 0 || value >= 60)
        return 1;
    if (entry->valueFD != value)
        entry->changed = 1;
    entry->valueFD = value;
    return 0;
}
