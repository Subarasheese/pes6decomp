/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_profile.h"

char *func_009475D0(s32 index) {
    LobbyProfile *profile = func_00835E50(index);
    if (profile == 0)
        return 0;
    if (profile->text84[0] == 0)
        return 0;
    return profile->text84;
}
