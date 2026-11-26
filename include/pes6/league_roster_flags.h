#ifndef PES6_LEAGUE_ROSTER_FLAGS_H
#define PES6_LEAGUE_ROSTER_FLAGS_H
#include "pes6/saved_teams.h"

extern u16 func_00224D90(u8 slot, u8 index);
extern SavedTeamPlayer *func_00224E20(u8 slot, u8 index);
extern u8 *func_00224520(u8 slot, u8 index);
extern s32 func_00230410(void);

typedef struct {
    u8 reserved00[3];
    u8 flags : 5, reserved : 3;
} LeagueRosterAttributes;

static inline s32 eligibleRosterPlayer(const SavedTeamPlayer *player) {
    if (!player)
        return 0;
    if (!player->playerId)
        return 0;
    if (!func_00230410())
        return 1;
    switch (player->attributes[4] & 15) {
    case 2:
    case 3:
    case 4:
    case 8:
    case 9:
    case 10:
        return 1;
    case 5:
    case 6:
    case 7:
        return 0;
    }
    return 0;
}

static inline u8 findRosterPlayer(u16 playerId, u8 team) {
    s32 i;
    for (i = 0; i < SAVED_SQUAD_SIZE; i++) {
        if (playerId == func_00224D90(team, (u8)i)) {
            if (eligibleRosterPlayer(func_00224E20(team, (u8)i)) == 1)
                return (u8)i;
        }
    }
    return 0xff;
}

static inline LeagueRosterAttributes *leagueRosterFlagsForPlayer(u16 playerId, u8 team) {
    return (LeagueRosterAttributes *)func_00224520(team, findRosterPlayer(playerId, team));
}

#endif
