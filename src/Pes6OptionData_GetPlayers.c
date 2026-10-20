/* compiler: mwcc-3.0.1b210 */
#include "pes6/player_db.h"
Pes6PlayerRecord *Pes6OptionData_GetPlayers(void) {
    return Pes6OptionData_Sections[5];
}
