#ifndef PES6_SHOOTOUT_PLAYER_H
#define PES6_SHOOTOUT_PLAYER_H

#include "types.h"

typedef struct {
    u8 reserved00[0x26];
    u16 heading;
    u8 reserved28[0x9c - 0x28];
    s32 active;
    u8 reservedA0[4];
    s32 frames;
} ShootoutPlayer;

#endif
