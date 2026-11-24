#ifndef PES6_FORMATION_PLAN_H
#define PES6_FORMATION_PLAN_H

#include "types.h"
#include "pes6/player_rating.h"

enum {
    FORMATION_SQUAD = 32,
    FORMATION_STARTERS = 11,
    FORMATION_OUTFIELD = 10,
    FORMATION_LAYOUTS = 3,
    FORMATION_SWAPS = 7
};

typedef struct {
    u8 x, y;
} FormationPosition;

typedef struct {
    FormationPosition outfield[FORMATION_OUTFIELD];
    u8 role[FORMATION_STARTERS];
    u8 option1[FORMATION_STARTERS], option2[FORMATION_STARTERS];
} FormationInstructions;

/* The active layout can switch between three copies of these instructions. */
typedef struct {
    u8 enabled;
    FormationInstructions instructions;
    u8 markingMode[FORMATION_STARTERS], markingTarget[FORMATION_STARTERS], reserved4C;
    s8 setting4D;
    u8 reserved4E;
    s8 setting4F;
    u8 reserved50[2];
} FormationLayout;

typedef struct {
    u8 lineup[FORMATION_SQUAD];
    u16 reserved20[FORMATION_SQUAD];
    u8 choices[5], levelB, levelA, flagC, flagD, assignments[6];
    FormationLayout layouts[FORMATION_LAYOUTS];
} FormationPlan;

typedef union {
    Pes6PlayerRating ratings[0x2c];
    u32 words[11];
} FormationPlayerData;

/* The formation page passes this record beginning at team offset 0x73e. */
typedef struct {
    u8 selectedLayout, starterFlags[FORMATION_STARTERS];
    u8 selectedPlayers[2], reserved74C[2], pairs[FORMATION_SWAPS][2], pairCount;
    u8 controllerSlots[8], reserved765;
    FormationPlan plan;
} FormationTactics;

typedef struct {
    u16 team, sourceTeam;
    u8 field04, field05, field06, field07, reserved08[0x33 - 8];
    u8 primary[FORMATION_SQUAD], secondary[FORMATION_SQUAD], reserved73[0x93 - 0x73];
    u8 field93[FORMATION_SQUAD], fieldB3[FORMATION_SQUAD], playerForm[FORMATION_SQUAD];
    u8 reservedF3[0x173 - 0xf3];
    u8 condition[FORMATION_SQUAD], status[FORMATION_SQUAD], reserved1B3[0x254 - 0x1b3];
    void *handles[FORMATION_SQUAD];
    u8 owned[FORMATION_SQUAD];
    FormationPlayerData *players;
    u8 reserved2F8[0x73e - 0x2f8];
    FormationTactics tactics;
    FormationInstructions originalInstructions;
} FormationOptions;

typedef struct {
    u16 team;
    char name[49];
    FormationPlan plan;
} FormationTeam;

typedef char assert_formation_instructions_size[sizeof(FormationInstructions) == 53 ? 1 : -1];
typedef char assert_formation_layout_size[sizeof(FormationLayout) == 82 ? 1 : -1];
typedef char assert_formation_plan_size[sizeof(FormationPlan) == 0x166 ? 1 : -1];

typedef struct {
    u16 team;
    char shortName[4];
    FormationPlan plan;
} FormationClub;

/* Preset storage has one marking mode and target for each outfield player. */
typedef struct {
    u8 : 7, enabled : 1;
    u8 lineup[FORMATION_SQUAD];
    FormationInstructions instructions;
    u8 pairs[FORMATION_SWAPS][2];
    u8 pairCount, choices[5];
    struct {
        u8 levelA : 3, levelB : 3, flagC : 1, flagD : 1;
    } levels;
    u8 assignments[6], markingMode[FORMATION_OUTFIELD], markingTarget[FORMATION_OUTFIELD];
    struct {
        u8 first : 4, second : 4;
    } settings;
} PackedFormation;
typedef char assert_packed_formation_size[sizeof(PackedFormation) == 0x86 ? 1 : -1];

typedef struct {
    u8 count;
    FormationInstructions assigned, original;
} RoleWork;
typedef struct {
    u8 defaults[6];
    s8 counts[14];
} RoleCounts;

typedef struct {
    u8 lineup[32];
    const FormationPlayerData *players[32];
    u8 eligible[32], takers[5], roles[11], captainEligible[32], captain;
} SetPieceSelection;

typedef struct {
    u8 kind, reserved01, field02, field03, field04, lineup[32], primary[32], flags[32], status[32],
        condition[32];
    FormationPlayerData *players[32];
    u8 role[11];
    FormationPosition positions[10];
    u8 field147[32], field167[32];
} FormationDisplayData;

typedef char assert_formation_options_size[sizeof(FormationOptions) == 0x904 ? 1 : -1];
typedef char assert_set_piece_size[sizeof(SetPieceSelection) == 0xf4 ? 1 : -1];

#endif
