/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_player.h"

void func_0027A550(Pes6MatchPlayer *actor, u16 low, u16 high) {
    func_0027A600(actor, 6);
    actor->info->poseLow = low;
    actor->info->poseHigh = high;
}
