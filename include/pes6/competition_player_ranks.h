#ifndef PES6_COMPETITION_PLAYER_RANKS_H
#define PES6_COMPETITION_PLAYER_RANKS_H

#include "pes6/competition_save_state.h"

typedef struct {
    u16 playerId;
    u8 team, reserved03;
    u16 total04, total06;
} CompetitionPlayerRank;

typedef struct {
    u8 index : 6, kind : 2;
    u8 reserved01[3];
} CompetitionPlayerSlot;

typedef struct {
    u8 reserved00[0x7d0];
    CompetitionPlayerSlot playerSlots[2][88];
    u8 reservedA90[0x1543 - 0xa90], sideValues[2], reserved1545[0x1552 - 0x1545];
    CompetitionPlayerRank ranks[];
} CompetitionPlayerStats;

static inline CompetitionPlayerStats *competitionPlayerStats(void) {
    if (competitionDataUnavailable() == 1)
        return 0;
    return (CompetitionPlayerStats *)(Pes6SaveData_Current + 0xc);
}

#endif
