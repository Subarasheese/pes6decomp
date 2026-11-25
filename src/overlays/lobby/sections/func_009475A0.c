/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_profile.h"

s8 func_009475A0(s32 index) {
    LobbyProfile *profile = func_00835E50(index);
    if (profile == 0)
        return 0;
    return profile->field35;
}
