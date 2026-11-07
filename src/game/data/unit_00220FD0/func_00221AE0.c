/* compiler: mwcc-3.0.1b210 */
#include "pes6/player_db.h"
/* The attribute block of a player id resolved through source 1 (the
 * alternate copy of the tables), falling back to record 0. */
u8 *func_00221AE0(int id) {
    Pes6PlayerRecord *record = Pes6Player_FindRecord(id, 1);
    if (record == 0) {
        record = Pes6OptionData_GetPlayers();
    }
    return record->params;
}
