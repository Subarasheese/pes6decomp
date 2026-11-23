#ifndef PES6_CHALLENGE_SPRITES_H
#define PES6_CHALLENGE_SPRITES_H

#include "types.h"
typedef struct {
    u8 storage[0x130];
} TrainingSprite;
typedef struct {
    void *asset;
    u8 reserved04[4];
} TrainingSpriteResource;
typedef struct {
    u8 reserved00[0x10];
    TrainingSpriteResource *resources;
    u8 reserved14[4];
    TrainingSprite **sets;
} TrainingSprites;
typedef void (*TrainingSetup)(void *, u32);
extern void func_0081BD90(TrainingSprites *sprites, u8 setCount, const u8 *sizes);
extern void func_00CD6300(TrainingSprite *sprite, s32 type, s32 mode,
                          TrainingSpriteResource *objects, TrainingSpriteResource *resources,
                          s32 objectCount, s32 resourceCount, const u8 *objectSlots,
                          const u8 *resourceSlots);
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
