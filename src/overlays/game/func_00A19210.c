/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
enum { PLAYERS_PER_SIDE = 11, MATCH_OBJECTS = 23, NO_ACTOR = 255 };
extern u8 func_00AA00C0(void *player);
static inline u8 fallbackPlayer(Pes6MatchPlayer *player) {
    s32 slot;
    if ((u8)func_00AA00C0(player) != NO_ACTOR)
        slot = (int)(u8)func_00AA00C0(player) % MATCH_OBJECTS;
    else
        slot = 1;
    return Pes6MatchPlayers[slot].id;
}
s32 func_00A19210(Pes6MatchPlayer *player, s32 requested) {
    s32 id = (u8)requested;
    if (!id)
        return 0;
    if (player->side == 0) {
        if (id > 0 && id < PLAYERS_PER_SIDE + 1)
            return id;
        return fallbackPlayer(player);
    } else {
        if (id >= PLAYERS_PER_SIDE + 1 && id < MATCH_OBJECTS)
            return id;
        return fallbackPlayer(player);
    }
}
