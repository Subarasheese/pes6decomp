#ifndef PES6_MATCH_SQUAD_LOOKUP_H
#define PES6_MATCH_SQUAD_LOOKUP_H

#include "pes6/match_player.h"
extern u8 D_0058E5C1[], D_0058E5C2[];
static inline const Pes6SquadPlayer *matchSquadPlayer(s32 id) {
    s32 player = (u8)id;
    s32 slotIndex = Pes6MatchPlayer_Index(player);
    s32 teamIndex = Pes6MatchPlayer_Index(player);
    return &Pes6MatchSquads[D_0058E5C2[teamIndex * sizeof(Pes6MatchPlayer)]]
                .players[D_0058E5C1[slotIndex * sizeof(Pes6MatchPlayer)]];
}

#endif
