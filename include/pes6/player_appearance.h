#ifndef PES6_PLAYER_APPEARANCE_H
#define PES6_PLAYER_APPEARANCE_H

#include "types.h"

typedef struct Pes6PlayerAppearance {
    u8 flags0, phase1, phase2, recoveryFrame, pad04[4];
    u16 eventFrame, duration;
    u8 pad0C;
    union {
        u8 flags;
        struct { u8 : 1; u8 clipKind : 7; };
        struct { u8 flag : 1; u8 value : 7; };
    };
    u8 pad0E[12];
    u16 frameDataOffset;
} Pes6PlayerAppearance;

extern Pes6PlayerAppearance *func_00208310(s32 clip);

#endif
