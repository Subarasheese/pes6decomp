#ifndef PES6_KIT_H
#define PES6_KIT_H

#include "types.h"

typedef struct {
    u16 red : 5;
    u16 green : 5;
    u16 blue : 5;
    u16 alpha : 1;
} Pes6KitColor;

/* The team editor compares all 62 bytes of an option-file strip. */
typedef struct {
    Pes6KitColor colors[21];
    u8 style[16];
    u8 type, option3B, model, variant;
} Pes6KitDefinition;

/* Expanded strip used by the match display. */
typedef struct {
    u8 model;
    u8 flags[0x13];
    s32 parts[8];
    u8 colorSet[3];
    u8 option37;
    Pes6KitColor colors[21];
    u8 option62, option63;
} Pes6MatchKit;

Pes6KitDefinition *func_002F82B0(s32 team, s32 variant);
const Pes6KitDefinition *func_002F8120(s32 team, s32 variant);

#endif
