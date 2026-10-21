/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

u8 func_002C5A30(u8 key);

/* func_002C5A30's value for match player id's squad slot, bit 7 cleared unless it is 0xFF. */
u8 func_0030E980(u8 id)
{
    Pes6MatchPlayer *p = Pes6MatchPlayer_Get(id);
    u8 v = func_002C5A30((p->team << 5) | (p->slot & 0x1F));

    return v == 0xFF ? 0xFF : v & 0x7F;
}
