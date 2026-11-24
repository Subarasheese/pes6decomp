/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_player.h"

extern u16 func_00A9C650(Pes6MatchPlayer *);
extern u16 func_009B30B0(u16, u16);

u16 func_009B9AE0(Pes6MatchPlayer *other, Pes6MatchPlayer *actor) {
    return func_009B30B0(actor->headingTo[other->id], func_00A9C650(actor));
}
