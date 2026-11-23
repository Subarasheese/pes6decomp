#ifndef PES6_CUP_ROUND_ORDER_H
#define PES6_CUP_ROUND_ORDER_H

#include "types.h"

enum { CUP_BRACKET_ROUNDS = 7, CUP_ORDER_ENTRIES = 194, CUP_BRACKET_TEAMS = 96 };

typedef struct {
    u8 current, state, pairing, fixture, firstMatch, matchCount, orderStart, orderCount, teamStart,
        teamCount, activeTeams, reserved0B;
} CupSavedRound;
typedef struct {
    u8 rounds, selected, order[CUP_ORDER_ENTRIES], teams[CUP_BRACKET_TEAMS];
} CupBracketIndex;
typedef struct {
    u8 stage, pairing, reserved02[3], teams[2], firstGoals[2][2], goals[2][5], reserved15;
    u8 : 1, secondLeg : 1, twoLeg : 1, : 1, scheduled : 1, completed : 1, played : 1,
        returnLeg : 1;
    u8 reserved17;
} CupSavedFixture;

extern void *func_0022C1E0(void);
extern CupSavedRound *func_0022C140(u8 round);
extern CupSavedFixture *func_0022BFF0(u8 round, u8 match);
extern s32 Pes6SaveData_IsUnavailable(void);
extern void func_00238850(u8 teams, u8 format, u8 flags, u8 group, u8 seed, u8 round);
extern void func_002398C0(u8 round);
extern void func_002396B0(u8 round);
extern u8 func_00225940(u8 slot);

static inline u8 cupRoundEntry(u8 round, u8 index) {
    CupBracketIndex *bracket = func_0022C1E0();
    CupSavedRound *roundRecord;
    u8 pos;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0xff;
    roundRecord = func_0022C140(round);
    if (!bracket)
        return 0xff;
    if (!roundRecord)
        return 0xff;
    pos = roundRecord->orderStart + index;
    if (pos >= CUP_ORDER_ENTRIES)
        return 0xff;
    return bracket->order[pos];
}

static inline void selectCupFixture(u8 round) {
    CupSavedRound *roundRecord;
    u8 entry;
    CupSavedFixture *fixture;
    if (Pes6SaveData_IsUnavailable() == 1)
        return;
    roundRecord = func_0022C140(round);
    if (!roundRecord)
        return;
    entry = cupRoundEntry(round, roundRecord->current);
    if (entry == 0xff)
        return;
    fixture = func_0022BFF0(round, entry);
    if (!fixture)
        return;
    roundRecord->fixture = entry;
    roundRecord->pairing = fixture->pairing;
}

static inline u8 cupRoundTeam(u8 round, u8 index) {
    CupBracketIndex *bracket = func_0022C1E0();
    CupSavedRound *roundRecord;
    u8 pos;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0xff;
    roundRecord = func_0022C140(round);
    if (!bracket)
        return 0xff;
    if (!roundRecord)
        return 0xff;
    pos = roundRecord->teamStart + index;
    if (pos >= CUP_BRACKET_TEAMS)
        return 0xff;
    return bracket->teams[pos];
}

static inline u8 newCupRound(u8 teams, u8 format, u8 flags, u8 group, u8 seed) {
    CupBracketIndex *bracket = func_0022C1E0();
    u8 round;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0xff;
    round = bracket->rounds;
    if (round >= CUP_BRACKET_ROUNDS)
        return 0xff;
    func_00238850(teams, format, flags, group, seed, round);
    bracket->rounds++;
    return round;
}

static inline void resetCupFixture(u8 round) {
    CupSavedRound *roundRecord;
    if (Pes6SaveData_IsUnavailable() == 1)
        return;
    roundRecord = func_0022C140(round);
    if (!roundRecord)
        return;
    roundRecord->current = 0;
    selectCupFixture(round);
}

static inline void startCupRound(u8 round) {
    if (Pes6SaveData_IsUnavailable() == 1)
        return;
    resetCupFixture(round);
}

#endif
