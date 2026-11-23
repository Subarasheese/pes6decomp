/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_slot_query.h"

extern s32 func_009BC9B0(CompetitionEntry *entry);

s32 func_0099E080(const CompetitionSlots *list, s32 index) {
    return lobby_query_slot(list, index, func_009BC9B0);
}
