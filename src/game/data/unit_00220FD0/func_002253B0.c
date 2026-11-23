/* compiler: mwcc-3.0.1b198 */
#pragma inline_depth(8)
#include "pes6/saved_team_name.h"

extern u8 func_0022BC60(u8 slot);

const char *func_002253B0(u8 slot) {
    return savedTeamName(func_0022BC60(slot));
}
