/* compiler: mwcc-3.0.1b151 */
#pragma opt_common_subs off
#include "pes6/match_player.h"
#include "pes6/heading.h"
extern u16 func_009B32D0(u16 target, u16 current, u16 maximumStep);
u16 func_00A10A70(Pes6MatchPlayer *player, u16 heading, u16 step) {
    float z = player->z;
    if (z < -7193.0f && (heading & 0xffff) <= 0x8000) {
        heading = func_009B32D0(0xc000, heading, step) & 0xffff;
    } else if (!(z <= 7193.0f) && (heading & 0xffff) >= 0x8000) {
        heading = func_009B32D0(0x4000, heading, step) & 0xffff;
    }
    return heading;
}
