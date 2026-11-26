#ifndef PES6_LOBBY_SELECTED_ROSTER_H
#define PES6_LOBBY_SELECTED_ROSTER_H

#include "types.h"

typedef struct {
    u8 reserved00[0x53bc];
    u16 playerIds[40];
    u8 playerValues[40];
} LobbyPlayerSelection;

extern u8 D_008A5F70[];
extern u16 D_008AB328[], D_008AB32A[], D_008AB32C[];
extern u8 D_008AB37C[];

extern u8 func_00824960(s32 team);
extern u16 func_00824A60(s32 team, s32 player);
extern u16 func_00824A00(s32 team, s32 player);
extern s32 func_00962DB0(s32 team);
extern s32 func_00962CA0(s32 team);
extern s32 func_00877310(void *channel, u16 team, u16 count, const u16 *ids, const u8 *values);

#endif
