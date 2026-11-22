#ifndef PES6_PLAYER_TRANSITION_H
#define PES6_PLAYER_TRANSITION_H

#include "types.h"

typedef struct {
    u8 pad00[0x30];
    u16 clip;
} PlayerTransitionAnimation;

typedef struct {
    u8 pad00[4];
    PlayerTransitionAnimation *animation;
    u8 pad08[0x10];
    u16 stage;
    u8 pad1A[0x36];
    u8 flag50;
    u8 pad51[0x1B];
    u32 field6C;
    u32 field70;
} PlayerTransitionActor;

typedef struct {
    PlayerTransitionActor *actor;
} PlayerTransition;

extern void func_00B2ACF0(void *);
extern void func_00209820(void *);
extern s32 func_00207D10(void *);
extern void func_00B89780(void *);
extern void func_00208610(void *);
extern void func_00B35E10(void *, u32 *, u32 *);
extern s32 func_00BD45B0(u16);
extern void func_00BD4040(void *, u8);
extern void func_00BD3BA0(void *, s32, s32);

static inline void advance_player_transition(PlayerTransition *state) {
    u8 clipType;
    func_00B2ACF0(state);
    func_00209820(state->actor->animation);
    if (func_00207D10(state->actor->animation)) {
        func_00B89780(state);
        func_00208610(state->actor->animation);
        func_00B35E10(state, &state->actor->field6C, &state->actor->field70);
        clipType = func_00BD45B0(state->actor->animation->clip);
        if (clipType == 7) {
            func_00BD4040(state, 1);
        } else {
            func_00BD4040(state, clipType);
        }
        func_00BD3BA0(state, 5, 1);
        state->actor->flag50 = 0;
        state->actor->stage = 0x80;
    }
}

#endif
