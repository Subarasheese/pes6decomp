/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_profiles.h"
s32 func_00952930(s32 index) {
    LobbyProfile *row = lobby_profile_at(index);
    if (0 == (row))
        return 0;
    return row->field48;
}
