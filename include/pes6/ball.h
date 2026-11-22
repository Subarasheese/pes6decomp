#ifndef PES6_BALL_H
#define PES6_BALL_H

#include "types.h"

enum { PES6_TOUCH_HISTORY_LENGTH = 10 };

typedef struct Pes6Ball {
    u8 pad00[0x10];
    float pos[3];      /* 0x10 */
    u8 pad1C[0x4];
    float prevPos[3];  /* 0x20 */
    u8 pad2C[0x4];
    float vy;          /* 0x30 vertical velocity, 1/256 unit per tick, negative = up */
    u8 pad34[0x1C];
    union {
        u8 speed[0x8];
        s32 horizontalSpeed; /* 0x50, 1/256 unit per tick */
    };
    u16 dir;           /* 0x58 direction of travel, 0x10000 = full turn */
    u16 prevDir;       /* 0x5A */
    s16 unk5C;         /* 0x5C */
    u8 pad5E[0x4];
    u8 state;          /* 0x62 0 dead, 1 air, 2 rolling, 3 at feet, 4 placed */
    u8 prevState;      /* 0x63 */
    u8 pad64;
    u8 unk65;          /* 0x65 */
    u8 pad66;
    u8 unk67;          /* 0x67 */
    u8 pad68[0x2];
    u8 curl[0x2];      /* 0x6A */
    u8 curlDir[0x2];   /* 0x6C */
    u16 unk6E;         /* 0x6E */
    u8 pad70[0x4];
    u8 spin[0x10];     /* 0x74 s32 */
    u16 action;        /* 0x84 */
    u8 pad86[0x2];
    s32 actionFrames;  /* 0x88 */
    u8 touchActions[PES6_TOUCH_HISTORY_LENGTH]; /* 0x8C, paired with touchActors */
    u8 touchActors[PES6_TOUCH_HISTORY_LENGTH];  /* 0x96 */
    u8 padA0[0x4];
    u16 previousActions[PES6_TOUCH_HISTORY_LENGTH]; /* 0xA4 */
    s32 previousActionFrames[PES6_TOUCH_HISTORY_LENGTH]; /* 0xB8 */
    u8 actorActions[PES6_TOUCH_HISTORY_LENGTH]; /* 0xE0, action at each change of actor */
    u8 padEA[0x392];
    float unk47C;      /* 0x47C */
    u8 pad480[0x6FC];
    float unkB7C;      /* 0xB7C */
} Pes6Ball;

extern Pes6Ball *Pes6Ball_Current;

typedef struct Pes6MatchState {
    u8 owner;          /* 0x00 0x591E18 */
    u8 touchActors[PES6_TOUCH_HISTORY_LENGTH]; /* 0x01, newest first */
    u8 pad0B;
    s32 touchFrames[PES6_TOUCH_HISTORY_LENGTH]; /* 0x0C, entry zero counts frames since the touch */
    u8 actor34;        /* 0x34 */
    u8 pad35[2];
    u8 sideActors[2][2]; /* 0x37 */
    u8 pad3B[4];
    u8 lastTouch;      /* 0x3F 0x591E57 */
    u8 pad40[0xC];
    u8 lastSide[3];    /* 0x4C 0x591E64 */
    u8 pad4F[0xAD];
    u8 unkFC;          /* 0xFC 0x591F14 */
} Pes6MatchState;
extern Pes6MatchState Pes6MatchState_Current;

/* The history loops index the same match state from the base at 0x591E00. */
typedef struct Pes6MatchStateBlock {
    u8 pad00[0x18];
    Pes6MatchState state;
} Pes6MatchStateBlock;

extern Pes6MatchStateBlock D_00591E00;

#endif
