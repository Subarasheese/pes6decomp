#ifndef PES6_MATCH_LINEUP_H
#define PES6_MATCH_LINEUP_H

#include "types.h"

enum { MATCH_SIDES = 2, LINEUP_SLOTS = 32 };
extern u16 Pes6MatchLineups[MATCH_SIDES][LINEUP_SLOTS];
static inline void setLineupPlayer(s32 side, s32 slot, s32 player) {
    slot %= LINEUP_SLOTS;
    side &= 1;
    Pes6MatchLineups[side][slot] = player;
}

#endif
