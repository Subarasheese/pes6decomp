/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(8)

#include "pes6/highlight_requests.h"

static inline s32 samePlayer(HighlightRequest *request) {
    Pes6MatchPlayer *actor = Pes6MatchPlayer_Get(request->actor);
    Pes6SquadPlayerStatus *player = &Pes6MatchSquads[actor->team].players[actor->slot].status;
    return request->playerSerial == player->serial && request->team == actor->team &&
           request->player == (u8)actor->slot && player->active > 0;
}
void func_00BC9000(s32 force) {
    s32 i;
    for (i = 0; i < HIGHLIGHTS; i++) {
        HighlightRequest *request = &D_00CBD5D0.requests[i];
        if (request && request->state == 2) {
            if (!samePlayer(request) || force) {
                if (requestMatches(request, 2, 9, 0)) {
                    if (request->keep == 1)
                        D_00CBD3B0[request->slot].priority = 0;
                    else
                        func_00BC6A60(request->slot);
                }
                request->state = 0;
            }
        }
    }
}
