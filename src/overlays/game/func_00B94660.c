/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
typedef struct {
    u8 : 5;
    u8 style : 3;
} PenaltyProfile;
typedef struct {
    u8 reserved00[0x90];
    s32 style;
} PenaltyMotion;
void func_00B94660(Pes6MatchPlayer *p) {
    const PenaltyProfile *profile =
        (const PenaltyProfile *)Pes6MatchSquads[p->team].setupPlayers[p->slot].current.base;
    ((PenaltyMotion *)p)->style = profile->style;
}
