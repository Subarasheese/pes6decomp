#ifndef PES6_TRAINING_ROSTER_H
#define PES6_TRAINING_ROSTER_H

#include "types.h"
typedef struct {
    u8 playerId;
    u8 reserved01[0x12];
    u8 team;
    u8 remaining[0x22c];
} RosterPlayer;
typedef struct {
    u8 side, other;
} SideInfo;
typedef struct {
    s32 reserved[2], side, player;
} TrainingSelection;
extern u8 D_00592810[];
extern RosterPlayer D_0058E5B0[];
extern SideInfo D_00591E4F[];
extern u8 func_00AFBA50(s32);
static inline void training_roster_selection(TrainingSelection *selection) {
    s32 slot;
    RosterPlayer *player;
    if (D_00592810[0] != 255)
        slot = D_00592810[0] % 23;
    else
        slot = 1;
    player = &D_0058E5B0[slot];
    selection->side = D_00591E4F[player->team].side;
    selection->player = func_00AFBA50(player->playerId);
}

#endif
