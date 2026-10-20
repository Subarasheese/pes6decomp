/* compiler: mwcc-3.0.1b210 */
/* The record for a player id, falling back to record 0 of the regular
 * players when the id does not resolve. */
#include "pes6/player_db.h"
Pes6PlayerRecord *Pes6Player_GetRecord(int id, int source) {
    Pes6PlayerRecord *record = Pes6Player_FindRecord(id, source);
    if (record == 0) {
        record = Pes6OptionData_GetPlayers();
    }
    return record;
}
