/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

int func_0030E4E0(u8 id, int *out)
{
    *out = Pes6MatchPlayer_Get(id)->info->appearance->value;
    return 1;
}
