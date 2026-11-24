#ifndef PES6_MATCH_PLAYER_H
#define PES6_MATCH_PLAYER_H

#include "types.h"
#include "pes6/match_squad_setup.h"

/* Views of the match player table and the two squads' player records, as far as the accessors
   around 0x30E2E0 use them; field names are provisional. */

typedef struct Pes6PlayerAppearance {
    u8 pad00[0xD];
    u8 flag : 1;   /* 0x0D bit 0 */
    u8 value : 7;  /* 0x0D bits 1-7 */
    u8 pad0E[12];
    u16 frameDataOffset; /* 0x1A */
} Pes6PlayerAppearance;

typedef struct Pes6PlayerFieldState {
    u8 pad00[3];
    u8 flag03;
    u8 pad04[0x18];
    s32 field1C;
    u8 field20, field21, field22;
} Pes6PlayerFieldState;

typedef struct Pes6PlayerInfo {
    Pes6PlayerFieldState *fieldState; /* 0x00 */
    Pes6PlayerAppearance *appearance; /* 0x04 */
    u8 pad08, poseStyle, poseValue, pad0B, poseActivity, poseFlag, pad0E[2];
    u16 poseLow, poseHigh;
    u8 pad14[0x18];
    u8 active;        /* 0x2C */
    u8 field2D, pad2E[2];
    u16 unk30;        /* 0x30 */
    u8 pad32[6];
    float animationFrame; /* 0x38 */
    u8 pad3C[0x11], field4D, pad4E[0xD], field5B;
} Pes6PlayerInfo;

/* Match player entries (0x240 bytes each) at 0x58E5B0, indexed by match object id (see
   match_objects.h: ids 1-22 are the players). */
typedef struct Pes6MatchPlayer {
    u8 id;            /* 0x00: match object id */
    u8 pad01[3];
    Pes6PlayerInfo *info; /* 0x04 */
    u8 pad08[4], replaySlot, pad0D[4];
    u8 slot;          /* 0x11: squad slot */
    u8 team;          /* 0x12: squad (0 or 1) */
    u8 side;          /* 0x13 */
    s16 goalDirection; /* 0x14: signed team-relative direction; see docs/pc_gameplay.md */
    u8 role;          /* 0x16 */
    u8 pad17;
    s16 action;       /* 0x18 */
    u8 pad1A[2];
    s32 speed;        /* 0x1C */
    u8 pad20[8];
    u16 movementAngle; /* 0x28 */
    u16 angle;        /* 0x2A */
    u8 pad2C[0x3A];
    u8 actionGroup;   /* 0x66 */
    u8 pad67[5];
    float aimX, aimZ; /* 0x6C, 0x70 */
    u8 pad74[0x6C];
    float x, y, z;    /* 0xE0: match-space position */
    u8 padEC[4];
    float velocityX, velocityY, velocityZ;
    u8 padFC[0x18];
    u32 distance114;  /* 0x114 */
    u8 pad118[8];
    u16 referenceHeading; /* 0x120 */
    u8 pad122[6];
    u16 headingTo[23];  /* 0x128, indexed by match object id */
    u8 pad156[2];
    u32 distanceSquaredTo[23]; /* 0x158 */
    u8 pad1B4[0x8C];
} Pes6MatchPlayer;

typedef struct {
    u8 reserved00[3], active, reserved04[20];
    s32 serial;
} Pes6SquadPlayerStatus;

/* A squad player's record (0x348 bytes); the bytes from 0x96 hold 7-bit ability values. */
typedef struct Pes6SquadPlayer {
    s32 value00;      /* 0x00: checked against -1 by func_00311390 */
    u8 pad04[0x81];
    u8 : 3;
    u8 ratingScale : 3; /* 0x85 bits 3-5 */
    u8 : 2;
    u8 pad86[3];
    u8 : 3;
    u8 responseStyle : 2; /* 0x89 bits 3 and 4, used by func_00B68390 */
    u8 : 3;
    u8 pad8A[0xC];
    u8 ability[0x39]; /* 0x96 */
    u8 flagCF0 : 1;   /* 0xCF bit 0 */
    u8 flagCF1 : 1;   /* 0xCF bit 1 */
    u8 : 2;
    u8 flagCF4 : 1;   /* 0xCF bit 4 */
    u8 : 3;
    u8 padD0[0x5];
    u8 xD5;           /* 0xD5 */
    u8 xD6;           /* 0xD6 */
    u8 padD7[0x19];
    Pes6SquadPlayerStatus status; /* 0xF0 */
    u8 pad10C[0x23C];
} Pes6SquadPlayer;

/* Both views address the same 32 retail player records. */
typedef union Pes6Squad {
    Pes6SquadPlayer players[32];
    Pes6SquadSetupPlayer setupPlayers[32];
} Pes6Squad;

extern Pes6MatchPlayer Pes6MatchPlayers[];
/* The two squads in the match: 32 player records each. */
extern Pes6Squad Pes6MatchSquads[2];

extern Pes6PlayerAppearance *func_00208310(s32 clip);
extern void func_0027A5B0(Pes6MatchPlayer *, u8), func_0027A550(Pes6MatchPlayer *, u16, u16),
    func_0027A600(Pes6MatchPlayer *, u8), func_0027A520(Pes6MatchPlayer *, u8),
    func_0027A4A0(Pes6MatchPlayer *, s32);
extern u8 func_0027A5F0(Pes6MatchPlayer *), func_0027A5A0(Pes6MatchPlayer *),
    func_0027A510(Pes6MatchPlayer *);
extern u16 func_0027A540(Pes6MatchPlayer *), func_0027A530(Pes6MatchPlayer *);

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
