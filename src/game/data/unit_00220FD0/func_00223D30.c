/* compiler: mwcc-3.0.1b210 */
#include "pes6/saved_player_record.h"
s32 func_00223D30(s32 player) {
    SavedPlayerRecord *entry;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    entry = savedPlayerRecord(player);
    return entry == 0 ? 0 : entry->field0D;
}
