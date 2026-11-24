#ifndef PES6_COMPETITION_RECORDS_H
#define PES6_COMPETITION_RECORDS_H

#include "types.h"

enum {
    CUP_ROUND_COUNT = 7,
    CUP_MATCH_COUNT = 97,
    CUP_SLOT_COUNT = 96,
    COMPETITION_STAGE_COUNT = 20,
    LEAGUE_TEAM_COUNT = 113
};

typedef struct {
    u8 reserved00[3], currentFixture, firstMatch, fixtureCount, reserved06[3],
        sizeCode, reserved0A[2];
} KnockoutRound;

typedef struct {
    u8 stage, pairing, reserved02[3], teams[2];
    u8 reserved07[0x16 - 7];
    u8 : 1, secondLeg : 1, : 3, completed : 1, : 2;
    u8 reserved17;
} KnockoutMatch;

typedef struct {
    u8 reserved00, selectedRound, reserved02[0xc2], slots[CUP_SLOT_COUNT], reserved124[2];
    KnockoutMatch matches[CUP_MATCH_COUNT];
    KnockoutRound rounds[CUP_ROUND_COUNT];
} KnockoutCompetition;

typedef struct {
    u8 current, reserved01, teamCount, sides, count, gamesPerDay, repeats, cycles, multiplier,
        reserved09[2], entryCount;
} CompetitionStage;

typedef struct {
    u16 goalsFor, goalsAgainst;
    u8 wins, losses, draws, points, value08, value09, reserved0A[2];
} LeagueStanding;

typedef struct {
    u8 slots[LEAGUE_TEAM_COUNT], stageSlots[LEAGUE_TEAM_COUNT], reservedE2[0x1363 - 0xe2];
    u8 stageCount, teamCount;
    u8 reserved1365[0x16f1 - 0x1365], currentStage, reserved16F2[0x3cd6 - 0x16f2],
        results[0x4ab6 - 0x3cd6];
    CompetitionStage stages[COMPETITION_STAGE_COUNT];
    LeagueStanding table[LEAGUE_TEAM_COUNT];
} LeagueCompetition;

extern void *func_00229460(void);
extern s32 func_00228ED0(s32 group, s32 team);
extern u8 *Pes6SaveData_Current;
extern s32 Pes6SaveData_IsUnavailable(void);

static inline KnockoutCompetition *knockoutCompetition(void) {
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (Pes6SaveData_Current)
        return (KnockoutCompetition *)(Pes6SaveData_Current + 0xdedc);
    return 0;
}

static inline KnockoutRound *knockoutRound(u8 index) {
    KnockoutCompetition *cup = knockoutCompetition();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (index >= CUP_ROUND_COUNT)
        return 0;
    if (!cup)
        return 0;
    return &cup->rounds[index];
}

static inline u8 knockoutTeamSlot(u8 index) {
    KnockoutCompetition *cup = knockoutCompetition();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0xff;
    if (!cup)
        return 0xff;
    if (index >= CUP_SLOT_COUNT)
        return 0xff;
    return cup->slots[index];
}

static inline LeagueCompetition *leagueCompetition(void) {
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (Pes6SaveData_Current)
        return (LeagueCompetition *)(Pes6SaveData_Current + 0x7980);
    return 0;
}

static inline LeagueCompetition *leagueTeamList(void) {
    LeagueCompetition *league = leagueCompetition();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (!league)
        return 0;
    return league;
}

static inline u8 leagueTeamSlot(u8 index) {
    LeagueCompetition *league = leagueTeamList();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0xff;
    if (!league)
        return 0xff;
    if (index >= LEAGUE_TEAM_COUNT)
        return 0xff;
    return league->slots[index];
}

extern u16 func_00225680(u8 slot);
extern u8 func_00225940(u8 slot);

static inline KnockoutMatch *knockoutFixture(u8 index, u8 match) {
    KnockoutCompetition *cup = knockoutCompetition();
    KnockoutRound *roundRecord;
    u8 pos;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    roundRecord = knockoutRound(index);
    if (!cup)
        return 0;
    if (!roundRecord)
        return 0;
    pos = roundRecord->firstMatch + match;
    if (pos >= CUP_MATCH_COUNT)
        return 0;
    return &cup->matches[pos];
}

static inline u16 teamForCupSlot(u8 index) {
    u8 slot = knockoutTeamSlot(index);
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0xffff;
    if (slot >= 80)
        return 0xffff;
    return func_00225680(slot);
}

#endif
