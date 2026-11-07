/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

typedef struct Pes6Ball {
    u8 pad00[0x58];
    u16 dir; /* 0x58 */
} Pes6Ball;

extern Pes6Ball *Pes6Ball_Current;

/* The ball's direction plus match player id's angle field (16-bit wrap). */
u16 func_0030E7C0(u8 id)
{
    return Pes6Ball_Current->dir + Pes6MatchPlayers[Pes6MatchPlayer_Index(id)].angle;
}
