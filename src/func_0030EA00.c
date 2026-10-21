/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

u8 func_002C5B60(u8 key);

int func_0030EA00(u8 id)
{
    Pes6MatchPlayer *p = Pes6MatchPlayer_Get(id);

    func_002C5B60((p->team << 5) | (p->slot & 0x1F));
    return 0;
}
