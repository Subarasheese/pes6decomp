#ifndef PES6_CHALLENGE_EXERCISE_H
#define PES6_CHALLENGE_EXERCISE_H

#include "pes6/challenge_sprites.h"

typedef void (*TrainingSetup)(void *, u32);
extern void func_0081B000(void *, u32);
extern void func_0081AFF0(void *, u32);
extern void func_0081AFE0(void *, u32);
extern void func_0081AFD0(void *, u32);
extern void func_0081AFC0(void *, u32);
static inline void initializeChallengeSprites(TrainingSprites *sprites, u32 argument,
                                              s32 exercise) {
    s32 i, count;
    s8 counts[] = {30, 30, 30, 30, 30};
    u8 allocation[] = {30, 30, 30, 30, 30};
    func_0081BD90(sprites, 1, &allocation[exercise]);
    {
        u8 objectSlots[1] = {0};
        u8 resourceSlots[1] = {1};
        count = counts[exercise];
        for (i = 0; i < count; ++i) {
            func_00CD6300(&sprites->sets[0][i], 0, 2, sprites->resources, sprites->resources + 1, 1,
                          1, objectSlots, resourceSlots);
        }
        {
            TrainingSetup setups[5] = {func_0081B000, func_0081AFF0, func_0081AFE0, func_0081AFD0,
                                       func_0081AFC0};
            setups[exercise](sprites, argument);
        }
    }
}

#endif
