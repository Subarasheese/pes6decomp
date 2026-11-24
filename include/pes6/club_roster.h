#ifndef PES6_CLUB_ROSTER_H
#define PES6_CLUB_ROSTER_H

#include "pes6/player_db.h"

enum {
    CLUB_FIRST = 0x40,
    CLUB_LIMIT = 0xCC,
    SAVED_FIRST = 0x126,
    NATIONAL_SLOTS = 23,
    CLUB_SLOTS = 32
};

/* The default-data overlay creates 140 consecutive 0x58-byte club records. */
typedef struct {
    char name[49], shortName[4];
    u8 reserved35;
    u16 teamId;
    u8 nameChanged, reserved39[3];
    s32 label3C, label40;
    u8 reserved44[2], category, reserved47;
    u32 sideData[2];
    u8 value50, homeStadium, value50Edited, stadiumEdited, reserved54[4];
} Pes6ClubInfo;

typedef struct {
    u16 team;
    u8 reserved02[4], lineup[CLUB_SLOTS], reserved26[0x16C - 0x26];
} Pes6TeamFormation;

/* One of the two saved match teams (IDs 0x126 and 0x127). */
typedef struct {
    Pes6ClubInfo *club;
    Pes6TeamFormation formation;
    u16 originalTeam, reserved172;
    Pes6PlayerRecord players[CLUB_SLOTS];
    u16 originalPlayerIds[CLUB_SLOTS], playerIds[CLUB_SLOTS];
    u8 shirtNumbers[CLUB_SLOTS];
} Pes6MatchTeamData;

extern Pes6MatchTeamData *func_00223960(u16 team), *func_00237530(u16 team);
extern Pes6ClubInfo *func_00223AE0(void);
extern Pes6TeamFormation *func_00223AC0(void);

static inline Pes6ClubInfo *clubInfo(u16 team) {
    s32 id = (u16)team;
    if (id >= CLUB_FIRST && id < CLUB_LIMIT)
        return func_00223AE0() + (id - CLUB_FIRST);
    if ((u32)(id - SAVED_FIRST) < 2)
        return func_00223960(team)->club;
    return 0;
}

static inline const char *clubName(Pes6ClubInfo *club, s32 kind) {
    if (!club)
        return 0;
    switch (kind) {
    default:
        return club->name;
    case 1:
        return club->shortName;
    }
}

#endif
