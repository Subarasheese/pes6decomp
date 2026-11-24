#ifndef PES6_RESTART_PLAYER_H
#define PES6_RESTART_PLAYER_H

#include "pes6/match_player.h"

typedef struct {
    u8 reserved00[0x10], controlled, reserved11[0x26 - 0x11];
    u16 heading, target;
    u8 reserved2a[0x5c - 0x2a], variation, reserved5d[5], wait;
} RestartReaction;

typedef struct {
    u8 mirrored : 1;
    u8 : 7;
} FootFlags;
extern f32 D_00591E58[], D_00591E60[];
static inline s32 pitchSign(f32 v) { return v < 0.0f ? -1 : 1; }
static inline s32 playerMirrored(const Pes6MatchPlayer *player) {
    return ((const FootFlags *)Pes6MatchSquads[player->team]
                .setupPlayers[player->slot]
                .current.base)
               ->mirrored &
           1;
}

#endif
