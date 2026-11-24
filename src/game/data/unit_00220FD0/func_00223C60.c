/* compiler: mwcc-3.0.1b210 */
#include "pes6/saved_player_record.h"

void func_00223C60(s32 player, u8 value) {
    SavedPlayerRecord *record;
    if (Pes6SaveData_IsUnavailable() == 1)
        return;
    record = savedPlayerRecord(player);
    if (record)
        record->field0D = value;
}
