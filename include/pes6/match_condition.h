#ifndef PES6_MATCH_CONDITION_H
#define PES6_MATCH_CONDITION_H

#include "types.h"

/* Shared state read by the match condition bitset publishers. */
typedef struct {
    u8 reserved[0x37], side;
} ConditionSides;

typedef struct {
    s32 kind, mode;
} ConditionMode;

typedef struct {
    u8 reserved[5], side;
    u8 reserved6[0xa], state;
} ConditionPossession;

typedef struct {
    u8 reserved[0x40];
    void *clock;
    ConditionSides *sides;
    u8 reserved48[4];
    ConditionMode *event;
    ConditionPossession *possession;
} ConditionContext;

#endif
