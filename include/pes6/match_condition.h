#ifndef PES6_MATCH_CONDITION_H
#define PES6_MATCH_CONDITION_H

#include "types.h"

/* Fields read by the match condition publishers at 0031C380 and 0031D080. */
typedef struct {
    u8 reserved[0x37], side;
} ConditionSides;

typedef struct {
    s32 kind, mode;
} ConditionMode;

typedef struct {
    u8 reserved[5], side;
} ConditionPossession;

typedef struct {
    u8 reserved[0x44];
    ConditionSides *sides;
    u8 reserved48[4];
    ConditionMode *event;
    ConditionPossession *possession;
} ConditionContext;

#endif
