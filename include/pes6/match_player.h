#ifndef PES6_MATCH_PLAYER_H
#define PES6_MATCH_PLAYER_H

#include "types.h"

/* Views of the match player table and the two squads' player records, as far as the accessors
   around 0x30E2E0 use them; field names are provisional. */

typedef struct Pes6PlayerAppearance {
    u8 pad00[0xD];
    u8 flag : 1;   /* 0x0D bit 0 */
    u8 value : 7;  /* 0x0D bits 1-7 */
} Pes6PlayerAppearance;

typedef struct Pes6PlayerInfo {
    u8 pad00[0x4];
    Pes6PlayerAppearance *appearance; /* 0x04 */
} Pes6PlayerInfo;

/* Match player entries (0x240 bytes each) at 0x58E5B0, indexed by match object id (see
   match_objects.h: ids 1-22 are the players). */
typedef struct Pes6MatchPlayer {
    u8 pad00[0x4];
    Pes6PlayerInfo *info; /* 0x04 */
    u8 pad08[0x9];
    u8 slot;          /* 0x11: squad slot */
    u8 team;          /* 0x12: squad (0 or 1) */
    u8 side;          /* 0x13 */
    s16 x14;          /* 0x14 */
    u8 role;          /* 0x16 */
    u8 pad17[0x13];
    u16 angle;        /* 0x2A */
    u8 pad2C[0x214];
} Pes6MatchPlayer;

/* A squad player's record (0x348 bytes); the bytes from 0x96 hold 7-bit ability values. */
typedef struct Pes6SquadPlayer {
    u8 pad00[0x96];
    u8 ability[0x39]; /* 0x96 */
    u8 flagCF0 : 1;   /* 0xCF bit 0 */
    u8 flagCF1 : 1;   /* 0xCF bit 1 */
    u8 : 6;
    u8 padD0[0x5];
    u8 xD5;           /* 0xD5 */
    u8 xD6;           /* 0xD6 */
    u8 padD7[0x271];
} Pes6SquadPlayer;

typedef struct Pes6Squad {
    Pes6SquadPlayer players[32];
} Pes6Squad;

extern Pes6MatchPlayer Pes6MatchPlayers[];
/* The two squads in the match: 32 player records each. */
extern Pes6Squad Pes6MatchSquads[2];

/* Index of match player id in Pes6MatchPlayers (0xFF stands for player 1). */
static inline int Pes6MatchPlayer_Index(int id)
{
    int index;

    if (id != 0xFF) {
        index = id % 23;
    } else {
        index = 1;
    }
    return index;
}

static inline Pes6MatchPlayer *Pes6MatchPlayer_Get(int id)
{
    return &Pes6MatchPlayers[Pes6MatchPlayer_Index(id)];
}

#endif
