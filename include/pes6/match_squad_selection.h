#ifndef PES6_MATCH_SQUAD_SELECTION_H
#define PES6_MATCH_SQUAD_SELECTION_H
#include "pes6/player_rating.h"
#include "pes6/match_squad_setup.h"
#include "pes6/player_ability_fields.h"

enum { SQUAD_SLOTS = 32, STARTING_ELEVEN = 11, OUTFIELD_SLOTS = 10, SET_PIECE_SLOTS = 5 };
/* Indices include the two identity bytes at the start of the packed player profile. */
enum {
    SQUAD_RATING_AGILITY = 9,
    SQUAD_RATING_HEADING = 21,
    SQUAD_RATING_JUMP = 22,
    SQUAD_RATING_TEAMWORK = 23,
    SQUAD_RATING_TECHNIQUE = 24,
    SQUAD_RATING_MENTALITY = 26
};
enum {
    SQUAD_FLAG_GK = 2,
    SQUAD_FLAG_SWEEPER = 3,
    SQUAD_FLAG_CENTRE_BACK = 4,
    SQUAD_FLAG_SIDE_BACK = 5,
    SQUAD_FLAG_DEFENSIVE_MIDFIELD = 6,
    SQUAD_FLAG_WING_BACK = 7,
    SQUAD_FLAG_CENTRAL_MIDFIELD = 8,
    SQUAD_FLAG_SIDE_MIDFIELD = 9,
    SQUAD_FLAG_ATTACKING_MIDFIELD = 10,
    SQUAD_FLAG_WING = 11,
    SQUAD_FLAG_SECOND_STRIKER = 12,
    SQUAD_FLAG_CENTRE_FORWARD = 13
};

typedef union {
    Pes6PlayerRating ability[0x2c];
    Pes6PackedAbilities packed;
    struct {
        u8 reserved00[0x1d];
        u8 : 6, favoredSide : 2;
    } foot;
    struct {
        u8 preferredFoot : 1;
        u8 : 7;
        u8 reserved01[0x20];
        u8 value21 : 3, : 2, flag21 : 1, : 2;
        u8 reserved22;
        u8 : 2, flag23 : 1, : 5;
    } attributes;
    struct {
        u8 field00, field01 : 4, registeredPosition : 4;
    } identity;
    Pes6LineupProfile lineup;
} SquadPlayerProfile;

typedef struct {
    u8 lineup[SQUAD_SLOTS];
    const SquadPlayerProfile *players[SQUAD_SLOTS];
    u8 eligible[SQUAD_SLOTS], takers[SET_PIECE_SLOTS], roles[STARTING_ELEVEN];
    u8 captainEligible[SQUAD_SLOTS], captain;
} SquadSelection;

typedef struct {
    u8 x, y;
} SquadPosition;
typedef struct {
    u8 kind, reserved01, field02, field03, field04, lineup[SQUAD_SLOTS], primary[SQUAD_SLOTS],
        flags[SQUAD_SLOTS], status[SQUAD_SLOTS], condition[SQUAD_SLOTS];
    const SquadPlayerProfile *players[SQUAD_SLOTS];
    u8 role[STARTING_ELEVEN];
    SquadPosition positions[OUTFIELD_SLOTS];
    u8 field147[32], field167[32];
} SquadLineup;
typedef struct {
    u8 settings[16];
} SquadRoleSettings;
typedef char check_squad_profile_size[sizeof(SquadPlayerProfile) == 0x2c ? 1 : -1];
typedef char check_squad_role_settings_size[sizeof(SquadRoleSettings) == 16 ? 1 : -1];

#endif
