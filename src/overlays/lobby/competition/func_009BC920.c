/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_competition_slots.h"

s32 func_009BC920(CompetitionEntry *entry, s32 value) {
    if (!entry)
        return 1;
    if (value < 0 || value >= 60)
        return 1;
    if (entry->field1e0 != value)
        entry->changed = 1;
    entry->field1e0 = value;
    return 0;
}
