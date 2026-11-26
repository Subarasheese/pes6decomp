/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_profiles.h"
char *func_00952CF0(s32 index) {
    LobbyProfile *row = lobby_profile_at(index);
    if (!row)
        return 0;
    if (*(const u8 *)row->name == 0)
        return 0;
    return row->name;
}
