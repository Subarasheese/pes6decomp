/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_profile.h"

s32 func_00835DB0(s32 index) {
    LobbyProfile *profile = lobby_profile_at(index);
    if (profile == 0)
        return 0;
    return profile->field00;
}
