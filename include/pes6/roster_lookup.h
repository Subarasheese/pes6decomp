#ifndef PES6_ROSTER_LOOKUP_H
#define PES6_ROSTER_LOOKUP_H

#include "types.h"

extern u16 Pes6Team_GetPlayerId(u16 team, u8 slot, s32 mode);
extern u8 func_00221A60(u16 team);
static inline u8 searchRoster(s32 player, u16 team, s32 mode) {
    const u8 count = func_00221A60(team);
    u8 slot;
    if ((u16)player == 0)
        return 0xff;
    for (slot = 0; slot < count; slot++) {
        if ((u16)player == Pes6Team_GetPlayerId(team, slot, mode))
            return slot;
    }
    return 0xff;
}

#endif
