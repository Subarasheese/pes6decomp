#ifndef PES6_LOBBY_TEAM_ROSTER_H
#define PES6_LOBBY_TEAM_ROSTER_H
#include "types.h"

/* Each entry in the three-team lobby request has room for 40 players. */
typedef struct {
    u16 teamId;
    u16 count;
    u16 playerIds[40];
    u8 playerValues[40];
} LobbyTeamRoster;

extern s32 func_00877110(void *connection, const LobbyTeamRoster *teams);
#endif
