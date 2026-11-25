/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_profile.h"

s8 func_00835D10(s32 index) {
    LobbyProfile *profile = lobby_profile_at(index);
    if (profile == 0)
        return 0;
    return profile->field7D;
}
