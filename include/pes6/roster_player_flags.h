#ifndef PES6_ROSTER_PLAYER_FLAGS_H
#define PES6_ROSTER_PLAYER_FLAGS_H

#include "types.h"

extern void *func_002228B0(s32 player, s32 field, s32 source, s32 write);
extern u8 D_003E74D8[4];
static inline s32 hasPlayerFlag(s32 player, s32 index) {
    u8 *flags;
    s32 id;
    if (index >= 3)
        return 0;
    id = (u16)player;
    if (id >= 0x1770 && id <= 0x18f6)
        return 0;
    flags = func_002228B0(player, 3, 4, 0);
    if (*flags & D_003E74D8[index])
        return 1;
    return 0;
}

#endif
